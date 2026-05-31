// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryParsedHashcash.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryParsedHashcash() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryParsedHashcash();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryParsedHashcash_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryParsedHashcash Function GetBits *********************************
struct Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics
{
	struct LowEntryParsedHashcash_eventGetBits_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Hashcash|Parsed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the bits (the strength, the value) of this Hashcash.\n\x09*/" },
#endif
		{ "DisplayName", "Get Bits" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryParsedHashcash.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the bits (the strength, the value) of this Hashcash." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBits constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBits constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBits Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryParsedHashcash_eventGetBits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::PropPointers) < 2048);
// ********** End Function GetBits Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryParsedHashcash, nullptr, "GetBits", 	Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::LowEntryParsedHashcash_eventGetBits_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::LowEntryParsedHashcash_eventGetBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryParsedHashcash::execGetBits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBits();
	P_NATIVE_END;
}
// ********** End Class ULowEntryParsedHashcash Function GetBits ***********************************

// ********** Begin Class ULowEntryParsedHashcash Function GetDate *********************************
struct Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics
{
	struct LowEntryParsedHashcash_eventGetDate_Parms
	{
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Hashcash|Parsed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the creation date (in UTC) of this Hashcash.\n\x09*/" },
#endif
		{ "DisplayName", "Get Date" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryParsedHashcash.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the creation date (in UTC) of this Hashcash." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDate constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDate constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDate Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryParsedHashcash_eventGetDate_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::PropPointers) < 2048);
// ********** End Function GetDate Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryParsedHashcash, nullptr, "GetDate", 	Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::LowEntryParsedHashcash_eventGetDate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::LowEntryParsedHashcash_eventGetDate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryParsedHashcash::execGetDate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=P_THIS->GetDate();
	P_NATIVE_END;
}
// ********** End Class ULowEntryParsedHashcash Function GetDate ***********************************

// ********** Begin Class ULowEntryParsedHashcash Function GetResource *****************************
struct Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics
{
	struct LowEntryParsedHashcash_eventGetResource_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Hashcash|Parsed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the resource (basically the service ID) of this Hashcash.\n\x09*/" },
#endif
		{ "DisplayName", "Get Resource" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryParsedHashcash.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the resource (basically the service ID) of this Hashcash." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetResource constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResource constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResource Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryParsedHashcash_eventGetResource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::PropPointers) < 2048);
// ********** End Function GetResource Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryParsedHashcash, nullptr, "GetResource", 	Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::LowEntryParsedHashcash_eventGetResource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::LowEntryParsedHashcash_eventGetResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryParsedHashcash::execGetResource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetResource();
	P_NATIVE_END;
}
// ********** End Class ULowEntryParsedHashcash Function GetResource *******************************

// ********** Begin Class ULowEntryParsedHashcash Function ToString ********************************
struct Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics
{
	struct LowEntryParsedHashcash_eventToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Hashcash|Parsed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Converts the Parsed Hashcash to a String, for debugging purposes.\n\x09*/" },
#endif
		{ "DisplayName", "To String" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryParsedHashcash.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts the Parsed Hashcash to a String, for debugging purposes." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ToString constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToString constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToString Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryParsedHashcash_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::PropPointers) < 2048);
// ********** End Function ToString Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryParsedHashcash, nullptr, "ToString", 	Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::LowEntryParsedHashcash_eventToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::LowEntryParsedHashcash_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryParsedHashcash_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryParsedHashcash_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryParsedHashcash::execToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToString();
	P_NATIVE_END;
}
// ********** End Class ULowEntryParsedHashcash Function ToString **********************************

// ********** Begin Class ULowEntryParsedHashcash **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryParsedHashcash;
UClass* ULowEntryParsedHashcash::GetPrivateStaticClass()
{
	using TClass = ULowEntryParsedHashcash;
	if (!Z_Registration_Info_UClass_ULowEntryParsedHashcash.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryParsedHashcash"),
			Z_Registration_Info_UClass_ULowEntryParsedHashcash.InnerSingleton,
			StaticRegisterNativesULowEntryParsedHashcash,
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
	return Z_Registration_Info_UClass_ULowEntryParsedHashcash.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryParsedHashcash_NoRegister()
{
	return ULowEntryParsedHashcash::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryParsedHashcash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryParsedHashcash.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryParsedHashcash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryParsedHashcash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryParsedHashcash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryParsedHashcash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bits_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryParsedHashcash.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryParsedHashcash constinit property declarations ******************
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Resource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Date;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryParsedHashcash constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetBits"), .Pointer = &ULowEntryParsedHashcash::execGetBits },
		{ .NameUTF8 = UTF8TEXT("GetDate"), .Pointer = &ULowEntryParsedHashcash::execGetDate },
		{ .NameUTF8 = UTF8TEXT("GetResource"), .Pointer = &ULowEntryParsedHashcash::execGetResource },
		{ .NameUTF8 = UTF8TEXT("ToString"), .Pointer = &ULowEntryParsedHashcash::execToString },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryParsedHashcash_GetBits, "GetBits" }, // 2957733062
		{ &Z_Construct_UFunction_ULowEntryParsedHashcash_GetDate, "GetDate" }, // 1267872257
		{ &Z_Construct_UFunction_ULowEntryParsedHashcash_GetResource, "GetResource" }, // 3594501355
		{ &Z_Construct_UFunction_ULowEntryParsedHashcash_ToString, "ToString" }, // 3365202138
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryParsedHashcash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryParsedHashcash_Statics

// ********** Begin Class ULowEntryParsedHashcash Property Definitions *****************************
void Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((ULowEntryParsedHashcash*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULowEntryParsedHashcash), &Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Valid_MetaData), NewProp_Valid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryParsedHashcash, Resource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resource_MetaData), NewProp_Resource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryParsedHashcash, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Date_MetaData), NewProp_Date_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Bits = { "Bits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryParsedHashcash, Bits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bits_MetaData), NewProp_Bits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryParsedHashcash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Resource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Date,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryParsedHashcash_Statics::NewProp_Bits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryParsedHashcash_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryParsedHashcash Property Definitions *******************************
UObject* (*const Z_Construct_UClass_ULowEntryParsedHashcash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryParsedHashcash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryParsedHashcash_Statics::ClassParams = {
	&ULowEntryParsedHashcash::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryParsedHashcash_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryParsedHashcash_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryParsedHashcash_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryParsedHashcash_Statics::Class_MetaDataParams)
};
void ULowEntryParsedHashcash::StaticRegisterNativesULowEntryParsedHashcash()
{
	UClass* Class = ULowEntryParsedHashcash::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULowEntryParsedHashcash_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULowEntryParsedHashcash()
{
	if (!Z_Registration_Info_UClass_ULowEntryParsedHashcash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryParsedHashcash.OuterSingleton, Z_Construct_UClass_ULowEntryParsedHashcash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryParsedHashcash.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryParsedHashcash);
ULowEntryParsedHashcash::~ULowEntryParsedHashcash() {}
// ********** End Class ULowEntryParsedHashcash ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryParsedHashcash_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryParsedHashcash, ULowEntryParsedHashcash::StaticClass, TEXT("ULowEntryParsedHashcash"), &Z_Registration_Info_UClass_ULowEntryParsedHashcash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryParsedHashcash), 3655353255U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryParsedHashcash_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryParsedHashcash_h__Script_LowEntryExtendedStandardLibrary_2599375112{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryParsedHashcash_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryParsedHashcash_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
