// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../ClassesTypes/LowEntryDouble.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryDouble() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryDouble::execLongBytes_LessThan)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LongBytes_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execLongBytes_GreaterThan)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LongBytes_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_LessThan)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoubleBytes_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_GreaterThan)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoubleBytes_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_Equals)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoubleBytes_Equals(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_Subtract)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoubleBytes_Subtract(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_Add)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoubleBytes_Add(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execInteger_LessThan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Integer_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execInteger_GreaterThan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Integer_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_LessThan)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Float_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_GreaterThan)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Float_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_Equals)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Float_Equals(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_Subtract)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Float_Subtract(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_Add)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Float_Add(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execCastToString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MinFractionalDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->CastToString(Z_Param_MinFractionalDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execCastToLongBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryLong**)Z_Param__Result=P_THIS->CastToLongBytes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execCreateClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryDouble**)Z_Param__Result=P_THIS->CreateClone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execSetDouble)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDouble(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execGetDouble)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetDouble();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(ULowEntryDouble::execGetBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetBytes();
		P_NATIVE_END;
	}
	void ULowEntryDouble::StaticRegisterNativesULowEntryDouble()
	{
		UClass* Class = ULowEntryDouble::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToLongBytes", &ULowEntryDouble::execCastToLongBytes },
			{ "CastToString", &ULowEntryDouble::execCastToString },
			{ "CreateClone", &ULowEntryDouble::execCreateClone },
			{ "DoubleBytes_Add", &ULowEntryDouble::execDoubleBytes_Add },
			{ "DoubleBytes_Equals", &ULowEntryDouble::execDoubleBytes_Equals },
			{ "DoubleBytes_GreaterThan", &ULowEntryDouble::execDoubleBytes_GreaterThan },
			{ "DoubleBytes_LessThan", &ULowEntryDouble::execDoubleBytes_LessThan },
			{ "DoubleBytes_Subtract", &ULowEntryDouble::execDoubleBytes_Subtract },
			{ "Float_Add", &ULowEntryDouble::execFloat_Add },
			{ "Float_Equals", &ULowEntryDouble::execFloat_Equals },
			{ "Float_GreaterThan", &ULowEntryDouble::execFloat_GreaterThan },
			{ "Float_LessThan", &ULowEntryDouble::execFloat_LessThan },
			{ "Float_Subtract", &ULowEntryDouble::execFloat_Subtract },
			{ "GetBytes", &ULowEntryDouble::execGetBytes },
			{ "GetDouble", &ULowEntryDouble::execGetDouble },
			{ "Integer_GreaterThan", &ULowEntryDouble::execInteger_GreaterThan },
			{ "Integer_LessThan", &ULowEntryDouble::execInteger_LessThan },
			{ "LongBytes_GreaterThan", &ULowEntryDouble::execLongBytes_GreaterThan },
			{ "LongBytes_LessThan", &ULowEntryDouble::execLongBytes_LessThan },
			{ "SetBytes", &ULowEntryDouble::execSetBytes },
			{ "SetDouble", &ULowEntryDouble::execSetDouble },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics
	{
		struct LowEntryDouble_eventCastToLongBytes_Parms
		{
			ULowEntryLong* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventCastToLongBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Casts the double to a long.\n\x09*/" },
		{ "DisplayName", "Cast To Long (bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Casts the double to a long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "CastToLongBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::LowEntryDouble_eventCastToLongBytes_Parms), Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics
	{
		struct LowEntryDouble_eventCastToString_Parms
		{
			int32 MinFractionalDigits;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFractionalDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinFractionalDigits;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits = { "MinFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventCastToString_Parms, MinFractionalDigits), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventCastToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Casts the double to a string.\n\x09*/" },
		{ "CPP_Default_MinFractionalDigits", "1" },
		{ "DisplayName", "To String" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Casts the double to a string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "CastToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::LowEntryDouble_eventCastToString_Parms), Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_CastToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics
	{
		struct LowEntryDouble_eventCreateClone_Parms
		{
			ULowEntryDouble* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventCreateClone_Parms, ReturnValue), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Casts the long to a double.\n\x09*/" },
		{ "DisplayName", "Create Clone" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Casts the long to a double." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "CreateClone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::LowEntryDouble_eventCreateClone_Parms), Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_CreateClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_Add_Parms
		{
			ULowEntryDouble* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_Add_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Add a float to this double.\n\x09*/" },
		{ "DisplayName", "Add (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Add a float to this double." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_Add", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::LowEntryDouble_eventDoubleBytes_Add_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_Equals_Parms
		{
			ULowEntryDouble* Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_Equals_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventDoubleBytes_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventDoubleBytes_Equals_Parms), &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is equal to the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_Equals", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::LowEntryDouble_eventDoubleBytes_Equals_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_GreaterThan_Parms
		{
			ULowEntryDouble* Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventDoubleBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventDoubleBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given float.\n\x09*/" },
		{ "DisplayName", "Greater Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_GreaterThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::LowEntryDouble_eventDoubleBytes_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_LessThan_Parms
		{
			ULowEntryDouble* Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventDoubleBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventDoubleBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given float.\n\x09*/" },
		{ "DisplayName", "Less Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_LessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::LowEntryDouble_eventDoubleBytes_LessThan_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_Subtract_Parms
		{
			ULowEntryDouble* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_Subtract_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts a float from this double.\n\x09*/" },
		{ "DisplayName", "Subtract (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Subtracts a float from this double." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_Subtract", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::LowEntryDouble_eventDoubleBytes_Subtract_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics
	{
		struct LowEntryDouble_eventFloat_Add_Parms
		{
			double Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventFloat_Add_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Add a float to this double.\n\x09*/" },
		{ "DisplayName", "Add (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Add a float to this double." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_Add", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::LowEntryDouble_eventFloat_Add_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics
	{
		struct LowEntryDouble_eventFloat_Equals_Parms
		{
			double Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventFloat_Equals_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventFloat_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventFloat_Equals_Parms), &Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is equal to the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_Equals", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::LowEntryDouble_eventFloat_Equals_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics
	{
		struct LowEntryDouble_eventFloat_GreaterThan_Parms
		{
			double Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventFloat_GreaterThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventFloat_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventFloat_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given float.\n\x09*/" },
		{ "DisplayName", "Greater Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_GreaterThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::LowEntryDouble_eventFloat_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics
	{
		struct LowEntryDouble_eventFloat_LessThan_Parms
		{
			double Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventFloat_LessThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventFloat_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventFloat_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given float.\n\x09*/" },
		{ "DisplayName", "Less Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_LessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::LowEntryDouble_eventFloat_LessThan_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics
	{
		struct LowEntryDouble_eventFloat_Subtract_Parms
		{
			double Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventFloat_Subtract_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts a float from this double.\n\x09*/" },
		{ "DisplayName", "Subtract (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Subtracts a float from this double." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_Subtract", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::LowEntryDouble_eventFloat_Subtract_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_Subtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics
	{
		struct LowEntryDouble_eventGetBytes_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventGetBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns the bytes (always 8 bytes).\n\x09*/" },
		{ "DisplayName", "Get Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns the bytes (always 8 bytes)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "GetBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::LowEntryDouble_eventGetBytes_Parms), Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_GetBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics
	{
		struct LowEntryDouble_eventGetDouble_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventGetDouble_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns the value.\n\x09*/" },
		{ "DisplayName", "Get Value" },
		{ "Keywords", "double float" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "GetDouble", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::LowEntryDouble_eventGetDouble_Parms), Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_GetDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_GetDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics
	{
		struct LowEntryDouble_eventInteger_GreaterThan_Parms
		{
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventInteger_GreaterThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventInteger_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventInteger_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given integer.\n\x09*/" },
		{ "DisplayName", "Greater Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Integer_GreaterThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::LowEntryDouble_eventInteger_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics
	{
		struct LowEntryDouble_eventInteger_LessThan_Parms
		{
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventInteger_LessThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventInteger_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventInteger_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given integer.\n\x09*/" },
		{ "DisplayName", "Less Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Integer_LessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::LowEntryDouble_eventInteger_LessThan_Parms), Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics
	{
		struct LowEntryDouble_eventLongBytes_GreaterThan_Parms
		{
			ULowEntryLong* Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventLongBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventLongBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventLongBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given long.\n\x09*/" },
		{ "DisplayName", "Greater Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "LongBytes_GreaterThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::LowEntryDouble_eventLongBytes_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics
	{
		struct LowEntryDouble_eventLongBytes_LessThan_Parms
		{
			ULowEntryLong* Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventLongBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventLongBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryDouble_eventLongBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given long.\n\x09*/" },
		{ "DisplayName", "Less Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "LongBytes_LessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::LowEntryDouble_eventLongBytes_LessThan_Parms), Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics
	{
		struct LowEntryDouble_eventSetBytes_Parms
		{
			TArray<uint8> ByteArray;
			int32 Index;
			int32 Length;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventSetBytes_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventSetBytes_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventSetBytes_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Length,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Sets the bytes (will only add the first 8 bytes, will add 0 bytes if the given byte array was less than 8 bytes).\n\x09*/" },
		{ "CPP_Default_Index", "0" },
		{ "CPP_Default_Length", "2147483647" },
		{ "DisplayName", "Set Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Sets the bytes (will only add the first 8 bytes, will add 0 bytes if the given byte array was less than 8 bytes)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "SetBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::LowEntryDouble_eventSetBytes_Parms), Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_SetBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics
	{
		struct LowEntryDouble_eventSetDouble_Parms
		{
			double Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryDouble_eventSetDouble_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Sets the value.\n\x09*/" },
		{ "DisplayName", "Set Value" },
		{ "Keywords", "double float" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Sets the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "SetDouble", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::LowEntryDouble_eventSetDouble_Parms), Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_SetDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_SetDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryDouble);
	UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister()
	{
		return ULowEntryDouble::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryDouble_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryDouble_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryDouble_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes, "CastToLongBytes" }, // 1316826385
		{ &Z_Construct_UFunction_ULowEntryDouble_CastToString, "CastToString" }, // 3626173903
		{ &Z_Construct_UFunction_ULowEntryDouble_CreateClone, "CreateClone" }, // 45988170
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add, "DoubleBytes_Add" }, // 2023585150
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals, "DoubleBytes_Equals" }, // 3438462345
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan, "DoubleBytes_GreaterThan" }, // 445045592
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan, "DoubleBytes_LessThan" }, // 3130856858
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract, "DoubleBytes_Subtract" }, // 2056129667
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_Add, "Float_Add" }, // 1697608901
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_Equals, "Float_Equals" }, // 4162574464
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan, "Float_GreaterThan" }, // 3452523819
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_LessThan, "Float_LessThan" }, // 3988775182
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_Subtract, "Float_Subtract" }, // 214926961
		{ &Z_Construct_UFunction_ULowEntryDouble_GetBytes, "GetBytes" }, // 2553487899
		{ &Z_Construct_UFunction_ULowEntryDouble_GetDouble, "GetDouble" }, // 2853021032
		{ &Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan, "Integer_GreaterThan" }, // 3156447389
		{ &Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan, "Integer_LessThan" }, // 4077139775
		{ &Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan, "LongBytes_GreaterThan" }, // 2433810246
		{ &Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan, "LongBytes_LessThan" }, // 1106658706
		{ &Z_Construct_UFunction_ULowEntryDouble_SetBytes, "SetBytes" }, // 384297404
		{ &Z_Construct_UFunction_ULowEntryDouble_SetDouble, "SetDouble" }, // 1108526450
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryDouble_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesTypes/LowEntryDouble.h" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULowEntryDouble, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryDouble_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryDouble>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryDouble_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryDouble_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryDouble()
	{
		if (!Z_Registration_Info_UClass_ULowEntryDouble.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryDouble.OuterSingleton, Z_Construct_UClass_ULowEntryDouble_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULowEntryDouble.OuterSingleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryDouble>()
	{
		return ULowEntryDouble::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryDouble);
	ULowEntryDouble::~ULowEntryDouble() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryDouble, ULowEntryDouble::StaticClass, TEXT("ULowEntryDouble"), &Z_Registration_Info_UClass_ULowEntryDouble, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryDouble), 1338344162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h_3874459114(TEXT("/Script/LowEntryExtendedStandardLibrary"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryDouble_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
