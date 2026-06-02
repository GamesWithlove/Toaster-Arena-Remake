// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryBitDataWriter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryBitDataWriter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataWriter();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataWriter_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryBitDataWriter Function AddBit ***********************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics
{
	struct LowEntryBitDataWriter_eventAddBit_Parms
	{
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a bit.\n\x09*/" },
		{ "DisplayName", "Add Bit" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a bit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddBit constinit property declarations ********************************
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddBit constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddBit Property Definitions *******************************************
void Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value_SetBit(void* Obj)
{
	((LowEntryBitDataWriter_eventAddBit_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryBitDataWriter_eventAddBit_Parms), &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::PropPointers) < 2048);
// ********** End Function AddBit Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddBit", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::LowEntryBitDataWriter_eventAddBit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::LowEntryBitDataWriter_eventAddBit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddBit)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBit(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddBit *************************************

// ********** Begin Class ULowEntryBitDataWriter Function AddBitArray ******************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics
{
	struct LowEntryBitDataWriter_eventAddBitArray_Parms
	{
		TArray<bool> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a bit array.\n\x09*/" },
		{ "DisplayName", "Add Bit Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a bit array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddBitArray constinit property declarations ***************************
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddBitArray constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddBitArray Property Definitions **************************************
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddBitArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::PropPointers) < 2048);
// ********** End Function AddBitArray Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddBitArray", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::LowEntryBitDataWriter_eventAddBitArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::LowEntryBitDataWriter_eventAddBitArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddBitArray)
{
	P_GET_TARRAY_REF(bool,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBitArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddBitArray ********************************

// ********** Begin Class ULowEntryBitDataWriter Function AddBoolean *******************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics
{
	struct LowEntryBitDataWriter_eventAddBoolean_Parms
	{
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a boolean, this does the same as adding a bit.\n\x09*/" },
		{ "DisplayName", "Add Boolean" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a boolean, this does the same as adding a bit." },
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
void Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value_SetBit(void* Obj)
{
	((LowEntryBitDataWriter_eventAddBoolean_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryBitDataWriter_eventAddBoolean_Parms), &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::PropPointers) < 2048);
// ********** End Function AddBoolean Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddBoolean", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::LowEntryBitDataWriter_eventAddBoolean_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::LowEntryBitDataWriter_eventAddBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddBoolean)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBoolean(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddBoolean *********************************

// ********** Begin Class ULowEntryBitDataWriter Function AddBooleanArray **************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics
{
	struct LowEntryBitDataWriter_eventAddBooleanArray_Parms
	{
		TArray<bool> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a boolean array, this does the same as adding a bit array.\n\x09*/" },
		{ "DisplayName", "Add Boolean Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a boolean array, this does the same as adding a bit array." },
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
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddBooleanArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::PropPointers) < 2048);
// ********** End Function AddBooleanArray Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddBooleanArray", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::LowEntryBitDataWriter_eventAddBooleanArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::LowEntryBitDataWriter_eventAddBooleanArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddBooleanArray)
{
	P_GET_TARRAY_REF(bool,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBooleanArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddBooleanArray ****************************

// ********** Begin Class ULowEntryBitDataWriter Function AddByte **********************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics
{
	struct LowEntryBitDataWriter_eventAddByte_Parms
	{
		uint8 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte.\n\x09*/" },
		{ "DisplayName", "Add Byte" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByte_Parms, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::PropPointers) < 2048);
// ********** End Function AddByte Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByte", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::LowEntryBitDataWriter_eventAddByte_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::LowEntryBitDataWriter_eventAddByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByte)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddByte(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddByte ************************************

// ********** Begin Class ULowEntryBitDataWriter Function AddByteArray *****************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics
{
	struct LowEntryBitDataWriter_eventAddByteArray_Parms
	{
		TArray<uint8> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte array.\n\x09*/" },
		{ "DisplayName", "Add Byte Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::PropPointers) < 2048);
// ********** End Function AddByteArray Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteArray", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::LowEntryBitDataWriter_eventAddByteArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::LowEntryBitDataWriter_eventAddByteArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteArray)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddByteArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddByteArray *******************************

// ********** Begin Class ULowEntryBitDataWriter Function AddByteArrayLeastSignificantBits *********
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics
{
	struct LowEntryBitDataWriter_eventAddByteArrayLeastSignificantBits_Parms
	{
		TArray<uint8> Value;
		int32 BitCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte array, will only add a certain amount of bits from every given byte.\n\x09*\n\x09* For example, take 63 as the value (bitwise this is: 0011 1111).\n\x09* If you use this blueprint with value [63, 63, 63] and bitcount 4, only the lowest 4 bits of each byte will be added, meaning only 1111 1111 1111 will be added, which will then have a value of 15 for each byte when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Add Byte Array (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte array, will only add a certain amount of bits from every given byte.\n\nFor example, take 63 as the value (bitwise this is: 0011 1111).\nIf you use this blueprint with value [63, 63, 63] and bitcount 4, only the lowest 4 bits of each byte will be added, meaning only 1111 1111 1111 will be added, which will then have a value of 15 for each byte when read again.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddByteArrayLeastSignificantBits constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddByteArrayLeastSignificantBits constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddByteArrayLeastSignificantBits Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArrayLeastSignificantBits_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArrayLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::PropPointers) < 2048);
// ********** End Function AddByteArrayLeastSignificantBits Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteArrayLeastSignificantBits", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::LowEntryBitDataWriter_eventAddByteArrayLeastSignificantBits_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::LowEntryBitDataWriter_eventAddByteArrayLeastSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteArrayLeastSignificantBits)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddByteArrayLeastSignificantBits(Z_Param_Out_Value,Z_Param_BitCount);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddByteArrayLeastSignificantBits ***********

// ********** Begin Class ULowEntryBitDataWriter Function AddByteArrayMostSignificantBits **********
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics
{
	struct LowEntryBitDataWriter_eventAddByteArrayMostSignificantBits_Parms
	{
		TArray<uint8> Value;
		int32 BitCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte array, will only add a certain amount of bits from every given byte.\n\x09*\n\x09* For example, take 63 as the value (bitwise this is: 0011 1111).\n\x09* If you use this blueprint with value [63, 63, 63] and bitcount 4, only the highest 4 bits of each byte will be added, meaning only 0011 0011 0011 will be added, which will then have a value of 48 for each byte when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Add Byte Array (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte array, will only add a certain amount of bits from every given byte.\n\nFor example, take 63 as the value (bitwise this is: 0011 1111).\nIf you use this blueprint with value [63, 63, 63] and bitcount 4, only the highest 4 bits of each byte will be added, meaning only 0011 0011 0011 will be added, which will then have a value of 48 for each byte when read again.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddByteArrayMostSignificantBits constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddByteArrayMostSignificantBits constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddByteArrayMostSignificantBits Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArrayMostSignificantBits_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArrayMostSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::PropPointers) < 2048);
// ********** End Function AddByteArrayMostSignificantBits Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteArrayMostSignificantBits", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::LowEntryBitDataWriter_eventAddByteArrayMostSignificantBits_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::LowEntryBitDataWriter_eventAddByteArrayMostSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteArrayMostSignificantBits)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddByteArrayMostSignificantBits(Z_Param_Out_Value,Z_Param_BitCount);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddByteArrayMostSignificantBits ************

// ********** Begin Class ULowEntryBitDataWriter Function AddByteLeastSignificantBits **************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics
{
	struct LowEntryBitDataWriter_eventAddByteLeastSignificantBits_Parms
	{
		uint8 Value;
		int32 BitCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte, will only add a certain amount of bits from the given byte.\n\x09*\n\x09* For example, take 63 as the value (bitwise this is: 0011 1111).\n\x09* If you use this blueprint with value 63 and bitcount 4, only the lowest 4 bits will be added, meaning only 1111 will be added, which will then have a value of 15 when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Add Byte (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte, will only add a certain amount of bits from the given byte.\n\nFor example, take 63 as the value (bitwise this is: 0011 1111).\nIf you use this blueprint with value 63 and bitcount 4, only the lowest 4 bits will be added, meaning only 1111 will be added, which will then have a value of 15 when read again.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddByteLeastSignificantBits constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddByteLeastSignificantBits constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddByteLeastSignificantBits Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteLeastSignificantBits_Parms, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::PropPointers) < 2048);
// ********** End Function AddByteLeastSignificantBits Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteLeastSignificantBits", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::LowEntryBitDataWriter_eventAddByteLeastSignificantBits_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::LowEntryBitDataWriter_eventAddByteLeastSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteLeastSignificantBits)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddByteLeastSignificantBits(Z_Param_Value,Z_Param_BitCount);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddByteLeastSignificantBits ****************

// ********** Begin Class ULowEntryBitDataWriter Function AddByteMostSignificantBits ***************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics
{
	struct LowEntryBitDataWriter_eventAddByteMostSignificantBits_Parms
	{
		uint8 Value;
		int32 BitCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte, will only add a certain amount of bits from the given byte.\n\x09*\n\x09* For example, take 63 as the value (bitwise this is: 0011 1111).\n\x09* If you use this blueprint with value 63 and bitcount 4, only the highest 4 bits will be added, meaning only 0011 will be added, which will then have a value of 48 when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Add Byte (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte, will only add a certain amount of bits from the given byte.\n\nFor example, take 63 as the value (bitwise this is: 0011 1111).\nIf you use this blueprint with value 63 and bitcount 4, only the highest 4 bits will be added, meaning only 0011 will be added, which will then have a value of 48 when read again.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddByteMostSignificantBits constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddByteMostSignificantBits constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddByteMostSignificantBits Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteMostSignificantBits_Parms, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteMostSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::PropPointers) < 2048);
// ********** End Function AddByteMostSignificantBits Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteMostSignificantBits", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::LowEntryBitDataWriter_eventAddByteMostSignificantBits_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::LowEntryBitDataWriter_eventAddByteMostSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteMostSignificantBits)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddByteMostSignificantBits(Z_Param_Value,Z_Param_BitCount);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddByteMostSignificantBits *****************

// ********** Begin Class ULowEntryBitDataWriter Function AddDouble ********************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics
{
	struct LowEntryBitDataWriter_eventAddDouble_Parms
	{
		double Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double.\n\x09*/" },
		{ "DisplayName", "Add Double" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddDouble_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::PropPointers) < 2048);
// ********** End Function AddDouble Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddDouble", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::LowEntryBitDataWriter_eventAddDouble_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::LowEntryBitDataWriter_eventAddDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddDouble)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDouble(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddDouble **********************************

// ********** Begin Class ULowEntryBitDataWriter Function AddDoubleArray ***************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics
{
	struct LowEntryBitDataWriter_eventAddDoubleArray_Parms
	{
		TArray<double> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double array.\n\x09*/" },
		{ "DisplayName", "Add Double Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddDoubleArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::PropPointers) < 2048);
// ********** End Function AddDoubleArray Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddDoubleArray", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::LowEntryBitDataWriter_eventAddDoubleArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::LowEntryBitDataWriter_eventAddDoubleArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddDoubleArray)
{
	P_GET_TARRAY_REF(double,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDoubleArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddDoubleArray *****************************

// ********** Begin Class ULowEntryBitDataWriter Function AddDoubleBytes ***************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics
{
	struct LowEntryBitDataWriter_eventAddDoubleBytes_Parms
	{
		ULowEntryDouble* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double (bytes).\n\x09*/" },
		{ "DisplayName", "Add Double (Bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddDoubleBytes_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::PropPointers) < 2048);
// ********** End Function AddDoubleBytes Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddDoubleBytes", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::LowEntryBitDataWriter_eventAddDoubleBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::LowEntryBitDataWriter_eventAddDoubleBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddDoubleBytes)
{
	P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDoubleBytes(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddDoubleBytes *****************************

// ********** Begin Class ULowEntryBitDataWriter Function AddDoubleBytesArray **********************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics
{
	struct LowEntryBitDataWriter_eventAddDoubleBytesArray_Parms
	{
		TArray<ULowEntryDouble*> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double (bytes) array.\n\x09*/" },
		{ "DisplayName", "Add Double (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddDoubleBytesArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::PropPointers) < 2048);
// ********** End Function AddDoubleBytesArray Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddDoubleBytesArray", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::LowEntryBitDataWriter_eventAddDoubleBytesArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::LowEntryBitDataWriter_eventAddDoubleBytesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddDoubleBytesArray)
{
	P_GET_TARRAY_REF(ULowEntryDouble*,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDoubleBytesArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddDoubleBytesArray ************************

// ********** Begin Class ULowEntryBitDataWriter Function AddFloat *********************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics
{
	struct LowEntryBitDataWriter_eventAddFloat_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a float.\n\x09*/" },
		{ "DisplayName", "Add Float" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddFloat_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::PropPointers) < 2048);
// ********** End Function AddFloat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddFloat", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::LowEntryBitDataWriter_eventAddFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::LowEntryBitDataWriter_eventAddFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFloat(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddFloat ***********************************

// ********** Begin Class ULowEntryBitDataWriter Function AddFloatArray ****************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics
{
	struct LowEntryBitDataWriter_eventAddFloatArray_Parms
	{
		TArray<float> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a float array.\n\x09*/" },
		{ "DisplayName", "Add Float Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddFloatArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::PropPointers) < 2048);
// ********** End Function AddFloatArray Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddFloatArray", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::LowEntryBitDataWriter_eventAddFloatArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::LowEntryBitDataWriter_eventAddFloatArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddFloatArray)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFloatArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddFloatArray ******************************

// ********** Begin Class ULowEntryBitDataWriter Function AddInteger *******************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics
{
	struct LowEntryBitDataWriter_eventAddInteger_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer.\n\x09*/" },
		{ "DisplayName", "Add Integer" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddInteger_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::PropPointers) < 2048);
// ********** End Function AddInteger Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddInteger", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::LowEntryBitDataWriter_eventAddInteger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::LowEntryBitDataWriter_eventAddInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddInteger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInteger(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddInteger *********************************

// ********** Begin Class ULowEntryBitDataWriter Function AddIntegerArray **************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics
{
	struct LowEntryBitDataWriter_eventAddIntegerArray_Parms
	{
		TArray<int32> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer array.\n\x09*/" },
		{ "DisplayName", "Add Integer Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::PropPointers) < 2048);
// ********** End Function AddIntegerArray Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerArray", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::LowEntryBitDataWriter_eventAddIntegerArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::LowEntryBitDataWriter_eventAddIntegerArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerArray)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIntegerArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddIntegerArray ****************************

// ********** Begin Class ULowEntryBitDataWriter Function AddIntegerArrayLeastSignificantBits ******
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics
{
	struct LowEntryBitDataWriter_eventAddIntegerArrayLeastSignificantBits_Parms
	{
		TArray<int32> Value;
		int32 BitCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer array, will only add a certain amount of bits from every given integer.\n\x09*\n\x09* For example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\n\x09* If you use this blueprint with value [268435471, 268435471, 268435471] and bitcount 4, only the lowest 4 bits of each integer will be added, meaning only 1111 1111 1111 will be added, which will then have a value of 15 for each integer when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Add Integer Array (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer array, will only add a certain amount of bits from every given integer.\n\nFor example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\nIf you use this blueprint with value [268435471, 268435471, 268435471] and bitcount 4, only the lowest 4 bits of each integer will be added, meaning only 1111 1111 1111 will be added, which will then have a value of 15 for each integer when read again.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddIntegerArrayLeastSignificantBits constinit property declarations ***
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddIntegerArrayLeastSignificantBits constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddIntegerArrayLeastSignificantBits Property Definitions **************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArrayLeastSignificantBits_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArrayLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::PropPointers) < 2048);
// ********** End Function AddIntegerArrayLeastSignificantBits Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerArrayLeastSignificantBits", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::LowEntryBitDataWriter_eventAddIntegerArrayLeastSignificantBits_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::LowEntryBitDataWriter_eventAddIntegerArrayLeastSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerArrayLeastSignificantBits)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIntegerArrayLeastSignificantBits(Z_Param_Out_Value,Z_Param_BitCount);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddIntegerArrayLeastSignificantBits ********

// ********** Begin Class ULowEntryBitDataWriter Function AddIntegerArrayMostSignificantBits *******
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics
{
	struct LowEntryBitDataWriter_eventAddIntegerArrayMostSignificantBits_Parms
	{
		TArray<int32> Value;
		int32 BitCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer array, will only add a certain amount of bits from every given integer.\n\x09*\n\x09* For example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\n\x09* If you use this blueprint with value [268435471, 268435471, 268435471] and bitcount 4, only the highest 4 bits of each integer will be added, meaning only 0001 0001 0001 will be added, which will then have a value of 268435456 for each integer when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Add Integer Array (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer array, will only add a certain amount of bits from every given integer.\n\nFor example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\nIf you use this blueprint with value [268435471, 268435471, 268435471] and bitcount 4, only the highest 4 bits of each integer will be added, meaning only 0001 0001 0001 will be added, which will then have a value of 268435456 for each integer when read again.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddIntegerArrayMostSignificantBits constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddIntegerArrayMostSignificantBits constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddIntegerArrayMostSignificantBits Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArrayMostSignificantBits_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArrayMostSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::PropPointers) < 2048);
// ********** End Function AddIntegerArrayMostSignificantBits Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerArrayMostSignificantBits", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::LowEntryBitDataWriter_eventAddIntegerArrayMostSignificantBits_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::LowEntryBitDataWriter_eventAddIntegerArrayMostSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerArrayMostSignificantBits)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIntegerArrayMostSignificantBits(Z_Param_Out_Value,Z_Param_BitCount);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddIntegerArrayMostSignificantBits *********

// ********** Begin Class ULowEntryBitDataWriter Function AddIntegerLeastSignificantBits ***********
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics
{
	struct LowEntryBitDataWriter_eventAddIntegerLeastSignificantBits_Parms
	{
		int32 Value;
		int32 BitCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer, will only add a certain amount of bits from the given integer.\n\x09*\n\x09* For example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\n\x09* If you use this blueprint with value 268435471 and bitcount 4, only the lowest 4 bits will be added, meaning only 1111 will be added, which will then have a value of 15 when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Add Integer (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer, will only add a certain amount of bits from the given integer.\n\nFor example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\nIf you use this blueprint with value 268435471 and bitcount 4, only the lowest 4 bits will be added, meaning only 1111 will be added, which will then have a value of 15 when read again.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddIntegerLeastSignificantBits constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddIntegerLeastSignificantBits constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddIntegerLeastSignificantBits Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerLeastSignificantBits_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::PropPointers) < 2048);
// ********** End Function AddIntegerLeastSignificantBits Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerLeastSignificantBits", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::LowEntryBitDataWriter_eventAddIntegerLeastSignificantBits_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::LowEntryBitDataWriter_eventAddIntegerLeastSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerLeastSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIntegerLeastSignificantBits(Z_Param_Value,Z_Param_BitCount);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddIntegerLeastSignificantBits *************

// ********** Begin Class ULowEntryBitDataWriter Function AddIntegerMostSignificantBits ************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics
{
	struct LowEntryBitDataWriter_eventAddIntegerMostSignificantBits_Parms
	{
		int32 Value;
		int32 BitCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer, will only add a certain amount of bits from the given integer.\n\x09*\n\x09* For example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\n\x09* If you use this blueprint with value 268435471 and bitcount 4, only the highest 4 bits will be added, meaning only 0001 will be added, which will then have a value of 268435456 when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Add Integer (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer, will only add a certain amount of bits from the given integer.\n\nFor example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\nIf you use this blueprint with value 268435471 and bitcount 4, only the highest 4 bits will be added, meaning only 0001 will be added, which will then have a value of 268435456 when read again.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddIntegerMostSignificantBits constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddIntegerMostSignificantBits constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddIntegerMostSignificantBits Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerMostSignificantBits_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerMostSignificantBits_Parms, BitCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::PropPointers) < 2048);
// ********** End Function AddIntegerMostSignificantBits Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerMostSignificantBits", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::LowEntryBitDataWriter_eventAddIntegerMostSignificantBits_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::LowEntryBitDataWriter_eventAddIntegerMostSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerMostSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIntegerMostSignificantBits(Z_Param_Value,Z_Param_BitCount);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddIntegerMostSignificantBits **************

// ********** Begin Class ULowEntryBitDataWriter Function AddLong **********************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics
{
	struct LowEntryBitDataWriter_eventAddLong_Parms
	{
		int64 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (int64).\n\x09*/" },
		{ "DisplayName", "Add Long" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddLong_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::PropPointers) < 2048);
// ********** End Function AddLong Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddLong", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::LowEntryBitDataWriter_eventAddLong_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::LowEntryBitDataWriter_eventAddLong_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddLong)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLong(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddLong ************************************

// ********** Begin Class ULowEntryBitDataWriter Function AddLongArray *****************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics
{
	struct LowEntryBitDataWriter_eventAddLongArray_Parms
	{
		TArray<int64> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (int64) array.\n\x09*/" },
		{ "DisplayName", "Add Long Array" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddLongArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::PropPointers) < 2048);
// ********** End Function AddLongArray Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddLongArray", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::LowEntryBitDataWriter_eventAddLongArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::LowEntryBitDataWriter_eventAddLongArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddLongArray)
{
	P_GET_TARRAY_REF(int64,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLongArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddLongArray *******************************

// ********** Begin Class ULowEntryBitDataWriter Function AddLongBytes *****************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics
{
	struct LowEntryBitDataWriter_eventAddLongBytes_Parms
	{
		ULowEntryLong* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (bytes).\n\x09*/" },
		{ "DisplayName", "Add Long (Bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddLongBytes_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::PropPointers) < 2048);
// ********** End Function AddLongBytes Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddLongBytes", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::LowEntryBitDataWriter_eventAddLongBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::LowEntryBitDataWriter_eventAddLongBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddLongBytes)
{
	P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLongBytes(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddLongBytes *******************************

// ********** Begin Class ULowEntryBitDataWriter Function AddLongBytesArray ************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics
{
	struct LowEntryBitDataWriter_eventAddLongBytesArray_Parms
	{
		TArray<ULowEntryLong*> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (bytes) array.\n\x09*/" },
		{ "DisplayName", "Add Long (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddLongBytesArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::PropPointers) < 2048);
// ********** End Function AddLongBytesArray Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddLongBytesArray", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::LowEntryBitDataWriter_eventAddLongBytesArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::LowEntryBitDataWriter_eventAddLongBytesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddLongBytesArray)
{
	P_GET_TARRAY_REF(ULowEntryLong*,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLongBytesArray(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddLongBytesArray **************************

// ********** Begin Class ULowEntryBitDataWriter Function AddPositiveInteger1 **********************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics
{
	struct LowEntryBitDataWriter_eventAddPositiveInteger1_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer.\n\x09*\n\x09* Will store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integer has to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 1" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger1_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger1 Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger1", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::LowEntryBitDataWriter_eventAddPositiveInteger1_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::LowEntryBitDataWriter_eventAddPositiveInteger1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger1)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger1(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddPositiveInteger1 ************************

// ********** Begin Class ULowEntryBitDataWriter Function AddPositiveInteger1Array *****************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics
{
	struct LowEntryBitDataWriter_eventAddPositiveInteger1Array_Parms
	{
		TArray<int32> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer array.\n\x09*\n\x09* Will store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integers have to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 1 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger1Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger1Array Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger1Array", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::LowEntryBitDataWriter_eventAddPositiveInteger1Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::LowEntryBitDataWriter_eventAddPositiveInteger1Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger1Array)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger1Array(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddPositiveInteger1Array *******************

// ********** Begin Class ULowEntryBitDataWriter Function AddPositiveInteger2 **********************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics
{
	struct LowEntryBitDataWriter_eventAddPositiveInteger2_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer.\n\x09*\n\x09* Will store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integer has to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 2" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger2_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger2 Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger2", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::LowEntryBitDataWriter_eventAddPositiveInteger2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::LowEntryBitDataWriter_eventAddPositiveInteger2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger2)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger2(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddPositiveInteger2 ************************

// ********** Begin Class ULowEntryBitDataWriter Function AddPositiveInteger2Array *****************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics
{
	struct LowEntryBitDataWriter_eventAddPositiveInteger2Array_Parms
	{
		TArray<int32> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer array.\n\x09*\n\x09* Will store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integers have to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 2 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger2Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger2Array Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger2Array", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::LowEntryBitDataWriter_eventAddPositiveInteger2Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::LowEntryBitDataWriter_eventAddPositiveInteger2Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger2Array)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger2Array(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddPositiveInteger2Array *******************

// ********** Begin Class ULowEntryBitDataWriter Function AddPositiveInteger3 **********************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics
{
	struct LowEntryBitDataWriter_eventAddPositiveInteger3_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer.\n\x09*\n\x09* Will store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integer has to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 3" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger3_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger3 Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger3", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::LowEntryBitDataWriter_eventAddPositiveInteger3_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::LowEntryBitDataWriter_eventAddPositiveInteger3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger3)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger3(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddPositiveInteger3 ************************

// ********** Begin Class ULowEntryBitDataWriter Function AddPositiveInteger3Array *****************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics
{
	struct LowEntryBitDataWriter_eventAddPositiveInteger3Array_Parms
	{
		TArray<int32> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer array.\n\x09*\n\x09* Will store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integers have to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 3 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger3Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::PropPointers) < 2048);
// ********** End Function AddPositiveInteger3Array Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger3Array", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::LowEntryBitDataWriter_eventAddPositiveInteger3Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::LowEntryBitDataWriter_eventAddPositiveInteger3Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger3Array)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPositiveInteger3Array(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddPositiveInteger3Array *******************

// ********** Begin Class ULowEntryBitDataWriter Function AddStringUtf8 ****************************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics
{
	struct LowEntryBitDataWriter_eventAddStringUtf8_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a String (UTF-8).\n\x09*/" },
		{ "DisplayName", "Add String (Utf 8)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddStringUtf8_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::PropPointers) < 2048);
// ********** End Function AddStringUtf8 Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddStringUtf8", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::LowEntryBitDataWriter_eventAddStringUtf8_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::LowEntryBitDataWriter_eventAddStringUtf8_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddStringUtf8)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStringUtf8(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddStringUtf8 ******************************

// ********** Begin Class ULowEntryBitDataWriter Function AddStringUtf8Array ***********************
struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics
{
	struct LowEntryBitDataWriter_eventAddStringUtf8Array_Parms
	{
		TArray<FString> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a String (UTF-8) array.\n\x09*/" },
		{ "DisplayName", "Add String (Utf 8) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddStringUtf8Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::PropPointers) < 2048);
// ********** End Function AddStringUtf8Array Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddStringUtf8Array", 	Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::LowEntryBitDataWriter_eventAddStringUtf8Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::LowEntryBitDataWriter_eventAddStringUtf8Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddStringUtf8Array)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStringUtf8Array(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULowEntryBitDataWriter Function AddStringUtf8Array *************************

// ********** Begin Class ULowEntryBitDataWriter ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryBitDataWriter;
UClass* ULowEntryBitDataWriter::GetPrivateStaticClass()
{
	using TClass = ULowEntryBitDataWriter;
	if (!Z_Registration_Info_UClass_ULowEntryBitDataWriter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryBitDataWriter"),
			Z_Registration_Info_UClass_ULowEntryBitDataWriter.InnerSingleton,
			StaticRegisterNativesULowEntryBitDataWriter,
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
	return Z_Registration_Info_UClass_ULowEntryBitDataWriter.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryBitDataWriter_NoRegister()
{
	return ULowEntryBitDataWriter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryBitDataWriter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryBitDataWriter.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentByte_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBytePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryBitDataWriter constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentByte;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBytePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryBitDataWriter constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddBit"), .Pointer = &ULowEntryBitDataWriter::execAddBit },
		{ .NameUTF8 = UTF8TEXT("AddBitArray"), .Pointer = &ULowEntryBitDataWriter::execAddBitArray },
		{ .NameUTF8 = UTF8TEXT("AddBoolean"), .Pointer = &ULowEntryBitDataWriter::execAddBoolean },
		{ .NameUTF8 = UTF8TEXT("AddBooleanArray"), .Pointer = &ULowEntryBitDataWriter::execAddBooleanArray },
		{ .NameUTF8 = UTF8TEXT("AddByte"), .Pointer = &ULowEntryBitDataWriter::execAddByte },
		{ .NameUTF8 = UTF8TEXT("AddByteArray"), .Pointer = &ULowEntryBitDataWriter::execAddByteArray },
		{ .NameUTF8 = UTF8TEXT("AddByteArrayLeastSignificantBits"), .Pointer = &ULowEntryBitDataWriter::execAddByteArrayLeastSignificantBits },
		{ .NameUTF8 = UTF8TEXT("AddByteArrayMostSignificantBits"), .Pointer = &ULowEntryBitDataWriter::execAddByteArrayMostSignificantBits },
		{ .NameUTF8 = UTF8TEXT("AddByteLeastSignificantBits"), .Pointer = &ULowEntryBitDataWriter::execAddByteLeastSignificantBits },
		{ .NameUTF8 = UTF8TEXT("AddByteMostSignificantBits"), .Pointer = &ULowEntryBitDataWriter::execAddByteMostSignificantBits },
		{ .NameUTF8 = UTF8TEXT("AddDouble"), .Pointer = &ULowEntryBitDataWriter::execAddDouble },
		{ .NameUTF8 = UTF8TEXT("AddDoubleArray"), .Pointer = &ULowEntryBitDataWriter::execAddDoubleArray },
		{ .NameUTF8 = UTF8TEXT("AddDoubleBytes"), .Pointer = &ULowEntryBitDataWriter::execAddDoubleBytes },
		{ .NameUTF8 = UTF8TEXT("AddDoubleBytesArray"), .Pointer = &ULowEntryBitDataWriter::execAddDoubleBytesArray },
		{ .NameUTF8 = UTF8TEXT("AddFloat"), .Pointer = &ULowEntryBitDataWriter::execAddFloat },
		{ .NameUTF8 = UTF8TEXT("AddFloatArray"), .Pointer = &ULowEntryBitDataWriter::execAddFloatArray },
		{ .NameUTF8 = UTF8TEXT("AddInteger"), .Pointer = &ULowEntryBitDataWriter::execAddInteger },
		{ .NameUTF8 = UTF8TEXT("AddIntegerArray"), .Pointer = &ULowEntryBitDataWriter::execAddIntegerArray },
		{ .NameUTF8 = UTF8TEXT("AddIntegerArrayLeastSignificantBits"), .Pointer = &ULowEntryBitDataWriter::execAddIntegerArrayLeastSignificantBits },
		{ .NameUTF8 = UTF8TEXT("AddIntegerArrayMostSignificantBits"), .Pointer = &ULowEntryBitDataWriter::execAddIntegerArrayMostSignificantBits },
		{ .NameUTF8 = UTF8TEXT("AddIntegerLeastSignificantBits"), .Pointer = &ULowEntryBitDataWriter::execAddIntegerLeastSignificantBits },
		{ .NameUTF8 = UTF8TEXT("AddIntegerMostSignificantBits"), .Pointer = &ULowEntryBitDataWriter::execAddIntegerMostSignificantBits },
		{ .NameUTF8 = UTF8TEXT("AddLong"), .Pointer = &ULowEntryBitDataWriter::execAddLong },
		{ .NameUTF8 = UTF8TEXT("AddLongArray"), .Pointer = &ULowEntryBitDataWriter::execAddLongArray },
		{ .NameUTF8 = UTF8TEXT("AddLongBytes"), .Pointer = &ULowEntryBitDataWriter::execAddLongBytes },
		{ .NameUTF8 = UTF8TEXT("AddLongBytesArray"), .Pointer = &ULowEntryBitDataWriter::execAddLongBytesArray },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger1"), .Pointer = &ULowEntryBitDataWriter::execAddPositiveInteger1 },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger1Array"), .Pointer = &ULowEntryBitDataWriter::execAddPositiveInteger1Array },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger2"), .Pointer = &ULowEntryBitDataWriter::execAddPositiveInteger2 },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger2Array"), .Pointer = &ULowEntryBitDataWriter::execAddPositiveInteger2Array },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger3"), .Pointer = &ULowEntryBitDataWriter::execAddPositiveInteger3 },
		{ .NameUTF8 = UTF8TEXT("AddPositiveInteger3Array"), .Pointer = &ULowEntryBitDataWriter::execAddPositiveInteger3Array },
		{ .NameUTF8 = UTF8TEXT("AddStringUtf8"), .Pointer = &ULowEntryBitDataWriter::execAddStringUtf8 },
		{ .NameUTF8 = UTF8TEXT("AddStringUtf8Array"), .Pointer = &ULowEntryBitDataWriter::execAddStringUtf8Array },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit, "AddBit" }, // 3680875032
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray, "AddBitArray" }, // 1570375709
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean, "AddBoolean" }, // 1346436767
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray, "AddBooleanArray" }, // 1031213720
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte, "AddByte" }, // 2156650016
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray, "AddByteArray" }, // 786990126
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits, "AddByteArrayLeastSignificantBits" }, // 711831384
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits, "AddByteArrayMostSignificantBits" }, // 1034656888
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits, "AddByteLeastSignificantBits" }, // 925831957
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits, "AddByteMostSignificantBits" }, // 1480303389
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddDouble, "AddDouble" }, // 3150165008
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleArray, "AddDoubleArray" }, // 2693274158
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes, "AddDoubleBytes" }, // 3900592222
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray, "AddDoubleBytesArray" }, // 1852510984
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat, "AddFloat" }, // 1095520755
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray, "AddFloatArray" }, // 3414488331
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger, "AddInteger" }, // 4219419122
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray, "AddIntegerArray" }, // 647894842
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits, "AddIntegerArrayLeastSignificantBits" }, // 4200308033
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits, "AddIntegerArrayMostSignificantBits" }, // 3749711792
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits, "AddIntegerLeastSignificantBits" }, // 2956992850
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits, "AddIntegerMostSignificantBits" }, // 1495743281
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddLong, "AddLong" }, // 1719543228
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongArray, "AddLongArray" }, // 3036071347
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes, "AddLongBytes" }, // 249065402
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray, "AddLongBytesArray" }, // 2109904063
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1, "AddPositiveInteger1" }, // 3846717376
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array, "AddPositiveInteger1Array" }, // 3989528368
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2, "AddPositiveInteger2" }, // 3526962608
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array, "AddPositiveInteger2Array" }, // 474849104
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3, "AddPositiveInteger3" }, // 3869212209
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array, "AddPositiveInteger3Array" }, // 2480600691
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8, "AddStringUtf8" }, // 1244786008
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array, "AddStringUtf8Array" }, // 2461448857
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryBitDataWriter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryBitDataWriter_Statics

// ********** Begin Class ULowEntryBitDataWriter Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataWriter, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentByte = { "CurrentByte", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataWriter, CurrentByte), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentByte_MetaData), NewProp_CurrentByte_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentBytePosition = { "CurrentBytePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataWriter, CurrentBytePosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBytePosition_MetaData), NewProp_CurrentBytePosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryBitDataWriter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentByte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentBytePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryBitDataWriter Property Definitions ********************************
UObject* (*const Z_Construct_UClass_ULowEntryBitDataWriter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::ClassParams = {
	&ULowEntryBitDataWriter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryBitDataWriter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryBitDataWriter_Statics::Class_MetaDataParams)
};
void ULowEntryBitDataWriter::StaticRegisterNativesULowEntryBitDataWriter()
{
	UClass* Class = ULowEntryBitDataWriter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULowEntryBitDataWriter()
{
	if (!Z_Registration_Info_UClass_ULowEntryBitDataWriter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryBitDataWriter.OuterSingleton, Z_Construct_UClass_ULowEntryBitDataWriter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryBitDataWriter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryBitDataWriter);
ULowEntryBitDataWriter::~ULowEntryBitDataWriter() {}
// ********** End Class ULowEntryBitDataWriter *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataWriter_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryBitDataWriter, ULowEntryBitDataWriter::StaticClass, TEXT("ULowEntryBitDataWriter"), &Z_Registration_Info_UClass_ULowEntryBitDataWriter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryBitDataWriter), 3960501971U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataWriter_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataWriter_h__Script_LowEntryExtendedStandardLibrary_3744362691{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataWriter_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataWriter_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
