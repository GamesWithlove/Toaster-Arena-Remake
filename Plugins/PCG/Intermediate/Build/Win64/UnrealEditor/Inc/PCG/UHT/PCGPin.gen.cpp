// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PCG_API UClass* Z_Construct_UClass_UPCGEdge_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGNode_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPin();
	PCG_API UClass* Z_Construct_UClass_UPCGPin_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDataType();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGPinProperties;
class UScriptStruct* FPCGPinProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGPinProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGPinProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGPinProperties, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGPinProperties"));
	}
	return Z_Registration_Info_UScriptStruct_PCGPinProperties.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGPinProperties>()
{
	return FPCGPinProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGPinProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AllowedTypes_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTypes_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleData_MetaData[];
#endif
		static void NewProp_bAllowMultipleData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleConnections_MetaData[];
#endif
		static void NewProp_bAllowMultipleConnections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdvancedPin_MetaData[];
#endif
		static void NewProp_bAdvancedPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedPin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGPinProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPinProperties, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes = { "AllowedTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPinProperties, AllowedTypes), Z_Construct_UEnum_PCG_EPCGDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_MetaData)) }; // 1627789319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_SetBit(void* Obj)
	{
		((FPCGPinProperties*)Obj)->bAllowMultipleData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData = { "bAllowMultipleData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGPinProperties), &Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_SetBit(void* Obj)
	{
		((FPCGPinProperties*)Obj)->bAllowMultipleConnections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections = { "bAllowMultipleConnections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGPinProperties), &Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Advanced pin will be hidden by default in the UI and will be shown only if the user extend the node (in the UI) to see advanced pins. */" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "ToolTip", "Advanced pin will be hidden by default in the UI and will be shown only if the user extend the node (in the UI) to see advanced pins." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_SetBit(void* Obj)
	{
		((FPCGPinProperties*)Obj)->bAdvancedPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin = { "bAdvancedPin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGPinProperties), &Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPinProperties, Tooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGPinProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGPinProperties",
		sizeof(FPCGPinProperties),
		alignof(FPCGPinProperties),
		Z_Construct_UScriptStruct_FPCGPinProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGPinProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGPinProperties.InnerSingleton, Z_Construct_UScriptStruct_FPCGPinProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGPinProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGPin::execSetTooltip)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InTooltip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTooltip(Z_Param_Out_InTooltip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGPin::execGetTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTooltip();
		P_NATIVE_END;
	}
	void UPCGPin::StaticRegisterNativesUPCGPin()
	{
		UClass* Class = UPCGPin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTooltip", &UPCGPin::execGetTooltip },
			{ "SetTooltip", &UPCGPin::execSetTooltip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGPin_GetTooltip_Statics
	{
		struct PCGPin_eventGetTooltip_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPin_eventGetTooltip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGPin, nullptr, "GetTooltip", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PCGPin_eventGetTooltip_Parms), Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGPin_GetTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGPin_SetTooltip_Statics
	{
		struct PCGPin_eventSetTooltip_Parms
		{
			FText InTooltip;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InTooltip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip = { "InTooltip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPin_eventSetTooltip_Parms, InTooltip), METADATA_PARAMS(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGPin, nullptr, "SetTooltip", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PCGPin_eventSetTooltip_Parms), Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGPin_SetTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPin);
	UClass* Z_Construct_UClass_UPCGPin_NoRegister()
	{
		return UPCGPin::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGPin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGPin_GetTooltip, "GetTooltip" }, // 298960689
		{ &Z_Construct_UFunction_UPCGPin_SetTooltip, "SetTooltip" }, // 484229179
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGPin.h" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// ~End UObject interface\n" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "ToolTip", "~End UObject interface" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPin, Node), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGPin_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPin, Label_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGPin_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGEdge_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0014400000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPin, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPin, Properties), Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties_MetaData)) }; // 570377948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPin_Statics::ClassParams = {
		&UPCGPin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGPin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGPin()
	{
		if (!Z_Registration_Info_UClass_UPCGPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPin.OuterSingleton, Z_Construct_UClass_UPCGPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPin.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPin>()
	{
		return UPCGPin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPin);
	UPCGPin::~UPCGPin() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPin_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPin_h_Statics::ScriptStructInfo[] = {
		{ FPCGPinProperties::StaticStruct, Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewStructOps, TEXT("PCGPinProperties"), &Z_Registration_Info_UScriptStruct_PCGPinProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGPinProperties), 570377948U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPin, UPCGPin::StaticClass, TEXT("UPCGPin"), &Z_Registration_Info_UClass_UPCGPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPin), 4288635747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPin_h_1588497169(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPin_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPin_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
