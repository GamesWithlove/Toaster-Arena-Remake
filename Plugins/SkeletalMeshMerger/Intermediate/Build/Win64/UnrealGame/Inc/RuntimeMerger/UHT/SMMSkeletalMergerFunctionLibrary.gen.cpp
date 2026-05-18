// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMMSkeletalMergerFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSMMSkeletalMergerFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
RUNTIMEMERGER_API UClass* Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary();
RUNTIMEMERGER_API UClass* Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RuntimeMerger();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USMMSkeletalMergerFunctionLibrary Function MergeAllSkeletalMeshesInActor *
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "CPP_Default_bMergeSkeletonsBefore", "false" },
		{ "CPP_Default_bNeedCpuAccess", "false" },
		{ "CPP_Default_inSkeleton", "None" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMergerFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MergeAllSkeletalMeshesInActor constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inSkeleton;
	static void NewProp_bNeedCpuAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedCpuAccess;
	static void NewProp_bMergeSkeletonsBefore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSkeletonsBefore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MergeAllSkeletalMeshesInActor constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MergeAllSkeletalMeshesInActor Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_inActor = { "inActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms, inActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_inSkeleton = { "inSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms, inSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bNeedCpuAccess_SetBit(void* Obj)
{
	((SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms*)Obj)->bNeedCpuAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bNeedCpuAccess = { "bNeedCpuAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms), &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bNeedCpuAccess_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bMergeSkeletonsBefore_SetBit(void* Obj)
{
	((SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms*)Obj)->bMergeSkeletonsBefore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bMergeSkeletonsBefore = { "bMergeSkeletonsBefore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms), &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bMergeSkeletonsBefore_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_inActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_inSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bNeedCpuAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_bMergeSkeletonsBefore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::PropPointers) < 2048);
// ********** End Function MergeAllSkeletalMeshesInActor Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary, nullptr, "MergeAllSkeletalMeshesInActor", 	Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::SMMSkeletalMergerFunctionLibrary_eventMergeAllSkeletalMeshesInActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USMMSkeletalMergerFunctionLibrary Function MergeAllSkeletalMeshesInActor ***

// ********** Begin Class USMMSkeletalMergerFunctionLibrary Function MergeSkeletalMeshes ***********
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "CPP_Default_bMergeSkeletonsBefore", "false" },
		{ "CPP_Default_bNeedCpuAccess", "false" },
		{ "CPP_Default_inSkeleton", "None" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMergerFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_meshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MergeSkeletalMeshes constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_meshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inSkeleton;
	static void NewProp_bNeedCpuAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedCpuAccess;
	static void NewProp_bMergeSkeletonsBefore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSkeletonsBefore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MergeSkeletalMeshes constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MergeSkeletalMeshes Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes_Inner = { "meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes = { "meshes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms, meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_meshes_MetaData), NewProp_meshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_inSkeleton = { "inSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms, inSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bNeedCpuAccess_SetBit(void* Obj)
{
	((SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms*)Obj)->bNeedCpuAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bNeedCpuAccess = { "bNeedCpuAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms), &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bNeedCpuAccess_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bMergeSkeletonsBefore_SetBit(void* Obj)
{
	((SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms*)Obj)->bMergeSkeletonsBefore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bMergeSkeletonsBefore = { "bMergeSkeletonsBefore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms), &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bMergeSkeletonsBefore_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_inSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bNeedCpuAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_bMergeSkeletonsBefore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::PropPointers) < 2048);
// ********** End Function MergeSkeletalMeshes Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary, nullptr, "MergeSkeletalMeshes", 	Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::SMMSkeletalMergerFunctionLibrary_eventMergeSkeletalMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class USMMSkeletalMergerFunctionLibrary Function MergeSkeletalMeshes *************

// ********** Begin Class USMMSkeletalMergerFunctionLibrary ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary;
UClass* USMMSkeletalMergerFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = USMMSkeletalMergerFunctionLibrary;
	if (!Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SMMSkeletalMergerFunctionLibrary"),
			Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUSMMSkeletalMergerFunctionLibrary,
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
	return Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_NoRegister()
{
	return USMMSkeletalMergerFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "SMMSkeletalMergerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMergerFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USMMSkeletalMergerFunctionLibrary constinit property declarations ********
// ********** End Class USMMSkeletalMergerFunctionLibrary constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MergeAllSkeletalMeshesInActor"), .Pointer = &USMMSkeletalMergerFunctionLibrary::execMergeAllSkeletalMeshesInActor },
		{ .NameUTF8 = UTF8TEXT("MergeSkeletalMeshes"), .Pointer = &USMMSkeletalMergerFunctionLibrary::execMergeSkeletalMeshes },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor, "MergeAllSkeletalMeshesInActor" }, // 1576271703
		{ &Z_Construct_UFunction_USMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes, "MergeSkeletalMeshes" }, // 2967128227
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMMSkeletalMergerFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMerger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::Class_MetaDataParams)
};
void USMMSkeletalMergerFunctionLibrary::StaticRegisterNativesUSMMSkeletalMergerFunctionLibrary()
{
	UClass* Class = USMMSkeletalMergerFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary.OuterSingleton, Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary.OuterSingleton;
}
USMMSkeletalMergerFunctionLibrary::USMMSkeletalMergerFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USMMSkeletalMergerFunctionLibrary);
USMMSkeletalMergerFunctionLibrary::~USMMSkeletalMergerFunctionLibrary() {}
// ********** End Class USMMSkeletalMergerFunctionLibrary ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h__Script_RuntimeMerger_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary, USMMSkeletalMergerFunctionLibrary::StaticClass, TEXT("USMMSkeletalMergerFunctionLibrary"), &Z_Registration_Info_UClass_USMMSkeletalMergerFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMMSkeletalMergerFunctionLibrary), 2532304727U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h__Script_RuntimeMerger_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h__Script_RuntimeMerger_1220481616{
	TEXT("/Script/RuntimeMerger"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h__Script_RuntimeMerger_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h__Script_RuntimeMerger_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
