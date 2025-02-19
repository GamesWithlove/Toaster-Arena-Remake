// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Helpers/PCGBlueprintHelpers.h"
#include "PCG/Public/Grid/PCGLandscapeCache.h"
#include "PCG/Public/PCGContext.h"
#include "PCG/Public/PCGPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGBlueprintHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintHelpers();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintHelpers_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGContext();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetTaskId)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UPCGBlueprintHelpers::GetTaskId(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetInterpolatedPCGLandscapeLayerWeights)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGLandscapeLayerWeight>*)Z_Param__Result=UPCGBlueprintHelpers::GetInterpolatedPCGLandscapeLayerWeights(Z_Param_WorldContextObject,Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execCreatePCGDataFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bParseActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGData**)Z_Param__Result=UPCGBlueprintHelpers::CreatePCGDataFromActor(Z_Param_InActor,Z_Param_bParseActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetActorLocalBoundsPCG)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bIgnorePCGCreatedComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UPCGBlueprintHelpers::GetActorLocalBoundsPCG(Z_Param_InActor,Z_Param_bIgnorePCGCreatedComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetActorBoundsPCG)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bIgnorePCGCreatedComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UPCGBlueprintHelpers::GetActorBoundsPCG(Z_Param_InActor,Z_Param_bIgnorePCGCreatedComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetTransformedBounds)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UPCGBlueprintHelpers::GetTransformedBounds(Z_Param_Out_InPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetLocalCenter)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPCGBlueprintHelpers::GetLocalCenter(Z_Param_Out_InPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execSetLocalCenter)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocalCenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGBlueprintHelpers::SetLocalCenter(Z_Param_Out_InPoint,Z_Param_Out_InLocalCenter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetExtents)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPCGBlueprintHelpers::GetExtents(Z_Param_Out_InPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execSetExtents)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InExtents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGBlueprintHelpers::SetExtents(Z_Param_Out_InPoint,Z_Param_Out_InExtents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetOriginalComponent)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGComponent**)Z_Param__Result=UPCGBlueprintHelpers::GetOriginalComponent(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetComponent)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGComponent**)Z_Param__Result=UPCGBlueprintHelpers::GetComponent(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetInputData)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGData**)Z_Param__Result=UPCGBlueprintHelpers::GetInputData(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetActorData)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGData**)Z_Param__Result=UPCGBlueprintHelpers::GetActorData(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetSettings)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UPCGSettings**)Z_Param__Result=UPCGBlueprintHelpers::GetSettings(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execGetRandomStream)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
		P_GET_OBJECT(UPCGSettings,Z_Param_OptionalSettings);
		P_GET_OBJECT(UPCGComponent,Z_Param_OptionalComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRandomStream*)Z_Param__Result=UPCGBlueprintHelpers::GetRandomStream(Z_Param_Out_InPoint,Z_Param_OptionalSettings,Z_Param_OptionalComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execSetSeedFromPosition)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGBlueprintHelpers::SetSeedFromPosition(Z_Param_Out_InPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintHelpers::execComputeSeedFromPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPCGBlueprintHelpers::ComputeSeedFromPosition(Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	void UPCGBlueprintHelpers::StaticRegisterNativesUPCGBlueprintHelpers()
	{
		UClass* Class = UPCGBlueprintHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeSeedFromPosition", &UPCGBlueprintHelpers::execComputeSeedFromPosition },
			{ "CreatePCGDataFromActor", &UPCGBlueprintHelpers::execCreatePCGDataFromActor },
			{ "GetActorBoundsPCG", &UPCGBlueprintHelpers::execGetActorBoundsPCG },
			{ "GetActorData", &UPCGBlueprintHelpers::execGetActorData },
			{ "GetActorLocalBoundsPCG", &UPCGBlueprintHelpers::execGetActorLocalBoundsPCG },
			{ "GetComponent", &UPCGBlueprintHelpers::execGetComponent },
			{ "GetExtents", &UPCGBlueprintHelpers::execGetExtents },
			{ "GetInputData", &UPCGBlueprintHelpers::execGetInputData },
			{ "GetInterpolatedPCGLandscapeLayerWeights", &UPCGBlueprintHelpers::execGetInterpolatedPCGLandscapeLayerWeights },
			{ "GetLocalCenter", &UPCGBlueprintHelpers::execGetLocalCenter },
			{ "GetOriginalComponent", &UPCGBlueprintHelpers::execGetOriginalComponent },
			{ "GetRandomStream", &UPCGBlueprintHelpers::execGetRandomStream },
			{ "GetSettings", &UPCGBlueprintHelpers::execGetSettings },
			{ "GetTaskId", &UPCGBlueprintHelpers::execGetTaskId },
			{ "GetTransformedBounds", &UPCGBlueprintHelpers::execGetTransformedBounds },
			{ "SetExtents", &UPCGBlueprintHelpers::execSetExtents },
			{ "SetLocalCenter", &UPCGBlueprintHelpers::execSetLocalCenter },
			{ "SetSeedFromPosition", &UPCGBlueprintHelpers::execSetSeedFromPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics
	{
		struct PCGBlueprintHelpers_eventComputeSeedFromPosition_Parms
		{
			FVector InPosition;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventComputeSeedFromPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventComputeSeedFromPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Helpers" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "ComputeSeedFromPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::PCGBlueprintHelpers_eventComputeSeedFromPosition_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics
	{
		struct PCGBlueprintHelpers_eventCreatePCGDataFromActor_Parms
		{
			AActor* InActor;
			bool bParseActor;
			UPCGData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_bParseActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParseActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventCreatePCGDataFromActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::NewProp_bParseActor_SetBit(void* Obj)
	{
		((PCGBlueprintHelpers_eventCreatePCGDataFromActor_Parms*)Obj)->bParseActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::NewProp_bParseActor = { "bParseActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGBlueprintHelpers_eventCreatePCGDataFromActor_Parms), &Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::NewProp_bParseActor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventCreatePCGDataFromActor_Parms, ReturnValue), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::NewProp_bParseActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Helpers" },
		{ "CPP_Default_bParseActor", "true" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "CreatePCGDataFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::PCGBlueprintHelpers_eventCreatePCGDataFromActor_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics
	{
		struct PCGBlueprintHelpers_eventGetActorBoundsPCG_Parms
		{
			AActor* InActor;
			bool bIgnorePCGCreatedComponents;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_bIgnorePCGCreatedComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePCGCreatedComponents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetActorBoundsPCG_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::NewProp_bIgnorePCGCreatedComponents_SetBit(void* Obj)
	{
		((PCGBlueprintHelpers_eventGetActorBoundsPCG_Parms*)Obj)->bIgnorePCGCreatedComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::NewProp_bIgnorePCGCreatedComponents = { "bIgnorePCGCreatedComponents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGBlueprintHelpers_eventGetActorBoundsPCG_Parms), &Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::NewProp_bIgnorePCGCreatedComponents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetActorBoundsPCG_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::NewProp_bIgnorePCGCreatedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Helpers" },
		{ "CPP_Default_bIgnorePCGCreatedComponents", "true" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetActorBoundsPCG", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::PCGBlueprintHelpers_eventGetActorBoundsPCG_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics
	{
		struct PCGBlueprintHelpers_eventGetActorData_Parms
		{
			FPCGContext Context;
			UPCGData* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetActorData_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetActorData_Parms, ReturnValue), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Temporary" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetActorData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::PCGBlueprintHelpers_eventGetActorData_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics
	{
		struct PCGBlueprintHelpers_eventGetActorLocalBoundsPCG_Parms
		{
			AActor* InActor;
			bool bIgnorePCGCreatedComponents;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_bIgnorePCGCreatedComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePCGCreatedComponents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetActorLocalBoundsPCG_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::NewProp_bIgnorePCGCreatedComponents_SetBit(void* Obj)
	{
		((PCGBlueprintHelpers_eventGetActorLocalBoundsPCG_Parms*)Obj)->bIgnorePCGCreatedComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::NewProp_bIgnorePCGCreatedComponents = { "bIgnorePCGCreatedComponents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGBlueprintHelpers_eventGetActorLocalBoundsPCG_Parms), &Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::NewProp_bIgnorePCGCreatedComponents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetActorLocalBoundsPCG_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::NewProp_bIgnorePCGCreatedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Helpers" },
		{ "CPP_Default_bIgnorePCGCreatedComponents", "true" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetActorLocalBoundsPCG", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::PCGBlueprintHelpers_eventGetActorLocalBoundsPCG_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics
	{
		struct PCGBlueprintHelpers_eventGetComponent_Parms
		{
			FPCGContext Context;
			UPCGComponent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetComponent_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetComponent_Parms, ReturnValue), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Temporary" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::PCGBlueprintHelpers_eventGetComponent_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics
	{
		struct PCGBlueprintHelpers_eventGetExtents_Parms
		{
			FPCGPoint InPoint;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetExtents_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::NewProp_InPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::NewProp_InPoint_MetaData)) }; // 877907965
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetExtents_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Points" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetExtents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::PCGBlueprintHelpers_eventGetExtents_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics
	{
		struct PCGBlueprintHelpers_eventGetInputData_Parms
		{
			FPCGContext Context;
			UPCGData* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetInputData_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetInputData_Parms, ReturnValue), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Temporary" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetInputData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::PCGBlueprintHelpers_eventGetInputData_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics
	{
		struct PCGBlueprintHelpers_eventGetInterpolatedPCGLandscapeLayerWeights_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			TArray<FPCGLandscapeLayerWeight> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetInterpolatedPCGLandscapeLayerWeights_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetInterpolatedPCGLandscapeLayerWeights_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight, METADATA_PARAMS(nullptr, 0) }; // 3286644734
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetInterpolatedPCGLandscapeLayerWeights_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3286644734
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Helpers" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetInterpolatedPCGLandscapeLayerWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::PCGBlueprintHelpers_eventGetInterpolatedPCGLandscapeLayerWeights_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics
	{
		struct PCGBlueprintHelpers_eventGetLocalCenter_Parms
		{
			FPCGPoint InPoint;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetLocalCenter_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::NewProp_InPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::NewProp_InPoint_MetaData)) }; // 877907965
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetLocalCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Points" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetLocalCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::PCGBlueprintHelpers_eventGetLocalCenter_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics
	{
		struct PCGBlueprintHelpers_eventGetOriginalComponent_Parms
		{
			FPCGContext Context;
			UPCGComponent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetOriginalComponent_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetOriginalComponent_Parms, ReturnValue), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Temporary" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetOriginalComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::PCGBlueprintHelpers_eventGetOriginalComponent_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics
	{
		struct PCGBlueprintHelpers_eventGetRandomStream_Parms
		{
			FPCGPoint InPoint;
			const UPCGSettings* OptionalSettings;
			const UPCGComponent* OptionalComponent;
			FRandomStream ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetRandomStream_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_InPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_InPoint_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalSettings = { "OptionalSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetRandomStream_Parms, OptionalSettings), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalComponent = { "OptionalComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetRandomStream_Parms, OptionalComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_OptionalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Helpers" },
		{ "Comment", "/** Creates a random stream from a point's seed and settings/component's seed (optional) */" },
		{ "CPP_Default_OptionalComponent", "None" },
		{ "CPP_Default_OptionalSettings", "None" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Creates a random stream from a point's seed and settings/component's seed (optional)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetRandomStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::PCGBlueprintHelpers_eventGetRandomStream_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics
	{
		struct PCGBlueprintHelpers_eventGetSettings_Parms
		{
			FPCGContext Context;
			const UPCGSettings* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetSettings_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Helpers" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::PCGBlueprintHelpers_eventGetSettings_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics
	{
		struct PCGBlueprintHelpers_eventGetTaskId_Parms
		{
			FPCGContext Context;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetTaskId_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetTaskId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Helpers" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetTaskId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::PCGBlueprintHelpers_eventGetTaskId_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics
	{
		struct PCGBlueprintHelpers_eventGetTransformedBounds_Parms
		{
			FPCGPoint InPoint;
			FBox ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetTransformedBounds_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::NewProp_InPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::NewProp_InPoint_MetaData)) }; // 877907965
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventGetTransformedBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Points" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "GetTransformedBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::PCGBlueprintHelpers_eventGetTransformedBounds_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics
	{
		struct PCGBlueprintHelpers_eventSetExtents_Parms
		{
			FPCGPoint InPoint;
			FVector InExtents;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InExtents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventSetExtents_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::NewProp_InExtents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::NewProp_InExtents = { "InExtents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventSetExtents_Parms, InExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::NewProp_InExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::NewProp_InExtents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::NewProp_InExtents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Points" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "SetExtents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::PCGBlueprintHelpers_eventSetExtents_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics
	{
		struct PCGBlueprintHelpers_eventSetLocalCenter_Parms
		{
			FPCGPoint InPoint;
			FVector InLocalCenter;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocalCenter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventSetLocalCenter_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::NewProp_InLocalCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::NewProp_InLocalCenter = { "InLocalCenter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventSetLocalCenter_Parms, InLocalCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::NewProp_InLocalCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::NewProp_InLocalCenter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::NewProp_InLocalCenter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Points" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "SetLocalCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::PCGBlueprintHelpers_eventSetLocalCenter_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics
	{
		struct PCGBlueprintHelpers_eventSetSeedFromPosition_Parms
		{
			FPCGPoint InPoint;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGBlueprintHelpers_eventSetSeedFromPosition_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Helpers" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintHelpers, nullptr, "SetSeedFromPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::PCGBlueprintHelpers_eventSetSeedFromPosition_Parms), Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBlueprintHelpers);
	UClass* Z_Construct_UClass_UPCGBlueprintHelpers_NoRegister()
	{
		return UPCGBlueprintHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBlueprintHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBlueprintHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGBlueprintHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_ComputeSeedFromPosition, "ComputeSeedFromPosition" }, // 3091246479
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_CreatePCGDataFromActor, "CreatePCGDataFromActor" }, // 3001821462
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorBoundsPCG, "GetActorBoundsPCG" }, // 3075142594
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorData, "GetActorData" }, // 268890515
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetActorLocalBoundsPCG, "GetActorLocalBoundsPCG" }, // 3117223489
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetComponent, "GetComponent" }, // 1964303861
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetExtents, "GetExtents" }, // 3538335101
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetInputData, "GetInputData" }, // 1157745368
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights, "GetInterpolatedPCGLandscapeLayerWeights" }, // 118389377
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetLocalCenter, "GetLocalCenter" }, // 2587320108
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetOriginalComponent, "GetOriginalComponent" }, // 1027669992
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetRandomStream, "GetRandomStream" }, // 2503217657
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetSettings, "GetSettings" }, // 46716459
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetTaskId, "GetTaskId" }, // 1001548421
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_GetTransformedBounds, "GetTransformedBounds" }, // 754350048
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_SetExtents, "SetExtents" }, // 748582497
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_SetLocalCenter, "SetLocalCenter" }, // 49979708
		{ &Z_Construct_UFunction_UPCGBlueprintHelpers_SetSeedFromPosition, "SetSeedFromPosition" }, // 862415028
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/PCGBlueprintHelpers.h" },
		{ "ModuleRelativePath", "Public/Helpers/PCGBlueprintHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBlueprintHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBlueprintHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBlueprintHelpers_Statics::ClassParams = {
		&UPCGBlueprintHelpers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGBlueprintHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGBlueprintHelpers()
	{
		if (!Z_Registration_Info_UClass_UPCGBlueprintHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBlueprintHelpers.OuterSingleton, Z_Construct_UClass_UPCGBlueprintHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBlueprintHelpers.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBlueprintHelpers>()
	{
		return UPCGBlueprintHelpers::StaticClass();
	}
	UPCGBlueprintHelpers::UPCGBlueprintHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBlueprintHelpers);
	UPCGBlueprintHelpers::~UPCGBlueprintHelpers() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBlueprintHelpers, UPCGBlueprintHelpers::StaticClass, TEXT("UPCGBlueprintHelpers"), &Z_Registration_Info_UClass_UPCGBlueprintHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBlueprintHelpers), 2629396615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_2178363490(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
