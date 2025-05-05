// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Private/Grid/PCGPartitionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPartitionActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_APartitionActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PCG_API UClass* Z_Construct_UClass_APCGPartitionActor();
	PCG_API UClass* Z_Construct_UClass_APCGPartitionActor_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(APCGPartitionActor::execGetOriginalComponent)
	{
		P_GET_OBJECT(UPCGComponent,Z_Param_LocalComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGComponent**)Z_Param__Result=P_THIS->GetOriginalComponent(Z_Param_LocalComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APCGPartitionActor::execGetLocalComponent)
	{
		P_GET_OBJECT(UPCGComponent,Z_Param_OriginalComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGComponent**)Z_Param__Result=P_THIS->GetLocalComponent(Z_Param_OriginalComponent);
		P_NATIVE_END;
	}
	void APCGPartitionActor::StaticRegisterNativesAPCGPartitionActor()
	{
		UClass* Class = APCGPartitionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalComponent", &APCGPartitionActor::execGetLocalComponent },
			{ "GetOriginalComponent", &APCGPartitionActor::execGetOriginalComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics
	{
		struct PCGPartitionActor_eventGetLocalComponent_Parms
		{
			const UPCGComponent* OriginalComponent;
			UPCGComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_OriginalComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_OriginalComponent = { "OriginalComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPartitionActor_eventGetLocalComponent_Parms, OriginalComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_OriginalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_OriginalComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPartitionActor_eventGetLocalComponent_Parms, ReturnValue), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_OriginalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PartitionActor" },
		{ "Comment", "// TODO: Make this in-editor only; during runtime, we should keep a map of component to bounds/volume only\n// and preferably precompute the intersection, so this would make it easier/possible to not have the original actor in game version.\n" },
		{ "ModuleRelativePath", "Private/Grid/PCGPartitionActor.h" },
		{ "ToolTip", "TODO: Make this in-editor only; during runtime, we should keep a map of component to bounds/volume only\nand preferably precompute the intersection, so this would make it easier/possible to not have the original actor in game version." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APCGPartitionActor, nullptr, "GetLocalComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::PCGPartitionActor_eventGetLocalComponent_Parms), Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics
	{
		struct PCGPartitionActor_eventGetOriginalComponent_Parms
		{
			const UPCGComponent* LocalComponent;
			UPCGComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_LocalComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_LocalComponent = { "LocalComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPartitionActor_eventGetOriginalComponent_Parms, LocalComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_LocalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_LocalComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPartitionActor_eventGetOriginalComponent_Parms, ReturnValue), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_LocalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PartitionActor" },
		{ "ModuleRelativePath", "Private/Grid/PCGPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APCGPartitionActor, nullptr, "GetOriginalComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::PCGPartitionActor_eventGetOriginalComponent_Parms), Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGPartitionActor);
	UClass* Z_Construct_UClass_APCGPartitionActor_NoRegister()
	{
		return APCGPartitionActor::StaticClass();
	}
	struct Z_Construct_UClass_APCGPartitionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCGGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PCGGuid;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LocalToOriginal_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalToOriginal_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalToOriginal_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LocalToOriginal;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LocalToOriginalMap_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalToOriginalMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalToOriginalMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LocalToOriginalMap;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCGGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PCGGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUse2DGrid_MetaData[];
#endif
		static void NewProp_bUse2DGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse2DGrid;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundsComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCGPartitionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APartitionActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APCGPartitionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent, "GetLocalComponent" }, // 473620719
		{ &Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent, "GetOriginalComponent" }, // 1509540288
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGPartitionActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n* The APCGPartitionActor actor is used to store grid cell data\n* and its size will be a multiple of the grid size.\n*/" },
		{ "IncludePath", "Grid/PCGPartitionActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Grid/PCGPartitionActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The APCGPartitionActor actor is used to store grid cell data\nand its size will be a multiple of the grid size." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/Grid/PCGPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGuid = { "PCGGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGPartitionActor, PCGGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGuid_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginal_ValueProp = { "LocalToOriginal", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginal_Key_KeyProp = { "LocalToOriginal_Key", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginal_MetaData[] = {
		{ "ModuleRelativePath", "Private/Grid/PCGPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginal = { "LocalToOriginal", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGPartitionActor, LocalToOriginal), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginal_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginalMap_ValueProp = { "LocalToOriginalMap", nullptr, (EPropertyFlags)0x0004000820080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginalMap_Key_KeyProp = { "LocalToOriginalMap_Key", nullptr, (EPropertyFlags)0x0004000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginalMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Grid/PCGPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginalMap = { "LocalToOriginalMap", nullptr, (EPropertyFlags)0x0044008820000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGPartitionActor, LocalToOriginalMap_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginalMap_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGridSize_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "ModuleRelativePath", "Private/Grid/PCGPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGridSize = { "PCGGridSize", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGPartitionActor, PCGGridSize), METADATA_PARAMS(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_bUse2DGrid_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "ModuleRelativePath", "Private/Grid/PCGPartitionActor.h" },
	};
#endif
	void Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_bUse2DGrid_SetBit(void* Obj)
	{
		((APCGPartitionActor*)Obj)->bUse2DGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_bUse2DGrid = { "bUse2DGrid", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APCGPartitionActor), &Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_bUse2DGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_bUse2DGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_bUse2DGrid_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_BoundsComponent_MetaData[] = {
		{ "Comment", "/** Box component to draw the Partition actor bounds in the Editor viewport */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Grid/PCGPartitionActor.h" },
		{ "ToolTip", "Box component to draw the Partition actor bounds in the Editor viewport" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_BoundsComponent = { "BoundsComponent", nullptr, (EPropertyFlags)0x0044000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGPartitionActor, BoundsComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_BoundsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_BoundsComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCGPartitionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginal_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginal_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginal,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginalMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginalMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_LocalToOriginalMap,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_PCGGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_bUse2DGrid,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_BoundsComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCGPartitionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGPartitionActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGPartitionActor_Statics::ClassParams = {
		&APCGPartitionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APCGPartitionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APCGPartitionActor_Statics::PropPointers),
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_APCGPartitionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APCGPartitionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APCGPartitionActor()
	{
		if (!Z_Registration_Info_UClass_APCGPartitionActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGPartitionActor.OuterSingleton, Z_Construct_UClass_APCGPartitionActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCGPartitionActor.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<APCGPartitionActor>()
	{
		return APCGPartitionActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCGPartitionActor);
	APCGPartitionActor::~APCGPartitionActor() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCGPartitionActor, APCGPartitionActor::StaticClass, TEXT("APCGPartitionActor"), &Z_Registration_Info_UClass_APCGPartitionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGPartitionActor), 1812697403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_2779870735(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
