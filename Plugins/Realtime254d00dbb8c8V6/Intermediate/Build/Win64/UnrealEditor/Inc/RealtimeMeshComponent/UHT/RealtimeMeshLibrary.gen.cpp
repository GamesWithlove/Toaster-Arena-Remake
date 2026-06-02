// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshLibrary.h"
#include "RealtimeMeshNoExportTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_NoRegister();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshLODKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamRange();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERealtimeMeshCommonStream *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshCommonStream;
static UEnum* ERealtimeMeshCommonStream_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshCommonStream.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshCommonStream.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("ERealtimeMeshCommonStream"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshCommonStream.OuterSingleton;
}
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshCommonStream>()
{
	return ERealtimeMeshCommonStream_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Colors.Name", "ERealtimeMeshCommonStream::Colors" },
		{ "DepthOnlyPolyGroups.Name", "ERealtimeMeshCommonStream::DepthOnlyPolyGroups" },
		{ "DepthOnlyTriangles.Name", "ERealtimeMeshCommonStream::DepthOnlyTriangles" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
		{ "PolyGroups.Name", "ERealtimeMeshCommonStream::PolyGroups" },
		{ "Position.Name", "ERealtimeMeshCommonStream::Position" },
		{ "Tangents.Name", "ERealtimeMeshCommonStream::Tangents" },
		{ "TexCoords.Name", "ERealtimeMeshCommonStream::TexCoords" },
		{ "Triangles.Name", "ERealtimeMeshCommonStream::Triangles" },
		{ "Unknown.Name", "ERealtimeMeshCommonStream::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshCommonStream::Unknown", (int64)ERealtimeMeshCommonStream::Unknown },
		{ "ERealtimeMeshCommonStream::Position", (int64)ERealtimeMeshCommonStream::Position },
		{ "ERealtimeMeshCommonStream::Tangents", (int64)ERealtimeMeshCommonStream::Tangents },
		{ "ERealtimeMeshCommonStream::TexCoords", (int64)ERealtimeMeshCommonStream::TexCoords },
		{ "ERealtimeMeshCommonStream::Colors", (int64)ERealtimeMeshCommonStream::Colors },
		{ "ERealtimeMeshCommonStream::Triangles", (int64)ERealtimeMeshCommonStream::Triangles },
		{ "ERealtimeMeshCommonStream::DepthOnlyTriangles", (int64)ERealtimeMeshCommonStream::DepthOnlyTriangles },
		{ "ERealtimeMeshCommonStream::PolyGroups", (int64)ERealtimeMeshCommonStream::PolyGroups },
		{ "ERealtimeMeshCommonStream::DepthOnlyPolyGroups", (int64)ERealtimeMeshCommonStream::DepthOnlyPolyGroups },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	"ERealtimeMeshCommonStream",
	"ERealtimeMeshCommonStream",
	Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshCommonStream.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshCommonStream.InnerSingleton, Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshCommonStream.InnerSingleton;
}
// ********** End Enum ERealtimeMeshCommonStream ***************************************************

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function BreakLODKey ***************
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics
{
	struct FRealtimeMeshLODKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventBreakLODKey_Parms
	{
		FRealtimeMeshLODKey LODKey;
		int32 LODIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakLODKey constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakLODKey constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakLODKey Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::NewProp_LODKey = { "LODKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventBreakLODKey_Parms, LODKey), Z_Construct_UScriptStruct_FRealtimeMeshLODKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODKey_MetaData), NewProp_LODKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventBreakLODKey_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::NewProp_LODKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::NewProp_LODIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::PropPointers) < 2048);
// ********** End Function BreakLODKey Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "BreakLODKey", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventBreakLODKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventBreakLODKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execBreakLODKey)
{
	P_GET_STRUCT_REF(FRealtimeMeshLODKey,Z_Param_Out_LODKey);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshBlueprintFunctionLibrary::BreakLODKey(Z_Param_Out_LODKey,Z_Param_Out_LODIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function BreakLODKey *****************

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function Conv_IntToRealtimeMeshLODKey 
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics
{
	struct FRealtimeMeshLODKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventConv_IntToRealtimeMeshLODKey_Parms
	{
		int32 LODIndex;
		FRealtimeMeshLODKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "RealtimeMesh|Key" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "LODIndex to LODKey" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_IntToRealtimeMeshLODKey constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_IntToRealtimeMeshLODKey constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_IntToRealtimeMeshLODKey Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventConv_IntToRealtimeMeshLODKey_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventConv_IntToRealtimeMeshLODKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshLODKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::PropPointers) < 2048);
// ********** End Function Conv_IntToRealtimeMeshLODKey Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "Conv_IntToRealtimeMeshLODKey", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventConv_IntToRealtimeMeshLODKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventConv_IntToRealtimeMeshLODKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execConv_IntToRealtimeMeshLODKey)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshLODKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::Conv_IntToRealtimeMeshLODKey(Z_Param_LODIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function Conv_IntToRealtimeMeshLODKey 

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function GetCommonStreamKey ********
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics
{
	struct FRealtimeMeshStreamKey
	{
		ERealtimeMeshStreamType StreamType;
		FName StreamName;
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventGetCommonStreamKey_Parms
	{
		ERealtimeMeshCommonStream StreamType;
		FRealtimeMeshStreamKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCommonStreamKey constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_StreamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCommonStreamKey constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCommonStreamKey Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::NewProp_StreamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::NewProp_StreamType = { "StreamType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventGetCommonStreamKey_Parms, StreamType), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCommonStream, METADATA_PARAMS(0, nullptr) }; // 3026329415
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventGetCommonStreamKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshStreamKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::NewProp_StreamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::NewProp_StreamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::PropPointers) < 2048);
// ********** End Function GetCommonStreamKey Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "GetCommonStreamKey", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventGetCommonStreamKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventGetCommonStreamKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execGetCommonStreamKey)
{
	P_GET_ENUM(ERealtimeMeshCommonStream,Z_Param_StreamType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshStreamKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::GetCommonStreamKey(ERealtimeMeshCommonStream(Z_Param_StreamType));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function GetCommonStreamKey **********

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeLODKey ****************
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics
{
	struct FRealtimeMeshLODKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeLODKey_Parms
	{
		int32 LODIndex;
		FRealtimeMeshLODKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeLODKey constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeLODKey constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeLODKey Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeLODKey_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeLODKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshLODKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::PropPointers) < 2048);
// ********** End Function MakeLODKey Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeLODKey", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeLODKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeLODKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeLODKey)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshLODKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeLODKey(Z_Param_LODIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeLODKey ******************

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionGroupKeyIndexed 
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct FRealtimeMeshLODKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyIndexed_Parms
	{
		FRealtimeMeshLODKey LODKey;
		int32 SectionGroupIndex;
		FRealtimeMeshSectionGroupKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSectionGroupKeyIndexed constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionGroupIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSectionGroupKeyIndexed constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSectionGroupKeyIndexed Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::NewProp_LODKey = { "LODKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyIndexed_Parms, LODKey), Z_Construct_UScriptStruct_FRealtimeMeshLODKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODKey_MetaData), NewProp_LODKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::NewProp_SectionGroupIndex = { "SectionGroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyIndexed_Parms, SectionGroupIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyIndexed_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::NewProp_LODKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::NewProp_SectionGroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::PropPointers) < 2048);
// ********** End Function MakeSectionGroupKeyIndexed Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeSectionGroupKeyIndexed", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyIndexed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyIndexed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeSectionGroupKeyIndexed)
{
	P_GET_STRUCT_REF(FRealtimeMeshLODKey,Z_Param_Out_LODKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionGroupIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSectionGroupKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeSectionGroupKeyIndexed(Z_Param_Out_LODKey,Z_Param_SectionGroupIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionGroupKeyIndexed **

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionGroupKeyNamed **
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct FRealtimeMeshLODKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyNamed_Parms
	{
		FRealtimeMeshLODKey LODKey;
		FName GroupName;
		FRealtimeMeshSectionGroupKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSectionGroupKeyNamed constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSectionGroupKeyNamed constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSectionGroupKeyNamed Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::NewProp_LODKey = { "LODKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyNamed_Parms, LODKey), Z_Construct_UScriptStruct_FRealtimeMeshLODKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODKey_MetaData), NewProp_LODKey_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyNamed_Parms, GroupName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyNamed_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::NewProp_LODKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::PropPointers) < 2048);
// ********** End Function MakeSectionGroupKeyNamed Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeSectionGroupKeyNamed", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyNamed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyNamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeSectionGroupKeyNamed)
{
	P_GET_STRUCT_REF(FRealtimeMeshLODKey,Z_Param_Out_LODKey);
	P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSectionGroupKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeSectionGroupKeyNamed(Z_Param_Out_LODKey,Z_Param_GroupName);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionGroupKeyNamed ****

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionGroupKeyUnique *
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct FRealtimeMeshLODKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyUnique_Parms
	{
		FRealtimeMeshLODKey LODKey;
		FRealtimeMeshSectionGroupKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSectionGroupKeyUnique constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSectionGroupKeyUnique constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSectionGroupKeyUnique Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::NewProp_LODKey = { "LODKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyUnique_Parms, LODKey), Z_Construct_UScriptStruct_FRealtimeMeshLODKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODKey_MetaData), NewProp_LODKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyUnique_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::NewProp_LODKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::PropPointers) < 2048);
// ********** End Function MakeSectionGroupKeyUnique Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeSectionGroupKeyUnique", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyUnique_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionGroupKeyUnique_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeSectionGroupKeyUnique)
{
	P_GET_STRUCT_REF(FRealtimeMeshLODKey,Z_Param_Out_LODKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSectionGroupKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeSectionGroupKeyUnique(Z_Param_Out_LODKey);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionGroupKeyUnique ***

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionKeyForPolygonGroup 
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyForPolygonGroup_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		int32 PolygonGroup;
		FRealtimeMeshSectionKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Stream" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSectionKeyForPolygonGroup constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSectionKeyForPolygonGroup constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSectionKeyForPolygonGroup Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyForPolygonGroup_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::NewProp_PolygonGroup = { "PolygonGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyForPolygonGroup_Parms, PolygonGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyForPolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::NewProp_PolygonGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::PropPointers) < 2048);
// ********** End Function MakeSectionKeyForPolygonGroup Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeSectionKeyForPolygonGroup", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyForPolygonGroup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyForPolygonGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeSectionKeyForPolygonGroup)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_PolygonGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSectionKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeSectionKeyForPolygonGroup(Z_Param_Out_SectionGroupKey,Z_Param_PolygonGroup);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionKeyForPolygonGroup 

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionKeyIndexed *****
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyIndexed_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		int32 SectionIndex;
		FRealtimeMeshSectionKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSectionKeyIndexed constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSectionKeyIndexed constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSectionKeyIndexed Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyIndexed_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyIndexed_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyIndexed_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::PropPointers) < 2048);
// ********** End Function MakeSectionKeyIndexed Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeSectionKeyIndexed", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyIndexed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyIndexed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeSectionKeyIndexed)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSectionKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeSectionKeyIndexed(Z_Param_Out_SectionGroupKey,Z_Param_SectionIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionKeyIndexed *******

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionKeyNamed *******
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyNamed_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		FName SectionName;
		FRealtimeMeshSectionKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSectionKeyNamed constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSectionKeyNamed constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSectionKeyNamed Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyNamed_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyNamed_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyNamed_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::PropPointers) < 2048);
// ********** End Function MakeSectionKeyNamed Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeSectionKeyNamed", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyNamed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyNamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeSectionKeyNamed)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSectionKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeSectionKeyNamed(Z_Param_Out_SectionGroupKey,Z_Param_SectionName);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionKeyNamed *********

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionKeyUnique ******
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	struct FRealtimeMeshSectionGroupKey
	{
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyUnique_Parms
	{
		FRealtimeMeshSectionGroupKey SectionGroupKey;
		FRealtimeMeshSectionKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroupKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeSectionKeyUnique constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroupKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeSectionKeyUnique constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeSectionKeyUnique Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::NewProp_SectionGroupKey = { "SectionGroupKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyUnique_Parms, SectionGroupKey), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroupKey_MetaData), NewProp_SectionGroupKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyUnique_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::NewProp_SectionGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::PropPointers) < 2048);
// ********** End Function MakeSectionKeyUnique Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeSectionKeyUnique", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyUnique_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeSectionKeyUnique_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeSectionKeyUnique)
{
	P_GET_STRUCT_REF(FRealtimeMeshSectionGroupKey,Z_Param_Out_SectionGroupKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSectionKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeSectionKeyUnique(Z_Param_Out_SectionGroupKey);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeSectionKeyUnique ********

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeStreamKey *************
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics
{
	struct FRealtimeMeshStreamKey
	{
		ERealtimeMeshStreamType StreamType;
		FName StreamName;
	};

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamKey_Parms
	{
		ERealtimeMeshStreamType StreamType;
		FName StreamName;
		FRealtimeMeshStreamKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStreamKey constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_StreamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StreamName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStreamKey constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStreamKey Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::NewProp_StreamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::NewProp_StreamType = { "StreamType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamKey_Parms, StreamType), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType, METADATA_PARAMS(0, nullptr) }; // 74563454
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::NewProp_StreamName = { "StreamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamKey_Parms, StreamName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshStreamKey, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::NewProp_StreamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::NewProp_StreamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::NewProp_StreamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::PropPointers) < 2048);
// ********** End Function MakeStreamKey Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeStreamKey", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeStreamKey)
{
	P_GET_ENUM(ERealtimeMeshStreamType,Z_Param_StreamType);
	P_GET_PROPERTY(FNameProperty,Z_Param_StreamName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshStreamKey*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeStreamKey(ERealtimeMeshStreamType(Z_Param_StreamType),Z_Param_StreamName);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeStreamKey ***************

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary Function MakeStreamRange ***********
struct Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics
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

	struct RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamRange_Parms
	{
		int32 VerticesLowerInclusive;
		int32 VerticesUpperExclusive;
		int32 IndicesLowerInclusive;
		int32 IndicesUpperExclusive;
		FRealtimeMeshStreamRange ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Stream" },
		{ "CPP_Default_IndicesLowerInclusive", "0" },
		{ "CPP_Default_IndicesUpperExclusive", "0" },
		{ "CPP_Default_VerticesLowerInclusive", "0" },
		{ "CPP_Default_VerticesUpperExclusive", "0" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStreamRange constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticesLowerInclusive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticesUpperExclusive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndicesLowerInclusive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndicesUpperExclusive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStreamRange constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStreamRange Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_VerticesLowerInclusive = { "VerticesLowerInclusive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamRange_Parms, VerticesLowerInclusive), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_VerticesUpperExclusive = { "VerticesUpperExclusive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamRange_Parms, VerticesUpperExclusive), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_IndicesLowerInclusive = { "IndicesLowerInclusive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamRange_Parms, IndicesLowerInclusive), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_IndicesUpperExclusive = { "IndicesUpperExclusive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamRange_Parms, IndicesUpperExclusive), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshStreamRange, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_VerticesLowerInclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_VerticesUpperExclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_IndicesLowerInclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_IndicesUpperExclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::PropPointers) < 2048);
// ********** End Function MakeStreamRange Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, nullptr, "MakeStreamRange", 	Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamRange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::RealtimeMeshBlueprintFunctionLibrary_eventMakeStreamRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshBlueprintFunctionLibrary::execMakeStreamRange)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_VerticesLowerInclusive);
	P_GET_PROPERTY(FIntProperty,Z_Param_VerticesUpperExclusive);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndicesLowerInclusive);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndicesUpperExclusive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshStreamRange*)Z_Param__Result=URealtimeMeshBlueprintFunctionLibrary::MakeStreamRange(Z_Param_VerticesLowerInclusive,Z_Param_VerticesUpperExclusive,Z_Param_IndicesLowerInclusive,Z_Param_IndicesUpperExclusive);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary Function MakeStreamRange *************

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshBlueprintFunctionLibrary;
UClass* URealtimeMeshBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_URealtimeMeshBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_URealtimeMeshBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesURealtimeMeshBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_URealtimeMeshBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_NoRegister()
{
	return URealtimeMeshBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RealtimeMeshLibrary.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLibrary.h" },
		{ "ScriptName", "RealtimeMeshLibrary" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary constinit property declarations ****
// ********** End Class URealtimeMeshBlueprintFunctionLibrary constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BreakLODKey"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execBreakLODKey },
		{ .NameUTF8 = UTF8TEXT("Conv_IntToRealtimeMeshLODKey"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execConv_IntToRealtimeMeshLODKey },
		{ .NameUTF8 = UTF8TEXT("GetCommonStreamKey"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execGetCommonStreamKey },
		{ .NameUTF8 = UTF8TEXT("MakeLODKey"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeLODKey },
		{ .NameUTF8 = UTF8TEXT("MakeSectionGroupKeyIndexed"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeSectionGroupKeyIndexed },
		{ .NameUTF8 = UTF8TEXT("MakeSectionGroupKeyNamed"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeSectionGroupKeyNamed },
		{ .NameUTF8 = UTF8TEXT("MakeSectionGroupKeyUnique"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeSectionGroupKeyUnique },
		{ .NameUTF8 = UTF8TEXT("MakeSectionKeyForPolygonGroup"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeSectionKeyForPolygonGroup },
		{ .NameUTF8 = UTF8TEXT("MakeSectionKeyIndexed"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeSectionKeyIndexed },
		{ .NameUTF8 = UTF8TEXT("MakeSectionKeyNamed"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeSectionKeyNamed },
		{ .NameUTF8 = UTF8TEXT("MakeSectionKeyUnique"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeSectionKeyUnique },
		{ .NameUTF8 = UTF8TEXT("MakeStreamKey"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeStreamKey },
		{ .NameUTF8 = UTF8TEXT("MakeStreamRange"), .Pointer = &URealtimeMeshBlueprintFunctionLibrary::execMakeStreamRange },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_BreakLODKey, "BreakLODKey" }, // 3587864439
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_Conv_IntToRealtimeMeshLODKey, "Conv_IntToRealtimeMeshLODKey" }, // 3828026703
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_GetCommonStreamKey, "GetCommonStreamKey" }, // 3960935819
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeLODKey, "MakeLODKey" }, // 3876413405
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyIndexed, "MakeSectionGroupKeyIndexed" }, // 1442237850
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyNamed, "MakeSectionGroupKeyNamed" }, // 1255990887
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionGroupKeyUnique, "MakeSectionGroupKeyUnique" }, // 2971621132
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyForPolygonGroup, "MakeSectionKeyForPolygonGroup" }, // 1275101606
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyIndexed, "MakeSectionKeyIndexed" }, // 1775879747
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyNamed, "MakeSectionKeyNamed" }, // 1268829577
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeSectionKeyUnique, "MakeSectionKeyUnique" }, // 226656113
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamKey, "MakeStreamKey" }, // 2284534150
		{ &Z_Construct_UFunction_URealtimeMeshBlueprintFunctionLibrary_MakeStreamRange, "MakeStreamRange" }, // 1534083767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics::ClassParams = {
	&URealtimeMeshBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
void URealtimeMeshBlueprintFunctionLibrary::StaticRegisterNativesURealtimeMeshBlueprintFunctionLibrary()
{
	UClass* Class = URealtimeMeshBlueprintFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshBlueprintFunctionLibrary.OuterSingleton;
}
URealtimeMeshBlueprintFunctionLibrary::URealtimeMeshBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshBlueprintFunctionLibrary);
URealtimeMeshBlueprintFunctionLibrary::~URealtimeMeshBlueprintFunctionLibrary() {}
// ********** End Class URealtimeMeshBlueprintFunctionLibrary **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERealtimeMeshCommonStream_StaticEnum, TEXT("ERealtimeMeshCommonStream"), &Z_Registration_Info_UEnum_ERealtimeMeshCommonStream, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3026329415U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary, URealtimeMeshBlueprintFunctionLibrary::StaticClass, TEXT("URealtimeMeshBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_URealtimeMeshBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshBlueprintFunctionLibrary), 666542198U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h__Script_RealtimeMeshComponent_554587545{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h__Script_RealtimeMeshComponent_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h__Script_RealtimeMeshComponent_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
