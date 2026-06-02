// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMerger/Public/SMMSkeletalMergerFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMMSkeletalMergerFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	RUNTIMEMERGER_API UClass* Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary();
	RUNTIMEMERGER_API UClass* Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeMerger();
// End Cross Module References
	DEFINE_FUNCTION(USMMSkeletalMergerFunctionLibrary::execMergeAllSkeletalMeshesInActor)
	{
		P_GET_OBJECT(AActor,Z_Param_inActor);
		P_GET_OBJECT(USkeleton,Z_Param_inSkeleton);
		P_GET_UBOOL(Z_Param_bNeedCpuAccess);
		P_GET_UBOOL(Z_Param_bMergeSkeletonsBefore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=USMMSkeletalMergerFunctionLibrary::MergeAllSkeletalMeshesInActor(Z_Param_inActor,Z_Param_inSkeleton,Z_Param_bNeedCpuAccess,Z_Param_bMergeSkeletonsBefore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMMSkeletalMergerFunctionLibrary::execMergeSkeletalMeshes)
	{
		P_GET_TARRAY_REF(USkeletalMesh*,Z_Param_Out_meshes);
		P_GET_OBJECT(USkeleton,Z_Param_inSkeleton);
		P_GET_UBOOL(Z_Param_bNeedCpuAccess);
		P_GET_UBOOL(Z_Param_bMergeSkeletonsBefore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=USMMSkeletalMergerFunctionLibrary::MergeSkeletalMeshes(Z_Param_Out_meshes,Z_Param_inSkeleton,Z_Param_bNeedCpuAccess,Z_Param_bMergeSkeletonsBefore);
		P_NATIVE_END;
	}
	void USMMSkeletalMergerFunctionLibrary::StaticRegisterNativesUSMMSkeletalMergerFunctionLibrary()
	{
		UClass* Class = USMMSkeletalMergerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MergeAllSkeletalMeshesInActor", &USMMSkeletalMergerFunctionLibrary::execMergeAllSkeletalMeshesInActor },
			{ "MergeSkeletalMeshes", &USMMSkeletalMergerFunctionLibrary::execMergeSkeletalMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics
	{
		struct SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms
		{
			AActor* inActor;
			USkeleton* inSkeleton;
			bool bNeedCpuAccess;
			bool bMergeSkeletonsBefore;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inSkeleton;
		static void NewProp_bNeedCpuAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedCpuAccess;
		static void NewProp_bMergeSkeletonsBefore_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSkeletonsBefore;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_inActor = { "inActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms, inActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_inSkeleton = { "inSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms, inSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bNeedCpuAccess_SetBit(void* Obj)
	{
		((SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms*)Obj)->bNeedCpuAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bNeedCpuAccess = { "bNeedCpuAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms), &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bNeedCpuAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bMergeSkeletonsBefore_SetBit(void* Obj)
	{
		((SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms*)Obj)->bMergeSkeletonsBefore = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bMergeSkeletonsBefore = { "bMergeSkeletonsBefore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms), &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bMergeSkeletonsBefore_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_inActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_inSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bNeedCpuAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bMergeSkeletonsBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "CPP_Default_bMergeSkeletonsBefore", "false" },
		{ "CPP_Default_bNeedCpuAccess", "false" },
		{ "CPP_Default_inSkeleton", "None" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMergerFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary, nullptr, "MergeAllSkeletalMeshesInActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms), Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics
	{
		struct SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms
		{
			TArray<USkeletalMesh*> meshes;
			USkeleton* inSkeleton;
			bool bNeedCpuAccess;
			bool bMergeSkeletonsBefore;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inSkeleton;
		static void NewProp_bNeedCpuAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedCpuAccess;
		static void NewProp_bMergeSkeletonsBefore_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSkeletonsBefore;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes_Inner = { "meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes = { "meshes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms, meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_inSkeleton = { "inSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms, inSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bNeedCpuAccess_SetBit(void* Obj)
	{
		((SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms*)Obj)->bNeedCpuAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bNeedCpuAccess = { "bNeedCpuAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms), &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bNeedCpuAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bMergeSkeletonsBefore_SetBit(void* Obj)
	{
		((SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms*)Obj)->bMergeSkeletonsBefore = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bMergeSkeletonsBefore = { "bMergeSkeletonsBefore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms), &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bMergeSkeletonsBefore_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_inSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bNeedCpuAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bMergeSkeletonsBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "CPP_Default_bMergeSkeletonsBefore", "false" },
		{ "CPP_Default_bNeedCpuAccess", "false" },
		{ "CPP_Default_inSkeleton", "None" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMergerFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary, nullptr, "MergeSkeletalMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms), Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMMSkeletalMergerFunctionLibrary);
	UClass* Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_NoRegister()
	{
		return USMMSkeletalMergerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMerger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor, "MergeAllSkeletalMeshesInActor" }, // 1542971759
		{ &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes, "MergeSkeletalMeshes" }, // 3474905473
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SMMSkeletalMergerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMergerFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMMSkeletalMergerFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::ClassParams = {
		&USMMSkeletalMergerFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary.OuterSingleton, Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary.OuterSingleton;
	}
	template<> RUNTIMEMERGER_API UClass* StaticClass<USMMSkeletalMergerFunctionLibrary>()
	{
		return USMMSkeletalMergerFunctionLibrary::StaticClass();
	}
	USMMSkeletalMergerFunctionLibrary::USMMSkeletalMergerFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMMSkeletalMergerFunctionLibrary);
	USMMSkeletalMergerFunctionLibrary::~USMMSkeletalMergerFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary, USMMSkeletalMergerFunctionLibrary::StaticClass, TEXT("USMMSkeletalMergerFunctionLibrary"), &Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMMSkeletalMergerFunctionLibrary), 3762310817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_3312355718(TEXT("/Script/RuntimeMerger"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
