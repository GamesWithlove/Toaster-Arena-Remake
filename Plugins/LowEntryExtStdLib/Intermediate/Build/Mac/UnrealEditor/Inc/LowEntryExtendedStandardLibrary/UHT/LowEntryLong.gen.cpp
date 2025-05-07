// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../ClassesTypes/LowEntryLong.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryLong() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryLong::execDoubleBytes_LessThan)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoubleBytes_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execDoubleBytes_GreaterThan)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoubleBytes_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execLongBytes_LessThan)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LongBytes_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execLongBytes_GreaterThan)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LongBytes_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execLongBytes_Equals)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LongBytes_Equals(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execLongBytes_Subtract)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LongBytes_Subtract(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execLongBytes_Add)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LongBytes_Add(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execFloat_LessThan)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Float_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execFloat_GreaterThan)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Float_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execInteger_LessThan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Integer_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execInteger_GreaterThan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Integer_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execInteger_Equals)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Integer_Equals(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execInteger_Subtract)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Integer_Subtract(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execInteger_Add)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Integer_Add(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execCastToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->CastToString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execCastToDoubleBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryDouble**)Z_Param__Result=P_THIS->CastToDoubleBytes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execCreateClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryLong**)Z_Param__Result=P_THIS->CreateClone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execSetLong)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLong(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLong::execGetLong)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetLong();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(ULowEntryLong::execGetBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetBytes();
		P_NATIVE_END;
	}
	void ULowEntryLong::StaticRegisterNativesULowEntryLong()
	{
		UClass* Class = ULowEntryLong::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToDoubleBytes", &ULowEntryLong::execCastToDoubleBytes },
			{ "CastToString", &ULowEntryLong::execCastToString },
			{ "CreateClone", &ULowEntryLong::execCreateClone },
			{ "DoubleBytes_GreaterThan", &ULowEntryLong::execDoubleBytes_GreaterThan },
			{ "DoubleBytes_LessThan", &ULowEntryLong::execDoubleBytes_LessThan },
			{ "Float_GreaterThan", &ULowEntryLong::execFloat_GreaterThan },
			{ "Float_LessThan", &ULowEntryLong::execFloat_LessThan },
			{ "GetBytes", &ULowEntryLong::execGetBytes },
			{ "GetLong", &ULowEntryLong::execGetLong },
			{ "Integer_Add", &ULowEntryLong::execInteger_Add },
			{ "Integer_Equals", &ULowEntryLong::execInteger_Equals },
			{ "Integer_GreaterThan", &ULowEntryLong::execInteger_GreaterThan },
			{ "Integer_LessThan", &ULowEntryLong::execInteger_LessThan },
			{ "Integer_Subtract", &ULowEntryLong::execInteger_Subtract },
			{ "LongBytes_Add", &ULowEntryLong::execLongBytes_Add },
			{ "LongBytes_Equals", &ULowEntryLong::execLongBytes_Equals },
			{ "LongBytes_GreaterThan", &ULowEntryLong::execLongBytes_GreaterThan },
			{ "LongBytes_LessThan", &ULowEntryLong::execLongBytes_LessThan },
			{ "LongBytes_Subtract", &ULowEntryLong::execLongBytes_Subtract },
			{ "SetBytes", &ULowEntryLong::execSetBytes },
			{ "SetLong", &ULowEntryLong::execSetLong },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics
	{
		struct LowEntryLong_eventCastToDoubleBytes_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventCastToDoubleBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Casts the long to a double.\n\x09*/" },
		{ "DisplayName", "Cast To Double (bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Casts the long to a double." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "CastToDoubleBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::LowEntryLong_eventCastToDoubleBytes_Parms), Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_CastToString_Statics
	{
		struct LowEntryLong_eventCastToString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventCastToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Casts the long to a string.\n\x09*/" },
		{ "DisplayName", "To String" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Casts the long to a string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "CastToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::LowEntryLong_eventCastToString_Parms), Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_CastToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_CastToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics
	{
		struct LowEntryLong_eventCreateClone_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventCreateClone_Parms, ReturnValue), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Casts the long to a double.\n\x09*/" },
		{ "DisplayName", "Create Clone" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Casts the long to a double." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "CreateClone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::LowEntryLong_eventCreateClone_Parms), Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_CreateClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_CreateClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics
	{
		struct LowEntryLong_eventDoubleBytes_GreaterThan_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventDoubleBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventDoubleBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventDoubleBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is greater than the given double.\n\x09*/" },
		{ "DisplayName", "Greater Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is greater than the given double." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "DoubleBytes_GreaterThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::LowEntryLong_eventDoubleBytes_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics
	{
		struct LowEntryLong_eventDoubleBytes_LessThan_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventDoubleBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventDoubleBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventDoubleBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is less than the given double.\n\x09*/" },
		{ "DisplayName", "Less Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is less than the given double." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "DoubleBytes_LessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::LowEntryLong_eventDoubleBytes_LessThan_Parms), Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics
	{
		struct LowEntryLong_eventFloat_GreaterThan_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventFloat_GreaterThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventFloat_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventFloat_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is greater than the given float.\n\x09*/" },
		{ "DisplayName", "Greater Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is greater than the given float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Float_GreaterThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::LowEntryLong_eventFloat_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics
	{
		struct LowEntryLong_eventFloat_LessThan_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventFloat_LessThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventFloat_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventFloat_LessThan_Parms), &Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is less than the given float.\n\x09*/" },
		{ "DisplayName", "Less Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is less than the given float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Float_LessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::LowEntryLong_eventFloat_LessThan_Parms), Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_Float_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Float_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics
	{
		struct LowEntryLong_eventGetBytes_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventGetBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns the bytes (always 8 bytes).\n\x09*/" },
		{ "DisplayName", "Get Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns the bytes (always 8 bytes)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "GetBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::LowEntryLong_eventGetBytes_Parms), Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_GetBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_GetBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_GetLong_Statics
	{
		struct LowEntryLong_eventGetLong_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventGetLong_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns the value.\n\x09*/" },
		{ "DisplayName", "Get Value" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "GetLong", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::LowEntryLong_eventGetLong_Parms), Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_GetLong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_GetLong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics
	{
		struct LowEntryLong_eventInteger_Add_Parms
		{
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventInteger_Add_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Add an integer to this long.\n\x09*/" },
		{ "DisplayName", "Add (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Add an integer to this long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_Add", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::LowEntryLong_eventInteger_Add_Parms), Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics
	{
		struct LowEntryLong_eventInteger_Equals_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventInteger_Equals_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventInteger_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventInteger_Equals_Parms), &Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is equal to the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_Equals", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::LowEntryLong_eventInteger_Equals_Parms), Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics
	{
		struct LowEntryLong_eventInteger_GreaterThan_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventInteger_GreaterThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventInteger_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventInteger_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is greater than the given integer.\n\x09*/" },
		{ "DisplayName", "Greater Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is greater than the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_GreaterThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::LowEntryLong_eventInteger_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics
	{
		struct LowEntryLong_eventInteger_LessThan_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventInteger_LessThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventInteger_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventInteger_LessThan_Parms), &Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is less than the given integer.\n\x09*/" },
		{ "DisplayName", "Less Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is less than the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_LessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::LowEntryLong_eventInteger_LessThan_Parms), Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics
	{
		struct LowEntryLong_eventInteger_Subtract_Parms
		{
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventInteger_Subtract_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts an integer from this long.\n\x09*/" },
		{ "DisplayName", "Subtract (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Subtracts an integer from this long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "Integer_Subtract", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::LowEntryLong_eventInteger_Subtract_Parms), Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_Integer_Subtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_Integer_Subtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics
	{
		struct LowEntryLong_eventLongBytes_Add_Parms
		{
			ULowEntryLong* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventLongBytes_Add_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Add a long to this long.\n\x09*/" },
		{ "DisplayName", "Add (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Add a long to this long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_Add", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::LowEntryLong_eventLongBytes_Add_Parms), Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics
	{
		struct LowEntryLong_eventLongBytes_Equals_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventLongBytes_Equals_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventLongBytes_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventLongBytes_Equals_Parms), &Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is equal to the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_Equals", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::LowEntryLong_eventLongBytes_Equals_Parms), Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics
	{
		struct LowEntryLong_eventLongBytes_GreaterThan_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventLongBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventLongBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventLongBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is greater than the given integer.\n\x09*/" },
		{ "DisplayName", "Greater Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is greater than the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_GreaterThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::LowEntryLong_eventLongBytes_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics
	{
		struct LowEntryLong_eventLongBytes_LessThan_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventLongBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLong_eventLongBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLong_eventLongBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the long is less than the given integer.\n\x09*/" },
		{ "DisplayName", "Less Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Returns true if the long is less than the given integer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_LessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::LowEntryLong_eventLongBytes_LessThan_Parms), Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics
	{
		struct LowEntryLong_eventLongBytes_Subtract_Parms
		{
			ULowEntryLong* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventLongBytes_Subtract_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts an integer from this long.\n\x09*/" },
		{ "DisplayName", "Subtract (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Subtracts an integer from this long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "LongBytes_Subtract", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::LowEntryLong_eventLongBytes_Subtract_Parms), Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics
	{
		struct LowEntryLong_eventSetBytes_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventSetBytes_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventSetBytes_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventSetBytes_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_ByteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::NewProp_Length,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Sets the bytes (will only add the first 8 bytes, will add 0 bytes if the given byte array was less than 8 bytes).\n\x09*/" },
		{ "CPP_Default_Index", "0" },
		{ "CPP_Default_Length", "2147483647" },
		{ "DisplayName", "Set Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Sets the bytes (will only add the first 8 bytes, will add 0 bytes if the given byte array was less than 8 bytes)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "SetBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::LowEntryLong_eventSetBytes_Parms), Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_SetBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_SetBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLong_SetLong_Statics
	{
		struct LowEntryLong_eventSetLong_Parms
		{
			int64 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLong_eventSetLong_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Long (bytes)" },
		{ "Comment", "/**\n\x09* Sets the value.\n\x09*/" },
		{ "DisplayName", "Set Value" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
		{ "ToolTip", "Sets the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLong, nullptr, "SetLong", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::LowEntryLong_eventSetLong_Parms), Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLong_SetLong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLong_SetLong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryLong);
	UClass* Z_Construct_UClass_ULowEntryLong_NoRegister()
	{
		return ULowEntryLong::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryLong_Statics
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
	UObject* (*const Z_Construct_UClass_ULowEntryLong_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryLong_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryLong_CastToDoubleBytes, "CastToDoubleBytes" }, // 2296220693
		{ &Z_Construct_UFunction_ULowEntryLong_CastToString, "CastToString" }, // 1450303309
		{ &Z_Construct_UFunction_ULowEntryLong_CreateClone, "CreateClone" }, // 3232434925
		{ &Z_Construct_UFunction_ULowEntryLong_DoubleBytes_GreaterThan, "DoubleBytes_GreaterThan" }, // 399425807
		{ &Z_Construct_UFunction_ULowEntryLong_DoubleBytes_LessThan, "DoubleBytes_LessThan" }, // 3794770068
		{ &Z_Construct_UFunction_ULowEntryLong_Float_GreaterThan, "Float_GreaterThan" }, // 280117073
		{ &Z_Construct_UFunction_ULowEntryLong_Float_LessThan, "Float_LessThan" }, // 4235257729
		{ &Z_Construct_UFunction_ULowEntryLong_GetBytes, "GetBytes" }, // 1995423618
		{ &Z_Construct_UFunction_ULowEntryLong_GetLong, "GetLong" }, // 2164630965
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_Add, "Integer_Add" }, // 2801052144
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_Equals, "Integer_Equals" }, // 4252497811
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_GreaterThan, "Integer_GreaterThan" }, // 3383988313
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_LessThan, "Integer_LessThan" }, // 3253380858
		{ &Z_Construct_UFunction_ULowEntryLong_Integer_Subtract, "Integer_Subtract" }, // 2611008741
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_Add, "LongBytes_Add" }, // 2877964248
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_Equals, "LongBytes_Equals" }, // 987853018
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_GreaterThan, "LongBytes_GreaterThan" }, // 2707932158
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_LessThan, "LongBytes_LessThan" }, // 529227269
		{ &Z_Construct_UFunction_ULowEntryLong_LongBytes_Subtract, "LongBytes_Subtract" }, // 101021314
		{ &Z_Construct_UFunction_ULowEntryLong_SetBytes, "SetBytes" }, // 1834970082
		{ &Z_Construct_UFunction_ULowEntryLong_SetLong, "SetLong" }, // 3877308516
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLong_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesTypes/LowEntryLong.h" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryLong.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULowEntryLong, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryLong_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLong_Statics::NewProp_Bytes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryLong_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryLong>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryLong_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLong_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryLong()
	{
		if (!Z_Registration_Info_UClass_ULowEntryLong.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryLong.OuterSingleton, Z_Construct_UClass_ULowEntryLong_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULowEntryLong.OuterSingleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryLong>()
	{
		return ULowEntryLong::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryLong);
	ULowEntryLong::~ULowEntryLong() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryLong, ULowEntryLong::StaticClass, TEXT("ULowEntryLong"), &Z_Registration_Info_UClass_ULowEntryLong, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryLong), 1652963801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h_2420551195(TEXT("/Script/LowEntryExtendedStandardLibrary"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesTypes_LowEntryLong_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
