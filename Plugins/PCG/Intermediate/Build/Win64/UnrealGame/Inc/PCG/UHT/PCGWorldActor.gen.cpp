// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGWorldActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGWorldActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PCG_API UClass* Z_Construct_UClass_APCGWorldActor();
	PCG_API UClass* Z_Construct_UClass_APCGWorldActor_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGLandscapeCache_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void APCGWorldActor::StaticRegisterNativesAPCGWorldActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGWorldActor);
	UClass* Z_Construct_UClass_APCGWorldActor_NoRegister()
	{
		return APCGWorldActor::StaticClass();
	}
	struct Z_Construct_UClass_APCGWorldActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartitionGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PartitionGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeCacheObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LandscapeCacheObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUse2DGrid_MetaData[];
#endif
		static void NewProp_bUse2DGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse2DGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCGWorldActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGWorldActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGWorldActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PCGWorldActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Size of the grid for PCG partition actors */" },
		{ "ModuleRelativePath", "Public/PCGWorldActor.h" },
		{ "ToolTip", "Size of the grid for PCG partition actors" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize = { "PartitionGridSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGWorldActor, PartitionGridSize), METADATA_PARAMS(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject_MetaData[] = {
		{ "Category", "CachedData" },
		{ "Comment", "/** Contains all the PCG data required to query the landscape complete. Serialized in cooked builds only */" },
		{ "DisplayName", "Landscape Cache" },
		{ "ModuleRelativePath", "Public/PCGWorldActor.h" },
		{ "ToolTip", "Contains all the PCG data required to query the landscape complete. Serialized in cooked builds only" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject = { "LandscapeCacheObject", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGWorldActor, LandscapeCacheObject), Z_Construct_UClass_UPCGLandscapeCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Disable creation of Partition Actors on the Z axis. Can improve performances if 3D partitioning is not needed. */" },
		{ "ModuleRelativePath", "Public/PCGWorldActor.h" },
		{ "ToolTip", "Disable creation of Partition Actors on the Z axis. Can improve performances if 3D partitioning is not needed." },
	};
#endif
	void Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_SetBit(void* Obj)
	{
		((APCGWorldActor*)Obj)->bUse2DGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid = { "bUse2DGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APCGWorldActor), &Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCGWorldActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCGWorldActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGWorldActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGWorldActor_Statics::ClassParams = {
		&APCGWorldActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APCGWorldActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::PropPointers),
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_APCGWorldActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APCGWorldActor()
	{
		if (!Z_Registration_Info_UClass_APCGWorldActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGWorldActor.OuterSingleton, Z_Construct_UClass_APCGWorldActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCGWorldActor.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<APCGWorldActor>()
	{
		return APCGWorldActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCGWorldActor);
	APCGWorldActor::~APCGWorldActor() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCGWorldActor, APCGWorldActor::StaticClass, TEXT("APCGWorldActor"), &Z_Registration_Info_UClass_APCGWorldActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGWorldActor), 4088675165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_1791383073(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
