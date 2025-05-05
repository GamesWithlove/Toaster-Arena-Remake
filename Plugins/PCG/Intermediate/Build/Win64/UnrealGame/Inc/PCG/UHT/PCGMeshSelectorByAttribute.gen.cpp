// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/MeshSelectors/PCGMeshSelectorByAttribute.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMComponentDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMeshSelectorByAttribute() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftISMComponentDescriptor();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorByAttribute();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGMeshSelectorByAttribute::StaticRegisterNativesUPCGMeshSelectorByAttribute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMeshSelectorByAttribute);
	UClass* Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister()
	{
		return UPCGMeshSelectorByAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateDescriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateDescriptor;
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollisionProfile_MetaData[];
#endif
		static void NewProp_bOverrideCollisionProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionProfile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialOverrideMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrideMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialOverrideMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterials_MetaData[];
#endif
		static void NewProp_bOverrideMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterials;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullStartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CullStartDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullEndDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CullEndDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffsetDisableDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPositionOffsetDisableDistance;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMeshSelectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "MeshSelectors/PCGMeshSelectorByAttribute.h" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorByAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_TemplateDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_TemplateDescriptor = { "TemplateDescriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorByAttribute, TemplateDescriptor), Z_Construct_UScriptStruct_FSoftISMComponentDescriptor, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_TemplateDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_TemplateDescriptor_MetaData)) }; // 3422159586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bUseAttributeMaterialOverrides_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	void Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bUseAttributeMaterialOverrides_SetBit(void* Obj)
	{
		((UPCGMeshSelectorByAttribute*)Obj)->bUseAttributeMaterialOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bUseAttributeMaterialOverrides = { "bUseAttributeMaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMeshSelectorByAttribute), &Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bUseAttributeMaterialOverrides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bUseAttributeMaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bUseAttributeMaterialOverrides_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideAttributes_Inner = { "MaterialOverrideAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "By Attribute Material Overrides" },
		{ "EditCondition", "bUseAttributeMaterialOverrides" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideAttributes = { "MaterialOverrideAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorByAttribute, MaterialOverrideAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideAttributes_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideCollisionProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	void Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideCollisionProfile_SetBit(void* Obj)
	{
		((UPCGMeshSelectorByAttribute*)Obj)->bOverrideCollisionProfile_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideCollisionProfile = { "bOverrideCollisionProfile", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMeshSelectorByAttribute), &Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideCollisionProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorByAttribute, CollisionProfile_DEPRECATED), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CollisionProfile_MetaData)) }; // 2816100078
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideMode = { "MaterialOverrideMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorByAttribute, MaterialOverrideMode_DEPRECATED), Z_Construct_UEnum_PCG_EPCGMeshSelectorMaterialOverrideMode, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideMode_MetaData)) }; // 3712772696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	void Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideMaterials_SetBit(void* Obj)
	{
		((UPCGMeshSelectorByAttribute*)Obj)->bOverrideMaterials_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideMaterials = { "bOverrideMaterials", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMeshSelectorByAttribute), &Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideMaterials_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorByAttribute, MaterialOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullStartDistance_MetaData[] = {
		{ "Comment", "/** Distance at which instances begin to fade. */" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
		{ "ToolTip", "Distance at which instances begin to fade." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullStartDistance = { "CullStartDistance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorByAttribute, CullStartDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullStartDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullEndDistance_MetaData[] = {
		{ "Comment", "/** Distance at which instances are culled. Use 0 to disable. */" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
		{ "ToolTip", "Distance at which instances are culled. Use 0 to disable." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullEndDistance = { "CullEndDistance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorByAttribute, CullEndDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullEndDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullEndDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_WorldPositionOffsetDisableDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorByAttribute.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_WorldPositionOffsetDisableDistance = { "WorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorByAttribute, WorldPositionOffsetDisableDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_WorldPositionOffsetDisableDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_WorldPositionOffsetDisableDistance_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_TemplateDescriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bUseAttributeMaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideAttributes,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideCollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrideMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_bOverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_MaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_CullEndDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::NewProp_WorldPositionOffsetDisableDistance,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMeshSelectorByAttribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::ClassParams = {
		&UPCGMeshSelectorByAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMeshSelectorByAttribute()
	{
		if (!Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute.OuterSingleton, Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMeshSelectorByAttribute>()
	{
		return UPCGMeshSelectorByAttribute::StaticClass();
	}
	UPCGMeshSelectorByAttribute::UPCGMeshSelectorByAttribute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMeshSelectorByAttribute);
	UPCGMeshSelectorByAttribute::~UPCGMeshSelectorByAttribute() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMeshSelectorByAttribute, UPCGMeshSelectorByAttribute::StaticClass, TEXT("UPCGMeshSelectorByAttribute"), &Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMeshSelectorByAttribute), 4041587769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_1003747564(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
