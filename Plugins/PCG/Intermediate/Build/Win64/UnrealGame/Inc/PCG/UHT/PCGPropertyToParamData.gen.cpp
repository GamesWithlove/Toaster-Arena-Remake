// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGPropertyToParamData.h"
#include "PCG/Public/Elements/PCGActorSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPropertyToParamData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPropertyToParamDataSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGPropertyToParamDataSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGActorFilter();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGActorSelection();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGActorSelectorSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGPropertyToParamDataSettings::StaticRegisterNativesUPCGPropertyToParamDataSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPropertyToParamDataSettings);
	UClass* Z_Construct_UClass_UPCGPropertyToParamDataSettings_NoRegister()
	{
		return UPCGPropertyToParamDataSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSelector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectComponent_MetaData[];
#endif
		static void NewProp_bSelectComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExtractObjectAndStruct_MetaData[];
#endif
		static void NewProp_bExtractObjectAndStruct_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractObjectAndStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRequeryActors_MetaData[];
#endif
		static void NewProp_bAlwaysRequeryActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRequeryActors;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackActorsOnlyWithinBounds_MetaData[];
#endif
		static void NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackActorsOnlyWithinBounds;
#endif // WITH_EDITORONLY_DATA
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSelectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorSelectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSelectionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorSelectionClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChildren_MetaData[];
#endif
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Extract a property value from an actor/component into a ParamData.\n*/" },
		{ "IncludePath", "Elements/PCGPropertyToParamData.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
		{ "ToolTip", "Extract a property value from an actor/component into a ParamData." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelector_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelector = { "ActorSelector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPropertyToParamDataSettings, ActorSelector), Z_Construct_UScriptStruct_FPCGActorSelectorSettings, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelector_MetaData)) }; // 1237266657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bSelectComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Allow to look for an actor component instead of an actor. It will need to be attached to the found actor. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
		{ "ToolTip", "Allow to look for an actor component instead of an actor. It will need to be attached to the found actor." },
	};
#endif
	void Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bSelectComponent_SetBit(void* Obj)
	{
		((UPCGPropertyToParamDataSettings*)Obj)->bSelectComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bSelectComponent = { "bSelectComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGPropertyToParamDataSettings), &Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bSelectComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bSelectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bSelectComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If we are looking for an actor component, the class can be specified here. */" },
		{ "EditCondition", "bSelectComponent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
		{ "ToolTip", "If we are looking for an actor component, the class can be specified here." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPropertyToParamDataSettings, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Property name to extract. Can only extract properties that are compatible with metadata types. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
		{ "ToolTip", "Property name to extract. Can only extract properties that are compatible with metadata types." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPropertyToParamDataSettings, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bExtractObjectAndStruct_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the property is a struct/object unsupported by metadata, this option can be toggled to extract all (compatible) properties contained in this property. For now, only supports direct child properties (and not deeper). */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
		{ "ToolTip", "If the property is a struct/object unsupported by metadata, this option can be toggled to extract all (compatible) properties contained in this property. For now, only supports direct child properties (and not deeper)." },
	};
#endif
	void Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bExtractObjectAndStruct_SetBit(void* Obj)
	{
		((UPCGPropertyToParamDataSettings*)Obj)->bExtractObjectAndStruct = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bExtractObjectAndStruct = { "bExtractObjectAndStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGPropertyToParamDataSettings), &Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bExtractObjectAndStruct_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bExtractObjectAndStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bExtractObjectAndStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_OutputAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** By default, attribute name will be the property name, but it can be overridden by this name. */" },
		{ "EditCondition", "!bExtractObjectAndStruct" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
		{ "ToolTip", "By default, attribute name will be the property name, but it can be overridden by this name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_OutputAttributeName = { "OutputAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPropertyToParamDataSettings, OutputAttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_OutputAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_OutputAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bAlwaysRequeryActors_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If this is true, we will never put this element in cache, and will always try to re-query the actors and read the latest properties from them. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
		{ "ToolTip", "If this is true, we will never put this element in cache, and will always try to re-query the actors and read the latest properties from them." },
	};
#endif
	void Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bAlwaysRequeryActors_SetBit(void* Obj)
	{
		((UPCGPropertyToParamDataSettings*)Obj)->bAlwaysRequeryActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bAlwaysRequeryActors = { "bAlwaysRequeryActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGPropertyToParamDataSettings), &Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bAlwaysRequeryActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bAlwaysRequeryActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bAlwaysRequeryActors_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
		{ "ToolTip", "If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor." },
	};
#endif
	void Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj)
	{
		((UPCGPropertyToParamDataSettings*)Obj)->bTrackActorsOnlyWithinBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds = { "bTrackActorsOnlyWithinBounds", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGPropertyToParamDataSettings), &Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelection = { "ActorSelection", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPropertyToParamDataSettings, ActorSelection_DEPRECATED), Z_Construct_UEnum_PCG_EPCGActorSelection, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelection_MetaData)) }; // 1108082229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionTag = { "ActorSelectionTag", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPropertyToParamDataSettings, ActorSelectionTag_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionName = { "ActorSelectionName", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPropertyToParamDataSettings, ActorSelectionName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionClass = { "ActorSelectionClass", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPropertyToParamDataSettings, ActorSelectionClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPropertyToParamDataSettings, ActorFilter_DEPRECATED), Z_Construct_UEnum_PCG_EPCGActorFilter, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorFilter_MetaData)) }; // 3353737086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bIncludeChildren_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPropertyToParamData.h" },
	};
#endif
	void Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((UPCGPropertyToParamDataSettings*)Obj)->bIncludeChildren_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGPropertyToParamDataSettings), &Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bIncludeChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bIncludeChildren_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bSelectComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bExtractObjectAndStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_OutputAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bAlwaysRequeryActors,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorSelectionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_ActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::NewProp_bIncludeChildren,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPropertyToParamDataSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::ClassParams = {
		&UPCGPropertyToParamDataSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGPropertyToParamDataSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGPropertyToParamDataSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPropertyToParamDataSettings.OuterSingleton, Z_Construct_UClass_UPCGPropertyToParamDataSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPropertyToParamDataSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPropertyToParamDataSettings>()
	{
		return UPCGPropertyToParamDataSettings::StaticClass();
	}
	UPCGPropertyToParamDataSettings::UPCGPropertyToParamDataSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPropertyToParamDataSettings);
	UPCGPropertyToParamDataSettings::~UPCGPropertyToParamDataSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPropertyToParamData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPropertyToParamData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPropertyToParamDataSettings, UPCGPropertyToParamDataSettings::StaticClass, TEXT("UPCGPropertyToParamDataSettings"), &Z_Registration_Info_UClass_UPCGPropertyToParamDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPropertyToParamDataSettings), 2771430592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPropertyToParamData_h_622596989(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPropertyToParamData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPropertyToParamData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
