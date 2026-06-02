// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryByteDataWriter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryByteDataWriter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryByteDataWriter();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryByteDataWriter_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryByteDataWriter Function AddBoolean ******************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics
{
	struct LowEntryByteDataWriter_eventAddBoolean_Parms
	{
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a boolean.\n\x09*/" },
		{ "DisplayName", "Add Boolean" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a boolean." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddBoolean constinit property declarations ****************************
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddBoolean constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddBoolean Property Definitions ***************************************
void Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::NewProp_Value_SetBit(void* Obj)
{
	((LowEntryByteDataWriter_eventAddBoolean_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryByteDataWriter_eventAddBoolean_Parms), &Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::PropPointers) < 2048);
// ********** End Function AddBoolean Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddBoolean", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::LowEntryByteDataWriter_eventAddBoolean_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::LowEntryByteDataWriter_eventAddBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddBoolean)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBoolean(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddBoolean ********************************

// ********** Begin Class ULowEntryByteDataWriter Function AddBooleanArray *************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics
{
	struct LowEntryByteDataWriter_eventAddBooleanArray_Parms
	{
		TArray<bool> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a boolean array.\n\x09*/" },
		{ "DisplayName", "Add Boolean Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a boolean array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddBooleanArray constinit property declarations ***********************
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddBooleanArray constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddBooleanArray Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddBooleanArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::PropPointers) < 2048);
// ********** End Function AddBooleanArray Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddBooleanArray", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::LowEntryByteDataWriter_eventAddBooleanArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::LowEntryByteDataWriter_eventAddBooleanArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddBooleanArray)
{
	P_GET_TARRAY_REF(bool,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBooleanArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddBooleanArray ***************************

// ********** Begin Class ULowEntryByteDataWriter Function AddByte *********************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics
{
	struct LowEntryByteDataWriter_eventAddByte_Parms
	{
		uint8 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte.\n\x09*/" },
		{ "DisplayName", "Add Byte" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a byte." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddByte constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddByte constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddByte Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddByte_Parms, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::PropPointers) < 2048);
// ********** End Function AddByte Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddByte", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::LowEntryByteDataWriter_eventAddByte_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::LowEntryByteDataWriter_eventAddByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddByte)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddByte(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddByte ***********************************

// ********** Begin Class ULowEntryByteDataWriter Function AddByteArray ****************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics
{
	struct LowEntryByteDataWriter_eventAddByteArray_Parms
	{
		TArray<uint8> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte array.\n\x09*/" },
		{ "DisplayName", "Add Byte Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a byte array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddByteArray constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddByteArray constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddByteArray Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddByteArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::PropPointers) < 2048);
// ********** End Function AddByteArray Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddByteArray", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::LowEntryByteDataWriter_eventAddByteArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::LowEntryByteDataWriter_eventAddByteArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddByteArray)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddByteArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddByteArray ******************************

// ********** Begin Class ULowEntryByteDataWriter Function AddDouble *******************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics
{
	struct LowEntryByteDataWriter_eventAddDouble_Parms
	{
		double Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double.\n\x09*/" },
		{ "DisplayName", "Add Double" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a double." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddDouble constinit property declarations *****************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddDouble constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddDouble Property Definitions ****************************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddDouble_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::PropPointers) < 2048);
// ********** End Function AddDouble Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddDouble", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::LowEntryByteDataWriter_eventAddDouble_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::LowEntryByteDataWriter_eventAddDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddDouble)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDouble(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddDouble *********************************

// ********** Begin Class ULowEntryByteDataWriter Function AddDoubleArray **************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics
{
	struct LowEntryByteDataWriter_eventAddDoubleArray_Parms
	{
		TArray<double> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double array.\n\x09*/" },
		{ "DisplayName", "Add Double Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a double array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddDoubleArray constinit property declarations ************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddDoubleArray constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddDoubleArray Property Definitions ***********************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddDoubleArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::PropPointers) < 2048);
// ********** End Function AddDoubleArray Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddDoubleArray", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::LowEntryByteDataWriter_eventAddDoubleArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::LowEntryByteDataWriter_eventAddDoubleArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddDoubleArray)
{
	P_GET_TARRAY_REF(double,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDoubleArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddDoubleArray ****************************

// ********** Begin Class ULowEntryByteDataWriter Function AddDoubleBytes **************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics
{
	struct LowEntryByteDataWriter_eventAddDoubleBytes_Parms
	{
		ULowEntryDouble* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double (bytes).\n\x09*/" },
		{ "DisplayName", "Add Double (Bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a double (bytes)." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddDoubleBytes constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddDoubleBytes constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddDoubleBytes Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddDoubleBytes_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::PropPointers) < 2048);
// ********** End Function AddDoubleBytes Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddDoubleBytes", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::LowEntryByteDataWriter_eventAddDoubleBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::LowEntryByteDataWriter_eventAddDoubleBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddDoubleBytes)
{
	P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDoubleBytes(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddDoubleBytes ****************************

// ********** Begin Class ULowEntryByteDataWriter Function AddDoubleBytesArray *********************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics
{
	struct LowEntryByteDataWriter_eventAddDoubleBytesArray_Parms
	{
		TArray<ULowEntryDouble*> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double (bytes) array.\n\x09*/" },
		{ "DisplayName", "Add Double (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a double (bytes) array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddDoubleBytesArray constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddDoubleBytesArray constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddDoubleBytesArray Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddDoubleBytesArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::PropPointers) < 2048);
// ********** End Function AddDoubleBytesArray Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddDoubleBytesArray", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::LowEntryByteDataWriter_eventAddDoubleBytesArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::LowEntryByteDataWriter_eventAddDoubleBytesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddDoubleBytesArray)
{
	P_GET_TARRAY_REF(ULowEntryDouble*,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDoubleBytesArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddDoubleBytesArray ***********************

// ********** Begin Class ULowEntryByteDataWriter Function AddFloat ********************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics
{
	struct LowEntryByteDataWriter_eventAddFloat_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a float.\n\x09*/" },
		{ "DisplayName", "Add Float" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a float." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFloat constinit property declarations ******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFloat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFloat Property Definitions *****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddFloat_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::PropPointers) < 2048);
// ********** End Function AddFloat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddFloat", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::LowEntryByteDataWriter_eventAddFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::LowEntryByteDataWriter_eventAddFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFloat(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddFloat **********************************

// ********** Begin Class ULowEntryByteDataWriter Function AddFloatArray ***************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics
{
	struct LowEntryByteDataWriter_eventAddFloatArray_Parms
	{
		TArray<float> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a float array.\n\x09*/" },
		{ "DisplayName", "Add Float Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a float array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFloatArray constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFloatArray constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFloatArray Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddFloatArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::PropPointers) < 2048);
// ********** End Function AddFloatArray Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddFloatArray", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::LowEntryByteDataWriter_eventAddFloatArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::LowEntryByteDataWriter_eventAddFloatArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddFloatArray)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFloatArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddFloatArray *****************************

// ********** Begin Class ULowEntryByteDataWriter Function AddInteger ******************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics
{
	struct LowEntryByteDataWriter_eventAddInteger_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer.\n\x09*/" },
		{ "DisplayName", "Add Integer" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds an integer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddInteger constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddInteger constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddInteger Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddInteger_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::PropPointers) < 2048);
// ********** End Function AddInteger Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddInteger", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::LowEntryByteDataWriter_eventAddInteger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::LowEntryByteDataWriter_eventAddInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddInteger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInteger(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddInteger ********************************

// ********** Begin Class ULowEntryByteDataWriter Function AddIntegerArray *************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics
{
	struct LowEntryByteDataWriter_eventAddIntegerArray_Parms
	{
		TArray<int32> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer array.\n\x09*/" },
		{ "DisplayName", "Add Integer Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds an integer array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddIntegerArray constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddIntegerArray constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddIntegerArray Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddIntegerArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::PropPointers) < 2048);
// ********** End Function AddIntegerArray Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddIntegerArray", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::LowEntryByteDataWriter_eventAddIntegerArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::LowEntryByteDataWriter_eventAddIntegerArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddIntegerArray)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIntegerArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddIntegerArray ***************************

// ********** Begin Class ULowEntryByteDataWriter Function AddLong *********************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics
{
	struct LowEntryByteDataWriter_eventAddLong_Parms
	{
		int64 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (int64).\n\x09*/" },
		{ "DisplayName", "Add Long" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a long (int64)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddLong constinit property declarations *******************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddLong constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddLong Property Definitions ******************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddLong_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::PropPointers) < 2048);
// ********** End Function AddLong Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddLong", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::LowEntryByteDataWriter_eventAddLong_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::LowEntryByteDataWriter_eventAddLong_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddLong)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLong(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddLong ***********************************

// ********** Begin Class ULowEntryByteDataWriter Function AddLongArray ****************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics
{
	struct LowEntryByteDataWriter_eventAddLongArray_Parms
	{
		TArray<int64> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (int64) array.\n\x09*/" },
		{ "DisplayName", "Add Long Array" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a long (int64) array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddLongArray constinit property declarations **************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddLongArray constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddLongArray Property Definitions *************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddLongArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::PropPointers) < 2048);
// ********** End Function AddLongArray Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddLongArray", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::LowEntryByteDataWriter_eventAddLongArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::LowEntryByteDataWriter_eventAddLongArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddLongArray)
{
	P_GET_TARRAY_REF(int64,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLongArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddLongArray ******************************

// ********** Begin Class ULowEntryByteDataWriter Function AddLongBytes ****************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics
{
	struct LowEntryByteDataWriter_eventAddLongBytes_Parms
	{
		ULowEntryLong* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (bytes).\n\x09*/" },
		{ "DisplayName", "Add Long (Bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a long (bytes)." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddLongBytes constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddLongBytes constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddLongBytes Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddLongBytes_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::PropPointers) < 2048);
// ********** End Function AddLongBytes Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddLongBytes", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::LowEntryByteDataWriter_eventAddLongBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::LowEntryByteDataWriter_eventAddLongBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddLongBytes)
{
	P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLongBytes(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddLongBytes ******************************

// ********** Begin Class ULowEntryByteDataWriter Function AddLongBytesArray ***********************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics
{
	struct LowEntryByteDataWriter_eventAddLongBytesArray_Parms
	{
		TArray<ULowEntryLong*> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (bytes) array.\n\x09*/" },
		{ "DisplayName", "Add Long (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a long (bytes) array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddLongBytesArray constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddLongBytesArray constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddLongBytesArray Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddLongBytesArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::PropPointers) < 2048);
// ********** End Function AddLongBytesArray Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddLongBytesArray", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::LowEntryByteDataWriter_eventAddLongBytesArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::LowEntryByteDataWriter_eventAddLongBytesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddLongBytesArray)
{
	P_GET_TARRAY_REF(ULowEntryLong*,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLongBytesArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddLongBytesArray *************************

// ********** Begin Class ULowEntryByteDataWriter Function AddPositiveInteger1 *********************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics
{
	struct LowEntryByteDataWriter_eventAddPositiveInteger1_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer.\n\x09*\n\x09* Will store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integer has to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 1" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a positive integer.\n\nWill store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\nThe given integer has to be 0 or higher, values under 0 will be changed to 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPositiveInteger1 constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPositiveInteger1 constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPositiveInteger1 Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddPositiveInteger1_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger1 Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddPositiveInteger1", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::LowEntryByteDataWriter_eventAddPositiveInteger1_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::LowEntryByteDataWriter_eventAddPositiveInteger1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddPositiveInteger1)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger1(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddPositiveInteger1 ***********************

// ********** Begin Class ULowEntryByteDataWriter Function AddPositiveInteger1Array ****************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics
{
	struct LowEntryByteDataWriter_eventAddPositiveInteger1Array_Parms
	{
		TArray<int32> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer array.\n\x09*\n\x09* Will store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integers have to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 1 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a positive integer array.\n\nWill store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\nThe given integers have to be 0 or higher, values under 0 will be changed to 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPositiveInteger1Array constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPositiveInteger1Array constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPositiveInteger1Array Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddPositiveInteger1Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger1Array Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddPositiveInteger1Array", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::LowEntryByteDataWriter_eventAddPositiveInteger1Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::LowEntryByteDataWriter_eventAddPositiveInteger1Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddPositiveInteger1Array)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger1Array(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddPositiveInteger1Array ******************

// ********** Begin Class ULowEntryByteDataWriter Function AddPositiveInteger2 *********************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics
{
	struct LowEntryByteDataWriter_eventAddPositiveInteger2_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer.\n\x09*\n\x09* Will store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integer has to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 2" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a positive integer.\n\nWill store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\nThe given integer has to be 0 or higher, values under 0 will be changed to 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPositiveInteger2 constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPositiveInteger2 constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPositiveInteger2 Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddPositiveInteger2_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger2 Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddPositiveInteger2", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::LowEntryByteDataWriter_eventAddPositiveInteger2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::LowEntryByteDataWriter_eventAddPositiveInteger2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddPositiveInteger2)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger2(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddPositiveInteger2 ***********************

// ********** Begin Class ULowEntryByteDataWriter Function AddPositiveInteger2Array ****************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics
{
	struct LowEntryByteDataWriter_eventAddPositiveInteger2Array_Parms
	{
		TArray<int32> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer array.\n\x09*\n\x09* Will store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integers have to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 2 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a positive integer array.\n\nWill store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\nThe given integers have to be 0 or higher, values under 0 will be changed to 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPositiveInteger2Array constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPositiveInteger2Array constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPositiveInteger2Array Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddPositiveInteger2Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger2Array Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddPositiveInteger2Array", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::LowEntryByteDataWriter_eventAddPositiveInteger2Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::LowEntryByteDataWriter_eventAddPositiveInteger2Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddPositiveInteger2Array)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger2Array(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddPositiveInteger2Array ******************

// ********** Begin Class ULowEntryByteDataWriter Function AddPositiveInteger3 *********************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics
{
	struct LowEntryByteDataWriter_eventAddPositiveInteger3_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer.\n\x09*\n\x09* Will store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integer has to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 3" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a positive integer.\n\nWill store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\nThe given integer has to be 0 or higher, values under 0 will be changed to 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPositiveInteger3 constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPositiveInteger3 constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPositiveInteger3 Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddPositiveInteger3_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger3 Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddPositiveInteger3", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::LowEntryByteDataWriter_eventAddPositiveInteger3_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::LowEntryByteDataWriter_eventAddPositiveInteger3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddPositiveInteger3)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger3(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddPositiveInteger3 ***********************

// ********** Begin Class ULowEntryByteDataWriter Function AddPositiveInteger3Array ****************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics
{
	struct LowEntryByteDataWriter_eventAddPositiveInteger3Array_Parms
	{
		TArray<int32> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer array.\n\x09*\n\x09* Will store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integers have to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 3 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a positive integer array.\n\nWill store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\nThe given integers have to be 0 or higher, values under 0 will be changed to 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPositiveInteger3Array constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPositiveInteger3Array constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPositiveInteger3Array Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddPositiveInteger3Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger3Array Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddPositiveInteger3Array", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::LowEntryByteDataWriter_eventAddPositiveInteger3Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::LowEntryByteDataWriter_eventAddPositiveInteger3Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddPositiveInteger3Array)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger3Array(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddPositiveInteger3Array ******************

// ********** Begin Class ULowEntryByteDataWriter Function AddStringUtf8 ***************************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics
{
	struct LowEntryByteDataWriter_eventAddStringUtf8_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a String (UTF-8).\n\x09*/" },
		{ "DisplayName", "Add String (Utf 8)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a String (UTF-8)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddStringUtf8 constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddStringUtf8 constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddStringUtf8 Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddStringUtf8_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::PropPointers) < 2048);
// ********** End Function AddStringUtf8 Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddStringUtf8", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::LowEntryByteDataWriter_eventAddStringUtf8_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::LowEntryByteDataWriter_eventAddStringUtf8_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddStringUtf8)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStringUtf8(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddStringUtf8 *****************************

// ********** Begin Class ULowEntryByteDataWriter Function AddStringUtf8Array **********************
struct Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics
{
	struct LowEntryByteDataWriter_eventAddStringUtf8Array_Parms
	{
		TArray<FString> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a String (UTF-8) array.\n\x09*/" },
		{ "DisplayName", "Add String (Utf 8) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
		{ "ToolTip", "Adds a String (UTF-8) array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddStringUtf8Array constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddStringUtf8Array constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddStringUtf8Array Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataWriter_eventAddStringUtf8Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::PropPointers) < 2048);
// ********** End Function AddStringUtf8Array Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataWriter, nullptr, "AddStringUtf8Array", 	Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::LowEntryByteDataWriter_eventAddStringUtf8Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::LowEntryByteDataWriter_eventAddStringUtf8Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataWriter::execAddStringUtf8Array)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStringUtf8Array(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryByteDataWriter Function AddStringUtf8Array ************************

// ********** Begin Class ULowEntryByteDataWriter **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryByteDataWriter;
UClass* ULowEntryByteDataWriter::GetPrivateStaticClass()
{
	using TClass = ULowEntryByteDataWriter;
	if (!Z_Registration_Info_UClass_ULowEntryByteDataWriter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryByteDataWriter"),
			Z_Registration_Info_UClass_ULowEntryByteDataWriter.InnerSingleton,
			StaticRegisterNativesULowEntryByteDataWriter,
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
	return Z_Registration_Info_UClass_ULowEntryByteDataWriter.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryByteDataWriter_NoRegister()
{
	return ULowEntryByteDataWriter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryByteDataWriter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryByteDataWriter.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataWriter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryByteDataWriter constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryByteDataWriter constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddBoolean"), .Pointer = &ULowEntryByteDataWriter::execAddBoolean },
		{ .NameUTF8 = UTF8TEXT("AddBooleanArray"), .Pointer = &ULowEntryByteDataWriter::execAddBooleanArray },
		{ .NameUTF8 = UTF8TEXT("AddByte"), .Pointer = &ULowEntryByteDataWriter::execAddByte },
		{ .NameUTF8 = UTF8TEXT("AddByteArray"), .Pointer = &ULowEntryByteDataWriter::execAddByteArray },
		{ .NameUTF8 = UTF8TEXT("AddDouble"), .Pointer = &ULowEntryByteDataWriter::execAddDouble },
		{ .NameUTF8 = UTF8TEXT("AddDoubleArray"), .Pointer = &ULowEntryByteDataWriter::execAddDoubleArray },
		{ .NameUTF8 = UTF8TEXT("AddDoubleBytes"), .Pointer = &ULowEntryByteDataWriter::execAddDoubleBytes },
		{ .NameUTF8 = UTF8TEXT("AddDoubleBytesArray"), .Pointer = &ULowEntryByteDataWriter::execAddDoubleBytesArray },
		{ .NameUTF8 = UTF8TEXT("AddFloat"), .Pointer = &ULowEntryByteDataWriter::execAddFloat },
		{ .NameUTF8 = UTF8TEXT("AddFloatArray"), .Pointer = &ULowEntryByteDataWriter::execAddFloatArray },
		{ .NameUTF8 = UTF8TEXT("AddInteger"), .Pointer = &ULowEntryByteDataWriter::execAddInteger },
		{ .NameUTF8 = UTF8TEXT("AddIntegerArray"), .Pointer = &ULowEntryByteDataWriter::execAddIntegerArray },
		{ .NameUTF8 = UTF8TEXT("AddLong"), .Pointer = &ULowEntryByteDataWriter::execAddLong },
		{ .NameUTF8 = UTF8TEXT("AddLongArray"), .Pointer = &ULowEntryByteDataWriter::execAddLongArray },
		{ .NameUTF8 = UTF8TEXT("AddLongBytes"), .Pointer = &ULowEntryByteDataWriter::execAddLongBytes },
		{ .NameUTF8 = UTF8TEXT("AddLongBytesArray"), .Pointer = &ULowEntryByteDataWriter::execAddLongBytesArray },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger1"), .Pointer = &ULowEntryByteDataWriter::execAddPositiveInteger1 },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger1Array"), .Pointer = &ULowEntryByteDataWriter::execAddPositiveInteger1Array },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger2"), .Pointer = &ULowEntryByteDataWriter::execAddPositiveInteger2 },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger2Array"), .Pointer = &ULowEntryByteDataWriter::execAddPositiveInteger2Array },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger3"), .Pointer = &ULowEntryByteDataWriter::execAddPositiveInteger3 },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger3Array"), .Pointer = &ULowEntryByteDataWriter::execAddPositiveInteger3Array },
		{ .NameUTF8 = UTF8TEXT("AddStringUtf8"), .Pointer = &ULowEntryByteDataWriter::execAddStringUtf8 },
		{ .NameUTF8 = UTF8TEXT("AddStringUtf8Array"), .Pointer = &ULowEntryByteDataWriter::execAddStringUtf8Array },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddBoolean, "AddBoolean" }, // 877490592
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddBooleanArray, "AddBooleanArray" }, // 2374083788
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddByte, "AddByte" }, // 3787816170
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddByteArray, "AddByteArray" }, // 3000850005
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddDouble, "AddDouble" }, // 1356533274
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleArray, "AddDoubleArray" }, // 3995549248
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytes, "AddDoubleBytes" }, // 2152686110
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddDoubleBytesArray, "AddDoubleBytesArray" }, // 484301061
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloat, "AddFloat" }, // 172965811
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddFloatArray, "AddFloatArray" }, // 3465744603
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddInteger, "AddInteger" }, // 1731758371
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddIntegerArray, "AddIntegerArray" }, // 37653057
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddLong, "AddLong" }, // 2450455451
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongArray, "AddLongArray" }, // 717218134
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytes, "AddLongBytes" }, // 1768372403
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddLongBytesArray, "AddLongBytesArray" }, // 2972257897
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1, "AddPositiveInteger1" }, // 3904575925
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger1Array, "AddPositiveInteger1Array" }, // 4005915517
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2, "AddPositiveInteger2" }, // 2902117056
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger2Array, "AddPositiveInteger2Array" }, // 2565166067
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3, "AddPositiveInteger3" }, // 2631804294
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddPositiveInteger3Array, "AddPositiveInteger3Array" }, // 1967365787
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8, "AddStringUtf8" }, // 234011076
		{ &Z_Construct_UFunction_ULowEntryByteDataWriter_AddStringUtf8Array, "AddStringUtf8Array" }, // 1557150177
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryByteDataWriter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryByteDataWriter_Statics

// ********** Begin Class ULowEntryByteDataWriter Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryByteDataWriter_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryByteDataWriter_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryByteDataWriter, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryByteDataWriter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryByteDataWriter_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryByteDataWriter_Statics::NewProp_Bytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteDataWriter_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryByteDataWriter Property Definitions *******************************
UObject* (*const Z_Construct_UClass_ULowEntryByteDataWriter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteDataWriter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryByteDataWriter_Statics::ClassParams = {
	&ULowEntryByteDataWriter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryByteDataWriter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteDataWriter_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteDataWriter_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryByteDataWriter_Statics::Class_MetaDataParams)
};
void ULowEntryByteDataWriter::StaticRegisterNativesULowEntryByteDataWriter()
{
	UClass* Class = ULowEntryByteDataWriter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULowEntryByteDataWriter_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULowEntryByteDataWriter()
{
	if (!Z_Registration_Info_UClass_ULowEntryByteDataWriter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryByteDataWriter.OuterSingleton, Z_Construct_UClass_ULowEntryByteDataWriter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryByteDataWriter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryByteDataWriter);
ULowEntryByteDataWriter::~ULowEntryByteDataWriter() {}
// ********** End Class ULowEntryByteDataWriter ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataWriter_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryByteDataWriter, ULowEntryByteDataWriter::StaticClass, TEXT("ULowEntryByteDataWriter"), &Z_Registration_Info_UClass_ULowEntryByteDataWriter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryByteDataWriter), 2590768087U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataWriter_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataWriter_h__Script_LowEntryExtendedStandardLibrary_3483996337{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataWriter_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataWriter_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
