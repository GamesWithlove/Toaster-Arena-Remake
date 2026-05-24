// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMMSkeletalMeshMergerSubsystem.h"
#include "SkeletalMergingLibrary.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSMMSkeletalMeshMergerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
SKELETALMERGING_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams();
SKELETALMERGING_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonMergeParams();
SKELETALMESHMERGER_API UClass* Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem();
SKELETALMESHMERGER_API UClass* Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SkeletalMeshMerger();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USMMSkeletalMeshMergerSubsystem Function CreatePackageFromObject *********
struct Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics
{
	struct SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms
	{
		UObject* objectInstance;
		FString fileName;
		FString relativePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SMM" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_relativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreatePackageFromObject constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_objectInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_relativePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreatePackageFromObject constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreatePackageFromObject Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_objectInstance = { "objectInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms, objectInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms, fileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fileName_MetaData), NewProp_fileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_relativePath = { "relativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms, relativePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_relativePath_MetaData), NewProp_relativePath_MetaData) };
void Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms), &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_objectInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_fileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_relativePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::PropPointers) < 2048);
// ********** End Function CreatePackageFromObject Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "CreatePackageFromObject", 	Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USMMSkeletalMeshMergerSubsystem::execCreatePackageFromObject)
{
	P_GET_OBJECT(UObject,Z_Param_objectInstance);
	P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_relativePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreatePackageFromObject(Z_Param_objectInstance,Z_Param_fileName,Z_Param_relativePath);
	P_NATIVE_END;
}
// ********** End Class USMMSkeletalMeshMergerSubsystem Function CreatePackageFromObject ***********

// ********** Begin Class USMMSkeletalMeshMergerSubsystem Function ExtractSkeletalMeshesFromBlueprint 
struct Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics
{
	struct SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms
	{
		const TSubclassOf<AActor> actorClass;
		TArray<USkeletalMesh*> outSkeletalMeshes;
		USkeleton* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SMM" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExtractSkeletalMeshesFromBlueprint constinit property declarations ****
	static const UECodeGen_Private::FClassPropertyParams NewProp_actorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_outSkeletalMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outSkeletalMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExtractSkeletalMeshesFromBlueprint constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExtractSkeletalMeshesFromBlueprint Property Definitions ***************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_actorClass = { "actorClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms, actorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorClass_MetaData), NewProp_actorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_outSkeletalMeshes_Inner = { "outSkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_outSkeletalMeshes = { "outSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms, outSkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_actorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_outSkeletalMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_outSkeletalMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::PropPointers) < 2048);
// ********** End Function ExtractSkeletalMeshesFromBlueprint Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "ExtractSkeletalMeshesFromBlueprint", 	Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USMMSkeletalMeshMergerSubsystem::execExtractSkeletalMeshesFromBlueprint)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_actorClass);
	P_GET_TARRAY_REF(USkeletalMesh*,Z_Param_Out_outSkeletalMeshes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeleton**)Z_Param__Result=P_THIS->ExtractSkeletalMeshesFromBlueprint(Z_Param_Out_actorClass,Z_Param_Out_outSkeletalMeshes);
	P_NATIVE_END;
}
// ********** End Class USMMSkeletalMeshMergerSubsystem Function ExtractSkeletalMeshesFromBlueprint 

// ********** Begin Class USMMSkeletalMeshMergerSubsystem Function MergeMeshes *********************
struct Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics
{
	struct SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms
	{
		FSkeletalMeshMergeParams mergeParams;
		FString fileName;
		FString relativePath;
		FString outMessage;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SMM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Merges the given meshes into a single mesh and saves the result in a package with the provided\n     * name in the provided path relative to Content/\n     * @return if the operation is succesfull.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Merges the given meshes into a single mesh and saves the result in a package with the provided\nname in the provided path relative to Content/\n@return if the operation is succesfull." },
#endif
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mergeParams_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_relativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MergeMeshes constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_mergeParams;
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_relativePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_outMessage;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MergeMeshes constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MergeMeshes Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_mergeParams = { "mergeParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms, mergeParams), Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mergeParams_MetaData), NewProp_mergeParams_MetaData) }; // 2412841524
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms, fileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fileName_MetaData), NewProp_fileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_relativePath = { "relativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms, relativePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_relativePath_MetaData), NewProp_relativePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_outMessage = { "outMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms, outMessage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms), &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_mergeParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_fileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_relativePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_outMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::PropPointers) < 2048);
// ********** End Function MergeMeshes Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "MergeMeshes", 	Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USMMSkeletalMeshMergerSubsystem::execMergeMeshes)
{
	P_GET_STRUCT_REF(FSkeletalMeshMergeParams,Z_Param_Out_mergeParams);
	P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_relativePath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MergeMeshes(Z_Param_Out_mergeParams,Z_Param_fileName,Z_Param_relativePath,Z_Param_Out_outMessage);
	P_NATIVE_END;
}
// ********** End Class USMMSkeletalMeshMergerSubsystem Function MergeMeshes ***********************

// ********** Begin Class USMMSkeletalMeshMergerSubsystem Function MergeSkeletons ******************
struct Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics
{
	struct SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms
	{
		FSkeletonMergeParams mergeParams;
		FString fileName;
		FString relativePath;
		FString outMessage;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SMM" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mergeParams_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_relativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MergeSkeletons constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_mergeParams;
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_relativePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_outMessage;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MergeSkeletons constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MergeSkeletons Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_mergeParams = { "mergeParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms, mergeParams), Z_Construct_UScriptStruct_FSkeletonMergeParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mergeParams_MetaData), NewProp_mergeParams_MetaData) }; // 1892252094
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms, fileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fileName_MetaData), NewProp_fileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_relativePath = { "relativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms, relativePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_relativePath_MetaData), NewProp_relativePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_outMessage = { "outMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms, outMessage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms), &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_mergeParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_fileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_relativePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_outMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::PropPointers) < 2048);
// ********** End Function MergeSkeletons Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "MergeSkeletons", 	Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USMMSkeletalMeshMergerSubsystem::execMergeSkeletons)
{
	P_GET_STRUCT_REF(FSkeletonMergeParams,Z_Param_Out_mergeParams);
	P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_relativePath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MergeSkeletons(Z_Param_Out_mergeParams,Z_Param_fileName,Z_Param_relativePath,Z_Param_Out_outMessage);
	P_NATIVE_END;
}
// ********** End Class USMMSkeletalMeshMergerSubsystem Function MergeSkeletons ********************

// ********** Begin Class USMMSkeletalMeshMergerSubsystem Function RuntimeMergeMesh ****************
struct Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics
{
	struct SMMSkeletalMeshMergerSubsystem_eventRuntimeMergeMesh_Parms
	{
		FSkeletalMeshMergeParams mergeParams;
		USkeletalMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SMM" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mergeParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RuntimeMergeMesh constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_mergeParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RuntimeMergeMesh constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RuntimeMergeMesh Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_mergeParams = { "mergeParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventRuntimeMergeMesh_Parms, mergeParams), Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mergeParams_MetaData), NewProp_mergeParams_MetaData) }; // 2412841524
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventRuntimeMergeMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_mergeParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::PropPointers) < 2048);
// ********** End Function RuntimeMergeMesh Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "RuntimeMergeMesh", 	Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::SMMSkeletalMeshMergerSubsystem_eventRuntimeMergeMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::SMMSkeletalMeshMergerSubsystem_eventRuntimeMergeMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USMMSkeletalMeshMergerSubsystem::execRuntimeMergeMesh)
{
	P_GET_STRUCT_REF(FSkeletalMeshMergeParams,Z_Param_Out_mergeParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMesh**)Z_Param__Result=P_THIS->RuntimeMergeMesh(Z_Param_Out_mergeParams);
	P_NATIVE_END;
}
// ********** End Class USMMSkeletalMeshMergerSubsystem Function RuntimeMergeMesh ******************

// ********** Begin Class USMMSkeletalMeshMergerSubsystem ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem;
UClass* USMMSkeletalMeshMergerSubsystem::GetPrivateStaticClass()
{
	using TClass = USMMSkeletalMeshMergerSubsystem;
	if (!Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SMMSkeletalMeshMergerSubsystem"),
			Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem.InnerSingleton,
			StaticRegisterNativesUSMMSkeletalMeshMergerSubsystem,
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
	return Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_NoRegister()
{
	return USMMSkeletalMeshMergerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SMMSkeletalMeshMergerSubsystem.h" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USMMSkeletalMeshMergerSubsystem constinit property declarations **********
// ********** End Class USMMSkeletalMeshMergerSubsystem constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreatePackageFromObject"), .Pointer = &USMMSkeletalMeshMergerSubsystem::execCreatePackageFromObject },
		{ .NameUTF8 = UTF8TEXT("ExtractSkeletalMeshesFromBlueprint"), .Pointer = &USMMSkeletalMeshMergerSubsystem::execExtractSkeletalMeshesFromBlueprint },
		{ .NameUTF8 = UTF8TEXT("MergeMeshes"), .Pointer = &USMMSkeletalMeshMergerSubsystem::execMergeMeshes },
		{ .NameUTF8 = UTF8TEXT("MergeSkeletons"), .Pointer = &USMMSkeletalMeshMergerSubsystem::execMergeSkeletons },
		{ .NameUTF8 = UTF8TEXT("RuntimeMergeMesh"), .Pointer = &USMMSkeletalMeshMergerSubsystem::execRuntimeMergeMesh },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject, "CreatePackageFromObject" }, // 4083511959
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint, "ExtractSkeletalMeshesFromBlueprint" }, // 2398400626
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes, "MergeMeshes" }, // 4025569617
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons, "MergeSkeletons" }, // 2402595674
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh, "RuntimeMergeMesh" }, // 16277252
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMMSkeletalMeshMergerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics
UObject* (*const Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshMerger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::ClassParams = {
	&USMMSkeletalMeshMergerSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::Class_MetaDataParams)
};
void USMMSkeletalMeshMergerSubsystem::StaticRegisterNativesUSMMSkeletalMeshMergerSubsystem()
{
	UClass* Class = USMMSkeletalMeshMergerSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem()
{
	if (!Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem.OuterSingleton, Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem.OuterSingleton;
}
USMMSkeletalMeshMergerSubsystem::USMMSkeletalMeshMergerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USMMSkeletalMeshMergerSubsystem);
USMMSkeletalMeshMergerSubsystem::~USMMSkeletalMeshMergerSubsystem() {}
// ********** End Class USMMSkeletalMeshMergerSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h__Script_SkeletalMeshMerger_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, USMMSkeletalMeshMergerSubsystem::StaticClass, TEXT("USMMSkeletalMeshMergerSubsystem"), &Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMMSkeletalMeshMergerSubsystem), 2662246704U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h__Script_SkeletalMeshMerger_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h__Script_SkeletalMeshMerger_716368546{
	TEXT("/Script/SkeletalMeshMerger"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h__Script_SkeletalMeshMerger_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h__Script_SkeletalMeshMerger_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
