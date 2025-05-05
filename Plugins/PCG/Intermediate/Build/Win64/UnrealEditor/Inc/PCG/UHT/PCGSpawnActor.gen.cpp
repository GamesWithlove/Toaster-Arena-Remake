// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGSpawnActor.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSpawnActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGBaseSubgraphNode();
	PCG_API UClass* Z_Construct_UClass_UPCGBaseSubgraphSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSpawnActorNode();
	PCG_API UClass* Z_Construct_UClass_UPCGSpawnActorNode_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpawnActorSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSpawnActorSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSpawnActorOption();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGActorPropertyOverride();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGSpawnActorOption;
	static UEnum* EPCGSpawnActorOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGSpawnActorOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGSpawnActorOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSpawnActorOption, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGSpawnActorOption"));
		}
		return Z_Registration_Info_UEnum_EPCGSpawnActorOption.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGSpawnActorOption>()
	{
		return EPCGSpawnActorOption_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics::Enumerators[] = {
		{ "EPCGSpawnActorOption::CollapseActors", (int64)EPCGSpawnActorOption::CollapseActors },
		{ "EPCGSpawnActorOption::MergePCGOnly", (int64)EPCGSpawnActorOption::MergePCGOnly },
		{ "EPCGSpawnActorOption::NoMerging", (int64)EPCGSpawnActorOption::NoMerging },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics::Enum_MetaDataParams[] = {
		{ "CollapseActors.Name", "EPCGSpawnActorOption::CollapseActors" },
		{ "MergePCGOnly.Name", "EPCGSpawnActorOption::MergePCGOnly" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
		{ "NoMerging.Name", "EPCGSpawnActorOption::NoMerging" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGSpawnActorOption",
		"EPCGSpawnActorOption",
		Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGSpawnActorOption()
	{
		if (!Z_Registration_Info_UEnum_EPCGSpawnActorOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGSpawnActorOption.InnerSingleton, Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGSpawnActorOption.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger;
	static UEnum* EPCGSpawnActorGenerationTrigger_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGSpawnActorGenerationTrigger"));
		}
		return Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGSpawnActorGenerationTrigger>()
	{
		return EPCGSpawnActorGenerationTrigger_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics::Enumerators[] = {
		{ "EPCGSpawnActorGenerationTrigger::Default", (int64)EPCGSpawnActorGenerationTrigger::Default },
		{ "EPCGSpawnActorGenerationTrigger::ForceGenerate", (int64)EPCGSpawnActorGenerationTrigger::ForceGenerate },
		{ "EPCGSpawnActorGenerationTrigger::DoNotGenerateInEditor", (int64)EPCGSpawnActorGenerationTrigger::DoNotGenerateInEditor },
		{ "EPCGSpawnActorGenerationTrigger::DoNotGenerate", (int64)EPCGSpawnActorGenerationTrigger::DoNotGenerate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "EPCGSpawnActorGenerationTrigger::Default" },
		{ "DoNotGenerate.Comment", "// Does not call generate in editor, but decays to Default otherwise\n" },
		{ "DoNotGenerate.Name", "EPCGSpawnActorGenerationTrigger::DoNotGenerate" },
		{ "DoNotGenerate.ToolTip", "Does not call generate in editor, but decays to Default otherwise" },
		{ "DoNotGenerateInEditor.Comment", "// Generate in all cases\n" },
		{ "DoNotGenerateInEditor.Name", "EPCGSpawnActorGenerationTrigger::DoNotGenerateInEditor" },
		{ "DoNotGenerateInEditor.ToolTip", "Generate in all cases" },
		{ "ForceGenerate.Comment", "// Generate if the component has \"Generate On Load\"\n" },
		{ "ForceGenerate.Name", "EPCGSpawnActorGenerationTrigger::ForceGenerate" },
		{ "ForceGenerate.ToolTip", "Generate if the component has \"Generate On Load\"" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGSpawnActorGenerationTrigger",
		"EPCGSpawnActorGenerationTrigger",
		Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger()
	{
		if (!Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.InnerSingleton, Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGActorPropertyOverride;
class UScriptStruct* FPCGActorPropertyOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGActorPropertyOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGActorPropertyOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGActorPropertyOverride, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGActorPropertyOverride"));
	}
	return Z_Registration_Info_UScriptStruct_PCGActorPropertyOverride.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGActorPropertyOverride>()
{
	return FPCGActorPropertyOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGActorPropertyOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_InputSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGActorPropertyOverride, InputSource), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_InputSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_InputSource_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_PropertyTarget_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_PropertyTarget = { "PropertyTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGActorPropertyOverride, PropertyTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_PropertyTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_PropertyTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_InputSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewProp_PropertyTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGActorPropertyOverride",
		sizeof(FPCGActorPropertyOverride),
		alignof(FPCGActorPropertyOverride),
		Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGActorPropertyOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGActorPropertyOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGActorPropertyOverride.InnerSingleton, Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGActorPropertyOverride.InnerSingleton;
	}
	void UPCGSpawnActorSettings::StaticRegisterNativesUPCGSpawnActorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSpawnActorSettings);
	UClass* Z_Construct_UClass_UPCGSpawnActorSettings_NoRegister()
	{
		return UPCGSpawnActorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSpawnActorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateActorClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PostSpawnFunctionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostSpawnFunctionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PostSpawnFunctionNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Option_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Option;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceDisableActorParsing_MetaData[];
#endif
		static void NewProp_bForceDisableActorParsing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDisableActorParsing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bGenerationTrigger_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerationTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_bGenerationTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritActorTags_MetaData[];
#endif
		static void NewProp_bInheritActorTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritActorTags;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagsToAddOnActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagsToAddOnActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagsToAddOnActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSpawnActorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGBaseSubgraphSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGSpawnActor.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActorClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisallowCreateNew", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
		{ "OnlyPlaceable", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActorClass = { "TemplateActorClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpawnActorSettings, TemplateActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActorClass_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_PostSpawnFunctionNames_Inner = { "PostSpawnFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_PostSpawnFunctionNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Can specify a list of functions from the template class to be called on each actor spawned, in order. Need to be parameter-less and with \"CallInEditor\" flag enabled.*/" },
		{ "EditCondition", "Option!=EPCGSpawnActorOption::CollapseActors" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
		{ "ToolTip", "Can specify a list of functions from the template class to be called on each actor spawned, in order. Need to be parameter-less and with \"CallInEditor\" flag enabled." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_PostSpawnFunctionNames = { "PostSpawnFunctionNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpawnActorSettings, PostSpawnFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_PostSpawnFunctionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_PostSpawnFunctionNames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_Option_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_Option_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpawnActorSettings, Option), Z_Construct_UEnum_PCG_EPCGSpawnActorOption, METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_Option_MetaData)) }; // 795404102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bForceDisableActorParsing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Option==EPCGSpawnActorOption::NoMerging" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	void Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bForceDisableActorParsing_SetBit(void* Obj)
	{
		((UPCGSpawnActorSettings*)Obj)->bForceDisableActorParsing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bForceDisableActorParsing = { "bForceDisableActorParsing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGSpawnActorSettings), &Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bForceDisableActorParsing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bForceDisableActorParsing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bForceDisableActorParsing_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bGenerationTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bGenerationTrigger_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Option==EPCGSpawnActorOption::NoMerging" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bGenerationTrigger = { "bGenerationTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpawnActorSettings, bGenerationTrigger), Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger, METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bGenerationTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bGenerationTrigger_MetaData)) }; // 155604023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bInheritActorTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Warning: inheriting parent actor tags work only in non-collapsed actor hierarchies */" },
		{ "EditCondition", "Option!=EPCGSpawnActorOption::CollapseActors" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
		{ "ToolTip", "Warning: inheriting parent actor tags work only in non-collapsed actor hierarchies" },
	};
#endif
	void Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bInheritActorTags_SetBit(void* Obj)
	{
		((UPCGSpawnActorSettings*)Obj)->bInheritActorTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bInheritActorTags = { "bInheritActorTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGSpawnActorSettings), &Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bInheritActorTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bInheritActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bInheritActorTags_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TagsToAddOnActors_Inner = { "TagsToAddOnActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TagsToAddOnActors_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Option!=EPCGSpawnActorOption::CollapseActors" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TagsToAddOnActors = { "TagsToAddOnActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpawnActorSettings, TagsToAddOnActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TagsToAddOnActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TagsToAddOnActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActor_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Option != EPCGSpawnActorOption::CollapseActors" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpawnActorSettings, TemplateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_ActorOverrides_Inner = { "ActorOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGActorPropertyOverride, METADATA_PARAMS(nullptr, 0) }; // 17740285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_ActorOverrides_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Option != EPCGSpawnActorOption::CollapseActors" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_ActorOverrides = { "ActorOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpawnActorSettings, ActorOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_ActorOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_ActorOverrides_MetaData)) }; // 17740285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSpawnActorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_PostSpawnFunctionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_PostSpawnFunctionNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_Option_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_Option,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bForceDisableActorParsing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bGenerationTrigger_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bGenerationTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bInheritActorTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TagsToAddOnActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TagsToAddOnActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_TemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_ActorOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_ActorOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSpawnActorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSpawnActorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSpawnActorSettings_Statics::ClassParams = {
		&UPCGSpawnActorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSpawnActorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSpawnActorSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGSpawnActorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSpawnActorSettings.OuterSingleton, Z_Construct_UClass_UPCGSpawnActorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSpawnActorSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSpawnActorSettings>()
	{
		return UPCGSpawnActorSettings::StaticClass();
	}
	UPCGSpawnActorSettings::UPCGSpawnActorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSpawnActorSettings);
	UPCGSpawnActorSettings::~UPCGSpawnActorSettings() {}
	void UPCGSpawnActorNode::StaticRegisterNativesUPCGSpawnActorNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSpawnActorNode);
	UClass* Z_Construct_UClass_UPCGSpawnActorNode_NoRegister()
	{
		return UPCGSpawnActorNode::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSpawnActorNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSpawnActorNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGBaseSubgraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpawnActorNode_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGSpawnActor.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpawnActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSpawnActorNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSpawnActorNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSpawnActorNode_Statics::ClassParams = {
		&UPCGSpawnActorNode::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSpawnActorNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpawnActorNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSpawnActorNode()
	{
		if (!Z_Registration_Info_UClass_UPCGSpawnActorNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSpawnActorNode.OuterSingleton, Z_Construct_UClass_UPCGSpawnActorNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSpawnActorNode.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSpawnActorNode>()
	{
		return UPCGSpawnActorNode::StaticClass();
	}
	UPCGSpawnActorNode::UPCGSpawnActorNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSpawnActorNode);
	UPCGSpawnActorNode::~UPCGSpawnActorNode() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics::EnumInfo[] = {
		{ EPCGSpawnActorOption_StaticEnum, TEXT("EPCGSpawnActorOption"), &Z_Registration_Info_UEnum_EPCGSpawnActorOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 795404102U) },
		{ EPCGSpawnActorGenerationTrigger_StaticEnum, TEXT("EPCGSpawnActorGenerationTrigger"), &Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 155604023U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics::ScriptStructInfo[] = {
		{ FPCGActorPropertyOverride::StaticStruct, Z_Construct_UScriptStruct_FPCGActorPropertyOverride_Statics::NewStructOps, TEXT("PCGActorPropertyOverride"), &Z_Registration_Info_UScriptStruct_PCGActorPropertyOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGActorPropertyOverride), 17740285U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSpawnActorSettings, UPCGSpawnActorSettings::StaticClass, TEXT("UPCGSpawnActorSettings"), &Z_Registration_Info_UClass_UPCGSpawnActorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSpawnActorSettings), 686933418U) },
		{ Z_Construct_UClass_UPCGSpawnActorNode, UPCGSpawnActorNode::StaticClass, TEXT("UPCGSpawnActorNode"), &Z_Registration_Info_UClass_UPCGSpawnActorNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSpawnActorNode), 611812925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_1523707217(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
