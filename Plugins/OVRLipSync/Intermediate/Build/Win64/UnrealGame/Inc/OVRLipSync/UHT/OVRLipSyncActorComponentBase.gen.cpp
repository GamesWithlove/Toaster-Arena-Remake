// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSyncActorComponentBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncActorComponentBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase_NoRegister();
OVRLIPSYNC_API UFunction* Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOVRLipSyncVisemesDataReadyDelegate ***********************************
struct Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOVRLipSyncVisemesDataReadyDelegate constinit property declarations ***
// ********** End Delegate FOVRLipSyncVisemesDataReadyDelegate constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OVRLipSync, nullptr, "OVRLipSyncVisemesDataReadyDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOVRLipSyncVisemesDataReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OVRLipSyncVisemesDataReadyDelegate)
{
	OVRLipSyncVisemesDataReadyDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOVRLipSyncVisemesDataReadyDelegate *************************************

// ********** Begin Class UOVRLipSyncActorComponentBase Function AssignVisemesToMorphTargets *******
struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics
{
	struct OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms
	{
		USkeletalMeshComponent* Mesh;
		TArray<FString> MorphTargetNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "MorphTargetNames" },
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Set skeletal mesh morph targets to the predicted viseme scores" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AssignVisemesToMorphTargets constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AssignVisemesToMorphTargets constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AssignVisemesToMorphTargets Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_Inner = { "MorphTargetNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames = { "MorphTargetNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms, MorphTargetNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetNames_MetaData), NewProp_MorphTargetNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers) < 2048);
// ********** End Function AssignVisemesToMorphTargets Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, nullptr, "AssignVisemesToMorphTargets", 	Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncActorComponentBase::execAssignVisemesToMorphTargets)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
	P_GET_TARRAY_REF(FString,Z_Param_Out_MorphTargetNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignVisemesToMorphTargets(Z_Param_Mesh,Z_Param_Out_MorphTargetNames);
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncActorComponentBase Function AssignVisemesToMorphTargets *********

// ********** Begin Class UOVRLipSyncActorComponentBase Function GetLaughterScore ******************
struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics
{
	struct OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Returns predicted laughter probability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLaughterScore constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLaughterScore constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLaughterScore Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers) < 2048);
// ********** End Function GetLaughterScore Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, nullptr, "GetLaughterScore", 	Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncActorComponentBase::execGetLaughterScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLaughterScore();
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncActorComponentBase Function GetLaughterScore ********************

// ********** Begin Class UOVRLipSyncActorComponentBase Function GetVisemeNames ********************
struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics
{
	struct OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Returns list of viseme names" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVisemeNames constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVisemeNames constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVisemeNames Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers) < 2048);
// ********** End Function GetVisemeNames Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, nullptr, "GetVisemeNames", 	Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncActorComponentBase::execGetVisemeNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetVisemeNames();
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncActorComponentBase Function GetVisemeNames **********************

// ********** Begin Class UOVRLipSyncActorComponentBase Function GetVisemes ************************
struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics
{
	struct OVRLipSyncActorComponentBase_eventGetVisemes_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Returns last predicted viseme scores" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVisemes constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVisemes constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVisemes Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventGetVisemes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers) < 2048);
// ********** End Function GetVisemes Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, nullptr, "GetVisemes", 	Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::OVRLipSyncActorComponentBase_eventGetVisemes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::OVRLipSyncActorComponentBase_eventGetVisemes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncActorComponentBase::execGetVisemes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetVisemes();
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncActorComponentBase Function GetVisemes **************************

// ********** Begin Class UOVRLipSyncActorComponentBase ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase;
UClass* UOVRLipSyncActorComponentBase::GetPrivateStaticClass()
{
	using TClass = UOVRLipSyncActorComponentBase;
	if (!Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OVRLipSyncActorComponentBase"),
			Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase.InnerSingleton,
			StaticRegisterNativesUOVRLipSyncActorComponentBase,
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
	return Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase_NoRegister()
{
	return UOVRLipSyncActorComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OVRLipSyncActorComponentBase.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVisemesReady_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Event triggered when new prediction is ready" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOVRLipSyncActorComponentBase constinit property declarations ************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVisemesReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOVRLipSyncActorComponentBase constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AssignVisemesToMorphTargets"), .Pointer = &UOVRLipSyncActorComponentBase::execAssignVisemesToMorphTargets },
		{ .NameUTF8 = UTF8TEXT("GetLaughterScore"), .Pointer = &UOVRLipSyncActorComponentBase::execGetLaughterScore },
		{ .NameUTF8 = UTF8TEXT("GetVisemeNames"), .Pointer = &UOVRLipSyncActorComponentBase::execGetVisemeNames },
		{ .NameUTF8 = UTF8TEXT("GetVisemes"), .Pointer = &UOVRLipSyncActorComponentBase::execGetVisemes },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets, "AssignVisemesToMorphTargets" }, // 337651846
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore, "GetLaughterScore" }, // 3566288667
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames, "GetVisemeNames" }, // 1381122928
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes, "GetVisemes" }, // 3791204382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncActorComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics

// ********** Begin Class UOVRLipSyncActorComponentBase Property Definitions ***********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady = { "OnVisemesReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncActorComponentBase, OnVisemesReady), Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVisemesReady_MetaData), NewProp_OnVisemesReady_MetaData) }; // 2437531009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers) < 2048);
// ********** End Class UOVRLipSyncActorComponentBase Property Definitions *************************
UObject* (*const Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::ClassParams = {
	&UOVRLipSyncActorComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::Class_MetaDataParams)
};
void UOVRLipSyncActorComponentBase::StaticRegisterNativesUOVRLipSyncActorComponentBase()
{
	UClass* Class = UOVRLipSyncActorComponentBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase()
{
	if (!Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase.OuterSingleton, Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOVRLipSyncActorComponentBase);
UOVRLipSyncActorComponentBase::~UOVRLipSyncActorComponentBase() {}
// ********** End Class UOVRLipSyncActorComponentBase **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h__Script_OVRLipSync_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOVRLipSyncActorComponentBase, UOVRLipSyncActorComponentBase::StaticClass, TEXT("UOVRLipSyncActorComponentBase"), &Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOVRLipSyncActorComponentBase), 4072617307U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h__Script_OVRLipSync_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h__Script_OVRLipSync_2072363993{
	TEXT("/Script/OVRLipSync"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h__Script_OVRLipSync_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h__Script_OVRLipSync_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
