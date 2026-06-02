// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshDataOptimizer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshDataOptimizer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshDataOptimizer();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshDataOptimizer_NoRegister();
REALTIMEMESHEXT_API UEnum* Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERealtimeMeshOptimizationQuality ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshOptimizationQuality;
static UEnum* ERealtimeMeshOptimizationQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshOptimizationQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshOptimizationQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("ERealtimeMeshOptimizationQuality"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshOptimizationQuality.OuterSingleton;
}
template<> REALTIMEMESHEXT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshOptimizationQuality>()
{
	return ERealtimeMeshOptimizationQuality_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "GenerationSpeed.Name", "ERealtimeMeshOptimizationQuality::GenerationSpeed" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDataOptimizer.h" },
		{ "RenderingEfficiency.Name", "ERealtimeMeshOptimizationQuality::RenderingEfficiency" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshOptimizationQuality::RenderingEfficiency", (int64)ERealtimeMeshOptimizationQuality::RenderingEfficiency },
		{ "ERealtimeMeshOptimizationQuality::GenerationSpeed", (int64)ERealtimeMeshOptimizationQuality::GenerationSpeed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	"ERealtimeMeshOptimizationQuality",
	"ERealtimeMeshOptimizationQuality",
	Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshOptimizationQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshOptimizationQuality.InnerSingleton, Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshOptimizationQuality.InnerSingleton;
}
// ********** End Enum ERealtimeMeshOptimizationQuality ********************************************

// ********** Begin Class URealtimeMeshDataOptimizer Function OptimizeMeshIndexing *****************
struct Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics
{
	struct RealtimeMeshDataOptimizer_eventOptimizeMeshIndexing_Parms
	{
		URealtimeMeshStreamSet* Streams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Optimization" },
		{ "Comment", "/**\n\x09 *\x09Generates, or re-generates the Triangles streams to remove redundant vertices.\n\x09 *\x09Will use your existing Triangles stream if available, or generate one out of each successive group of 3 vertices\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDataOptimizer.h" },
		{ "ToolTip", "Generates, or re-generates the Triangles streams to remove redundant vertices.\nWill use your existing Triangles stream if available, or generate one out of each successive group of 3 vertices" },
	};
#endif // WITH_METADATA

// ********** Begin Function OptimizeMeshIndexing constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Streams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OptimizeMeshIndexing constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OptimizeMeshIndexing Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::NewProp_Streams = { "Streams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDataOptimizer_eventOptimizeMeshIndexing_Parms, Streams), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::NewProp_Streams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::PropPointers) < 2048);
// ********** End Function OptimizeMeshIndexing Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDataOptimizer, nullptr, "OptimizeMeshIndexing", 	Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::RealtimeMeshDataOptimizer_eventOptimizeMeshIndexing_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::RealtimeMeshDataOptimizer_eventOptimizeMeshIndexing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDataOptimizer::execOptimizeMeshIndexing)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_Streams);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshDataOptimizer::OptimizeMeshIndexing(Z_Param_Streams);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDataOptimizer Function OptimizeMeshIndexing *******************

// ********** Begin Class URealtimeMeshDataOptimizer Function OptimizeOverdraw *********************
struct Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics
{
	struct RealtimeMeshDataOptimizer_eventOptimizeOverdraw_Parms
	{
		URealtimeMeshStreamSet* Streams;
		float Threshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Optimization" },
		{ "Comment", "/**\n\x09 *\x09Optimizes the mesh data to attempt to reduce overdraw\n\x09 */" },
		{ "CPP_Default_Threshold", "1.010000" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDataOptimizer.h" },
		{ "ToolTip", "Optimizes the mesh data to attempt to reduce overdraw" },
	};
#endif // WITH_METADATA

// ********** Begin Function OptimizeOverdraw constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Streams;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OptimizeOverdraw constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OptimizeOverdraw Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::NewProp_Streams = { "Streams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDataOptimizer_eventOptimizeOverdraw_Parms, Streams), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDataOptimizer_eventOptimizeOverdraw_Parms, Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::NewProp_Streams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::NewProp_Threshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::PropPointers) < 2048);
// ********** End Function OptimizeOverdraw Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDataOptimizer, nullptr, "OptimizeOverdraw", 	Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::RealtimeMeshDataOptimizer_eventOptimizeOverdraw_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::RealtimeMeshDataOptimizer_eventOptimizeOverdraw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDataOptimizer::execOptimizeOverdraw)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_Streams);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshDataOptimizer::OptimizeOverdraw(Z_Param_Streams,Z_Param_Threshold);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDataOptimizer Function OptimizeOverdraw ***********************

// ********** Begin Class URealtimeMeshDataOptimizer Function OptimizeVertexCache ******************
struct Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics
{
	struct RealtimeMeshDataOptimizer_eventOptimizeVertexCache_Parms
	{
		URealtimeMeshStreamSet* Streams;
		ERealtimeMeshOptimizationQuality Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Optimization" },
		{ "Comment", "/**\n\x09 *\x09Optimizes the vertex streams for the gpu cache efficiency.\n\x09 */" },
		{ "CPP_Default_Quality", "RenderingEfficiency" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDataOptimizer.h" },
		{ "ToolTip", "Optimizes the vertex streams for the gpu cache efficiency." },
	};
#endif // WITH_METADATA

// ********** Begin Function OptimizeVertexCache constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Streams;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OptimizeVertexCache constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OptimizeVertexCache Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::NewProp_Streams = { "Streams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDataOptimizer_eventOptimizeVertexCache_Parms, Streams), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::NewProp_Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDataOptimizer_eventOptimizeVertexCache_Parms, Quality), Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshOptimizationQuality, METADATA_PARAMS(0, nullptr) }; // 3675441606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::NewProp_Streams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::NewProp_Quality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::PropPointers) < 2048);
// ********** End Function OptimizeVertexCache Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDataOptimizer, nullptr, "OptimizeVertexCache", 	Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::RealtimeMeshDataOptimizer_eventOptimizeVertexCache_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::RealtimeMeshDataOptimizer_eventOptimizeVertexCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDataOptimizer::execOptimizeVertexCache)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_Streams);
	P_GET_ENUM(ERealtimeMeshOptimizationQuality,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshDataOptimizer::OptimizeVertexCache(Z_Param_Streams,ERealtimeMeshOptimizationQuality(Z_Param_Quality));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDataOptimizer Function OptimizeVertexCache ********************

// ********** Begin Class URealtimeMeshDataOptimizer Function OptimizeVertexFetch ******************
struct Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics
{
	struct RealtimeMeshDataOptimizer_eventOptimizeVertexFetch_Parms
	{
		URealtimeMeshStreamSet* Streams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Optimization" },
		{ "Comment", "/**\n\x09 *\x09Optimizes the vertex data to improve memory loading efficiency.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDataOptimizer.h" },
		{ "ToolTip", "Optimizes the vertex data to improve memory loading efficiency." },
	};
#endif // WITH_METADATA

// ********** Begin Function OptimizeVertexFetch constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Streams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OptimizeVertexFetch constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OptimizeVertexFetch Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::NewProp_Streams = { "Streams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDataOptimizer_eventOptimizeVertexFetch_Parms, Streams), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::NewProp_Streams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::PropPointers) < 2048);
// ********** End Function OptimizeVertexFetch Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDataOptimizer, nullptr, "OptimizeVertexFetch", 	Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::RealtimeMeshDataOptimizer_eventOptimizeVertexFetch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::RealtimeMeshDataOptimizer_eventOptimizeVertexFetch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDataOptimizer::execOptimizeVertexFetch)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_Streams);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshDataOptimizer::OptimizeVertexFetch(Z_Param_Streams);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDataOptimizer Function OptimizeVertexFetch ********************

// ********** Begin Class URealtimeMeshDataOptimizer ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshDataOptimizer;
UClass* URealtimeMeshDataOptimizer::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshDataOptimizer;
	if (!Z_Registration_Info_UClass_URealtimeMeshDataOptimizer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshDataOptimizer"),
			Z_Registration_Info_UClass_URealtimeMeshDataOptimizer.InnerSingleton,
			StaticRegisterNativesURealtimeMeshDataOptimizer,
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
	return Z_Registration_Info_UClass_URealtimeMeshDataOptimizer.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshDataOptimizer_NoRegister()
{
	return URealtimeMeshDataOptimizer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RealtimeMeshDataOptimizer.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDataOptimizer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshDataOptimizer constinit property declarations ***************
// ********** End Class URealtimeMeshDataOptimizer constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OptimizeMeshIndexing"), .Pointer = &URealtimeMeshDataOptimizer::execOptimizeMeshIndexing },
		{ .NameUTF8 = UTF8TEXT("OptimizeOverdraw"), .Pointer = &URealtimeMeshDataOptimizer::execOptimizeOverdraw },
		{ .NameUTF8 = UTF8TEXT("OptimizeVertexCache"), .Pointer = &URealtimeMeshDataOptimizer::execOptimizeVertexCache },
		{ .NameUTF8 = UTF8TEXT("OptimizeVertexFetch"), .Pointer = &URealtimeMeshDataOptimizer::execOptimizeVertexFetch },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeMeshIndexing, "OptimizeMeshIndexing" }, // 543263516
		{ &Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeOverdraw, "OptimizeOverdraw" }, // 3690007102
		{ &Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexCache, "OptimizeVertexCache" }, // 2488246901
		{ &Z_Construct_UFunction_URealtimeMeshDataOptimizer_OptimizeVertexFetch, "OptimizeVertexFetch" }, // 1297655595
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshDataOptimizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics::ClassParams = {
	&URealtimeMeshDataOptimizer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics::Class_MetaDataParams)
};
void URealtimeMeshDataOptimizer::StaticRegisterNativesURealtimeMeshDataOptimizer()
{
	UClass* Class = URealtimeMeshDataOptimizer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshDataOptimizer()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshDataOptimizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshDataOptimizer.OuterSingleton, Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshDataOptimizer.OuterSingleton;
}
URealtimeMeshDataOptimizer::URealtimeMeshDataOptimizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshDataOptimizer);
URealtimeMeshDataOptimizer::~URealtimeMeshDataOptimizer() {}
// ********** End Class URealtimeMeshDataOptimizer *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERealtimeMeshOptimizationQuality_StaticEnum, TEXT("ERealtimeMeshOptimizationQuality"), &Z_Registration_Info_UEnum_ERealtimeMeshOptimizationQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3675441606U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshDataOptimizer, URealtimeMeshDataOptimizer::StaticClass, TEXT("URealtimeMeshDataOptimizer"), &Z_Registration_Info_UClass_URealtimeMeshDataOptimizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshDataOptimizer), 2816888584U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h__Script_RealtimeMeshExt_3113042373{
	TEXT("/Script/RealtimeMeshExt"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h__Script_RealtimeMeshExt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h__Script_RealtimeMeshExt_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h__Script_RealtimeMeshExt_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h__Script_RealtimeMeshExt_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
