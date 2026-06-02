// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMesh.h"
#include "RealtimeMeshNoExportTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMesh() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMesh();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMesh_NoRegister();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshLODConfig();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshLODKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMesh Function AddLOD ********************************************
struct Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics
{
	struct FRealtimeMeshLODKey
	{
	};

	struct FRealtimeMeshLODConfig
	{
		bool bIsVisible;
		float ScreenSize;
	};

	struct RealtimeMesh_eventAddLOD_Parms
	{
		FRealtimeMeshLODConfig Config;
		FRealtimeMeshLODKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Add a level of detail to the RealtimeMesh.\n\x09 *\n\x09 * @param Config The configuration for the level of detail.\n\x09 * @return The key for the added level of detail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Add a level of detail to the RealtimeMesh.\n\n@param Config The configuration for the level of detail.\n@return The key for the added level of detail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddLOD constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddLOD constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddLOD Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventAddLOD_Parms, Config), Z_Construct_UScriptStruct_FRealtimeMeshLODConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventAddLOD_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshLODKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::PropPointers) < 2048);
// ********** End Function AddLOD Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "AddLOD", 	Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::RealtimeMesh_eventAddLOD_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::RealtimeMesh_eventAddLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_AddLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_AddLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execAddLOD)
{
	P_GET_STRUCT_REF(FRealtimeMeshLODConfig,Z_Param_Out_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshLODKey*)Z_Param__Result=P_THIS->AddLOD(Z_Param_Out_Config);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function AddLOD **********************************************

// ********** Begin Class URealtimeMesh Function CalcTexCoordAtLocation ****************************
struct Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics
{
	struct RealtimeMesh_eventCalcTexCoordAtLocation_Parms
	{
		FVector BodySpaceLocation;
		int32 ElementIndex;
		int32 FaceIndex;
		int32 UVChannel;
		FVector2D UV;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Get the UV position for the supplied hit location.\n\x09 * \n\x09 * @return The UV coordinate for the hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Get the UV position for the supplied hit location.\n\n@return The UV coordinate for the hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySpaceLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CalcTexCoordAtLocation constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodySpaceLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalcTexCoordAtLocation constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalcTexCoordAtLocation Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_BodySpaceLocation = { "BodySpaceLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventCalcTexCoordAtLocation_Parms, BodySpaceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySpaceLocation_MetaData), NewProp_BodySpaceLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_ElementIndex = { "ElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventCalcTexCoordAtLocation_Parms, ElementIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventCalcTexCoordAtLocation_Parms, FaceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventCalcTexCoordAtLocation_Parms, UVChannel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventCalcTexCoordAtLocation_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMesh_eventCalcTexCoordAtLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMesh_eventCalcTexCoordAtLocation_Parms), &Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_BodySpaceLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_ElementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_FaceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_UVChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::PropPointers) < 2048);
// ********** End Function CalcTexCoordAtLocation Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "CalcTexCoordAtLocation", 	Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::RealtimeMesh_eventCalcTexCoordAtLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::RealtimeMesh_eventCalcTexCoordAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execCalcTexCoordAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BodySpaceLocation);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FaceIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_UVChannel);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CalcTexCoordAtLocation(Z_Param_Out_BodySpaceLocation,Z_Param_ElementIndex,Z_Param_FaceIndex,Z_Param_UVChannel,Z_Param_Out_UV);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function CalcTexCoordAtLocation ******************************

// ********** Begin Class URealtimeMesh Function GetLocalBounds ************************************
struct Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics
{
	struct RealtimeMesh_eventGetLocalBounds_Parms
	{
		FBoxSphereBounds ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Retrieves the local bounds of the RealtimeMesh.\n\x09 *\n\x09 * @return the local bounds as a FBoxSphereBounds object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Retrieves the local bounds of the RealtimeMesh.\n\n@return the local bounds as a FBoxSphereBounds object." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocalBounds constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocalBounds constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocalBounds Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetLocalBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::PropPointers) < 2048);
// ********** End Function GetLocalBounds Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "GetLocalBounds", 	Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::RealtimeMesh_eventGetLocalBounds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::RealtimeMesh_eventGetLocalBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_GetLocalBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_GetLocalBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execGetLocalBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetLocalBounds();
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function GetLocalBounds **************************************

// ********** Begin Class URealtimeMesh Function GetMaterial ***************************************
struct Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics
{
	struct RealtimeMesh_eventGetMaterial_Parms
	{
		int32 SlotIndex;
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Get the material at the specified slot index.\n\x09 *\n\x09 * @param SlotIndex The index of the material slot.\n\x09 * @return The material at the specified slot index. Returns nullptr if the slot index is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Get the material at the specified slot index.\n\n@param SlotIndex The index of the material slot.\n@return The material at the specified slot index. Returns nullptr if the slot index is invalid." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaterial constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaterial constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaterial Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterial_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::PropPointers) < 2048);
// ********** End Function GetMaterial Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "GetMaterial", 	Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::RealtimeMesh_eventGetMaterial_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::RealtimeMesh_eventGetMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_GetMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_GetMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execGetMaterial)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function GetMaterial *****************************************

// ********** Begin Class URealtimeMesh Function GetMaterialIndex **********************************
struct Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics
{
	struct RealtimeMesh_eventGetMaterialIndex_Parms
	{
		FName MaterialSlotName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Get the index of a material slot by its name.\n\x09 *\n\x09 * @param MaterialSlotName The name of the material slot.\n\x09 * @return The index of the material slot. Returns INDEX_NONE if the material slot does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Get the index of a material slot by its name.\n\n@param MaterialSlotName The name of the material slot.\n@return The index of the material slot. Returns INDEX_NONE if the material slot does not exist." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaterialIndex constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaterialIndex constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaterialIndex Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterialIndex_Parms, MaterialSlotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::NewProp_MaterialSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::PropPointers) < 2048);
// ********** End Function GetMaterialIndex Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "GetMaterialIndex", 	Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::RealtimeMesh_eventGetMaterialIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::RealtimeMesh_eventGetMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execGetMaterialIndex)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_MaterialSlotName);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function GetMaterialIndex ************************************

// ********** Begin Class URealtimeMesh Function GetMaterialSlot ***********************************
struct Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics
{
	struct FRealtimeMeshMaterialSlot
	{
		FName SlotName;
		TObjectPtr<UMaterialInterface> Material;
	};

	struct RealtimeMesh_eventGetMaterialSlot_Parms
	{
		int32 SlotIndex;
		FRealtimeMeshMaterialSlot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Gets the material slot at the specified index.\n\x09 *\n\x09 * @param SlotIndex The index of the material slot.\n\x09 * @return The material slot at the specified index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Gets the material slot at the specified index.\n\n@param SlotIndex The index of the material slot.\n@return The material slot at the specified index." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaterialSlot constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaterialSlot constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaterialSlot Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterialSlot_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterialSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::PropPointers) < 2048);
// ********** End Function GetMaterialSlot Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "GetMaterialSlot", 	Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::RealtimeMesh_eventGetMaterialSlot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::RealtimeMesh_eventGetMaterialSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execGetMaterialSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshMaterialSlot*)Z_Param__Result=P_THIS->GetMaterialSlot(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function GetMaterialSlot *************************************

// ********** Begin Class URealtimeMesh Function GetMaterialSlotName *******************************
struct Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics
{
	struct RealtimeMesh_eventGetMaterialSlotName_Parms
	{
		int32 Index;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Get the name of the material slot at the specified index\n\x09 * @param Index Index of the material to get the name for\n\x09 * @return \n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Get the name of the material slot at the specified index\n@param Index Index of the material to get the name for\n@return" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaterialSlotName constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaterialSlotName constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaterialSlotName Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterialSlotName_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterialSlotName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::PropPointers) < 2048);
// ********** End Function GetMaterialSlotName Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "GetMaterialSlotName", 	Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::RealtimeMesh_eventGetMaterialSlotName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::RealtimeMesh_eventGetMaterialSlotName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execGetMaterialSlotName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetMaterialSlotName(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function GetMaterialSlotName *********************************

// ********** Begin Class URealtimeMesh Function GetMaterialSlotNames ******************************
struct Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics
{
	struct RealtimeMesh_eventGetMaterialSlotNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Get the names of all material slots in the Realtime Mesh.\n\x09 *\n\x09 * @return An array of FName representing the names of all material slots.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Get the names of all material slots in the Realtime Mesh.\n\n@return An array of FName representing the names of all material slots." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaterialSlotNames constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaterialSlotNames constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaterialSlotNames Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterialSlotNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::PropPointers) < 2048);
// ********** End Function GetMaterialSlotNames Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "GetMaterialSlotNames", 	Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::RealtimeMesh_eventGetMaterialSlotNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::RealtimeMesh_eventGetMaterialSlotNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execGetMaterialSlotNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetMaterialSlotNames();
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function GetMaterialSlotNames ********************************

// ********** Begin Class URealtimeMesh Function GetMaterialSlots **********************************
struct Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics
{
	struct FRealtimeMeshMaterialSlot
	{
		FName SlotName;
		TObjectPtr<UMaterialInterface> Material;
	};

	struct RealtimeMesh_eventGetMaterialSlots_Parms
	{
		TArray<FRealtimeMeshMaterialSlot> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Get the material slots of the Realtime Mesh.\n\x09 *\n\x09 * @return An array of FRealtimeMeshMaterialSlot representing the material slots of the Realtime Mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Get the material slots of the Realtime Mesh.\n\n@return An array of FRealtimeMeshMaterialSlot representing the material slots of the Realtime Mesh." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaterialSlots constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaterialSlots constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaterialSlots Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetMaterialSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::PropPointers) < 2048);
// ********** End Function GetMaterialSlots Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "GetMaterialSlots", 	Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::RealtimeMesh_eventGetMaterialSlots_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::RealtimeMesh_eventGetMaterialSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execGetMaterialSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRealtimeMeshMaterialSlot>*)Z_Param__Result=P_THIS->GetMaterialSlots();
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function GetMaterialSlots ************************************

// ********** Begin Class URealtimeMesh Function GetNumMaterials ***********************************
struct Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics
{
	struct RealtimeMesh_eventGetNumMaterials_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Get the number of material slots in the RealtimeMesh.\n\x09 *\n\x09 * @return The number of material slots.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Get the number of material slots in the RealtimeMesh.\n\n@return The number of material slots." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumMaterials constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumMaterials constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumMaterials Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventGetNumMaterials_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::PropPointers) < 2048);
// ********** End Function GetNumMaterials Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "GetNumMaterials", 	Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::RealtimeMesh_eventGetNumMaterials_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::RealtimeMesh_eventGetNumMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_GetNumMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_GetNumMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execGetNumMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumMaterials();
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function GetNumMaterials *************************************

// ********** Begin Class URealtimeMesh Function IsMaterialSlotNameValid ***************************
struct Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics
{
	struct RealtimeMesh_eventIsMaterialSlotNameValid_Parms
	{
		FName MaterialSlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Check if the given material slot name is valid.\n\x09 *\n\x09 * @param MaterialSlotName The name of the material slot to check.\n\x09 * @return true if the material slot name is valid, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Check if the given material slot name is valid.\n\n@param MaterialSlotName The name of the material slot to check.\n@return true if the material slot name is valid, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsMaterialSlotNameValid constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsMaterialSlotNameValid constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsMaterialSlotNameValid Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventIsMaterialSlotNameValid_Parms, MaterialSlotName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMesh_eventIsMaterialSlotNameValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMesh_eventIsMaterialSlotNameValid_Parms), &Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::NewProp_MaterialSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::PropPointers) < 2048);
// ********** End Function IsMaterialSlotNameValid Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "IsMaterialSlotNameValid", 	Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::RealtimeMesh_eventIsMaterialSlotNameValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::RealtimeMesh_eventIsMaterialSlotNameValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execIsMaterialSlotNameValid)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMaterialSlotNameValid(Z_Param_MaterialSlotName);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function IsMaterialSlotNameValid *****************************

// ********** Begin Class URealtimeMesh Function OnGenerateMesh ************************************
struct RealtimeMesh_eventOnGenerateMesh_Parms
{
	URealtimeMesh* TargetMesh;
};
static FName NAME_URealtimeMesh_OnGenerateMesh = FName(TEXT("OnGenerateMesh"));
void URealtimeMesh::OnGenerateMesh(URealtimeMesh* TargetMesh)
{
	RealtimeMesh_eventOnGenerateMesh_Parms Parms;
	Parms.TargetMesh=TargetMesh;
	UFunction* Func = FindFunctionChecked(NAME_URealtimeMesh_OnGenerateMesh);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh|Events" },
		{ "Comment", "/**\n\x09 * @brief Triggered when a mesh generation event occurs.\n\x09 *\n\x09 * This method is called when a mesh is being generated for a RealtimeMesh component.\n\x09 * Developers can implement this method in their Blueprint or C++ code to customize the generation process.\n\x09 *\n\x09 * @param TargetMesh The RealtimeMesh component that is generating the mesh.\n\x09 *\n\x09 * @note This method is a BlueprintCallable and BlueprintImplementableEvent, meaning it can be called from Blueprint code and overridden in Blueprint subclasses.\n\x09 *       It is also categorized under \"Components|RealtimeMesh|Events\" in Blueprint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "@brief Triggered when a mesh generation event occurs.\n\nThis method is called when a mesh is being generated for a RealtimeMesh component.\nDevelopers can implement this method in their Blueprint or C++ code to customize the generation process.\n\n@param TargetMesh The RealtimeMesh component that is generating the mesh.\n\n@note This method is a BlueprintCallable and BlueprintImplementableEvent, meaning it can be called from Blueprint code and overridden in Blueprint subclasses.\n      It is also categorized under \"Components|RealtimeMesh|Events\" in Blueprint." },
	};
#endif // WITH_METADATA

// ********** Begin Function OnGenerateMesh constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnGenerateMesh constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnGenerateMesh Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventOnGenerateMesh_Parms, TargetMesh), Z_Construct_UClass_URealtimeMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::NewProp_TargetMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::PropPointers) < 2048);
// ********** End Function OnGenerateMesh Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "OnGenerateMesh", 	Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::PropPointers), 
sizeof(RealtimeMesh_eventOnGenerateMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RealtimeMesh_eventOnGenerateMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class URealtimeMesh Function OnGenerateMesh **************************************

// ********** Begin Class URealtimeMesh Function RemoveTrailingLOD *********************************
struct Z_Construct_UFunction_URealtimeMesh_RemoveTrailingLOD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTrailingLOD constinit property declarations *********************
// ********** End Function RemoveTrailingLOD constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_RemoveTrailingLOD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "RemoveTrailingLOD", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_RemoveTrailingLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_RemoveTrailingLOD_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URealtimeMesh_RemoveTrailingLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_RemoveTrailingLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execRemoveTrailingLOD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTrailingLOD();
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function RemoveTrailingLOD ***********************************

// ********** Begin Class URealtimeMesh Function Reset *********************************************
struct Z_Construct_UFunction_URealtimeMesh_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Reset the RealtimeMesh.\n\x09 *\n\x09 * @param bCreateNewMeshData If true, create new mesh data. If false, reset the existing mesh data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Reset the RealtimeMesh.\n\n@param bCreateNewMeshData If true, create new mesh data. If false, reset the existing mesh data." },
	};
#endif // WITH_METADATA

// ********** Begin Function Reset constinit property declarations *********************************
// ********** End Function Reset constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_Reset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "Reset", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_Reset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URealtimeMesh_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function Reset ***********************************************

// ********** Begin Class URealtimeMesh Function SetShouldSerializeMeshData ************************
struct Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics
{
	struct RealtimeMesh_eventSetShouldSerializeMeshData_Parms
	{
		bool bNewShouldSerializeMeshData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Set whether we should serialize the mesh data while we're serializing in editor/package.\n\x09 * @param bNewShouldSerializeMeshData New value for whether we should serialize the mesh data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Set whether we should serialize the mesh data while we're serializing in editor/package.\n@param bNewShouldSerializeMeshData New value for whether we should serialize the mesh data." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetShouldSerializeMeshData constinit property declarations ************
	static void NewProp_bNewShouldSerializeMeshData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewShouldSerializeMeshData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetShouldSerializeMeshData constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetShouldSerializeMeshData Property Definitions ***********************
void Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::NewProp_bNewShouldSerializeMeshData_SetBit(void* Obj)
{
	((RealtimeMesh_eventSetShouldSerializeMeshData_Parms*)Obj)->bNewShouldSerializeMeshData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::NewProp_bNewShouldSerializeMeshData = { "bNewShouldSerializeMeshData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMesh_eventSetShouldSerializeMeshData_Parms), &Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::NewProp_bNewShouldSerializeMeshData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::NewProp_bNewShouldSerializeMeshData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::PropPointers) < 2048);
// ********** End Function SetShouldSerializeMeshData Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "SetShouldSerializeMeshData", 	Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::RealtimeMesh_eventSetShouldSerializeMeshData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::RealtimeMesh_eventSetShouldSerializeMeshData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execSetShouldSerializeMeshData)
{
	P_GET_UBOOL(Z_Param_bNewShouldSerializeMeshData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShouldSerializeMeshData(Z_Param_bNewShouldSerializeMeshData);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function SetShouldSerializeMeshData **************************

// ********** Begin Class URealtimeMesh Function SetupMaterialSlot *********************************
struct Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics
{
	struct RealtimeMesh_eventSetupMaterialSlot_Parms
	{
		int32 MaterialSlot;
		FName SlotName;
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Set up a material slot for the Realtime Mesh.\n\x09 *\n\x09 * @param MaterialSlot The slot index for the material.\n\x09 * @param SlotName The name of the material slot.\n\x09 * @param InMaterial The material to be assigned to the slot.\n\x09 */" },
		{ "CPP_Default_InMaterial", "None" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Set up a material slot for the Realtime Mesh.\n\n@param MaterialSlot The slot index for the material.\n@param SlotName The name of the material slot.\n@param InMaterial The material to be assigned to the slot." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetupMaterialSlot constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetupMaterialSlot constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetupMaterialSlot Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::NewProp_MaterialSlot = { "MaterialSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventSetupMaterialSlot_Parms, MaterialSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventSetupMaterialSlot_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventSetupMaterialSlot_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::NewProp_MaterialSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::PropPointers) < 2048);
// ********** End Function SetupMaterialSlot Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "SetupMaterialSlot", 	Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::RealtimeMesh_eventSetupMaterialSlot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::RealtimeMesh_eventSetupMaterialSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execSetupMaterialSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaterialSlot);
	P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupMaterialSlot(Z_Param_MaterialSlot,Z_Param_SlotName,Z_Param_InMaterial);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function SetupMaterialSlot ***********************************

// ********** Begin Class URealtimeMesh Function ShouldSerializeMeshData ***************************
struct Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics
{
	struct RealtimeMesh_eventShouldSerializeMeshData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Should we serialize the mesh data while we're serializing in editor/package?\n\x09 * @return Whether we should serialize the mesh data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Should we serialize the mesh data while we're serializing in editor/package?\n@return Whether we should serialize the mesh data." },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldSerializeMeshData constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldSerializeMeshData constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldSerializeMeshData Property Definitions **************************
void Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMesh_eventShouldSerializeMeshData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMesh_eventShouldSerializeMeshData_Parms), &Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::PropPointers) < 2048);
// ********** End Function ShouldSerializeMeshData Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "ShouldSerializeMeshData", 	Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::RealtimeMesh_eventShouldSerializeMeshData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::RealtimeMesh_eventShouldSerializeMeshData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execShouldSerializeMeshData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldSerializeMeshData();
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function ShouldSerializeMeshData *****************************

// ********** Begin Class URealtimeMesh Function UpdateLODConfig ***********************************
struct Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics
{
	struct FRealtimeMeshLODConfig
	{
		bool bIsVisible;
		float ScreenSize;
	};

	struct FRealtimeMeshLODKey
	{
	};

	struct RealtimeMesh_eventUpdateLODConfig_Parms
	{
		FRealtimeMeshLODKey LODKey;
		FRealtimeMeshLODConfig Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMesh" },
		{ "Comment", "/**\n\x09 * Updates the configuration for a level of detail in the RealtimeMesh.\n\x09 *\n\x09 * @param LODKey The key of the level of detail to update.\n\x09 * @param Config The updated configuration for the level of detail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
		{ "ToolTip", "Updates the configuration for a level of detail in the RealtimeMesh.\n\n@param LODKey The key of the level of detail to update.\n@param Config The updated configuration for the level of detail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateLODConfig constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateLODConfig constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateLODConfig Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::NewProp_LODKey = { "LODKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventUpdateLODConfig_Parms, LODKey), Z_Construct_UScriptStruct_FRealtimeMeshLODKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMesh_eventUpdateLODConfig_Parms, Config), Z_Construct_UScriptStruct_FRealtimeMeshLODConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::NewProp_LODKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::PropPointers) < 2048);
// ********** End Function UpdateLODConfig Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMesh, nullptr, "UpdateLODConfig", 	Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::RealtimeMesh_eventUpdateLODConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::RealtimeMesh_eventUpdateLODConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMesh::execUpdateLODConfig)
{
	P_GET_STRUCT(FRealtimeMeshLODKey,Z_Param_LODKey);
	P_GET_STRUCT_REF(FRealtimeMeshLODConfig,Z_Param_Out_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLODConfig(Z_Param_LODKey,Z_Param_Out_Config);
	P_NATIVE_END;
}
// ********** End Class URealtimeMesh Function UpdateLODConfig *************************************

// ********** Begin Class URealtimeMesh ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMesh;
UClass* URealtimeMesh::GetPrivateStaticClass()
{
	using TClass = URealtimeMesh;
	if (!Z_Registration_Info_UClass_URealtimeMesh.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMesh"),
			Z_Registration_Info_UClass_URealtimeMesh.InnerSingleton,
			StaticRegisterNativesURealtimeMesh,
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
	return Z_Registration_Info_UClass_URealtimeMesh.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMesh_NoRegister()
{
	return URealtimeMesh::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Cooking" },
		{ "IncludePath", "RealtimeMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotNameLookup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMesh.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMesh constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialSlots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotNameLookup_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNameLookup_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SlotNameLookup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URealtimeMesh constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddLOD"), .Pointer = &URealtimeMesh::execAddLOD },
		{ .NameUTF8 = UTF8TEXT("CalcTexCoordAtLocation"), .Pointer = &URealtimeMesh::execCalcTexCoordAtLocation },
		{ .NameUTF8 = UTF8TEXT("GetLocalBounds"), .Pointer = &URealtimeMesh::execGetLocalBounds },
		{ .NameUTF8 = UTF8TEXT("GetMaterial"), .Pointer = &URealtimeMesh::execGetMaterial },
		{ .NameUTF8 = UTF8TEXT("GetMaterialIndex"), .Pointer = &URealtimeMesh::execGetMaterialIndex },
		{ .NameUTF8 = UTF8TEXT("GetMaterialSlot"), .Pointer = &URealtimeMesh::execGetMaterialSlot },
		{ .NameUTF8 = UTF8TEXT("GetMaterialSlotName"), .Pointer = &URealtimeMesh::execGetMaterialSlotName },
		{ .NameUTF8 = UTF8TEXT("GetMaterialSlotNames"), .Pointer = &URealtimeMesh::execGetMaterialSlotNames },
		{ .NameUTF8 = UTF8TEXT("GetMaterialSlots"), .Pointer = &URealtimeMesh::execGetMaterialSlots },
		{ .NameUTF8 = UTF8TEXT("GetNumMaterials"), .Pointer = &URealtimeMesh::execGetNumMaterials },
		{ .NameUTF8 = UTF8TEXT("IsMaterialSlotNameValid"), .Pointer = &URealtimeMesh::execIsMaterialSlotNameValid },
		{ .NameUTF8 = UTF8TEXT("RemoveTrailingLOD"), .Pointer = &URealtimeMesh::execRemoveTrailingLOD },
		{ .NameUTF8 = UTF8TEXT("Reset"), .Pointer = &URealtimeMesh::execReset },
		{ .NameUTF8 = UTF8TEXT("SetShouldSerializeMeshData"), .Pointer = &URealtimeMesh::execSetShouldSerializeMeshData },
		{ .NameUTF8 = UTF8TEXT("SetupMaterialSlot"), .Pointer = &URealtimeMesh::execSetupMaterialSlot },
		{ .NameUTF8 = UTF8TEXT("ShouldSerializeMeshData"), .Pointer = &URealtimeMesh::execShouldSerializeMeshData },
		{ .NameUTF8 = UTF8TEXT("UpdateLODConfig"), .Pointer = &URealtimeMesh::execUpdateLODConfig },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMesh_AddLOD, "AddLOD" }, // 2061645231
		{ &Z_Construct_UFunction_URealtimeMesh_CalcTexCoordAtLocation, "CalcTexCoordAtLocation" }, // 576679920
		{ &Z_Construct_UFunction_URealtimeMesh_GetLocalBounds, "GetLocalBounds" }, // 3960567496
		{ &Z_Construct_UFunction_URealtimeMesh_GetMaterial, "GetMaterial" }, // 3981479917
		{ &Z_Construct_UFunction_URealtimeMesh_GetMaterialIndex, "GetMaterialIndex" }, // 2283657945
		{ &Z_Construct_UFunction_URealtimeMesh_GetMaterialSlot, "GetMaterialSlot" }, // 2771069579
		{ &Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotName, "GetMaterialSlotName" }, // 125487443
		{ &Z_Construct_UFunction_URealtimeMesh_GetMaterialSlotNames, "GetMaterialSlotNames" }, // 1449600946
		{ &Z_Construct_UFunction_URealtimeMesh_GetMaterialSlots, "GetMaterialSlots" }, // 2651709236
		{ &Z_Construct_UFunction_URealtimeMesh_GetNumMaterials, "GetNumMaterials" }, // 798797160
		{ &Z_Construct_UFunction_URealtimeMesh_IsMaterialSlotNameValid, "IsMaterialSlotNameValid" }, // 2956189030
		{ &Z_Construct_UFunction_URealtimeMesh_OnGenerateMesh, "OnGenerateMesh" }, // 844309546
		{ &Z_Construct_UFunction_URealtimeMesh_RemoveTrailingLOD, "RemoveTrailingLOD" }, // 751562365
		{ &Z_Construct_UFunction_URealtimeMesh_Reset, "Reset" }, // 396571047
		{ &Z_Construct_UFunction_URealtimeMesh_SetShouldSerializeMeshData, "SetShouldSerializeMeshData" }, // 1763410240
		{ &Z_Construct_UFunction_URealtimeMesh_SetupMaterialSlot, "SetupMaterialSlot" }, // 1500053326
		{ &Z_Construct_UFunction_URealtimeMesh_ShouldSerializeMeshData, "ShouldSerializeMeshData" }, // 2748932456
		{ &Z_Construct_UFunction_URealtimeMesh_UpdateLODConfig, "UpdateLODConfig" }, // 4056033260
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMesh_Statics

// ********** Begin Class URealtimeMesh Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URealtimeMesh_Statics::NewProp_MaterialSlots_Inner = { "MaterialSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URealtimeMesh_Statics::NewProp_MaterialSlots = { "MaterialSlots", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMesh, MaterialSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlots_MetaData), NewProp_MaterialSlots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URealtimeMesh_Statics::NewProp_SlotNameLookup_ValueProp = { "SlotNameLookup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URealtimeMesh_Statics::NewProp_SlotNameLookup_Key_KeyProp = { "SlotNameLookup_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URealtimeMesh_Statics::NewProp_SlotNameLookup = { "SlotNameLookup", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMesh, SlotNameLookup), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotNameLookup_MetaData), NewProp_SlotNameLookup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtimeMesh_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetup_MetaData), NewProp_BodySetup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtimeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMesh_Statics::NewProp_MaterialSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMesh_Statics::NewProp_MaterialSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMesh_Statics::NewProp_SlotNameLookup_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMesh_Statics::NewProp_SlotNameLookup_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMesh_Statics::NewProp_SlotNameLookup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMesh_Statics::NewProp_BodySetup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMesh_Statics::PropPointers) < 2048);
// ********** End Class URealtimeMesh Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_URealtimeMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMesh_Statics::ClassParams = {
	&URealtimeMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URealtimeMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMesh_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMesh_Statics::Class_MetaDataParams)
};
void URealtimeMesh::StaticRegisterNativesURealtimeMesh()
{
	UClass* Class = URealtimeMesh::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMesh_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMesh()
{
	if (!Z_Registration_Info_UClass_URealtimeMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMesh.OuterSingleton, Z_Construct_UClass_URealtimeMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMesh.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMesh);
URealtimeMesh::~URealtimeMesh() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URealtimeMesh)
// ********** End Class URealtimeMesh **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMesh, URealtimeMesh::StaticClass, TEXT("URealtimeMesh"), &Z_Registration_Info_UClass_URealtimeMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMesh), 1755483755U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h__Script_RealtimeMeshComponent_631520286{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
