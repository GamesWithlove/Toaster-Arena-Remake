// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlockoutToolsParent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlockoutToolsParent() {}

// ********** Begin Cross Module References ********************************************************
BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_ABlockoutToolsParent();
BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_ABlockoutToolsParent_NoRegister();
BLOCKOUTTOOLSPLUGIN_API UEnum* Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BlockoutToolsPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBlockoutMaterialType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlockoutMaterialType;
static UEnum* EBlockoutMaterialType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlockoutMaterialType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlockoutMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType, (UObject*)Z_Construct_UPackage__Script_BlockoutToolsPlugin(), TEXT("EBlockoutMaterialType"));
	}
	return Z_Registration_Info_UEnum_EBlockoutMaterialType.OuterSingleton;
}
template<> BLOCKOUTTOOLSPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlockoutMaterialType>()
{
	return EBlockoutMaterialType_StaticEnum();
}
struct Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlockoutMaterialType_CustomMaterial.DisplayName", "Custom Material" },
		{ "BlockoutMaterialType_CustomMaterial.Name", "BlockoutMaterialType_CustomMaterial" },
		{ "BlockoutMaterialType_Grid.DisplayName", "Blockout Grid" },
		{ "BlockoutMaterialType_Grid.Name", "BlockoutMaterialType_Grid" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BlockoutMaterialType_Grid", (int64)BlockoutMaterialType_Grid },
		{ "BlockoutMaterialType_CustomMaterial", (int64)BlockoutMaterialType_CustomMaterial },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlockoutToolsPlugin,
	nullptr,
	"EBlockoutMaterialType",
	"EBlockoutMaterialType",
	Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType()
{
	if (!Z_Registration_Info_UEnum_EBlockoutMaterialType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlockoutMaterialType.InnerSingleton, Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlockoutMaterialType.InnerSingleton;
}
// ********** End Enum EBlockoutMaterialType *******************************************************

// ********** Begin Class ABlockoutToolsParent Function BlockoutSetMaterial ************************
struct Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BlockoutSetMaterial constinit property declarations *******************
// ********** End Function BlockoutSetMaterial constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlockoutToolsParent, nullptr, "BlockoutSetMaterial", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockoutToolsParent::execBlockoutSetMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BlockoutSetMaterial();
	P_NATIVE_END;
}
// ********** End Class ABlockoutToolsParent Function BlockoutSetMaterial **************************

// ********** Begin Class ABlockoutToolsParent Function RerunConstructionScript ********************
struct Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RerunConstructionScript constinit property declarations ***************
// ********** End Function RerunConstructionScript constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlockoutToolsParent, nullptr, "RerunConstructionScript", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockoutToolsParent::execRerunConstructionScript)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RerunConstructionScript();
	P_NATIVE_END;
}
// ********** End Class ABlockoutToolsParent Function RerunConstructionScript **********************

// ********** Begin Class ABlockoutToolsParent *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABlockoutToolsParent;
UClass* ABlockoutToolsParent::GetPrivateStaticClass()
{
	using TClass = ABlockoutToolsParent;
	if (!Z_Registration_Info_UClass_ABlockoutToolsParent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BlockoutToolsParent"),
			Z_Registration_Info_UClass_ABlockoutToolsParent.InnerSingleton,
			StaticRegisterNativesABlockoutToolsParent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABlockoutToolsParent.InnerSingleton;
}
UClass* Z_Construct_UClass_ABlockoutToolsParent_NoRegister()
{
	return ABlockoutToolsParent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABlockoutToolsParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlockoutToolsParent.h" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutGridParent_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutGridMID_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutCurrentMaterial_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMeshComponents_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialType_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Material Type" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialColor_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Color" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutMaterialUseGrid_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Use Grid" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutWorldAligned_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets if triplanar material is local-aligned or world-aligned\n" },
#endif
		{ "DisplayName", "World Aligned" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets if triplanar material is local-aligned or world-aligned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialGridSize_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Grid Size" },
		{ "EditCondition", "bBlockoutMaterialUseGrid && BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialCheckerLuminance_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Checker Luminance" },
		{ "EditCondition", "bBlockoutMaterialUseGrid && BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialRoughness_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Roughness" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutMaterialUseTopColor_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Use Top Color" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialTopColor_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Top Color" },
		{ "EditCondition", "bBlockoutMaterialUseTopColor && BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomMaterial_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Use Custom Material" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMaterial_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Custom Material" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_CustomMaterial" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutCustomMaterial_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Custom Material" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_CustomMaterial" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutEnableCollisions_MetaData[] = {
		{ "Category", "Blockout Tools|Collision" },
		{ "DisplayName", "Enable Actor Collision" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutEnableCustomCollision_MetaData[] = {
		{ "Category", "Blockout Tools|Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//, meta = (InlineEditConditionToggle))\n" },
#endif
		{ "DisplayName", "Enable Custom Collision" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", meta = (InlineEditConditionToggle))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutCustomCollisionProfileName_MetaData[] = {
		{ "Category", "Blockout Tools|Collision" },
		{ "DisplayName", "Custom Collision Profile Name" },
		{ "EditCondition", "bBlockoutEnableCustomCollision" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutCastShadows_MetaData[] = {
		{ "Category", "Blockout Tools|Rendering" },
		{ "DisplayName", "Cast Shadows" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABlockoutToolsParent constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockoutGridParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockoutGridMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockoutCurrentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockoutMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockoutMeshComponents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlockoutMaterialType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockoutMaterialColor;
	static void NewProp_bBlockoutMaterialUseGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutMaterialUseGrid;
	static void NewProp_bBlockoutWorldAligned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutWorldAligned;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialGridSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialCheckerLuminance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialRoughness;
	static void NewProp_bBlockoutMaterialUseTopColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutMaterialUseTopColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockoutMaterialTopColor;
	static void NewProp_bUseCustomMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockoutCustomMaterial;
	static void NewProp_bBlockoutEnableCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutEnableCollisions;
	static void NewProp_bBlockoutEnableCustomCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutEnableCustomCollision;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlockoutCustomCollisionProfileName;
	static void NewProp_bBlockoutCastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutCastShadows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABlockoutToolsParent constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BlockoutSetMaterial"), .Pointer = &ABlockoutToolsParent::execBlockoutSetMaterial },
		{ .NameUTF8 = UTF8TEXT("RerunConstructionScript"), .Pointer = &ABlockoutToolsParent::execRerunConstructionScript },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial, "BlockoutSetMaterial" }, // 279870706
		{ &Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript, "RerunConstructionScript" }, // 1027578252
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockoutToolsParent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABlockoutToolsParent_Statics

// ********** Begin Class ABlockoutToolsParent Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Billboard_MetaData), NewProp_Billboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent = { "BlockoutGridParent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutGridParent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutGridParent_MetaData), NewProp_BlockoutGridParent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID = { "BlockoutGridMID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutGridMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutGridMID_MetaData), NewProp_BlockoutGridMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial = { "BlockoutCurrentMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutCurrentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutCurrentMaterial_MetaData), NewProp_BlockoutCurrentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_Inner = { "BlockoutMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents = { "BlockoutMeshComponents", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMeshComponents_MetaData), NewProp_BlockoutMeshComponents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialType = { "BlockoutMaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialType), Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialType_MetaData), NewProp_BlockoutMaterialType_MetaData) }; // 3963201204
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialColor = { "BlockoutMaterialColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialColor_MetaData), NewProp_BlockoutMaterialColor_MetaData) };
void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid_SetBit(void* Obj)
{
	((ABlockoutToolsParent*)Obj)->bBlockoutMaterialUseGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid = { "bBlockoutMaterialUseGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockoutMaterialUseGrid_MetaData), NewProp_bBlockoutMaterialUseGrid_MetaData) };
void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutWorldAligned_SetBit(void* Obj)
{
	((ABlockoutToolsParent*)Obj)->bBlockoutWorldAligned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutWorldAligned = { "bBlockoutWorldAligned", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutWorldAligned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockoutWorldAligned_MetaData), NewProp_bBlockoutWorldAligned_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialGridSize = { "BlockoutMaterialGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialGridSize_MetaData), NewProp_BlockoutMaterialGridSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialCheckerLuminance = { "BlockoutMaterialCheckerLuminance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialCheckerLuminance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialCheckerLuminance_MetaData), NewProp_BlockoutMaterialCheckerLuminance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialRoughness = { "BlockoutMaterialRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialRoughness_MetaData), NewProp_BlockoutMaterialRoughness_MetaData) };
void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor_SetBit(void* Obj)
{
	((ABlockoutToolsParent*)Obj)->bBlockoutMaterialUseTopColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor = { "bBlockoutMaterialUseTopColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockoutMaterialUseTopColor_MetaData), NewProp_bBlockoutMaterialUseTopColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialTopColor = { "BlockoutMaterialTopColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialTopColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialTopColor_MetaData), NewProp_BlockoutMaterialTopColor_MetaData) };
void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_SetBit(void* Obj)
{
	((ABlockoutToolsParent*)Obj)->bUseCustomMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial = { "bUseCustomMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomMaterial_MetaData), NewProp_bUseCustomMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial = { "CustomMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, CustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMaterial_MetaData), NewProp_CustomMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCustomMaterial = { "BlockoutCustomMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutCustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutCustomMaterial_MetaData), NewProp_BlockoutCustomMaterial_MetaData) };
void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions_SetBit(void* Obj)
{
	((ABlockoutToolsParent*)Obj)->bBlockoutEnableCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions = { "bBlockoutEnableCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockoutEnableCollisions_MetaData), NewProp_bBlockoutEnableCollisions_MetaData) };
void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCustomCollision_SetBit(void* Obj)
{
	((ABlockoutToolsParent*)Obj)->bBlockoutEnableCustomCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCustomCollision = { "bBlockoutEnableCustomCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCustomCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockoutEnableCustomCollision_MetaData), NewProp_bBlockoutEnableCustomCollision_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCustomCollisionProfileName = { "BlockoutCustomCollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutCustomCollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutCustomCollisionProfileName_MetaData), NewProp_BlockoutCustomCollisionProfileName_MetaData) };
void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_SetBit(void* Obj)
{
	((ABlockoutToolsParent*)Obj)->bBlockoutCastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows = { "bBlockoutCastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockoutCastShadows_MetaData), NewProp_bBlockoutCastShadows_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutWorldAligned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialCheckerLuminance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialTopColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCustomMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCustomCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCustomCollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers) < 2048);
// ********** End Class ABlockoutToolsParent Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ABlockoutToolsParent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BlockoutToolsPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlockoutToolsParent_Statics::ClassParams = {
	&ABlockoutToolsParent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlockoutToolsParent_Statics::Class_MetaDataParams)
};
void ABlockoutToolsParent::StaticRegisterNativesABlockoutToolsParent()
{
	UClass* Class = ABlockoutToolsParent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ABlockoutToolsParent_Statics::Funcs));
}
UClass* Z_Construct_UClass_ABlockoutToolsParent()
{
	if (!Z_Registration_Info_UClass_ABlockoutToolsParent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlockoutToolsParent.OuterSingleton, Z_Construct_UClass_ABlockoutToolsParent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlockoutToolsParent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABlockoutToolsParent);
ABlockoutToolsParent::~ABlockoutToolsParent() {}
// ********** End Class ABlockoutToolsParent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Blockout1cfad1b9f3ddV14_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h__Script_BlockoutToolsPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlockoutMaterialType_StaticEnum, TEXT("EBlockoutMaterialType"), &Z_Registration_Info_UEnum_EBlockoutMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3963201204U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlockoutToolsParent, ABlockoutToolsParent::StaticClass, TEXT("ABlockoutToolsParent"), &Z_Registration_Info_UClass_ABlockoutToolsParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlockoutToolsParent), 2052639376U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Blockout1cfad1b9f3ddV14_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h__Script_BlockoutToolsPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Blockout1cfad1b9f3ddV14_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h__Script_BlockoutToolsPlugin_700568569{
	TEXT("/Script/BlockoutToolsPlugin"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Blockout1cfad1b9f3ddV14_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h__Script_BlockoutToolsPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Blockout1cfad1b9f3ddV14_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h__Script_BlockoutToolsPlugin_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Blockout1cfad1b9f3ddV14_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h__Script_BlockoutToolsPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Blockout1cfad1b9f3ddV14_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h__Script_BlockoutToolsPlugin_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
