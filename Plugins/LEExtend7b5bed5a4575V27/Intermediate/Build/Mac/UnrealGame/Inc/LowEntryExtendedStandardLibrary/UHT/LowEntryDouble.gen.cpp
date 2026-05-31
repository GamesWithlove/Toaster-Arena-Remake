// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryDouble.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryDouble() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryDouble Function CastToLongBytes *********************************
struct Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics
{
	struct LowEntryDouble_eventCastToLongBytes_Parms
	{
		ULowEntryLong* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Casts the double to a long.\n\x09*/" },
		{ "DisplayName", "Cast To Long (bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Casts the double to a long." },
	};
#endif // WITH_METADATA

// ********** Begin Function CastToLongBytes constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CastToLongBytes constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CastToLongBytes Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventCastToLongBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers) < 2048);
// ********** End Function CastToLongBytes Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "CastToLongBytes", 	Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::LowEntryDouble_eventCastToLongBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::LowEntryDouble_eventCastToLongBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execCastToLongBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryLong**)Z_Param__Result=P_THIS->CastToLongBytes();
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function CastToLongBytes ***********************************

// ********** Begin Class ULowEntryDouble Function CastToString ************************************
struct Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics
{
	struct LowEntryDouble_eventCastToString_Parms
	{
		int32 MinFractionalDigits;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Casts the double to a string.\n\x09*/" },
		{ "CPP_Default_MinFractionalDigits", "1" },
		{ "DisplayName", "To String" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Casts the double to a string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFractionalDigits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CastToString constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinFractionalDigits;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CastToString constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CastToString Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits = { "MinFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventCastToString_Parms, MinFractionalDigits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFractionalDigits_MetaData), NewProp_MinFractionalDigits_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventCastToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers) < 2048);
// ********** End Function CastToString Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "CastToString", 	Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::LowEntryDouble_eventCastToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::LowEntryDouble_eventCastToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_CastToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execCastToString)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MinFractionalDigits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->CastToString(Z_Param_MinFractionalDigits);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function CastToString **************************************

// ********** Begin Class ULowEntryDouble Function CreateClone *************************************
struct Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics
{
	struct LowEntryDouble_eventCreateClone_Parms
	{
		ULowEntryDouble* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Casts the long to a double.\n\x09*/" },
		{ "DisplayName", "Create Clone" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventCreateClone_Parms, ReturnValue), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers) < 2048);
// ********** End Function CreateClone Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "CreateClone", 	Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::LowEntryDouble_eventCreateClone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::LowEntryDouble_eventCreateClone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_CreateClone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execCreateClone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryDouble**)Z_Param__Result=P_THIS->CreateClone();
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function CreateClone ***************************************

// ********** Begin Class ULowEntryDouble Function DoubleBytes_Add *********************************
struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics
{
	struct LowEntryDouble_eventDoubleBytes_Add_Parms
	{
		ULowEntryDouble* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Add a float to this double.\n\x09*/" },
		{ "DisplayName", "Add (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Add a float to this double." },
	};
#endif // WITH_METADATA

// ********** Begin Function DoubleBytes_Add constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoubleBytes_Add constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoubleBytes_Add Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_Add_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers) < 2048);
// ********** End Function DoubleBytes_Add Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_Add", 	Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::LowEntryDouble_eventDoubleBytes_Add_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::LowEntryDouble_eventDoubleBytes_Add_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_Add)
{
	P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoubleBytes_Add(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function DoubleBytes_Add ***********************************

// ********** Begin Class ULowEntryDouble Function DoubleBytes_Equals ******************************
struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics
{
	struct LowEntryDouble_eventDoubleBytes_Equals_Parms
	{
		ULowEntryDouble* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is equal to the given integer." },
	};
#endif // WITH_METADATA

// ********** Begin Function DoubleBytes_Equals constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoubleBytes_Equals constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoubleBytes_Equals Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_Equals_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventDoubleBytes_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventDoubleBytes_Equals_Parms), &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers) < 2048);
// ********** End Function DoubleBytes_Equals Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_Equals", 	Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::LowEntryDouble_eventDoubleBytes_Equals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::LowEntryDouble_eventDoubleBytes_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_Equals)
{
	P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoubleBytes_Equals(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function DoubleBytes_Equals ********************************

// ********** Begin Class ULowEntryDouble Function DoubleBytes_GreaterThan *************************
struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics
{
	struct LowEntryDouble_eventDoubleBytes_GreaterThan_Parms
	{
		ULowEntryDouble* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given float.\n\x09*/" },
		{ "DisplayName", "Greater Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given float." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventDoubleBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventDoubleBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers) < 2048);
// ********** End Function DoubleBytes_GreaterThan Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_GreaterThan", 	Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::LowEntryDouble_eventDoubleBytes_GreaterThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::LowEntryDouble_eventDoubleBytes_GreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_GreaterThan)
{
	P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoubleBytes_GreaterThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function DoubleBytes_GreaterThan ***************************

// ********** Begin Class ULowEntryDouble Function DoubleBytes_LessThan ****************************
struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics
{
	struct LowEntryDouble_eventDoubleBytes_LessThan_Parms
	{
		ULowEntryDouble* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given float.\n\x09*/" },
		{ "DisplayName", "Less Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given float." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventDoubleBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventDoubleBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers) < 2048);
// ********** End Function DoubleBytes_LessThan Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_LessThan", 	Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::LowEntryDouble_eventDoubleBytes_LessThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::LowEntryDouble_eventDoubleBytes_LessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_LessThan)
{
	P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoubleBytes_LessThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function DoubleBytes_LessThan ******************************

// ********** Begin Class ULowEntryDouble Function DoubleBytes_Subtract ****************************
struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics
{
	struct LowEntryDouble_eventDoubleBytes_Subtract_Parms
	{
		ULowEntryDouble* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts a float from this double.\n\x09*/" },
		{ "DisplayName", "Subtract (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Subtracts a float from this double." },
	};
#endif // WITH_METADATA

// ********** Begin Function DoubleBytes_Subtract constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoubleBytes_Subtract constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoubleBytes_Subtract Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_Subtract_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers) < 2048);
// ********** End Function DoubleBytes_Subtract Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_Subtract", 	Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::LowEntryDouble_eventDoubleBytes_Subtract_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::LowEntryDouble_eventDoubleBytes_Subtract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_Subtract)
{
	P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoubleBytes_Subtract(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function DoubleBytes_Subtract ******************************

// ********** Begin Class ULowEntryDouble Function Float_Add ***************************************
struct Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics
{
	struct LowEntryDouble_eventFloat_Add_Parms
	{
		double Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Add a float to this double.\n\x09*/" },
		{ "DisplayName", "Add (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Add a float to this double." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Float_Add constinit property declarations *****************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Float_Add constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Float_Add Property Definitions ****************************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_Add_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers) < 2048);
// ********** End Function Float_Add Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_Add", 	Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::LowEntryDouble_eventFloat_Add_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::LowEntryDouble_eventFloat_Add_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execFloat_Add)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Float_Add(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function Float_Add *****************************************

// ********** Begin Class ULowEntryDouble Function Float_Equals ************************************
struct Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics
{
	struct LowEntryDouble_eventFloat_Equals_Parms
	{
		double Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is equal to the given integer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Float_Equals constinit property declarations **************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Float_Equals constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Float_Equals Property Definitions *************************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_Equals_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventFloat_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventFloat_Equals_Parms), &Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers) < 2048);
// ********** End Function Float_Equals Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_Equals", 	Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::LowEntryDouble_eventFloat_Equals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::LowEntryDouble_eventFloat_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execFloat_Equals)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Float_Equals(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function Float_Equals **************************************

// ********** Begin Class ULowEntryDouble Function Float_GreaterThan *******************************
struct Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics
{
	struct LowEntryDouble_eventFloat_GreaterThan_Parms
	{
		double Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given float.\n\x09*/" },
		{ "DisplayName", "Greater Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given float." },
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
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_GreaterThan_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventFloat_GreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventFloat_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers) < 2048);
// ********** End Function Float_GreaterThan Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_GreaterThan", 	Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::LowEntryDouble_eventFloat_GreaterThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::LowEntryDouble_eventFloat_GreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execFloat_GreaterThan)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Float_GreaterThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function Float_GreaterThan *********************************

// ********** Begin Class ULowEntryDouble Function Float_LessThan **********************************
struct Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics
{
	struct LowEntryDouble_eventFloat_LessThan_Parms
	{
		double Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given float.\n\x09*/" },
		{ "DisplayName", "Less Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given float." },
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
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_LessThan_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventFloat_LessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventFloat_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers) < 2048);
// ********** End Function Float_LessThan Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_LessThan", 	Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::LowEntryDouble_eventFloat_LessThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::LowEntryDouble_eventFloat_LessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execFloat_LessThan)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Float_LessThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function Float_LessThan ************************************

// ********** Begin Class ULowEntryDouble Function Float_Subtract **********************************
struct Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics
{
	struct LowEntryDouble_eventFloat_Subtract_Parms
	{
		double Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts a float from this double.\n\x09*/" },
		{ "DisplayName", "Subtract (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Subtracts a float from this double." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Float_Subtract constinit property declarations ************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Float_Subtract constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Float_Subtract Property Definitions ***********************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_Subtract_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers) < 2048);
// ********** End Function Float_Subtract Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_Subtract", 	Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::LowEntryDouble_eventFloat_Subtract_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::LowEntryDouble_eventFloat_Subtract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_Subtract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execFloat_Subtract)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Float_Subtract(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function Float_Subtract ************************************

// ********** Begin Class ULowEntryDouble Function GetBytes ****************************************
struct Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics
{
	struct LowEntryDouble_eventGetBytes_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns the bytes (always 8 bytes).\n\x09*/" },
		{ "DisplayName", "Get Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventGetBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers) < 2048);
// ********** End Function GetBytes Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "GetBytes", 	Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::LowEntryDouble_eventGetBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::LowEntryDouble_eventGetBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_GetBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execGetBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetBytes();
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function GetBytes ******************************************

// ********** Begin Class ULowEntryDouble Function GetDouble ***************************************
struct Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics
{
	struct LowEntryDouble_eventGetDouble_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns the value.\n\x09*/" },
		{ "DisplayName", "Get Value" },
		{ "Keywords", "double float" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns the value." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDouble constinit property declarations *****************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDouble constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDouble Property Definitions ****************************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventGetDouble_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::PropPointers) < 2048);
// ********** End Function GetDouble Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "GetDouble", 	Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::LowEntryDouble_eventGetDouble_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::LowEntryDouble_eventGetDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_GetDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execGetDouble)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetDouble();
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function GetDouble *****************************************

// ********** Begin Class ULowEntryDouble Function Integer_GreaterThan *****************************
struct Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics
{
	struct LowEntryDouble_eventInteger_GreaterThan_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given integer.\n\x09*/" },
		{ "DisplayName", "Greater Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given integer." },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventInteger_GreaterThan_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventInteger_GreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventInteger_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers) < 2048);
// ********** End Function Integer_GreaterThan Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Integer_GreaterThan", 	Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::LowEntryDouble_eventInteger_GreaterThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::LowEntryDouble_eventInteger_GreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execInteger_GreaterThan)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Integer_GreaterThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function Integer_GreaterThan *******************************

// ********** Begin Class ULowEntryDouble Function Integer_LessThan ********************************
struct Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics
{
	struct LowEntryDouble_eventInteger_LessThan_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given integer.\n\x09*/" },
		{ "DisplayName", "Less Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given integer." },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventInteger_LessThan_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventInteger_LessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventInteger_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers) < 2048);
// ********** End Function Integer_LessThan Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Integer_LessThan", 	Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::LowEntryDouble_eventInteger_LessThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::LowEntryDouble_eventInteger_LessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execInteger_LessThan)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Integer_LessThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function Integer_LessThan **********************************

// ********** Begin Class ULowEntryDouble Function LongBytes_GreaterThan ***************************
struct Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics
{
	struct LowEntryDouble_eventLongBytes_GreaterThan_Parms
	{
		ULowEntryLong* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given long.\n\x09*/" },
		{ "DisplayName", "Greater Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given long." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventLongBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventLongBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventLongBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers) < 2048);
// ********** End Function LongBytes_GreaterThan Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "LongBytes_GreaterThan", 	Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::LowEntryDouble_eventLongBytes_GreaterThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::LowEntryDouble_eventLongBytes_GreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execLongBytes_GreaterThan)
{
	P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LongBytes_GreaterThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function LongBytes_GreaterThan *****************************

// ********** Begin Class ULowEntryDouble Function LongBytes_LessThan ******************************
struct Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics
{
	struct LowEntryDouble_eventLongBytes_LessThan_Parms
	{
		ULowEntryLong* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given long.\n\x09*/" },
		{ "DisplayName", "Less Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given long." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventLongBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryDouble_eventLongBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryDouble_eventLongBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers) < 2048);
// ********** End Function LongBytes_LessThan Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "LongBytes_LessThan", 	Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::LowEntryDouble_eventLongBytes_LessThan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::LowEntryDouble_eventLongBytes_LessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execLongBytes_LessThan)
{
	P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LongBytes_LessThan(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function LongBytes_LessThan ********************************

// ********** Begin Class ULowEntryDouble Function SetBytes ****************************************
struct Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics
{
	struct LowEntryDouble_eventSetBytes_Parms
	{
		TArray<uint8> ByteArray;
		int32 Index;
		int32 Length;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Sets the bytes (will only add the first 8 bytes, will add 0 bytes if the given byte array was less than 8 bytes).\n\x09*/" },
		{ "CPP_Default_Index", "0" },
		{ "CPP_Default_Length", "2147483647" },
		{ "DisplayName", "Set Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventSetBytes_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteArray_MetaData), NewProp_ByteArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventSetBytes_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventSetBytes_Parms, Length), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers) < 2048);
// ********** End Function SetBytes Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "SetBytes", 	Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::LowEntryDouble_eventSetBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::LowEntryDouble_eventSetBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_SetBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execSetBytes)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Length);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBytes(Z_Param_Out_ByteArray,Z_Param_Index,Z_Param_Length);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function SetBytes ******************************************

// ********** Begin Class ULowEntryDouble Function SetDouble ***************************************
struct Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics
{
	struct LowEntryDouble_eventSetDouble_Parms
	{
		double Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Sets the value.\n\x09*/" },
		{ "DisplayName", "Set Value" },
		{ "Keywords", "double float" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Sets the value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDouble constinit property declarations *****************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDouble constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDouble Property Definitions ****************************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryDouble_eventSetDouble_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::PropPointers) < 2048);
// ********** End Function SetDouble Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "SetDouble", 	Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::LowEntryDouble_eventSetDouble_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::LowEntryDouble_eventSetDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryDouble_SetDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryDouble::execSetDouble)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDouble(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryDouble Function SetDouble *****************************************

// ********** Begin Class ULowEntryDouble **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryDouble;
UClass* ULowEntryDouble::GetPrivateStaticClass()
{
	using TClass = ULowEntryDouble;
	if (!Z_Registration_Info_UClass_ULowEntryDouble.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryDouble"),
			Z_Registration_Info_UClass_ULowEntryDouble.InnerSingleton,
			StaticRegisterNativesULowEntryDouble,
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
	return Z_Registration_Info_UClass_ULowEntryDouble.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister()
{
	return ULowEntryDouble::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryDouble_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesTypes/LowEntryDouble.h" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryDouble constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryDouble constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CastToLongBytes"), .Pointer = &ULowEntryDouble::execCastToLongBytes },
		{ .NameUTF8 = UTF8TEXT("CastToString"), .Pointer = &ULowEntryDouble::execCastToString },
		{ .NameUTF8 = UTF8TEXT("CreateClone"), .Pointer = &ULowEntryDouble::execCreateClone },
		{ .NameUTF8 = UTF8TEXT("DoubleBytes_Add"), .Pointer = &ULowEntryDouble::execDoubleBytes_Add },
		{ .NameUTF8 = UTF8TEXT("DoubleBytes_Equals"), .Pointer = &ULowEntryDouble::execDoubleBytes_Equals },
		{ .NameUTF8 = UTF8TEXT("DoubleBytes_GreaterThan"), .Pointer = &ULowEntryDouble::execDoubleBytes_GreaterThan },
		{ .NameUTF8 = UTF8TEXT("DoubleBytes_LessThan"), .Pointer = &ULowEntryDouble::execDoubleBytes_LessThan },
		{ .NameUTF8 = UTF8TEXT("DoubleBytes_Subtract"), .Pointer = &ULowEntryDouble::execDoubleBytes_Subtract },
		{ .NameUTF8 = UTF8TEXT("Float_Add"), .Pointer = &ULowEntryDouble::execFloat_Add },
		{ .NameUTF8 = UTF8TEXT("Float_Equals"), .Pointer = &ULowEntryDouble::execFloat_Equals },
		{ .NameUTF8 = UTF8TEXT("Float_GreaterThan"), .Pointer = &ULowEntryDouble::execFloat_GreaterThan },
		{ .NameUTF8 = UTF8TEXT("Float_LessThan"), .Pointer = &ULowEntryDouble::execFloat_LessThan },
		{ .NameUTF8 = UTF8TEXT("Float_Subtract"), .Pointer = &ULowEntryDouble::execFloat_Subtract },
		{ .NameUTF8 = UTF8TEXT("GetBytes"), .Pointer = &ULowEntryDouble::execGetBytes },
		{ .NameUTF8 = UTF8TEXT("GetDouble"), .Pointer = &ULowEntryDouble::execGetDouble },
		{ .NameUTF8 = UTF8TEXT("Integer_GreaterThan"), .Pointer = &ULowEntryDouble::execInteger_GreaterThan },
		{ .NameUTF8 = UTF8TEXT("Integer_LessThan"), .Pointer = &ULowEntryDouble::execInteger_LessThan },
		{ .NameUTF8 = UTF8TEXT("LongBytes_GreaterThan"), .Pointer = &ULowEntryDouble::execLongBytes_GreaterThan },
		{ .NameUTF8 = UTF8TEXT("LongBytes_LessThan"), .Pointer = &ULowEntryDouble::execLongBytes_LessThan },
		{ .NameUTF8 = UTF8TEXT("SetBytes"), .Pointer = &ULowEntryDouble::execSetBytes },
		{ .NameUTF8 = UTF8TEXT("SetDouble"), .Pointer = &ULowEntryDouble::execSetDouble },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes, "CastToLongBytes" }, // 339214084
		{ &Z_Construct_UFunction_ULowEntryDouble_CastToString, "CastToString" }, // 1818640076
		{ &Z_Construct_UFunction_ULowEntryDouble_CreateClone, "CreateClone" }, // 662460619
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add, "DoubleBytes_Add" }, // 649403195
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals, "DoubleBytes_Equals" }, // 3216995558
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan, "DoubleBytes_GreaterThan" }, // 3236230634
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan, "DoubleBytes_LessThan" }, // 4103147056
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract, "DoubleBytes_Subtract" }, // 614926690
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_Add, "Float_Add" }, // 2495881152
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_Equals, "Float_Equals" }, // 2412544645
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan, "Float_GreaterThan" }, // 2412344031
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_LessThan, "Float_LessThan" }, // 2488106466
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_Subtract, "Float_Subtract" }, // 742086059
		{ &Z_Construct_UFunction_ULowEntryDouble_GetBytes, "GetBytes" }, // 2279973067
		{ &Z_Construct_UFunction_ULowEntryDouble_GetDouble, "GetDouble" }, // 3006280204
		{ &Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan, "Integer_GreaterThan" }, // 1867257329
		{ &Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan, "Integer_LessThan" }, // 178386685
		{ &Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan, "LongBytes_GreaterThan" }, // 2054499456
		{ &Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan, "LongBytes_LessThan" }, // 3109089256
		{ &Z_Construct_UFunction_ULowEntryDouble_SetBytes, "SetBytes" }, // 774738597
		{ &Z_Construct_UFunction_ULowEntryDouble_SetDouble, "SetDouble" }, // 138234448
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryDouble>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryDouble_Statics

// ********** Begin Class ULowEntryDouble Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryDouble, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryDouble_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryDouble Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_ULowEntryDouble_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryDouble_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryDouble_Statics::ClassParams = {
	&ULowEntryDouble::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryDouble_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryDouble_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryDouble_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryDouble_Statics::Class_MetaDataParams)
};
void ULowEntryDouble::StaticRegisterNativesULowEntryDouble()
{
	UClass* Class = ULowEntryDouble::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULowEntryDouble_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULowEntryDouble()
{
	if (!Z_Registration_Info_UClass_ULowEntryDouble.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryDouble.OuterSingleton, Z_Construct_UClass_ULowEntryDouble_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryDouble.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryDouble);
ULowEntryDouble::~ULowEntryDouble() {}
// ********** End Class ULowEntryDouble ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryDouble, ULowEntryDouble::StaticClass, TEXT("ULowEntryDouble"), &Z_Registration_Info_UClass_ULowEntryDouble, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryDouble), 287618834U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h__Script_LowEntryExtendedStandardLibrary_499155377{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
