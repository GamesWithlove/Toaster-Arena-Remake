// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshSimple.h"
#include "Mesh/RealtimeMeshCardRepresentation.h"
#include "Mesh/RealtimeMeshDistanceField.h"
#include "RealtimeMeshNoExportTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshSimple() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMesh();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshComponent_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimple();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimple_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus();
REALTIMEMESHCOMPONENT_API UFunction* Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature();
REALTIMEMESHCOMPONENT_API UFunction* Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshDistanceField();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshLODKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamRange();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FRealtimeMeshSimpleCompletionCallback *********************************
struct Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics
{
	struct _Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCompletionCallback_Parms
	{
		ERealtimeMeshProxyUpdateStatus ProxyUpdateResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRealtimeMeshSimpleCompletionCallback constinit property declarations *
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProxyUpdateResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProxyUpdateResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRealtimeMeshSimpleCompletionCallback constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRealtimeMeshSimpleCompletionCallback Property Definitions ************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::NewProp_ProxyUpdateResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::NewProp_ProxyUpdateResult = { "ProxyUpdateResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCompletionCallback_Parms, ProxyUpdateResult), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus, METADATA_PARAMS(0, nullptr) }; // 2983683645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::NewProp_ProxyUpdateResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::NewProp_ProxyUpdateResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRealtimeMeshSimpleCompletionCallback Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent, nullptr, "RealtimeMeshSimpleCompletionCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::_Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCompletionCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::_Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCompletionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRealtimeMeshSimpleCompletionCallback_DelegateWrapper(const FScriptDelegate& RealtimeMeshSimpleCompletionCallback, ERealtimeMeshProxyUpdateStatus ProxyUpdateResult)
{
	struct _Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCompletionCallback_Parms
	{
		ERealtimeMeshProxyUpdateStatus ProxyUpdateResult;
	};
	_Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCompletionCallback_Parms Parms;
	Parms.ProxyUpdateResult=ProxyUpdateResult;
	RealtimeMeshSimpleCompletionCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FRealtimeMeshSimpleCompletionCallback ***********************************

// ********** Begin Delegate FRealtimeMeshSimpleCollisionCompletionCallback ************************
struct Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics
{
	struct _Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCollisionCompletionCallback_Parms
	{
		ERealtimeMeshCollisionUpdateResult CollisionResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRealtimeMeshSimpleCollisionCompletionCallback constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRealtimeMeshSimpleCollisionCompletionCallback constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRealtimeMeshSimpleCollisionCompletionCallback Property Definitions ***
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::NewProp_CollisionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::NewProp_CollisionResult = { "CollisionResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCollisionCompletionCallback_Parms, CollisionResult), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult, METADATA_PARAMS(0, nullptr) }; // 3721977398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::NewProp_CollisionResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::NewProp_CollisionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRealtimeMeshSimpleCollisionCompletionCallback Property Definitions *****
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent, nullptr, "RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::_Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCollisionCompletionCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::_Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCollisionCompletionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRealtimeMeshSimpleCollisionCompletionCallback_DelegateWrapper(const FScriptDelegate& RealtimeMeshSimpleCollisionCompletionCallback, ERealtimeMeshCollisionUpdateResult CollisionResult)
{
	struct _Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCollisionCompletionCallback_Parms
	{
		ERealtimeMeshCollisionUpdateResult CollisionResult;
	};
	_Script_RealtimeMeshComponent_eventRealtimeMeshSimpleCollisionCompletionCallback_Parms Parms;
	Parms.CollisionResult=CollisionResult;
	RealtimeMeshSimpleCollisionCompletionCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FRealtimeMeshSimpleCollisionCompletionCallback **************************

// ********** Begin Class URealtimeMeshSimple Function CreateSection *******************************
struct Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics
{
	struct FInt32RangeBound
	{
		TEnumAsByte<ERangeBoundTypes::Type> Type;
		int32 Value;
	};

	struct FInt32Range
	{
		FInt32RangeBound LowerBound;
		FInt32RangeBound UpperBound;
	};

	struct FRealtimeMeshStreamRange
	{
		FInt32Range Vertices;
		FInt32Range Indices;
	};

	struct FRealtimeMeshSectionConfig
	{
		int32 MaterialSlot;
		bool bIsVisible;
		bool bCastsShadow;
		bool bIsMainPassRenderable;
		bool bForceOpaque;
	};

	struct FRealtimeMeshSectionKey
	{
	};

	struct RealtimeMeshSimple_eventCreateSection_Parms
	{
		FRealtimeMeshSectionKey SectionKey;
		FRealtimeMeshSectionConfig Config;
		FRealtimeMeshStreamRange StreamRange;
		bool bShouldCreateCollision;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Config, StreamRange, OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "CreateSection" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamRange_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSection constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamRange;
	static void NewProp_bShouldCreateCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCreateCollision;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSection constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSection Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_SectionKey = { "SectionKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSection_Parms, SectionKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionKey_MetaData), NewProp_SectionKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSection_Parms, Config), Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_StreamRange = { "StreamRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSection_Parms, StreamRange), Z_Construct_UScriptStruct_FRealtimeMeshStreamRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamRange_MetaData), NewProp_StreamRange_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_bShouldCreateCollision_SetBit(void* Obj)
{
	((RealtimeMeshSimple_eventCreateSection_Parms*)Obj)->bShouldCreateCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_bShouldCreateCollision = { "bShouldCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimple_eventCreateSection_Parms), &Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_bShouldCreateCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSection_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_SectionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_StreamRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_bShouldCreateCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::PropPointers) < 2048);
// ********** End Function CreateSection Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "CreateSection", 	Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::RealtimeMeshSimple_eventCreateSection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::RealtimeMeshSimple_eventCreateSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_CreateSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_CreateSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execCreateSection)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionKey,Z_Param_Out_SectionKey);
	P_GET_STRUCT_REF(FRealtimeMeshSectionConfig,Z_Param_Out_Config);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRange,Z_Param_Out_StreamRange);
	P_GET_UBOOL(Z_Param_bShouldCreateCollision);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSection(Z_Param_Out_SectionKey,Z_Param_Out_Config,Z_Param_Out_StreamRange,Z_Param_bShouldCreateCollision,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function CreateSection *********************************

// ********** Begin Class URealtimeMeshSimple Function CreateSectionGroup **************************
struct Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshSimple_eventCreateSectionGroup_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		URealtimeMeshStreamSet* MeshData;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "CreateSectionGroup" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSectionGroup constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSectionGroup constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSectionGroup Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSectionGroup_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSectionGroup_Parms, MeshData), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSectionGroup_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::NewProp_MeshData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::PropPointers) < 2048);
// ********** End Function CreateSectionGroup Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "CreateSectionGroup", 	Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::RealtimeMeshSimple_eventCreateSectionGroup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::RealtimeMeshSimple_eventCreateSectionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execCreateSectionGroup)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_MeshData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSectionGroup(Z_Param_Out_SectionGroupKey,Z_Param_MeshData,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function CreateSectionGroup ****************************

// ********** Begin Class URealtimeMeshSimple Function CreateSectionGroupUnique ********************
struct Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct FRealtimeMeshLODKey
	{
	};

	struct RealtimeMeshSimple_eventCreateSectionGroupUnique_Parms
	{
		FRealtimeMeshLODKey LODKey;
		URealtimeMeshStreamSet* MeshData;
		FScriptDelegate OnComplete;
		FRealtimeMeshSectionGroupKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "CreateSectionGroupUnique" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSectionGroupUnique constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSectionGroupUnique constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSectionGroupUnique Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::NewProp_LODKey = { "LODKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSectionGroupUnique_Parms, LODKey), Z_Construct_UScriptStruct_FRealtimeMeshLODKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODKey_MetaData), NewProp_LODKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSectionGroupUnique_Parms, MeshData), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSectionGroupUnique_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventCreateSectionGroupUnique_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::NewProp_LODKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::NewProp_MeshData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::PropPointers) < 2048);
// ********** End Function CreateSectionGroupUnique Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "CreateSectionGroupUnique", 	Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::RealtimeMeshSimple_eventCreateSectionGroupUnique_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::RealtimeMeshSimple_eventCreateSectionGroupUnique_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execCreateSectionGroupUnique)
{
	P_GET_STRUCT_REF(FRealtimeMeshLODKey,Z_Param_Out_LODKey);
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_MeshData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSectionGroupKey*)Z_Param__Result=P_THIS->CreateSectionGroupUnique(Z_Param_Out_LODKey,Z_Param_MeshData,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function CreateSectionGroupUnique **********************

// ********** Begin Class URealtimeMeshSimple Function GetCollisionConfig **************************
struct Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics
{
	struct FRealtimeMeshCollisionConfiguration
	{
		bool bUseComplexAsSimpleCollision;
		bool bUseAsyncCook;
		bool bShouldFastCookMeshes;
		bool bFlipNormals;
		bool bDeformableMesh;
		bool bMergeAllMeshes;
	};

	struct RealtimeMeshSimple_eventGetCollisionConfig_Parms
	{
		FRealtimeMeshCollisionConfiguration ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCollisionConfig constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCollisionConfig constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCollisionConfig Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventGetCollisionConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::PropPointers) < 2048);
// ********** End Function GetCollisionConfig Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "GetCollisionConfig", 	Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::RealtimeMeshSimple_eventGetCollisionConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::RealtimeMeshSimple_eventGetCollisionConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execGetCollisionConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshCollisionConfiguration*)Z_Param__Result=P_THIS->GetCollisionConfig();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function GetCollisionConfig ****************************

// ********** Begin Class URealtimeMeshSimple Function GetSectionConfig ****************************
struct Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics
{
	struct FRealtimeMeshSectionConfig
	{
		int32 MaterialSlot;
		bool bIsVisible;
		bool bCastsShadow;
		bool bIsMainPassRenderable;
		bool bForceOpaque;
	};

	struct FRealtimeMeshSectionKey
	{
	};

	struct RealtimeMeshSimple_eventGetSectionConfig_Parms
	{
		FRealtimeMeshSectionKey SectionKey;
		FRealtimeMeshSectionConfig ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SectionKey" },
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSectionConfig constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSectionConfig constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSectionConfig Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::NewProp_SectionKey = { "SectionKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventGetSectionConfig_Parms, SectionKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionKey_MetaData), NewProp_SectionKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventGetSectionConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::NewProp_SectionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::PropPointers) < 2048);
// ********** End Function GetSectionConfig Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "GetSectionConfig", 	Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::RealtimeMeshSimple_eventGetSectionConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::RealtimeMeshSimple_eventGetSectionConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execGetSectionConfig)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionKey,Z_Param_Out_SectionKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSectionConfig*)Z_Param__Result=P_THIS->GetSectionConfig(Z_Param_Out_SectionKey);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function GetSectionConfig ******************************

// ********** Begin Class URealtimeMeshSimple Function GetSectionsInGroup **************************
struct Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshSimple_eventGetSectionsInGroup_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		TArray<FRealtimeMeshSectionKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSectionsInGroup constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSectionsInGroup constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSectionsInGroup Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventGetSectionsInGroup_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventGetSectionsInGroup_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::PropPointers) < 2048);
// ********** End Function GetSectionsInGroup Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "GetSectionsInGroup", 	Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::RealtimeMeshSimple_eventGetSectionsInGroup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::RealtimeMeshSimple_eventGetSectionsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execGetSectionsInGroup)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRealtimeMeshSectionKey>*)Z_Param__Result=P_THIS->GetSectionsInGroup(Z_Param_Out_SectionGroupKey);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function GetSectionsInGroup ****************************

// ********** Begin Class URealtimeMeshSimple Function GetSimpleGeometry ***************************
struct Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimple_eventGetSimpleGeometry_Parms
	{
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSimpleGeometry constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSimpleGeometry constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSimpleGeometry Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventGetSimpleGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::PropPointers) < 2048);
// ********** End Function GetSimpleGeometry Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "GetSimpleGeometry", 	Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::RealtimeMeshSimple_eventGetSimpleGeometry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::RealtimeMeshSimple_eventGetSimpleGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execGetSimpleGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=P_THIS->GetSimpleGeometry();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function GetSimpleGeometry *****************************

// ********** Begin Class URealtimeMeshSimple Function InitializeRealtimeMeshSimple ****************
struct Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics
{
	struct RealtimeMeshSimple_eventInitializeRealtimeMeshSimple_Parms
	{
		URealtimeMeshComponent* Owner;
		URealtimeMeshSimple* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeRealtimeMeshSimple constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeRealtimeMeshSimple constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeRealtimeMeshSimple Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventInitializeRealtimeMeshSimple_Parms, Owner), Z_Construct_UClass_URealtimeMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventInitializeRealtimeMeshSimple_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::PropPointers) < 2048);
// ********** End Function InitializeRealtimeMeshSimple Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "InitializeRealtimeMeshSimple", 	Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::RealtimeMeshSimple_eventInitializeRealtimeMeshSimple_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::RealtimeMeshSimple_eventInitializeRealtimeMeshSimple_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execInitializeRealtimeMeshSimple)
{
	P_GET_OBJECT(URealtimeMeshComponent,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshSimple**)Z_Param__Result=URealtimeMeshSimple::InitializeRealtimeMeshSimple(Z_Param_Owner);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function InitializeRealtimeMeshSimple ******************

// ********** Begin Class URealtimeMeshSimple Function IsSectionCastingShadow **********************
struct Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct RealtimeMeshSimple_eventIsSectionCastingShadow_Parms
	{
		FRealtimeMeshSectionKey SectionKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SectionKey" },
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSectionCastingShadow constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSectionCastingShadow constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSectionCastingShadow Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::NewProp_SectionKey = { "SectionKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventIsSectionCastingShadow_Parms, SectionKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionKey_MetaData), NewProp_SectionKey_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshSimple_eventIsSectionCastingShadow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimple_eventIsSectionCastingShadow_Parms), &Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::NewProp_SectionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::PropPointers) < 2048);
// ********** End Function IsSectionCastingShadow Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "IsSectionCastingShadow", 	Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::RealtimeMeshSimple_eventIsSectionCastingShadow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::RealtimeMeshSimple_eventIsSectionCastingShadow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execIsSectionCastingShadow)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionKey,Z_Param_Out_SectionKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSectionCastingShadow(Z_Param_Out_SectionKey);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function IsSectionCastingShadow ************************

// ********** Begin Class URealtimeMeshSimple Function IsSectionVisible ****************************
struct Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct RealtimeMeshSimple_eventIsSectionVisible_Parms
	{
		FRealtimeMeshSectionKey SectionKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SectionKey" },
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSectionVisible constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSectionVisible constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSectionVisible Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::NewProp_SectionKey = { "SectionKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventIsSectionVisible_Parms, SectionKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionKey_MetaData), NewProp_SectionKey_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshSimple_eventIsSectionVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimple_eventIsSectionVisible_Parms), &Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::NewProp_SectionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::PropPointers) < 2048);
// ********** End Function IsSectionVisible Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "IsSectionVisible", 	Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::RealtimeMeshSimple_eventIsSectionVisible_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::RealtimeMeshSimple_eventIsSectionVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execIsSectionVisible)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionKey,Z_Param_Out_SectionKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSectionVisible(Z_Param_Out_SectionKey);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function IsSectionVisible ******************************

// ********** Begin Class URealtimeMeshSimple Function RemoveSection *******************************
struct Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct RealtimeMeshSimple_eventRemoveSection_Parms
	{
		FRealtimeMeshSectionKey SectionKey;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SectionKey, OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "RemoveSection" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveSection constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionKey;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveSection constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveSection Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::NewProp_SectionKey = { "SectionKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventRemoveSection_Parms, SectionKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionKey_MetaData), NewProp_SectionKey_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventRemoveSection_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::NewProp_SectionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::PropPointers) < 2048);
// ********** End Function RemoveSection Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "RemoveSection", 	Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::RealtimeMeshSimple_eventRemoveSection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::RealtimeMeshSimple_eventRemoveSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execRemoveSection)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionKey,Z_Param_Out_SectionKey);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSection(Z_Param_Out_SectionKey,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function RemoveSection *********************************

// ********** Begin Class URealtimeMeshSimple Function RemoveSectionGroup **************************
struct Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshSimple_eventRemoveSectionGroup_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SectionGroupKey, OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "RemoveSectionGroup" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveSectionGroup constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveSectionGroup constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveSectionGroup Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventRemoveSectionGroup_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventRemoveSectionGroup_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::PropPointers) < 2048);
// ********** End Function RemoveSectionGroup Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "RemoveSectionGroup", 	Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::RealtimeMeshSimple_eventRemoveSectionGroup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::RealtimeMeshSimple_eventRemoveSectionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execRemoveSectionGroup)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSectionGroup(Z_Param_Out_SectionGroupKey,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function RemoveSectionGroup ****************************

// ********** Begin Class URealtimeMeshSimple Function SetCardRepresentation ***********************
struct Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics
{
	struct RealtimeMeshSimple_eventSetCardRepresentation_Parms
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardRepresentation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCardRepresentation constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardRepresentation;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCardRepresentation constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCardRepresentation Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::NewProp_CardRepresentation = { "CardRepresentation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetCardRepresentation_Parms, CardRepresentation), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardRepresentation_MetaData), NewProp_CardRepresentation_MetaData) }; // 3111937523
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetCardRepresentation_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::NewProp_CardRepresentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::PropPointers) < 2048);
// ********** End Function SetCardRepresentation Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "SetCardRepresentation", 	Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::RealtimeMeshSimple_eventSetCardRepresentation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::RealtimeMeshSimple_eventSetCardRepresentation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execSetCardRepresentation)
{
	P_GET_STRUCT_REF(FRealtimeMeshCardRepresentation,Z_Param_Out_CardRepresentation);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCardRepresentation(Z_Param_Out_CardRepresentation,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function SetCardRepresentation *************************

// ********** Begin Class URealtimeMeshSimple Function SetCollisionConfig **************************
struct Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics
{
	struct FRealtimeMeshCollisionConfiguration
	{
		bool bUseComplexAsSimpleCollision;
		bool bUseAsyncCook;
		bool bShouldFastCookMeshes;
		bool bFlipNormals;
		bool bDeformableMesh;
		bool bMergeAllMeshes;
	};

	struct RealtimeMeshSimple_eventSetCollisionConfig_Parms
	{
		FRealtimeMeshCollisionConfiguration InCollisionConfig;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "SetCollisionConfig" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCollisionConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCollisionConfig constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCollisionConfig;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCollisionConfig constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCollisionConfig Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::NewProp_InCollisionConfig = { "InCollisionConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetCollisionConfig_Parms, InCollisionConfig), Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCollisionConfig_MetaData), NewProp_InCollisionConfig_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetCollisionConfig_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3985058849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::NewProp_InCollisionConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::PropPointers) < 2048);
// ********** End Function SetCollisionConfig Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "SetCollisionConfig", 	Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::RealtimeMeshSimple_eventSetCollisionConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::RealtimeMeshSimple_eventSetCollisionConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execSetCollisionConfig)
{
	P_GET_STRUCT_REF(FRealtimeMeshCollisionConfiguration,Z_Param_Out_InCollisionConfig);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCollisionConfig(Z_Param_Out_InCollisionConfig,FRealtimeMeshSimpleCollisionCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function SetCollisionConfig ****************************

// ********** Begin Class URealtimeMeshSimple Function SetDistanceField ****************************
struct Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics
{
	struct RealtimeMeshSimple_eventSetDistanceField_Parms
	{
		FRealtimeMeshDistanceField DistanceField;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceField_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDistanceField constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDistanceField constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDistanceField Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetDistanceField_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceField_MetaData), NewProp_DistanceField_MetaData) }; // 3895171973
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetDistanceField_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::NewProp_DistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::PropPointers) < 2048);
// ********** End Function SetDistanceField Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "SetDistanceField", 	Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::RealtimeMeshSimple_eventSetDistanceField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::RealtimeMeshSimple_eventSetDistanceField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execSetDistanceField)
{
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDistanceField(Z_Param_Out_DistanceField,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function SetDistanceField ******************************

// ********** Begin Class URealtimeMeshSimple Function SetSectionCastShadow ************************
struct Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct RealtimeMeshSimple_eventSetSectionCastShadow_Parms
	{
		FRealtimeMeshSectionKey SectionKey;
		bool bCastShadow;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SectionKey, OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "SetSectionCastShadow" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSectionCastShadow constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionKey;
	static void NewProp_bCastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSectionCastShadow constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSectionCastShadow Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::NewProp_SectionKey = { "SectionKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetSectionCastShadow_Parms, SectionKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionKey_MetaData), NewProp_SectionKey_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::NewProp_bCastShadow_SetBit(void* Obj)
{
	((RealtimeMeshSimple_eventSetSectionCastShadow_Parms*)Obj)->bCastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimple_eventSetSectionCastShadow_Parms), &Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetSectionCastShadow_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::NewProp_SectionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::NewProp_bCastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::PropPointers) < 2048);
// ********** End Function SetSectionCastShadow Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "SetSectionCastShadow", 	Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::RealtimeMeshSimple_eventSetSectionCastShadow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::RealtimeMeshSimple_eventSetSectionCastShadow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execSetSectionCastShadow)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionKey,Z_Param_Out_SectionKey);
	P_GET_UBOOL(Z_Param_bCastShadow);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSectionCastShadow(Z_Param_Out_SectionKey,Z_Param_bCastShadow,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function SetSectionCastShadow **************************

// ********** Begin Class URealtimeMeshSimple Function SetSectionVisibility ************************
struct Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct RealtimeMeshSimple_eventSetSectionVisibility_Parms
	{
		FRealtimeMeshSectionKey SectionKey;
		bool bIsVisible;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SectionKey, OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "SetSectionVisibility" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSectionVisibility constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionKey;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSectionVisibility constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSectionVisibility Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::NewProp_SectionKey = { "SectionKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetSectionVisibility_Parms, SectionKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionKey_MetaData), NewProp_SectionKey_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((RealtimeMeshSimple_eventSetSectionVisibility_Parms*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimple_eventSetSectionVisibility_Parms), &Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetSectionVisibility_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::NewProp_SectionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::PropPointers) < 2048);
// ********** End Function SetSectionVisibility Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "SetSectionVisibility", 	Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::RealtimeMeshSimple_eventSetSectionVisibility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::RealtimeMeshSimple_eventSetSectionVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execSetSectionVisibility)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionKey,Z_Param_Out_SectionKey);
	P_GET_UBOOL(Z_Param_bIsVisible);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSectionVisibility(Z_Param_Out_SectionKey,Z_Param_bIsVisible,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function SetSectionVisibility **************************

// ********** Begin Class URealtimeMeshSimple Function SetShouldAutoCreateSectionsForPolyGroups ****
struct Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshSimple_eventSetShouldAutoCreateSectionsForPolyGroups_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetShouldAutoCreateSectionsForPolyGroups constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetShouldAutoCreateSectionsForPolyGroups constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetShouldAutoCreateSectionsForPolyGroups Property Definitions *********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetShouldAutoCreateSectionsForPolyGroups_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((RealtimeMeshSimple_eventSetShouldAutoCreateSectionsForPolyGroups_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimple_eventSetShouldAutoCreateSectionsForPolyGroups_Parms), &Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::PropPointers) < 2048);
// ********** End Function SetShouldAutoCreateSectionsForPolyGroups Property Definitions ***********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "SetShouldAutoCreateSectionsForPolyGroups", 	Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::RealtimeMeshSimple_eventSetShouldAutoCreateSectionsForPolyGroups_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::RealtimeMeshSimple_eventSetShouldAutoCreateSectionsForPolyGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execSetShouldAutoCreateSectionsForPolyGroups)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShouldAutoCreateSectionsForPolyGroups(Z_Param_Out_SectionGroupKey,Z_Param_bNewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function SetShouldAutoCreateSectionsForPolyGroups ******

// ********** Begin Class URealtimeMeshSimple Function SetSimpleGeometry ***************************
struct Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimple_eventSetSimpleGeometry_Parms
	{
		FRealtimeMeshSimpleGeometry InSimpleGeometry;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "SetSimpleGeometry" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSimpleGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSimpleGeometry constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSimpleGeometry;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSimpleGeometry constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSimpleGeometry Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::NewProp_InSimpleGeometry = { "InSimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetSimpleGeometry_Parms, InSimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSimpleGeometry_MetaData), NewProp_InSimpleGeometry_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventSetSimpleGeometry_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCollisionCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3985058849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::NewProp_InSimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::PropPointers) < 2048);
// ********** End Function SetSimpleGeometry Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "SetSimpleGeometry", 	Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::RealtimeMeshSimple_eventSetSimpleGeometry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::RealtimeMeshSimple_eventSetSimpleGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execSetSimpleGeometry)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_InSimpleGeometry);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSimpleGeometry(Z_Param_Out_InSimpleGeometry,FRealtimeMeshSimpleCollisionCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function SetSimpleGeometry *****************************

// ********** Begin Class URealtimeMeshSimple Function ShouldAutoCreateSectionsForPolygonGroups ****
struct Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshSimple_eventShouldAutoCreateSectionsForPolygonGroups_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldAutoCreateSectionsForPolygonGroups constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldAutoCreateSectionsForPolygonGroups constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldAutoCreateSectionsForPolygonGroups Property Definitions *********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventShouldAutoCreateSectionsForPolygonGroups_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshSimple_eventShouldAutoCreateSectionsForPolygonGroups_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimple_eventShouldAutoCreateSectionsForPolygonGroups_Parms), &Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::PropPointers) < 2048);
// ********** End Function ShouldAutoCreateSectionsForPolygonGroups Property Definitions ***********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "ShouldAutoCreateSectionsForPolygonGroups", 	Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::RealtimeMeshSimple_eventShouldAutoCreateSectionsForPolygonGroups_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::RealtimeMeshSimple_eventShouldAutoCreateSectionsForPolygonGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execShouldAutoCreateSectionsForPolygonGroups)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldAutoCreateSectionsForPolygonGroups(Z_Param_Out_SectionGroupKey);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function ShouldAutoCreateSectionsForPolygonGroups ******

// ********** Begin Class URealtimeMeshSimple Function UpdateSectionConfig *************************
struct Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics
{
	struct FRealtimeMeshSectionConfig
	{
		int32 MaterialSlot;
		bool bIsVisible;
		bool bCastsShadow;
		bool bIsMainPassRenderable;
		bool bForceOpaque;
	};

	struct FRealtimeMeshSectionKey
	{
	};

	struct RealtimeMeshSimple_eventUpdateSectionConfig_Parms
	{
		FRealtimeMeshSectionKey SectionKey;
		FRealtimeMeshSectionConfig Config;
		bool bShouldCreateCollision;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SectionKey, bShouldCreateCollision, OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "UpdateSectionConfig" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSectionConfig constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static void NewProp_bShouldCreateCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCreateCollision;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateSectionConfig constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateSectionConfig Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_SectionKey = { "SectionKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventUpdateSectionConfig_Parms, SectionKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionKey_MetaData), NewProp_SectionKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventUpdateSectionConfig_Parms, Config), Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_bShouldCreateCollision_SetBit(void* Obj)
{
	((RealtimeMeshSimple_eventUpdateSectionConfig_Parms*)Obj)->bShouldCreateCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_bShouldCreateCollision = { "bShouldCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimple_eventUpdateSectionConfig_Parms), &Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_bShouldCreateCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventUpdateSectionConfig_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_SectionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_bShouldCreateCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::PropPointers) < 2048);
// ********** End Function UpdateSectionConfig Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "UpdateSectionConfig", 	Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::RealtimeMeshSimple_eventUpdateSectionConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::RealtimeMeshSimple_eventUpdateSectionConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execUpdateSectionConfig)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionKey,Z_Param_Out_SectionKey);
	P_GET_STRUCT_REF(FRealtimeMeshSectionConfig,Z_Param_Out_Config);
	P_GET_UBOOL(Z_Param_bShouldCreateCollision);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSectionConfig(Z_Param_Out_SectionKey,Z_Param_Out_Config,Z_Param_bShouldCreateCollision,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function UpdateSectionConfig ***************************

// ********** Begin Class URealtimeMeshSimple Function UpdateSectionGroup **************************
struct Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshSimple_eventUpdateSectionGroup_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		URealtimeMeshStreamSet* MeshData;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnComplete" },
		{ "Category", "Components|RealtimeMesh" },
		{ "DisplayName", "UpdateSectionGroup" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSectionGroup constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateSectionGroup constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateSectionGroup Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventUpdateSectionGroup_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventUpdateSectionGroup_Parms, MeshData), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimple_eventUpdateSectionGroup_Parms, OnComplete), Z_Construct_UDelegateFunction_RealtimeMeshComponent_RealtimeMeshSimpleCompletionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3451452730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::NewProp_MeshData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::PropPointers) < 2048);
// ********** End Function UpdateSectionGroup Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimple, nullptr, "UpdateSectionGroup", 	Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::RealtimeMeshSimple_eventUpdateSectionGroup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::RealtimeMeshSimple_eventUpdateSectionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimple::execUpdateSectionGroup)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_MeshData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSectionGroup(Z_Param_Out_SectionGroupKey,Z_Param_MeshData,FRealtimeMeshSimpleCompletionCallback(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimple Function UpdateSectionGroup ****************************

// ********** Begin Class URealtimeMeshSimple ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshSimple;
UClass* URealtimeMeshSimple::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshSimple;
	if (!Z_Registration_Info_UClass_URealtimeMeshSimple.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshSimple"),
			Z_Registration_Info_UClass_URealtimeMeshSimple.InnerSingleton,
			StaticRegisterNativesURealtimeMeshSimple,
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
	return Z_Registration_Info_UClass_URealtimeMeshSimple.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshSimple_NoRegister()
{
	return URealtimeMeshSimple::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshSimple_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Activation Cooking" },
		{ "IncludePath", "RealtimeMeshSimple.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSimple.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshSimple constinit property declarations **********************
// ********** End Class URealtimeMeshSimple constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSection"), .Pointer = &URealtimeMeshSimple::execCreateSection },
		{ .NameUTF8 = UTF8TEXT("CreateSectionGroup"), .Pointer = &URealtimeMeshSimple::execCreateSectionGroup },
		{ .NameUTF8 = UTF8TEXT("CreateSectionGroupUnique"), .Pointer = &URealtimeMeshSimple::execCreateSectionGroupUnique },
		{ .NameUTF8 = UTF8TEXT("GetCollisionConfig"), .Pointer = &URealtimeMeshSimple::execGetCollisionConfig },
		{ .NameUTF8 = UTF8TEXT("GetSectionConfig"), .Pointer = &URealtimeMeshSimple::execGetSectionConfig },
		{ .NameUTF8 = UTF8TEXT("GetSectionsInGroup"), .Pointer = &URealtimeMeshSimple::execGetSectionsInGroup },
		{ .NameUTF8 = UTF8TEXT("GetSimpleGeometry"), .Pointer = &URealtimeMeshSimple::execGetSimpleGeometry },
		{ .NameUTF8 = UTF8TEXT("InitializeRealtimeMeshSimple"), .Pointer = &URealtimeMeshSimple::execInitializeRealtimeMeshSimple },
		{ .NameUTF8 = UTF8TEXT("IsSectionCastingShadow"), .Pointer = &URealtimeMeshSimple::execIsSectionCastingShadow },
		{ .NameUTF8 = UTF8TEXT("IsSectionVisible"), .Pointer = &URealtimeMeshSimple::execIsSectionVisible },
		{ .NameUTF8 = UTF8TEXT("RemoveSection"), .Pointer = &URealtimeMeshSimple::execRemoveSection },
		{ .NameUTF8 = UTF8TEXT("RemoveSectionGroup"), .Pointer = &URealtimeMeshSimple::execRemoveSectionGroup },
		{ .NameUTF8 = UTF8TEXT("SetCardRepresentation"), .Pointer = &URealtimeMeshSimple::execSetCardRepresentation },
		{ .NameUTF8 = UTF8TEXT("SetCollisionConfig"), .Pointer = &URealtimeMeshSimple::execSetCollisionConfig },
		{ .NameUTF8 = UTF8TEXT("SetDistanceField"), .Pointer = &URealtimeMeshSimple::execSetDistanceField },
		{ .NameUTF8 = UTF8TEXT("SetSectionCastShadow"), .Pointer = &URealtimeMeshSimple::execSetSectionCastShadow },
		{ .NameUTF8 = UTF8TEXT("SetSectionVisibility"), .Pointer = &URealtimeMeshSimple::execSetSectionVisibility },
		{ .NameUTF8 = UTF8TEXT("SetShouldAutoCreateSectionsForPolyGroups"), .Pointer = &URealtimeMeshSimple::execSetShouldAutoCreateSectionsForPolyGroups },
		{ .NameUTF8 = UTF8TEXT("SetSimpleGeometry"), .Pointer = &URealtimeMeshSimple::execSetSimpleGeometry },
		{ .NameUTF8 = UTF8TEXT("ShouldAutoCreateSectionsForPolygonGroups"), .Pointer = &URealtimeMeshSimple::execShouldAutoCreateSectionsForPolygonGroups },
		{ .NameUTF8 = UTF8TEXT("UpdateSectionConfig"), .Pointer = &URealtimeMeshSimple::execUpdateSectionConfig },
		{ .NameUTF8 = UTF8TEXT("UpdateSectionGroup"), .Pointer = &URealtimeMeshSimple::execUpdateSectionGroup },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshSimple_CreateSection, "CreateSection" }, // 2897697754
		{ &Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroup, "CreateSectionGroup" }, // 3656015118
		{ &Z_Construct_UFunction_URealtimeMeshSimple_CreateSectionGroupUnique, "CreateSectionGroupUnique" }, // 1634713874
		{ &Z_Construct_UFunction_URealtimeMeshSimple_GetCollisionConfig, "GetCollisionConfig" }, // 686535987
		{ &Z_Construct_UFunction_URealtimeMeshSimple_GetSectionConfig, "GetSectionConfig" }, // 1954841729
		{ &Z_Construct_UFunction_URealtimeMeshSimple_GetSectionsInGroup, "GetSectionsInGroup" }, // 3918592058
		{ &Z_Construct_UFunction_URealtimeMeshSimple_GetSimpleGeometry, "GetSimpleGeometry" }, // 822584117
		{ &Z_Construct_UFunction_URealtimeMeshSimple_InitializeRealtimeMeshSimple, "InitializeRealtimeMeshSimple" }, // 2550621521
		{ &Z_Construct_UFunction_URealtimeMeshSimple_IsSectionCastingShadow, "IsSectionCastingShadow" }, // 2551153130
		{ &Z_Construct_UFunction_URealtimeMeshSimple_IsSectionVisible, "IsSectionVisible" }, // 3844123121
		{ &Z_Construct_UFunction_URealtimeMeshSimple_RemoveSection, "RemoveSection" }, // 2398067249
		{ &Z_Construct_UFunction_URealtimeMeshSimple_RemoveSectionGroup, "RemoveSectionGroup" }, // 2632296801
		{ &Z_Construct_UFunction_URealtimeMeshSimple_SetCardRepresentation, "SetCardRepresentation" }, // 3785020085
		{ &Z_Construct_UFunction_URealtimeMeshSimple_SetCollisionConfig, "SetCollisionConfig" }, // 1801481235
		{ &Z_Construct_UFunction_URealtimeMeshSimple_SetDistanceField, "SetDistanceField" }, // 3829195854
		{ &Z_Construct_UFunction_URealtimeMeshSimple_SetSectionCastShadow, "SetSectionCastShadow" }, // 2954324965
		{ &Z_Construct_UFunction_URealtimeMeshSimple_SetSectionVisibility, "SetSectionVisibility" }, // 343552605
		{ &Z_Construct_UFunction_URealtimeMeshSimple_SetShouldAutoCreateSectionsForPolyGroups, "SetShouldAutoCreateSectionsForPolyGroups" }, // 400190772
		{ &Z_Construct_UFunction_URealtimeMeshSimple_SetSimpleGeometry, "SetSimpleGeometry" }, // 3600197649
		{ &Z_Construct_UFunction_URealtimeMeshSimple_ShouldAutoCreateSectionsForPolygonGroups, "ShouldAutoCreateSectionsForPolygonGroups" }, // 3442009370
		{ &Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionConfig, "UpdateSectionConfig" }, // 2319428432
		{ &Z_Construct_UFunction_URealtimeMeshSimple_UpdateSectionGroup, "UpdateSectionGroup" }, // 393547247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshSimple>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshSimple_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshSimple_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URealtimeMesh,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSimple_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshSimple_Statics::ClassParams = {
	&URealtimeMeshSimple::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSimple_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshSimple_Statics::Class_MetaDataParams)
};
void URealtimeMeshSimple::StaticRegisterNativesURealtimeMeshSimple()
{
	UClass* Class = URealtimeMeshSimple::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshSimple_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshSimple()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshSimple.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshSimple.OuterSingleton, Z_Construct_UClass_URealtimeMeshSimple_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshSimple.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshSimple);
URealtimeMeshSimple::~URealtimeMeshSimple() {}
// ********** End Class URealtimeMeshSimple ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshSimple, URealtimeMeshSimple::StaticClass, TEXT("URealtimeMeshSimple"), &Z_Registration_Info_UClass_URealtimeMeshSimple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshSimple), 3736248454U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h__Script_RealtimeMeshComponent_2229911338{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
