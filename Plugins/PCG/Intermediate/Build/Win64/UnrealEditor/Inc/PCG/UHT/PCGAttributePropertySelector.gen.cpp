// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGAttributePropertySelector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttributePropertySelection();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointProperties();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGAttributePropertySelection;
	static UEnum* EPCGAttributePropertySelection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributePropertySelection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGAttributePropertySelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributePropertySelection, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGAttributePropertySelection"));
		}
		return Z_Registration_Info_UEnum_EPCGAttributePropertySelection.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGAttributePropertySelection>()
	{
		return EPCGAttributePropertySelection_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enumerators[] = {
		{ "EPCGAttributePropertySelection::Attribute", (int64)EPCGAttributePropertySelection::Attribute },
		{ "EPCGAttributePropertySelection::PointProperty", (int64)EPCGAttributePropertySelection::PointProperty },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enum_MetaDataParams[] = {
		{ "Attribute.Name", "EPCGAttributePropertySelection::Attribute" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "PointProperty.Name", "EPCGAttributePropertySelection::PointProperty" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGAttributePropertySelection",
		"EPCGAttributePropertySelection",
		Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGAttributePropertySelection()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributePropertySelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGAttributePropertySelection.InnerSingleton, Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGAttributePropertySelection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector;
class UScriptStruct* FPCGAttributePropertySelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertySelector, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGAttributePropertySelector"));
	}
	return Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGAttributePropertySelector>()
{
	return FPCGAttributePropertySelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Selection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PointProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PointProperty;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Blueprint class to allow to select an attribute or a property.\n* It will handle the logic and can only be modified using the blueprint library defined below.\n* Also has a custom detail view in the PCGEditor plugin.\n*/" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ToolTip", "Blueprint class to allow to select an attribute or a property.\nIt will handle the logic and can only be modified using the blueprint library defined below.\nAlso has a custom detail view in the PCGEditor plugin." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGAttributePropertySelector>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGAttributePropertySelector, Selection), Z_Construct_UEnum_PCG_EPCGAttributePropertySelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_MetaData)) }; // 2619752381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Selection == EPCGAttributePropertySelection::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGAttributePropertySelector, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Selection == EPCGAttributePropertySelection::PointProperty" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty = { "PointProperty", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGAttributePropertySelector, PointProperty), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_MetaData)) }; // 672201325
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_Inner = { "ExtraNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames = { "ExtraNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGAttributePropertySelector, ExtraNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGAttributePropertySelector",
		sizeof(FPCGAttributePropertySelector),
		alignof(FPCGAttributePropertySelector),
		Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.InnerSingleton, Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execGetName)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::GetName(Z_Param_Out_Selector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execSetAttributeName)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_GET_PROPERTY(FNameProperty,Z_Param_InAttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::SetAttributeName(Z_Param_Out_Selector,Z_Param_InAttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execSetPointProperty)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_GET_ENUM(EPCGPointProperties,Z_Param_InPointProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::SetPointProperty(Z_Param_Out_Selector,EPCGPointProperties(Z_Param_InPointProperty));
		P_NATIVE_END;
	}
	void UPCGAttributePropertySelectorBlueprintHelpers::StaticRegisterNativesUPCGAttributePropertySelectorBlueprintHelpers()
	{
		UClass* Class = UPCGAttributePropertySelectorBlueprintHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetName", &UPCGAttributePropertySelectorBlueprintHelpers::execGetName },
			{ "SetAttributeName", &UPCGAttributePropertySelectorBlueprintHelpers::execSetAttributeName },
			{ "SetPointProperty", &UPCGAttributePropertySelectorBlueprintHelpers::execSetPointProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventGetName_Parms
		{
			FPCGAttributePropertySelector Selector;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetName_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector_MetaData)) }; // 3655039818
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "GetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetName_Parms), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms
		{
			FPCGAttributePropertySelector Selector;
			FName InAttributeName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(nullptr, 0) }; // 3655039818
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms, InAttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms), &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_InAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "SetAttributeName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms
		{
			FPCGAttributePropertySelector Selector;
			EPCGPointProperties InPointProperty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPointProperty_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPointProperty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(nullptr, 0) }; // 3655039818
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_InPointProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_InPointProperty = { "InPointProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms, InPointProperty), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(nullptr, 0) }; // 672201325
	void Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms), &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_InPointProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_InPointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "SetPointProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGAttributePropertySelectorBlueprintHelpers);
	UClass* Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_NoRegister()
	{
		return UPCGAttributePropertySelectorBlueprintHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName, "GetName" }, // 3652305506
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName, "SetAttributeName" }, // 3069425998
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty, "SetPointProperty" }, // 3131554630
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Helper class to allow the BP to call the custom setters and getters on FPCGAttributePropertySelector.\n*/" },
		{ "IncludePath", "Metadata/PCGAttributePropertySelector.h" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ToolTip", "Helper class to allow the BP to call the custom setters and getters on FPCGAttributePropertySelector." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGAttributePropertySelectorBlueprintHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::ClassParams = {
		&UPCGAttributePropertySelectorBlueprintHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers()
	{
		if (!Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.OuterSingleton, Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGAttributePropertySelectorBlueprintHelpers>()
	{
		return UPCGAttributePropertySelectorBlueprintHelpers::StaticClass();
	}
	UPCGAttributePropertySelectorBlueprintHelpers::UPCGAttributePropertySelectorBlueprintHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGAttributePropertySelectorBlueprintHelpers);
	UPCGAttributePropertySelectorBlueprintHelpers::~UPCGAttributePropertySelectorBlueprintHelpers() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::EnumInfo[] = {
		{ EPCGAttributePropertySelection_StaticEnum, TEXT("EPCGAttributePropertySelection"), &Z_Registration_Info_UEnum_EPCGAttributePropertySelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2619752381U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ScriptStructInfo[] = {
		{ FPCGAttributePropertySelector::StaticStruct, Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewStructOps, TEXT("PCGAttributePropertySelector"), &Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGAttributePropertySelector), 3655039818U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, UPCGAttributePropertySelectorBlueprintHelpers::StaticClass, TEXT("UPCGAttributePropertySelectorBlueprintHelpers"), &Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGAttributePropertySelectorBlueprintHelpers), 189155770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_66397201(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
