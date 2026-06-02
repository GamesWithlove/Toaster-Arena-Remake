// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryLatentActionString.h"
#include "Engine/LatentActionManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryLatentActionString() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionString();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionString_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryLatentActionString Function Done ********************************
struct Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics
{
	struct LowEntryLatentActionString_eventDone_Parms
	{
		FString Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|String" },
		{ "Comment", "/**\n\x09* Causes the latent action to be done.\n\x09*/" },
		{ "DisplayName", "Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ToolTip", "Causes the latent action to be done." },
	};
#endif // WITH_METADATA

// ********** Begin Function Done constinit property declarations **********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Done constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Done Property Definitions *********************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionString_eventDone_Parms, Result_), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::PropPointers) < 2048);
// ********** End Function Done Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionString, nullptr, "Done", 	Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::LowEntryLatentActionString_eventDone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::LowEntryLatentActionString_eventDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionString_Done()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionString::execDone)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Done(Z_Param_Result_);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionString Function Done **********************************

// ********** Begin Class ULowEntryLatentActionString Function GetResult ***************************
struct Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics
{
	struct LowEntryLatentActionString_eventGetResult_Parms
	{
		FString Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|String" },
		{ "Comment", "/**\n\x09* Returns the result.\n\x09*/" },
		{ "DisplayName", "Get Result" },
		{ "Keywords", "result return value" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ToolTip", "Returns the result." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResult constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResult constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResult Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionString_eventGetResult_Parms, Result_), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::PropPointers) < 2048);
// ********** End Function GetResult Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionString, nullptr, "GetResult", 	Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::LowEntryLatentActionString_eventGetResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::LowEntryLatentActionString_eventGetResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionString_GetResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionString::execGetResult)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResult(Z_Param_Out_Result_);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionString Function GetResult *****************************

// ********** Begin Class ULowEntryLatentActionString Function IsDone ******************************
struct Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics
{
	struct LowEntryLatentActionString_eventIsDone_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|String" },
		{ "Comment", "/**\n\x09* Returns true if the latent action is done.\n\x09*/" },
		{ "DisplayName", "Is Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ToolTip", "Returns true if the latent action is done." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDone constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDone constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDone Property Definitions *******************************************
void Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLatentActionString_eventIsDone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLatentActionString_eventIsDone_Parms), &Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::PropPointers) < 2048);
// ********** End Function IsDone Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionString, nullptr, "IsDone", 	Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::LowEntryLatentActionString_eventIsDone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::LowEntryLatentActionString_eventIsDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionString_IsDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionString::execIsDone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDone();
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionString Function IsDone ********************************

// ********** Begin Class ULowEntryLatentActionString Function WaitTillDone ************************
struct Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics
{
	struct LowEntryLatentActionString_eventWaitTillDone_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FString Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|String" },
		{ "Comment", "/**\n\x09* Waits till the latent action is done.\n\x09*/" },
		{ "DisplayName", "Wait Till Done" },
		{ "Keywords", "untill for end finished complete completion" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ToolTip", "Waits till the latent action is done." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function WaitTillDone constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WaitTillDone constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WaitTillDone Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionString_eventWaitTillDone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionString_eventWaitTillDone_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionString_eventWaitTillDone_Parms, Result_), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::PropPointers) < 2048);
// ********** End Function WaitTillDone Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionString, nullptr, "WaitTillDone", 	Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::LowEntryLatentActionString_eventWaitTillDone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::LowEntryLatentActionString_eventWaitTillDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionString::execWaitTillDone)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaitTillDone(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Result_);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionString Function WaitTillDone **************************

// ********** Begin Class ULowEntryLatentActionString **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryLatentActionString;
UClass* ULowEntryLatentActionString::GetPrivateStaticClass()
{
	using TClass = ULowEntryLatentActionString;
	if (!Z_Registration_Info_UClass_ULowEntryLatentActionString.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryLatentActionString"),
			Z_Registration_Info_UClass_ULowEntryLatentActionString.InnerSingleton,
			StaticRegisterNativesULowEntryLatentActionString,
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
	return Z_Registration_Info_UClass_ULowEntryLatentActionString.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryLatentActionString_NoRegister()
{
	return ULowEntryLatentActionString::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryLatentActionString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryLatentActionString constinit property declarations **************
	static void NewProp_Finished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Finished;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeepAliveCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryLatentActionString constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Done"), .Pointer = &ULowEntryLatentActionString::execDone },
		{ .NameUTF8 = UTF8TEXT("GetResult"), .Pointer = &ULowEntryLatentActionString::execGetResult },
		{ .NameUTF8 = UTF8TEXT("IsDone"), .Pointer = &ULowEntryLatentActionString::execIsDone },
		{ .NameUTF8 = UTF8TEXT("WaitTillDone"), .Pointer = &ULowEntryLatentActionString::execWaitTillDone },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryLatentActionString_Done, "Done" }, // 1036333675
		{ &Z_Construct_UFunction_ULowEntryLatentActionString_GetResult, "GetResult" }, // 2370837870
		{ &Z_Construct_UFunction_ULowEntryLatentActionString_IsDone, "IsDone" }, // 2168955141
		{ &Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone, "WaitTillDone" }, // 431820259
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryLatentActionString>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryLatentActionString_Statics

// ********** Begin Class ULowEntryLatentActionString Property Definitions *************************
void Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished_SetBit(void* Obj)
{
	((ULowEntryLatentActionString*)Obj)->Finished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULowEntryLatentActionString), &Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finished_MetaData), NewProp_Finished_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLatentActionString, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_KeepAliveCount = { "KeepAliveCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLatentActionString, KeepAliveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepAliveCount_MetaData), NewProp_KeepAliveCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryLatentActionString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_KeepAliveCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionString_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryLatentActionString Property Definitions ***************************
UObject* (*const Z_Construct_UClass_ULowEntryLatentActionString_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionString_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryLatentActionString_Statics::ClassParams = {
	&ULowEntryLatentActionString::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryLatentActionString_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionString_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionString_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryLatentActionString_Statics::Class_MetaDataParams)
};
void ULowEntryLatentActionString::StaticRegisterNativesULowEntryLatentActionString()
{
	UClass* Class = ULowEntryLatentActionString::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULowEntryLatentActionString_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULowEntryLatentActionString()
{
	if (!Z_Registration_Info_UClass_ULowEntryLatentActionString.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryLatentActionString.OuterSingleton, Z_Construct_UClass_ULowEntryLatentActionString_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryLatentActionString.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryLatentActionString);
ULowEntryLatentActionString::~ULowEntryLatentActionString() {}
// ********** End Class ULowEntryLatentActionString ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryLatentActionString, ULowEntryLatentActionString::StaticClass, TEXT("ULowEntryLatentActionString"), &Z_Registration_Info_UClass_ULowEntryLatentActionString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryLatentActionString), 1827280461U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h__Script_LowEntryExtendedStandardLibrary_3407415163{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
