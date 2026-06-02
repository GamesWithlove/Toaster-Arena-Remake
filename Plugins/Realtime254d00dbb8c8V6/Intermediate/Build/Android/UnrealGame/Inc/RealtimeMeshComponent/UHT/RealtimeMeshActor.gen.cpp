// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshActor.h"
#include "RealtimeMeshNoExportTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshComponent_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStream_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamKey();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshActor Function GetRealtimeMeshComponent *********************
struct Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics
{
	struct RealtimeMeshActor_eventGetRealtimeMeshComponent_Parms
	{
		URealtimeMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMeshActor" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRealtimeMeshComponent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRealtimeMeshComponent constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRealtimeMeshComponent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventGetRealtimeMeshComponent_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::PropPointers) < 2048);
// ********** End Function GetRealtimeMeshComponent Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARealtimeMeshActor, nullptr, "GetRealtimeMeshComponent", 	Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::RealtimeMeshActor_eventGetRealtimeMeshComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::RealtimeMeshActor_eventGetRealtimeMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARealtimeMeshActor::execGetRealtimeMeshComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshComponent**)Z_Param__Result=P_THIS->GetRealtimeMeshComponent();
	P_NATIVE_END;
}
// ********** End Class ARealtimeMeshActor Function GetRealtimeMeshComponent ***********************

// ********** Begin Class ARealtimeMeshActor Function MakeMeshBuilder ******************************
struct Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics
{
	struct RealtimeMeshActor_eventMakeMeshBuilder_Parms
	{
		ERealtimeMeshSimpleStreamConfig WantedTangents;
		ERealtimeMeshSimpleStreamConfig WantedTexCoords;
		bool bWants32BitIndices;
		ERealtimeMeshSimpleStreamConfig WantedPolyGroupType;
		bool bWantsColors;
		int32 WantedTexCoordChannels;
		bool bKeepExistingData;
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh" },
		{ "CPP_Default_bKeepExistingData", "true" },
		{ "CPP_Default_bWants32BitIndices", "false" },
		{ "CPP_Default_bWantsColors", "true" },
		{ "CPP_Default_WantedPolyGroupType", "None" },
		{ "CPP_Default_WantedTangents", "Normal" },
		{ "CPP_Default_WantedTexCoordChannels", "1" },
		{ "CPP_Default_WantedTexCoords", "Normal" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeMeshBuilder constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_WantedTangents_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WantedTangents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WantedTexCoords_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WantedTexCoords;
	static void NewProp_bWants32BitIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWants32BitIndices;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WantedPolyGroupType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WantedPolyGroupType;
	static void NewProp_bWantsColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsColors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WantedTexCoordChannels;
	static void NewProp_bKeepExistingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepExistingData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeMeshBuilder constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeMeshBuilder Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTangents_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTangents = { "WantedTangents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeMeshBuilder_Parms, WantedTangents), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, METADATA_PARAMS(0, nullptr) }; // 1447252690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTexCoords_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTexCoords = { "WantedTexCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeMeshBuilder_Parms, WantedTexCoords), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, METADATA_PARAMS(0, nullptr) }; // 1447252690
void Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bWants32BitIndices_SetBit(void* Obj)
{
	((RealtimeMeshActor_eventMakeMeshBuilder_Parms*)Obj)->bWants32BitIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bWants32BitIndices = { "bWants32BitIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshActor_eventMakeMeshBuilder_Parms), &Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bWants32BitIndices_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedPolyGroupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedPolyGroupType = { "WantedPolyGroupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeMeshBuilder_Parms, WantedPolyGroupType), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, METADATA_PARAMS(0, nullptr) }; // 1447252690
void Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bWantsColors_SetBit(void* Obj)
{
	((RealtimeMeshActor_eventMakeMeshBuilder_Parms*)Obj)->bWantsColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bWantsColors = { "bWantsColors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshActor_eventMakeMeshBuilder_Parms), &Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bWantsColors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTexCoordChannels = { "WantedTexCoordChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeMeshBuilder_Parms, WantedTexCoordChannels), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bKeepExistingData_SetBit(void* Obj)
{
	((RealtimeMeshActor_eventMakeMeshBuilder_Parms*)Obj)->bKeepExistingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bKeepExistingData = { "bKeepExistingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshActor_eventMakeMeshBuilder_Parms), &Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bKeepExistingData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeMeshBuilder_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTangents_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTexCoords_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTexCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bWants32BitIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedPolyGroupType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedPolyGroupType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bWantsColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_WantedTexCoordChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_bKeepExistingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::PropPointers) < 2048);
// ********** End Function MakeMeshBuilder Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARealtimeMeshActor, nullptr, "MakeMeshBuilder", 	Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::RealtimeMeshActor_eventMakeMeshBuilder_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::RealtimeMeshActor_eventMakeMeshBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARealtimeMeshActor::execMakeMeshBuilder)
{
	P_GET_ENUM(ERealtimeMeshSimpleStreamConfig,Z_Param_WantedTangents);
	P_GET_ENUM(ERealtimeMeshSimpleStreamConfig,Z_Param_WantedTexCoords);
	P_GET_UBOOL(Z_Param_bWants32BitIndices);
	P_GET_ENUM(ERealtimeMeshSimpleStreamConfig,Z_Param_WantedPolyGroupType);
	P_GET_UBOOL(Z_Param_bWantsColors);
	P_GET_PROPERTY(FIntProperty,Z_Param_WantedTexCoordChannels);
	P_GET_UBOOL(Z_Param_bKeepExistingData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->MakeMeshBuilder(ERealtimeMeshSimpleStreamConfig(Z_Param_WantedTangents),ERealtimeMeshSimpleStreamConfig(Z_Param_WantedTexCoords),Z_Param_bWants32BitIndices,ERealtimeMeshSimpleStreamConfig(Z_Param_WantedPolyGroupType),Z_Param_bWantsColors,Z_Param_WantedTexCoordChannels,Z_Param_bKeepExistingData);
	P_NATIVE_END;
}
// ********** End Class ARealtimeMeshActor Function MakeMeshBuilder ********************************

// ********** Begin Class ARealtimeMeshActor Function MakeStream ***********************************
struct Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics
{
	struct FRealtimeMeshStreamKey
	{
		ERealtimeMeshStreamType StreamType;
		FName StreamName;
	};

	struct RealtimeMeshActor_eventMakeStream_Parms
	{
		FRealtimeMeshStreamKey StreamKey;
		ERealtimeMeshSimpleStreamType StreamType;
		int32 NumElements;
		URealtimeMeshStream* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStream constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StreamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumElements;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStream constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStream Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_StreamKey = { "StreamKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeStream_Parms, StreamKey), Z_Construct_UScriptStruct_FRealtimeMeshStreamKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamKey_MetaData), NewProp_StreamKey_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_StreamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_StreamType = { "StreamType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeStream_Parms, StreamType), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType, METADATA_PARAMS(0, nullptr) }; // 1572484401
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_NumElements = { "NumElements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeStream_Parms, NumElements), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeStream_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_StreamKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_StreamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_StreamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_NumElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::PropPointers) < 2048);
// ********** End Function MakeStream Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARealtimeMeshActor, nullptr, "MakeStream", 	Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::RealtimeMeshActor_eventMakeStream_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::RealtimeMeshActor_eventMakeStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARealtimeMeshActor_MakeStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtimeMeshActor_MakeStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARealtimeMeshActor::execMakeStream)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamKey,Z_Param_Out_StreamKey);
	P_GET_ENUM(ERealtimeMeshSimpleStreamType,Z_Param_StreamType);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumElements);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshStream**)Z_Param__Result=P_THIS->MakeStream(Z_Param_Out_StreamKey,ERealtimeMeshSimpleStreamType(Z_Param_StreamType),Z_Param_NumElements);
	P_NATIVE_END;
}
// ********** End Class ARealtimeMeshActor Function MakeStream *************************************

// ********** Begin Class ARealtimeMeshActor Function MakeStreamSet ********************************
struct Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics
{
	struct RealtimeMeshActor_eventMakeStreamSet_Parms
	{
		URealtimeMeshStreamSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStreamSet constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStreamSet constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStreamSet Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshActor_eventMakeStreamSet_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::PropPointers) < 2048);
// ********** End Function MakeStreamSet Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARealtimeMeshActor, nullptr, "MakeStreamSet", 	Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::RealtimeMeshActor_eventMakeStreamSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::RealtimeMeshActor_eventMakeStreamSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARealtimeMeshActor::execMakeStreamSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshStreamSet**)Z_Param__Result=P_THIS->MakeStreamSet();
	P_NATIVE_END;
}
// ********** End Class ARealtimeMeshActor Function MakeStreamSet **********************************

// ********** Begin Class ARealtimeMeshActor Function OnGenerateMesh *******************************
static FName NAME_ARealtimeMeshActor_OnGenerateMesh = FName(TEXT("OnGenerateMesh"));
void ARealtimeMeshActor::OnGenerateMesh()
{
	UFunction* Func = FindFunctionChecked(NAME_ARealtimeMeshActor_OnGenerateMesh);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ARealtimeMeshActor_OnGenerateMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * This event will be fired to notify the BP that the generated Mesh should\n\x09 * be rebuilt. GeneratedRealtimeMeshActor BP subclasses should rebuild their \n\x09 * meshes on this event, instead of doing so directly from the Construction Script.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
		{ "ToolTip", "This event will be fired to notify the BP that the generated Mesh should\nbe rebuilt. GeneratedRealtimeMeshActor BP subclasses should rebuild their\nmeshes on this event, instead of doing so directly from the Construction Script." },
	};
#endif // WITH_METADATA

// ********** Begin Function OnGenerateMesh constinit property declarations ************************
// ********** End Function OnGenerateMesh constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtimeMeshActor_OnGenerateMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARealtimeMeshActor, nullptr, "OnGenerateMesh", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeMeshActor_OnGenerateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARealtimeMeshActor_OnGenerateMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARealtimeMeshActor_OnGenerateMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtimeMeshActor_OnGenerateMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARealtimeMeshActor::execOnGenerateMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGenerateMesh_Implementation();
	P_NATIVE_END;
}
// ********** End Class ARealtimeMeshActor Function OnGenerateMesh *********************************

// ********** Begin Class ARealtimeMeshActor *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshActor;
UClass* ARealtimeMeshActor::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshActor;
	if (!Z_Registration_Info_UClass_ARealtimeMeshActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshActor"),
			Z_Registration_Info_UClass_ARealtimeMeshActor.InnerSingleton,
			StaticRegisterNativesARealtimeMeshActor,
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
	return Z_Registration_Info_UClass_ARealtimeMeshActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshActor_NoRegister()
{
	return ARealtimeMeshActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "RealtimeMesh" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "RealtimeMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RealtimeMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeferGeneration_MetaData[] = {
		{ "Category", "RealtimeMeshActor" },
		{ "Comment", "/**\n\x09 * If true, the then OnGenerateMesh will get called, and you should move\n\x09 * your mesh generation logic there, instead of the construction script.\n\x09 * This helps improve editor performace by not running generation in\n\x09 * construction which fires every frame when dragging an actor in the editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
		{ "ToolTip", "If true, the then OnGenerateMesh will get called, and you should move\nyour mesh generation logic there, instead of the construction script.\nThis helps improve editor performace by not running generation in\nconstruction which fires every frame when dragging an actor in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrozen_MetaData[] = {
		{ "Category", "RealtimeMeshActor" },
		{ "Comment", "/**\n\x09 * If true, the RealtimeMeshComponent will be \"Frozen\" in its current state, and automatic rebuilding\n\x09 * will be disabled. However the RealtimeMesh can still be modified by explicitly-called functions/etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
		{ "ToolTip", "If true, the RealtimeMeshComponent will be \"Frozen\" in its current state, and automatic rebuilding\nwill be disabled. However the RealtimeMesh can still be modified by explicitly-called functions/etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnRebuild_MetaData[] = {
		{ "Category", "RealtimeMeshActor|Advanced" },
		{ "Comment", "/** If true, the RealtimeMeshComponent will be cleared before the OnRebuildGeneratedMesh event is executed. */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshActor.h" },
		{ "ToolTip", "If true, the RealtimeMeshComponent will be cleared before the OnRebuildGeneratedMesh event is executed." },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshActor constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtimeMeshComponent;
	static void NewProp_bDeferGeneration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferGeneration;
	static void NewProp_bFrozen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrozen;
	static void NewProp_bResetOnRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnRebuild;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARealtimeMeshActor constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRealtimeMeshComponent"), .Pointer = &ARealtimeMeshActor::execGetRealtimeMeshComponent },
		{ .NameUTF8 = UTF8TEXT("MakeMeshBuilder"), .Pointer = &ARealtimeMeshActor::execMakeMeshBuilder },
		{ .NameUTF8 = UTF8TEXT("MakeStream"), .Pointer = &ARealtimeMeshActor::execMakeStream },
		{ .NameUTF8 = UTF8TEXT("MakeStreamSet"), .Pointer = &ARealtimeMeshActor::execMakeStreamSet },
		{ .NameUTF8 = UTF8TEXT("OnGenerateMesh"), .Pointer = &ARealtimeMeshActor::execOnGenerateMesh },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARealtimeMeshActor_GetRealtimeMeshComponent, "GetRealtimeMeshComponent" }, // 3410553901
		{ &Z_Construct_UFunction_ARealtimeMeshActor_MakeMeshBuilder, "MakeMeshBuilder" }, // 1926831670
		{ &Z_Construct_UFunction_ARealtimeMeshActor_MakeStream, "MakeStream" }, // 1620586615
		{ &Z_Construct_UFunction_ARealtimeMeshActor_MakeStreamSet, "MakeStreamSet" }, // 1994321028
		{ &Z_Construct_UFunction_ARealtimeMeshActor_OnGenerateMesh, "OnGenerateMesh" }, // 1210366938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshActor_Statics

// ********** Begin Class ARealtimeMeshActor Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_RealtimeMeshComponent = { "RealtimeMeshComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshActor, RealtimeMeshComponent), Z_Construct_UClass_URealtimeMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealtimeMeshComponent_MetaData), NewProp_RealtimeMeshComponent_MetaData) };
void Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bDeferGeneration_SetBit(void* Obj)
{
	((ARealtimeMeshActor*)Obj)->bDeferGeneration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bDeferGeneration = { "bDeferGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARealtimeMeshActor), &Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bDeferGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeferGeneration_MetaData), NewProp_bDeferGeneration_MetaData) };
void Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bFrozen_SetBit(void* Obj)
{
	((ARealtimeMeshActor*)Obj)->bFrozen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bFrozen = { "bFrozen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARealtimeMeshActor), &Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bFrozen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrozen_MetaData), NewProp_bFrozen_MetaData) };
void Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bResetOnRebuild_SetBit(void* Obj)
{
	((ARealtimeMeshActor*)Obj)->bResetOnRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bResetOnRebuild = { "bResetOnRebuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARealtimeMeshActor), &Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bResetOnRebuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetOnRebuild_MetaData), NewProp_bResetOnRebuild_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeMeshActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_RealtimeMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bDeferGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bFrozen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshActor_Statics::NewProp_bResetOnRebuild,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshActor_Statics::PropPointers) < 2048);
// ********** End Class ARealtimeMeshActor Property Definitions ************************************
UObject* (*const Z_Construct_UClass_ARealtimeMeshActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshActor_Statics::ClassParams = {
	&ARealtimeMeshActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARealtimeMeshActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshActor_Statics::Class_MetaDataParams)
};
void ARealtimeMeshActor::StaticRegisterNativesARealtimeMeshActor()
{
	UClass* Class = ARealtimeMeshActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ARealtimeMeshActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_ARealtimeMeshActor()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshActor.OuterSingleton, Z_Construct_UClass_ARealtimeMeshActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshActor);
// ********** End Class ARealtimeMeshActor *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshActor, ARealtimeMeshActor::StaticClass, TEXT("ARealtimeMeshActor"), &Z_Registration_Info_UClass_ARealtimeMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshActor), 848475691U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h__Script_RealtimeMeshComponent_3141116717{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
