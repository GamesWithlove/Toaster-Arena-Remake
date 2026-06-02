// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalMeshMerger/Public/SMMSkeletalMeshMergerSubsystem.h"
#include "SkeletalMergingLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMMSkeletalMeshMergerSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
// End Cross Module References
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
	DEFINE_FUNCTION(USMMSkeletalMeshMergerSubsystem::execExtractSkeletalMeshesFromBlueprint)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor> ,Z_Param_Out_actorClass);
		P_GET_TARRAY_REF(USkeletalMesh*,Z_Param_Out_outSkeletalMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeleton**)Z_Param__Result=P_THIS->ExtractSkeletalMeshesFromBlueprint(Z_Param_Out_actorClass,Z_Param_Out_outSkeletalMeshes);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USMMSkeletalMeshMergerSubsystem::execRuntimeMergeMesh)
	{
		P_GET_STRUCT_REF(FSkeletalMeshMergeParams,Z_Param_Out_mergeParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->RuntimeMergeMesh(Z_Param_Out_mergeParams);
		P_NATIVE_END;
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
	void USMMSkeletalMeshMergerSubsystem::StaticRegisterNativesUSMMSkeletalMeshMergerSubsystem()
	{
		UClass* Class = USMMSkeletalMeshMergerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePackageFromObject", &USMMSkeletalMeshMergerSubsystem::execCreatePackageFromObject },
			{ "ExtractSkeletalMeshesFromBlueprint", &USMMSkeletalMeshMergerSubsystem::execExtractSkeletalMeshesFromBlueprint },
			{ "MergeMeshes", &USMMSkeletalMeshMergerSubsystem::execMergeMeshes },
			{ "MergeSkeletons", &USMMSkeletalMeshMergerSubsystem::execMergeSkeletons },
			{ "RuntimeMergeMesh", &USMMSkeletalMeshMergerSubsystem::execRuntimeMergeMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics
	{
		struct SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms
		{
			UObject* objectInstance;
			FString fileName;
			FString relativePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_relativePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_objectInstance = { "objectInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms, objectInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms, fileName), METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_relativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_relativePath = { "relativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms, relativePath), METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_relativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_relativePath_MetaData)) };
	void Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms), &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_objectInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_relativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SMM" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "CreatePackageFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::SMMSkeletalMeshMergerSubsystem_eventCreatePackageFromObject_Parms), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics
	{
		struct SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms
		{
			const TSubclassOf<AActor>  actorClass;
			TArray<USkeletalMesh*> outSkeletalMeshes;
			USkeleton* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_actorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outSkeletalMeshes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outSkeletalMeshes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_actorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_actorClass = { "actorClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms, actorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_actorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_actorClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_outSkeletalMeshes_Inner = { "outSkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_outSkeletalMeshes = { "outSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms, outSkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_actorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_outSkeletalMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_outSkeletalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SMM" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "ExtractSkeletalMeshesFromBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::SMMSkeletalMeshMergerSubsystem_eventExtractSkeletalMeshesFromBlueprint_Parms), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mergeParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mergeParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_relativePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_outMessage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_mergeParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_mergeParams = { "mergeParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms, mergeParams), Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_mergeParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_mergeParams_MetaData)) }; // 849953815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms, fileName), METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_relativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_relativePath = { "relativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms, relativePath), METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_relativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_relativePath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_outMessage = { "outMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms, outMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms), &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_mergeParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_relativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_outMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "SMM" },
		{ "Comment", "/**\n     * Merges the given meshes into a single mesh and saves the result in a package with the provided\n     * name in the provided path relative to Content/\n     * @return if the operation is succesfull.\n     */" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
		{ "ToolTip", "Merges the given meshes into a single mesh and saves the result in a package with the provided\nname in the provided path relative to Content/\n@return if the operation is succesfull." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "MergeMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::SMMSkeletalMeshMergerSubsystem_eventMergeMeshes_Parms), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mergeParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mergeParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_relativePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_outMessage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_mergeParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_mergeParams = { "mergeParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms, mergeParams), Z_Construct_UScriptStruct_FSkeletonMergeParams, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_mergeParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_mergeParams_MetaData)) }; // 1381368947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms, fileName), METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_relativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_relativePath = { "relativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms, relativePath), METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_relativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_relativePath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_outMessage = { "outMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms, outMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms), &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_mergeParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_relativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_outMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::Function_MetaDataParams[] = {
		{ "Category", "SMM" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "MergeSkeletons", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::SMMSkeletalMeshMergerSubsystem_eventMergeSkeletons_Parms), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics
	{
		struct SMMSkeletalMeshMergerSubsystem_eventRuntimeMergeMesh_Parms
		{
			FSkeletalMeshMergeParams mergeParams;
			USkeletalMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mergeParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mergeParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_mergeParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_mergeParams = { "mergeParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventRuntimeMergeMesh_Parms, mergeParams), Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_mergeParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_mergeParams_MetaData)) }; // 849953815
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SMMSkeletalMeshMergerSubsystem_eventRuntimeMergeMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_mergeParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "SMM" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, nullptr, "RuntimeMergeMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::SMMSkeletalMeshMergerSubsystem_eventRuntimeMergeMesh_Parms), Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMMSkeletalMeshMergerSubsystem);
	UClass* Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_NoRegister()
	{
		return USMMSkeletalMeshMergerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshMerger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_CreatePackageFromObject, "CreatePackageFromObject" }, // 3612459234
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_ExtractSkeletalMeshesFromBlueprint, "ExtractSkeletalMeshesFromBlueprint" }, // 2404529976
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeMeshes, "MergeMeshes" }, // 159112283
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_MergeSkeletons, "MergeSkeletons" }, // 2411430497
		{ &Z_Construct_UFunction_USMMSkeletalMeshMergerSubsystem_RuntimeMergeMesh, "RuntimeMergeMesh" }, // 1368875338
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SMMSkeletalMeshMergerSubsystem.h" },
		{ "ModuleRelativePath", "Public/SMMSkeletalMeshMergerSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMMSkeletalMeshMergerSubsystem>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem()
	{
		if (!Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem.OuterSingleton, Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem.OuterSingleton;
	}
	template<> SKELETALMESHMERGER_API UClass* StaticClass<USMMSkeletalMeshMergerSubsystem>()
	{
		return USMMSkeletalMeshMergerSubsystem::StaticClass();
	}
	USMMSkeletalMeshMergerSubsystem::USMMSkeletalMeshMergerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMMSkeletalMeshMergerSubsystem);
	USMMSkeletalMeshMergerSubsystem::~USMMSkeletalMeshMergerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem, USMMSkeletalMeshMergerSubsystem::StaticClass, TEXT("USMMSkeletalMeshMergerSubsystem"), &Z_Registration_Info_UClass_USMMSkeletalMeshMergerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMMSkeletalMeshMergerSubsystem), 1366742682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_3732214472(TEXT("/Script/SkeletalMeshMerger"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
