// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/MeshSelectors/PCGMeshSelectorWeighted.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMComponentDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMeshSelectorWeighted() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftISMComponentDescriptor();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorWeighted();
	PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGMeshSelectorWeightedEntry;
class UScriptStruct* FPCGMeshSelectorWeightedEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGMeshSelectorWeightedEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGMeshSelectorWeightedEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGMeshSelectorWeightedEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PCGMeshSelectorWeightedEntry.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGMeshSelectorWeightedEntry>()
{
	return FPCGMeshSelectorWeightedEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Weight;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollisionProfile_MetaData[];
#endif
		static void NewProp_bOverrideCollisionProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionProfile;
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
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGMeshSelectorWeightedEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Descriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshSelectorWeightedEntry, Descriptor), Z_Construct_UScriptStruct_FSoftISMComponentDescriptor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Descriptor_MetaData)) }; // 3422159586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshSelectorWeightedEntry, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Weight_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Mesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshSelectorWeightedEntry, Mesh_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideCollisionProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideCollisionProfile_SetBit(void* Obj)
	{
		((FPCGMeshSelectorWeightedEntry*)Obj)->bOverrideCollisionProfile_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideCollisionProfile = { "bOverrideCollisionProfile", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGMeshSelectorWeightedEntry), &Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideCollisionProfile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshSelectorWeightedEntry, CollisionProfile_DEPRECATED), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CollisionProfile_MetaData)) }; // 2816100078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideMaterials_SetBit(void* Obj)
	{
		((FPCGMeshSelectorWeightedEntry*)Obj)->bOverrideMaterials_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideMaterials = { "bOverrideMaterials", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGMeshSelectorWeightedEntry), &Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideMaterials_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshSelectorWeightedEntry, MaterialOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_MaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_MaterialOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullStartDistance_MetaData[] = {
		{ "Comment", "/** Distance at which instances begin to fade. */" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
		{ "ToolTip", "Distance at which instances begin to fade." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullStartDistance = { "CullStartDistance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshSelectorWeightedEntry, CullStartDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullStartDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullEndDistance_MetaData[] = {
		{ "Comment", "/** Distance at which instances are culled. Use 0 to disable. */" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
		{ "ToolTip", "Distance at which instances are culled. Use 0 to disable." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullEndDistance = { "CullEndDistance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshSelectorWeightedEntry, CullEndDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullEndDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullEndDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_WorldPositionOffsetDisableDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_WorldPositionOffsetDisableDistance = { "WorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMeshSelectorWeightedEntry, WorldPositionOffsetDisableDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_WorldPositionOffsetDisableDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_WorldPositionOffsetDisableDistance_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Descriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Weight,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideCollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_bOverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_MaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_MaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_CullEndDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewProp_WorldPositionOffsetDisableDistance,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGMeshSelectorWeightedEntry",
		sizeof(FPCGMeshSelectorWeightedEntry),
		alignof(FPCGMeshSelectorWeightedEntry),
		Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGMeshSelectorWeightedEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGMeshSelectorWeightedEntry.InnerSingleton, Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGMeshSelectorWeightedEntry.InnerSingleton;
	}
	void UPCGMeshSelectorWeighted::StaticRegisterNativesUPCGMeshSelectorWeighted()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMeshSelectorWeighted);
	UClass* Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister()
	{
		return UPCGMeshSelectorWeighted::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshEntries;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMeshSelectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "MeshSelectors/PCGMeshSelectorWeighted.h" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MeshEntries_Inner = { "MeshEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry, METADATA_PARAMS(nullptr, 0) }; // 1393175173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MeshEntries_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MeshEntries = { "MeshEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorWeighted, MeshEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MeshEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MeshEntries_MetaData)) }; // 1393175173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_bUseAttributeMaterialOverrides_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	void Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_bUseAttributeMaterialOverrides_SetBit(void* Obj)
	{
		((UPCGMeshSelectorWeighted*)Obj)->bUseAttributeMaterialOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_bUseAttributeMaterialOverrides = { "bUseAttributeMaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMeshSelectorWeighted), &Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_bUseAttributeMaterialOverrides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_bUseAttributeMaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_bUseAttributeMaterialOverrides_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MaterialOverrideAttributes_Inner = { "MaterialOverrideAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MaterialOverrideAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "By Attribute Material Overrides" },
		{ "EditCondition", "bUseAttributeMaterialOverrides" },
		{ "ModuleRelativePath", "Public/MeshSelectors/PCGMeshSelectorWeighted.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MaterialOverrideAttributes = { "MaterialOverrideAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSelectorWeighted, MaterialOverrideAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MaterialOverrideAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MaterialOverrideAttributes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MeshEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MeshEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_bUseAttributeMaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MaterialOverrideAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::NewProp_MaterialOverrideAttributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMeshSelectorWeighted>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::ClassParams = {
		&UPCGMeshSelectorWeighted::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMeshSelectorWeighted()
	{
		if (!Z_Registration_Info_UClass_UPCGMeshSelectorWeighted.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMeshSelectorWeighted.OuterSingleton, Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMeshSelectorWeighted.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMeshSelectorWeighted>()
	{
		return UPCGMeshSelectorWeighted::StaticClass();
	}
	UPCGMeshSelectorWeighted::UPCGMeshSelectorWeighted(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMeshSelectorWeighted);
	UPCGMeshSelectorWeighted::~UPCGMeshSelectorWeighted() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_Statics::ScriptStructInfo[] = {
		{ FPCGMeshSelectorWeightedEntry::StaticStruct, Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics::NewStructOps, TEXT("PCGMeshSelectorWeightedEntry"), &Z_Registration_Info_UScriptStruct_PCGMeshSelectorWeightedEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGMeshSelectorWeightedEntry), 1393175173U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMeshSelectorWeighted, UPCGMeshSelectorWeighted::StaticClass, TEXT("UPCGMeshSelectorWeighted"), &Z_Registration_Info_UClass_UPCGMeshSelectorWeighted, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMeshSelectorWeighted), 1232442131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_934760378(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
