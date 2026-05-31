// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryLong.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryLong() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryLong Function CastToDoubleBytes *********************************
struct Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics
{
	struct LowEntryLong_eventCastToDoubleBytes_Parms
	{
		ULowEntryDouble* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Casts the long to a double.\n\x09*/" },
		{ "DisplayName", "Cast To Double (bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Casts the long to a double." },
	};
#endif // WITH_METADATA

// ********** Begin Function CastToDoubleBytes constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CastToDoubleBytes constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CastToDoubleBytes Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventCastToDoubleBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::PropPointers) < 2048);
// ********** End Function CastToDoubleBytes Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "CastToDoubleBytes", 	Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::LowEntryLong_eventCastToDoubleBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::LowEntryLong_eventCastToDoubleBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execCastToDoubleBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryDouble**)Z_Param__Result=P_THIS->CastToDoubleBytes();
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function CastToDoubleBytes ***********************************

// ********** Begin Class ULowEntryLong Function CastToString **************************************
struct Z_Construct_UFunction_ULowEntryLong_CastToString_Statics
{
	struct LowEntryLong_eventCastToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Casts the long to a string.\n\x09*/" },
		{ "DisplayName", "To String" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Casts the long to a string." },
	};
#endif // WITH_METADATA

// ********** Begin Function CastToString constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CastToString constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CastToString Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventCastToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::PropPointers) < 2048);
// ********** End Function CastToString Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "CastToString", 	Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::LowEntryLong_eventCastToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::LowEntryLong_eventCastToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_CastToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execCastToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->CastToString();
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function CastToString ****************************************

// ********** Begin Class ULowEntryLong Function CreateClone ***************************************
struct Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics
{
	struct LowEntryLong_eventCreateClone_Parms
	{
		ULowEntryLong* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Casts the long to a double.\n\x09*/" },
		{ "DisplayName", "Create Clone" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Casts the long to a double." },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateClone constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateClone constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateClone Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventCreateClone_Parms, ReturnValue), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::PropPointers) < 2048);
// ********** End Function CreateClone Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "CreateClone", 	Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::LowEntryLong_eventCreateClone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::LowEntryLong_eventCreateClone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_CreateClone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execCreateClone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryLong**)Z_Param__Result=P_THIS->CreateClone();
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function CreateClone *****************************************

// ********** Begin Class ULowEntryLong Function DoubleBytes_GreaterThan ***************************
struct Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics
{
	struct LowEntryLong_eventDoubleBytes_GreaterThan_Parms
	{
		ULowEntryDouble* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is greater than the given double.\n\x09*/" },
		{ "DisplayName", "Greater Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is greater than the given double." },
	};
#endif // WITH_METADATA

// ********** Begin Function DoubleBytes_GreaterThan constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoubleBytes_GreaterThan constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoubleBytes_GreaterThan Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventDoubleBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventDoubleBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventDoubleBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::PropPointers) < 2048);
// ********** End Function DoubleBytes_GreaterThan Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "DoubleBytes_GreaterThan", 	Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::LowEntryLong_eventDoubleBytes_GreaterThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::LowEntryLong_eventDoubleBytes_GreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execDoubleBytes_GreaterThan)
{
	P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoubleBytes_GreaterThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function DoubleBytes_GreaterThan *****************************

// ********** Begin Class ULowEntryLong Function DoubleBytes_LessThan ******************************
struct Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics
{
	struct LowEntryLong_eventDoubleBytes_LessThan_Parms
	{
		ULowEntryDouble* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is less than the given double.\n\x09*/" },
		{ "DisplayName", "Less Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is less than the given double." },
	};
#endif // WITH_METADATA

// ********** Begin Function DoubleBytes_LessThan constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoubleBytes_LessThan constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoubleBytes_LessThan Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventDoubleBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventDoubleBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventDoubleBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::PropPointers) < 2048);
// ********** End Function DoubleBytes_LessThan Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "DoubleBytes_LessThan", 	Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::LowEntryLong_eventDoubleBytes_LessThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::LowEntryLong_eventDoubleBytes_LessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execDoubleBytes_LessThan)
{
	P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoubleBytes_LessThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function DoubleBytes_LessThan ********************************

// ********** Begin Class ULowEntryLong Function Float_GreaterThan *********************************
struct Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics
{
	struct LowEntryLong_eventFloat_GreaterThan_Parms
	{
		double Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is greater than the given float.\n\x09*/" },
		{ "DisplayName", "Greater Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is greater than the given float." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Float_GreaterThan constinit property declarations *********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Float_GreaterThan constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Float_GreaterThan Property Definitions ********************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventFloat_GreaterThan_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventFloat_GreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventFloat_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::PropPointers) < 2048);
// ********** End Function Float_GreaterThan Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Float_GreaterThan", 	Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::LowEntryLong_eventFloat_GreaterThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::LowEntryLong_eventFloat_GreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execFloat_GreaterThan)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Float_GreaterThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function Float_GreaterThan ***********************************

// ********** Begin Class ULowEntryLong Function Float_LessThan ************************************
struct Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics
{
	struct LowEntryLong_eventFloat_LessThan_Parms
	{
		double Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is less than the given float.\n\x09*/" },
		{ "DisplayName", "Less Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is less than the given float." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Float_LessThan constinit property declarations ************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Float_LessThan constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Float_LessThan Property Definitions ***********************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventFloat_LessThan_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventFloat_LessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventFloat_LessThan_Parms), &Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::PropPointers) < 2048);
// ********** End Function Float_LessThan Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Float_LessThan", 	Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::LowEntryLong_eventFloat_LessThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::LowEntryLong_eventFloat_LessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_Float_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execFloat_LessThan)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Float_LessThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function Float_LessThan **************************************

// ********** Begin Class ULowEntryLong Function GetBytes ******************************************
struct Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics
{
	struct LowEntryLong_eventGetBytes_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns the bytes (always 8 bytes).\n\x09*/" },
		{ "DisplayName", "Get Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns the bytes (always 8 bytes)." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBytes constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBytes constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBytes Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventGetBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::PropPointers) < 2048);
// ********** End Function GetBytes Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "GetBytes", 	Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::LowEntryLong_eventGetBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::LowEntryLong_eventGetBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_GetBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execGetBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetBytes();
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function GetBytes ********************************************

// ********** Begin Class ULowEntryLong Function GetLong *******************************************
struct Z_Construct_UFunction_ULowEntryLong_GetLong_Statics
{
	struct LowEntryLong_eventGetLong_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns the value.\n\x09*/" },
		{ "DisplayName", "Get Value" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns the value." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLong constinit property declarations *******************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLong constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLong Property Definitions ******************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventGetLong_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::PropPointers) < 2048);
// ********** End Function GetLong Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "GetLong", 	Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::LowEntryLong_eventGetLong_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::LowEntryLong_eventGetLong_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_GetLong()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execGetLong)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetLong();
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function GetLong *********************************************

// ********** Begin Class ULowEntryLong Function Integer_Add ***************************************
struct Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics
{
	struct LowEntryLong_eventInteger_Add_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Add an integer to this long.\n\x09*/" },
		{ "DisplayName", "Add (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Add an integer to this long." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Integer_Add constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Integer_Add constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Integer_Add Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventInteger_Add_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::PropPointers) < 2048);
// ********** End Function Integer_Add Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_Add", 	Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::LowEntryLong_eventInteger_Add_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::LowEntryLong_eventInteger_Add_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execInteger_Add)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Integer_Add(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function Integer_Add *****************************************

// ********** Begin Class ULowEntryLong Function Integer_Equals ************************************
struct Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics
{
	struct LowEntryLong_eventInteger_Equals_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is equal to the given integer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Integer_Equals constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Integer_Equals constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Integer_Equals Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventInteger_Equals_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventInteger_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventInteger_Equals_Parms), &Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::PropPointers) < 2048);
// ********** End Function Integer_Equals Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_Equals", 	Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::LowEntryLong_eventInteger_Equals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::LowEntryLong_eventInteger_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execInteger_Equals)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Integer_Equals(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function Integer_Equals **************************************

// ********** Begin Class ULowEntryLong Function Integer_GreaterThan *******************************
struct Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics
{
	struct LowEntryLong_eventInteger_GreaterThan_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is greater than the given integer.\n\x09*/" },
		{ "DisplayName", "Greater Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is greater than the given integer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Integer_GreaterThan constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Integer_GreaterThan constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Integer_GreaterThan Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventInteger_GreaterThan_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventInteger_GreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventInteger_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::PropPointers) < 2048);
// ********** End Function Integer_GreaterThan Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_GreaterThan", 	Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::LowEntryLong_eventInteger_GreaterThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::LowEntryLong_eventInteger_GreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execInteger_GreaterThan)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Integer_GreaterThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function Integer_GreaterThan *********************************

// ********** Begin Class ULowEntryLong Function Integer_LessThan **********************************
struct Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics
{
	struct LowEntryLong_eventInteger_LessThan_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is less than the given integer.\n\x09*/" },
		{ "DisplayName", "Less Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is less than the given integer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Integer_LessThan constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Integer_LessThan constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Integer_LessThan Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventInteger_LessThan_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventInteger_LessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventInteger_LessThan_Parms), &Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::PropPointers) < 2048);
// ********** End Function Integer_LessThan Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_LessThan", 	Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::LowEntryLong_eventInteger_LessThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::LowEntryLong_eventInteger_LessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execInteger_LessThan)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Integer_LessThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function Integer_LessThan ************************************

// ********** Begin Class ULowEntryLong Function Integer_Subtract **********************************
struct Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics
{
	struct LowEntryLong_eventInteger_Subtract_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts an integer from this long.\n\x09*/" },
		{ "DisplayName", "Subtract (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Subtracts an integer from this long." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Integer_Subtract constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Integer_Subtract constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Integer_Subtract Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventInteger_Subtract_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::PropPointers) < 2048);
// ********** End Function Integer_Subtract Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_Subtract", 	Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::LowEntryLong_eventInteger_Subtract_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::LowEntryLong_eventInteger_Subtract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_Subtract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execInteger_Subtract)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Integer_Subtract(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function Integer_Subtract ************************************

// ********** Begin Class ULowEntryLong Function LongBytes_Add *************************************
struct Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics
{
	struct LowEntryLong_eventLongBytes_Add_Parms
	{
		ULowEntryLong* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Add a long to this long.\n\x09*/" },
		{ "DisplayName", "Add (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Add a long to this long." },
	};
#endif // WITH_METADATA

// ********** Begin Function LongBytes_Add constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LongBytes_Add constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LongBytes_Add Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventLongBytes_Add_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::PropPointers) < 2048);
// ********** End Function LongBytes_Add Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_Add", 	Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::LowEntryLong_eventLongBytes_Add_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::LowEntryLong_eventLongBytes_Add_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execLongBytes_Add)
{
	P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LongBytes_Add(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function LongBytes_Add ***************************************

// ********** Begin Class ULowEntryLong Function LongBytes_Equals **********************************
struct Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics
{
	struct LowEntryLong_eventLongBytes_Equals_Parms
	{
		ULowEntryLong* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is equal to the given integer." },
	};
#endif // WITH_METADATA

// ********** Begin Function LongBytes_Equals constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LongBytes_Equals constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LongBytes_Equals Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventLongBytes_Equals_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventLongBytes_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventLongBytes_Equals_Parms), &Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::PropPointers) < 2048);
// ********** End Function LongBytes_Equals Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_Equals", 	Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::LowEntryLong_eventLongBytes_Equals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::LowEntryLong_eventLongBytes_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execLongBytes_Equals)
{
	P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LongBytes_Equals(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function LongBytes_Equals ************************************

// ********** Begin Class ULowEntryLong Function LongBytes_GreaterThan *****************************
struct Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics
{
	struct LowEntryLong_eventLongBytes_GreaterThan_Parms
	{
		ULowEntryLong* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is greater than the given integer.\n\x09*/" },
		{ "DisplayName", "Greater Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is greater than the given integer." },
	};
#endif // WITH_METADATA

// ********** Begin Function LongBytes_GreaterThan constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LongBytes_GreaterThan constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LongBytes_GreaterThan Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventLongBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventLongBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventLongBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::PropPointers) < 2048);
// ********** End Function LongBytes_GreaterThan Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_GreaterThan", 	Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::LowEntryLong_eventLongBytes_GreaterThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::LowEntryLong_eventLongBytes_GreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execLongBytes_GreaterThan)
{
	P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LongBytes_GreaterThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function LongBytes_GreaterThan *******************************

// ********** Begin Class ULowEntryLong Function LongBytes_LessThan ********************************
struct Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics
{
	struct LowEntryLong_eventLongBytes_LessThan_Parms
	{
		ULowEntryLong* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is less than the given integer.\n\x09*/" },
		{ "DisplayName", "Less Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is less than the given integer." },
	};
#endif // WITH_METADATA

// ********** Begin Function LongBytes_LessThan constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LongBytes_LessThan constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LongBytes_LessThan Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventLongBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLong_eventLongBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLong_eventLongBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::PropPointers) < 2048);
// ********** End Function LongBytes_LessThan Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_LessThan", 	Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::LowEntryLong_eventLongBytes_LessThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::LowEntryLong_eventLongBytes_LessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execLongBytes_LessThan)
{
	P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LongBytes_LessThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function LongBytes_LessThan **********************************

// ********** Begin Class ULowEntryLong Function LongBytes_Subtract ********************************
struct Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics
{
	struct LowEntryLong_eventLongBytes_Subtract_Parms
	{
		ULowEntryLong* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts an integer from this long.\n\x09*/" },
		{ "DisplayName", "Subtract (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Subtracts an integer from this long." },
	};
#endif // WITH_METADATA

// ********** Begin Function LongBytes_Subtract constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LongBytes_Subtract constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LongBytes_Subtract Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventLongBytes_Subtract_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::PropPointers) < 2048);
// ********** End Function LongBytes_Subtract Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_Subtract", 	Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::LowEntryLong_eventLongBytes_Subtract_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::LowEntryLong_eventLongBytes_Subtract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execLongBytes_Subtract)
{
	P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LongBytes_Subtract(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function LongBytes_Subtract **********************************

// ********** Begin Class ULowEntryLong Function SetBytes ******************************************
struct Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics
{
	struct LowEntryLong_eventSetBytes_Parms
	{
		TArray<uint8> ByteArray;
		int32 Index;
		int32 Length;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Sets the bytes (will only add the first 8 bytes, will add 0 bytes if the given byte array was less than 8 bytes).\n\x09*/" },
		{ "CPP_Default_Index", "0" },
		{ "CPP_Default_Length", "2147483647" },
		{ "DisplayName", "Set Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Sets the bytes (will only add the first 8 bytes, will add 0 bytes if the given byte array was less than 8 bytes)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBytes constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBytes constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBytes Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventSetBytes_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteArray_MetaData), NewProp_ByteArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventSetBytes_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventSetBytes_Parms, Length), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::PropPointers) < 2048);
// ********** End Function SetBytes Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "SetBytes", 	Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::LowEntryLong_eventSetBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::LowEntryLong_eventSetBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_SetBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execSetBytes)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Length);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBytes(Z_Param_Out_ByteArray,Z_Param_Index,Z_Param_Length);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function SetBytes ********************************************

// ********** Begin Class ULowEntryLong Function SetLong *******************************************
struct Z_Construct_UFunction_ULowEntryLong_SetLong_Statics
{
	struct LowEntryLong_eventSetLong_Parms
	{
		int64 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Sets the value.\n\x09*/" },
		{ "DisplayName", "Set Value" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Sets the value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLong constinit property declarations *******************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLong constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLong Property Definitions ******************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLong_eventSetLong_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::PropPointers) < 2048);
// ********** End Function SetLong Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "SetLong", 	Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::LowEntryLong_eventSetLong_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::LowEntryLong_eventSetLong_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLong_SetLong()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLong::execSetLong)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLong(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLong Function SetLong *********************************************

// ********** Begin Class ULowEntryLong ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryLong;
UClass* ULowEntryLong::GetPrivateStaticClass()
{
	using TClass = ULowEntryLong;
	if (!Z_Registration_Info_UClass_ULowEntryLong.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryLong"),
			Z_Registration_Info_UClass_ULowEntryLong.InnerSingleton,
			StaticRegisterNativesULowEntryLong,
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
	return Z_Registration_Info_UClass_ULowEntryLong.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryLong_NoRegister()
{
	return ULowEntryLong::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryLong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesTypes/LowEntryLong.h" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryLong constinit property declarations ****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryLong constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CastToDoubleBytes"), .Pointer = &ULowEntryLong::execCastToDoubleBytes },
		{ .NameUTF8 = UTF8TEXT("CastToString"), .Pointer = &ULowEntryLong::execCastToString },
		{ .NameUTF8 = UTF8TEXT("CreateClone"), .Pointer = &ULowEntryLong::execCreateClone },
		{ .NameUTF8 = UTF8TEXT("DoubleBytes_GreaterThan"), .Pointer = &ULowEntryLong::execDoubleBytes_GreaterThan },
		{ .NameUTF8 = UTF8TEXT("DoubleBytes_LessThan"), .Pointer = &ULowEntryLong::execDoubleBytes_LessThan },
		{ .NameUTF8 = UTF8TEXT("Float_GreaterThan"), .Pointer = &ULowEntryLong::execFloat_GreaterThan },
		{ .NameUTF8 = UTF8TEXT("Float_LessThan"), .Pointer = &ULowEntryLong::execFloat_LessThan },
		{ .NameUTF8 = UTF8TEXT("GetBytes"), .Pointer = &ULowEntryLong::execGetBytes },
		{ .NameUTF8 = UTF8TEXT("GetLong"), .Pointer = &ULowEntryLong::execGetLong },
		{ .NameUTF8 = UTF8TEXT("Integer_Add"), .Pointer = &ULowEntryLong::execInteger_Add },
		{ .NameUTF8 = UTF8TEXT("Integer_Equals"), .Pointer = &ULowEntryLong::execInteger_Equals },
		{ .NameUTF8 = UTF8TEXT("Integer_GreaterThan"), .Pointer = &ULowEntryLong::execInteger_GreaterThan },
		{ .NameUTF8 = UTF8TEXT("Integer_LessThan"), .Pointer = &ULowEntryLong::execInteger_LessThan },
		{ .NameUTF8 = UTF8TEXT("Integer_Subtract"), .Pointer = &ULowEntryLong::execInteger_Subtract },
		{ .NameUTF8 = UTF8TEXT("LongBytes_Add"), .Pointer = &ULowEntryLong::execLongBytes_Add },
		{ .NameUTF8 = UTF8TEXT("LongBytes_Equals"), .Pointer = &ULowEntryLong::execLongBytes_Equals },
		{ .NameUTF8 = UTF8TEXT("LongBytes_GreaterThan"), .Pointer = &ULowEntryLong::execLongBytes_GreaterThan },
		{ .NameUTF8 = UTF8TEXT("LongBytes_LessThan"), .Pointer = &ULowEntryLong::execLongBytes_LessThan },
		{ .NameUTF8 = UTF8TEXT("LongBytes_Subtract"), .Pointer = &ULowEntryLong::execLongBytes_Subtract },
		{ .NameUTF8 = UTF8TEXT("SetBytes"), .Pointer = &ULowEntryLong::execSetBytes },
		{ .NameUTF8 = UTF8TEXT("SetLong"), .Pointer = &ULowEntryLong::execSetLong },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes, "CastToDoubleBytes" }, // 3294966435
		{ &Z_Construct_UFunction_ULowEntryLong_CastToString, "CastToString" }, // 3820564044
		{ &Z_Construct_UFunction_ULowEntryLong_CreateClone, "CreateClone" }, // 4199757565
		{ &Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan, "DoubleBytes_GreaterThan" }, // 2613111085
		{ &Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan, "DoubleBytes_LessThan" }, // 1739876447
		{ &Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan, "Float_GreaterThan" }, // 955452472
		{ &Z_Construct_UFunction_ULowEntryLong_Float_LessThan, "Float_LessThan" }, // 3526637353
		{ &Z_Construct_UFunction_ULowEntryLong_GetBytes, "GetBytes" }, // 2717047901
		{ &Z_Construct_UFunction_ULowEntryLong_GetLong, "GetLong" }, // 4048098172
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_Add, "Integer_Add" }, // 4281952739
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_Equals, "Integer_Equals" }, // 1066556692
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan, "Integer_GreaterThan" }, // 3609903540
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_LessThan, "Integer_LessThan" }, // 388635889
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_Subtract, "Integer_Subtract" }, // 1202411731
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_Add, "LongBytes_Add" }, // 3991498927
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals, "LongBytes_Equals" }, // 1546195512
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan, "LongBytes_GreaterThan" }, // 2036766685
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan, "LongBytes_LessThan" }, // 1414356174
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract, "LongBytes_Subtract" }, // 873884941
		{ &Z_Construct_UFunction_ULowEntryLong_SetBytes, "SetBytes" }, // 683914965
		{ &Z_Construct_UFunction_ULowEntryLong_SetLong, "SetLong" }, // 3037218253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryLong>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryLong_Statics

// ********** Begin Class ULowEntryLong Property Definitions ***************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLong, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryLong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLong_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryLong Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_ULowEntryLong_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLong_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryLong_Statics::ClassParams = {
	&ULowEntryLong::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryLong_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLong_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLong_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryLong_Statics::Class_MetaDataParams)
};
void ULowEntryLong::StaticRegisterNativesULowEntryLong()
{
	UClass* Class = ULowEntryLong::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULowEntryLong_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULowEntryLong()
{
	if (!Z_Registration_Info_UClass_ULowEntryLong.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryLong.OuterSingleton, Z_Construct_UClass_ULowEntryLong_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryLong.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryLong);
ULowEntryLong::~ULowEntryLong() {}
// ********** End Class ULowEntryLong **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryLong, ULowEntryLong::StaticClass, TEXT("ULowEntryLong"), &Z_Registration_Info_UClass_ULowEntryLong, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryLong), 1943560951U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h__Script_LowEntryExtendedStandardLibrary_2030160496{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
