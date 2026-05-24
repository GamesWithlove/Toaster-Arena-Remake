// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PakLoaderLibrary.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePakLoaderLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PAKLOADER_API UClass* Z_Construct_UClass_UPakLoaderLibrary();
PAKLOADER_API UClass* Z_Construct_UClass_UPakLoaderLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_PakLoader();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPakLoaderLibrary Function DoesPakDirectoryExist *************************
struct Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics
{
	struct PakLoaderLibrary_eventDoesPakDirectoryExist_Parms
	{
		FString PakDirectory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Tests if a specific pak directory exists.\n\x09\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tests if a specific pak directory exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PakDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesPakDirectoryExist constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PakDirectory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesPakDirectoryExist constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesPakDirectoryExist Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_PakDirectory = { "PakDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventDoesPakDirectoryExist_Parms, PakDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PakDirectory_MetaData), NewProp_PakDirectory_MetaData) };
void Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventDoesPakDirectoryExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventDoesPakDirectoryExist_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_PakDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PropPointers) < 2048);
// ********** End Function DoesPakDirectoryExist Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "DoesPakDirectoryExist", 	Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PakLoaderLibrary_eventDoesPakDirectoryExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PakLoaderLibrary_eventDoesPakDirectoryExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execDoesPakDirectoryExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PakDirectory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPakLoaderLibrary::DoesPakDirectoryExist(Z_Param_PakDirectory);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function DoesPakDirectoryExist ***************************

// ********** Begin Class UPakLoaderLibrary Function EnableRuntimeLog ******************************
struct Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics
{
	struct PakLoaderLibrary_eventEnableRuntimeLog_Parms
	{
		bool bEnable;
		FString NewLogPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Logs to a file and console, helpful for testing packaged builds to see whats going on.\n\x09\n\x09\x09@bEnable: treu to enable logging.\n\x09\x09@NewLogPath: File to output the text log.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logs to a file and console, helpful for testing packaged builds to see whats going on.\n\n@bEnable: treu to enable logging.\n@NewLogPath: File to output the text log." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLogPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableRuntimeLog constinit property declarations **********************
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewLogPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableRuntimeLog constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableRuntimeLog Property Definitions *********************************
void Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventEnableRuntimeLog_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventEnableRuntimeLog_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_NewLogPath = { "NewLogPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventEnableRuntimeLog_Parms, NewLogPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLogPath_MetaData), NewProp_NewLogPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_NewLogPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PropPointers) < 2048);
// ********** End Function EnableRuntimeLog Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "EnableRuntimeLog", 	Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PakLoaderLibrary_eventEnableRuntimeLog_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PakLoaderLibrary_eventEnableRuntimeLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execEnableRuntimeLog)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewLogPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPakLoaderLibrary::EnableRuntimeLog(Z_Param_bEnable,Z_Param_NewLogPath);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function EnableRuntimeLog ********************************

// ********** Begin Class UPakLoaderLibrary Function GetFilesInPak *********************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics
{
	struct PakLoaderLibrary_eventGetFilesInPak_Parms
	{
		FString PakFilename;
		bool bUAssetOnly;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Returns all files from inside a .pak file\n\n\x09\x09@PakFilename: .pak file on disk.\n\x09*/" },
#endif
		{ "CPP_Default_bUAssetOnly", "true" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all files from inside a .pak file\n\n@PakFilename: .pak file on disk." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFilesInPak constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
	static void NewProp_bUAssetOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUAssetOnly;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFilesInPak constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFilesInPak Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetFilesInPak_Parms, PakFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PakFilename_MetaData), NewProp_PakFilename_MetaData) };
void Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_bUAssetOnly_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventGetFilesInPak_Parms*)Obj)->bUAssetOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_bUAssetOnly = { "bUAssetOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventGetFilesInPak_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_bUAssetOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetFilesInPak_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_PakFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_bUAssetOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PropPointers) < 2048);
// ********** End Function GetFilesInPak Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetFilesInPak", 	Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PakLoaderLibrary_eventGetFilesInPak_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PakLoaderLibrary_eventGetFilesInPak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetFilesInPak)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PakFilename);
	P_GET_UBOOL(Z_Param_bUAssetOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UPakLoaderLibrary::GetFilesInPak(Z_Param_PakFilename,Z_Param_bUAssetOnly);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetFilesInPak ***********************************

// ********** Begin Class UPakLoaderLibrary Function GetFilesInPakDirectory ************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics
{
	struct PakLoaderLibrary_eventGetFilesInPakDirectory_Parms
	{
		FString PakDirectory;
		bool bRecursively;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Returns all files in a specific pak directory.\n\x09\x09\n\x09\x09@PakDirectory: Path in pak (Example: ../../../TestProject)\n\x09\x09@bRecursively: true to also return files in subfolders.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all files in a specific pak directory.\n\n@PakDirectory: Path in pak (Example: ../../../TestProject)\n@bRecursively: true to also return files in subfolders." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PakDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFilesInPakDirectory constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PakDirectory;
	static void NewProp_bRecursively_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursively;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFilesInPakDirectory constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFilesInPakDirectory Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_PakDirectory = { "PakDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetFilesInPakDirectory_Parms, PakDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PakDirectory_MetaData), NewProp_PakDirectory_MetaData) };
void Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_bRecursively_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventGetFilesInPakDirectory_Parms*)Obj)->bRecursively = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_bRecursively = { "bRecursively", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventGetFilesInPakDirectory_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_bRecursively_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetFilesInPakDirectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_PakDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_bRecursively,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PropPointers) < 2048);
// ********** End Function GetFilesInPakDirectory Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetFilesInPakDirectory", 	Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PakLoaderLibrary_eventGetFilesInPakDirectory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PakLoaderLibrary_eventGetFilesInPakDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetFilesInPakDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PakDirectory);
	P_GET_UBOOL(Z_Param_bRecursively);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UPakLoaderLibrary::GetFilesInPakDirectory(Z_Param_PakDirectory,Z_Param_bRecursively);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetFilesInPakDirectory **************************

// ********** Begin Class UPakLoaderLibrary Function GetMountedPakFilenames ************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics
{
	struct PakLoaderLibrary_eventGetMountedPakFilenames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns an array of all currently mounted pak files. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an array of all currently mounted pak files." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetMountedPakFilenames constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMountedPakFilenames constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMountedPakFilenames Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetMountedPakFilenames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PropPointers) < 2048);
// ********** End Function GetMountedPakFilenames Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetMountedPakFilenames", 	Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PakLoaderLibrary_eventGetMountedPakFilenames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PakLoaderLibrary_eventGetMountedPakFilenames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetMountedPakFilenames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UPakLoaderLibrary::GetMountedPakFilenames();
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetMountedPakFilenames **************************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileAnimSequence ************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics
{
	struct PakLoaderLibrary_eventGetPakFileAnimSequence_Parms
	{
		FString Filename;
		UAnimSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Utility to load UAnimSequence asset from pak. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility to load UAnimSequence asset from pak." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileAnimSequence constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileAnimSequence constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileAnimSequence Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileAnimSequence_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileAnimSequence_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileAnimSequence Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileAnimSequence", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PakLoaderLibrary_eventGetPakFileAnimSequence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PakLoaderLibrary_eventGetPakFileAnimSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileAnimSequence)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimSequence**)Z_Param__Result=UPakLoaderLibrary::GetPakFileAnimSequence(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileAnimSequence **************************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileClass *******************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics
{
	struct PakLoaderLibrary_eventGetPakFileClass_Parms
	{
		FString Filename;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Loads any class (ie Blueprints) from a pak file. Returns UClass which you can cast to your desired class (ie AActor).\n\x09\n\x09\x09@Filename: The file to load as class. (Example: /TestDLC/Blueprints/BP_Test)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads any class (ie Blueprints) from a pak file. Returns UClass which you can cast to your desired class (ie AActor).\n\n@Filename: The file to load as class. (Example: /TestDLC/Blueprints/BP_Test)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileClass constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileClass constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileClass Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileClass_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileClass_Parms, ReturnValue), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileClass Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileClass", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PakLoaderLibrary_eventGetPakFileClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PakLoaderLibrary_eventGetPakFileClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileClass)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=UPakLoaderLibrary::GetPakFileClass(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileClass *********************************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileMaterial ****************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics
{
	struct PakLoaderLibrary_eventGetPakFileMaterial_Parms
	{
		FString Filename;
		UMaterial* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Utility to load UMaterial asset from pak. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility to load UMaterial asset from pak." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileMaterial constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileMaterial constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileMaterial Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileMaterial_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileMaterial Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileMaterial", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PakLoaderLibrary_eventGetPakFileMaterial_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PakLoaderLibrary_eventGetPakFileMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileMaterial)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterial**)Z_Param__Result=UPakLoaderLibrary::GetPakFileMaterial(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileMaterial ******************************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileMaterialInstanceConstant ************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics
{
	struct PakLoaderLibrary_eventGetPakFileMaterialInstanceConstant_Parms
	{
		FString Filename;
		UMaterialInstanceConstant* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Utility to load UMaterialInstanceConstant asset from pak. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility to load UMaterialInstanceConstant asset from pak." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileMaterialInstanceConstant constinit property declarations ****
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileMaterialInstanceConstant constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileMaterialInstanceConstant Property Definitions ***************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileMaterialInstanceConstant_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileMaterialInstanceConstant_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileMaterialInstanceConstant Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileMaterialInstanceConstant", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PakLoaderLibrary_eventGetPakFileMaterialInstanceConstant_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PakLoaderLibrary_eventGetPakFileMaterialInstanceConstant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileMaterialInstanceConstant)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceConstant**)Z_Param__Result=UPakLoaderLibrary::GetPakFileMaterialInstanceConstant(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileMaterialInstanceConstant **************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileObject ******************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics
{
	struct PakLoaderLibrary_eventGetPakFileObject_Parms
	{
		FString Filename;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Loads any object (assets) from a pak file. Returns UObject which you can cast to your desired asset class type.\n\x09\n\x09\x09@Filename: The file to load as object. (Example: /TestDLC/Meshes/SM_Chair)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads any object (assets) from a pak file. Returns UObject which you can cast to your desired asset class type.\n\n@Filename: The file to load as object. (Example: /TestDLC/Meshes/SM_Chair)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileObject constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileObject constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileObject Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileObject_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileObject Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileObject", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PakLoaderLibrary_eventGetPakFileObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PakLoaderLibrary_eventGetPakFileObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileObject)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UPakLoaderLibrary::GetPakFileObject(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileObject ********************************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileSkeletalMesh ************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics
{
	struct PakLoaderLibrary_eventGetPakFileSkeletalMesh_Parms
	{
		FString Filename;
		USkeletalMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Utility to load USkeletalMesh asset from pak. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility to load USkeletalMesh asset from pak." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileSkeletalMesh constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileSkeletalMesh constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileSkeletalMesh Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileSkeletalMesh_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileSkeletalMesh Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileSkeletalMesh", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PakLoaderLibrary_eventGetPakFileSkeletalMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PakLoaderLibrary_eventGetPakFileSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileSkeletalMesh)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMesh**)Z_Param__Result=UPakLoaderLibrary::GetPakFileSkeletalMesh(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileSkeletalMesh **************************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileSound *******************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics
{
	struct PakLoaderLibrary_eventGetPakFileSound_Parms
	{
		FString Filename;
		USoundBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Utility to load USoundBase asset from pak. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility to load USoundBase asset from pak." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileSound constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileSound constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileSound Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileSound_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileSound Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileSound", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PakLoaderLibrary_eventGetPakFileSound_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PakLoaderLibrary_eventGetPakFileSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileSound)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundBase**)Z_Param__Result=UPakLoaderLibrary::GetPakFileSound(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileSound *********************************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileStaticMesh **************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics
{
	struct PakLoaderLibrary_eventGetPakFileStaticMesh_Parms
	{
		FString Filename;
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Utility to load UStaticMesh asset from pak. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility to load UStaticMesh asset from pak." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileStaticMesh constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileStaticMesh constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileStaticMesh Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileStaticMesh_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileStaticMesh Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileStaticMesh", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PakLoaderLibrary_eventGetPakFileStaticMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PakLoaderLibrary_eventGetPakFileStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileStaticMesh)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=UPakLoaderLibrary::GetPakFileStaticMesh(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileStaticMesh ****************************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileText ********************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics
{
	struct PakLoaderLibrary_eventGetPakFileText_Parms
	{
		FString Filename;
		FString String;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Reads content as string from pak. Requires full absolute path. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reads content as string from pak. Requires full absolute path." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileText constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileText constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileText Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileText_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileText_Parms, String), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventGetPakFileText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventGetPakFileText_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileText Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileText", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PakLoaderLibrary_eventGetPakFileText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PakLoaderLibrary_eventGetPakFileText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPakLoaderLibrary::GetPakFileText(Z_Param_Filename,Z_Param_Out_String);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileText **********************************

// ********** Begin Class UPakLoaderLibrary Function GetPakFileTexture2D ***************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics
{
	struct PakLoaderLibrary_eventGetPakFileTexture2D_Parms
	{
		FString Filename;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Utility to load UTexture2D asset from pak. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility to load UTexture2D asset from pak." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPakFileTexture2D constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPakFileTexture2D constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPakFileTexture2D Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileTexture2D_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PropPointers) < 2048);
// ********** End Function GetPakFileTexture2D Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileTexture2D", 	Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PakLoaderLibrary_eventGetPakFileTexture2D_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PakLoaderLibrary_eventGetPakFileTexture2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileTexture2D)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UPakLoaderLibrary::GetPakFileTexture2D(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetPakFileTexture2D *****************************

// ********** Begin Class UPakLoaderLibrary Function GetProjectName ********************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics
{
	struct PakLoaderLibrary_eventGetProjectName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns name of this Unreal project. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns name of this Unreal project." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetProjectName constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProjectName constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProjectName Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PropPointers) < 2048);
// ********** End Function GetProjectName Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetProjectName", 	Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PakLoaderLibrary_eventGetProjectName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PakLoaderLibrary_eventGetProjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetProjectName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPakLoaderLibrary::GetProjectName();
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetProjectName **********************************

// ********** Begin Class UPakLoaderLibrary Function GetShortName **********************************
struct Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics
{
	struct PakLoaderLibrary_eventGetShortName_Parms
	{
		FString LongName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09\x09Returns everything after the last slash.\n\x09\x09""Example: /Game/Textures/T_MyTexture = T_MyTexture\n\x09\n\x09\x09@LongName: Long package name to short package name.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns everything after the last slash.\nExample: /Game/Textures/T_MyTexture = T_MyTexture\n\n@LongName: Long package name to short package name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetShortName constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_LongName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetShortName constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetShortName Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_LongName = { "LongName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetShortName_Parms, LongName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongName_MetaData), NewProp_LongName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventGetShortName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_LongName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PropPointers) < 2048);
// ********** End Function GetShortName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetShortName", 	Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PakLoaderLibrary_eventGetShortName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PakLoaderLibrary_eventGetShortName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetShortName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execGetShortName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LongName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPakLoaderLibrary::GetShortName(Z_Param_LongName);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function GetShortName ************************************

// ********** Begin Class UPakLoaderLibrary Function IsPackagedBuild *******************************
struct Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics
{
	struct PakLoaderLibrary_eventIsPackagedBuild_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns true if this current build is a packaged (shipping) build. Returns false if it is an editor build. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this current build is a packaged (shipping) build. Returns false if it is an editor build." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsPackagedBuild constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPackagedBuild constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPackagedBuild Property Definitions **********************************
void Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventIsPackagedBuild_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventIsPackagedBuild_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PropPointers) < 2048);
// ********** End Function IsPackagedBuild Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "IsPackagedBuild", 	Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PakLoaderLibrary_eventIsPackagedBuild_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PakLoaderLibrary_eventIsPackagedBuild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execIsPackagedBuild)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPakLoaderLibrary::IsPackagedBuild();
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function IsPackagedBuild *********************************

// ********** Begin Class UPakLoaderLibrary Function IsValidPakFile ********************************
struct Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics
{
	struct PakLoaderLibrary_eventIsValidPakFile_Parms
	{
		FString PakFilename;
		int64 PakSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Tests if a file on disk is a valid .pak file. Also returns size in bytes of the Pak content.\n\x09\n\x09\x09@PakFilename: .pak file on disk.\n\x09\x09@PakSize: If pak file is valid then this variable will hold the pak's size in bytes.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tests if a file on disk is a valid .pak file. Also returns size in bytes of the Pak content.\n\n@PakFilename: .pak file on disk.\n@PakSize: If pak file is valid then this variable will hold the pak's size in bytes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidPakFile constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PakSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidPakFile constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidPakFile Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventIsValidPakFile_Parms, PakFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PakFilename_MetaData), NewProp_PakFilename_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakSize = { "PakSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventIsValidPakFile_Parms, PakSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventIsValidPakFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventIsValidPakFile_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PropPointers) < 2048);
// ********** End Function IsValidPakFile Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "IsValidPakFile", 	Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PakLoaderLibrary_eventIsValidPakFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PakLoaderLibrary_eventIsValidPakFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execIsValidPakFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PakFilename);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_PakSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPakLoaderLibrary::IsValidPakFile(Z_Param_PakFilename,Z_Param_Out_PakSize);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function IsValidPakFile **********************************

// ********** Begin Class UPakLoaderLibrary Function LoadPakAssetRegistryFile **********************
struct Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics
{
	struct PakLoaderLibrary_eventLoadPakAssetRegistryFile_Parms
	{
		FString AssetRegistryFile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Loads an AssetRegistry.bin file to publish new files to Unreal's asset registry.\n\x09\n\x09\x09@AssetRegistryFile: Full path to an AssetRegistry.bin file. Example: (../../../TestProject/Plugins/TestDLC/AssetRegistry.bin)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads an AssetRegistry.bin file to publish new files to Unreal's asset registry.\n\n@AssetRegistryFile: Full path to an AssetRegistry.bin file. Example: (../../../TestProject/Plugins/TestDLC/AssetRegistry.bin)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadPakAssetRegistryFile constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetRegistryFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadPakAssetRegistryFile constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadPakAssetRegistryFile Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::NewProp_AssetRegistryFile = { "AssetRegistryFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventLoadPakAssetRegistryFile_Parms, AssetRegistryFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetRegistryFile_MetaData), NewProp_AssetRegistryFile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::NewProp_AssetRegistryFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PropPointers) < 2048);
// ********** End Function LoadPakAssetRegistryFile Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "LoadPakAssetRegistryFile", 	Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PakLoaderLibrary_eventLoadPakAssetRegistryFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PakLoaderLibrary_eventLoadPakAssetRegistryFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execLoadPakAssetRegistryFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetRegistryFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPakLoaderLibrary::LoadPakAssetRegistryFile(Z_Param_AssetRegistryFile);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function LoadPakAssetRegistryFile ************************

// ********** Begin Class UPakLoaderLibrary Function MountPakFile **********************************
struct Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics
{
	struct PakLoaderLibrary_eventMountPakFile_Parms
	{
		FString PakFilename;
		FString MountPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Mounts a pak file. !!!Read the plugins documentation to learn about mount points etc.!!!\n\n\x09\x09@PakFilename: .pak file on disk.\n\x09\x09@MountPath: Where to mount the Pak content. Leave empty if unsure (mount path as specified in the pak file will be used).\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mounts a pak file. !!!Read the plugins documentation to learn about mount points etc.!!!\n\n@PakFilename: .pak file on disk.\n@MountPath: Where to mount the Pak content. Leave empty if unsure (mount path as specified in the pak file will be used)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MountPakFile constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MountPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MountPakFile constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MountPakFile Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventMountPakFile_Parms, PakFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PakFilename_MetaData), NewProp_PakFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_MountPath = { "MountPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventMountPakFile_Parms, MountPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountPath_MetaData), NewProp_MountPath_MetaData) };
void Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventMountPakFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventMountPakFile_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_PakFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_MountPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PropPointers) < 2048);
// ********** End Function MountPakFile Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "MountPakFile", 	Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PakLoaderLibrary_eventMountPakFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PakLoaderLibrary_eventMountPakFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execMountPakFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PakFilename);
	P_GET_PROPERTY(FStrProperty,Z_Param_MountPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPakLoaderLibrary::MountPakFile(Z_Param_PakFilename,Z_Param_MountPath);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function MountPakFile ************************************

// ********** Begin Class UPakLoaderLibrary Function MountPakFileEasy ******************************
struct Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics
{
	struct PakLoaderLibrary_eventMountPakFileEasy_Parms
	{
		FString PakFilename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Mounts a pak file and automatically tries to register the mount path.\n\x09\x09If you use this function then you don't have to call RegisterMountPoint yourself.\n\x09\x09This function also automatically tries to load the asset registry file of the pak.\n\x09\x09This only requirement for this function is that the pak file contains an AssetRegistry.bin file\n\x09\x09in order to detect the root and content path automatically.\n\n\x09\x09@PakFilename: .pak file on disk.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mounts a pak file and automatically tries to register the mount path.\nIf you use this function then you don't have to call RegisterMountPoint yourself.\nThis function also automatically tries to load the asset registry file of the pak.\nThis only requirement for this function is that the pak file contains an AssetRegistry.bin file\nin order to detect the root and content path automatically.\n\n@PakFilename: .pak file on disk." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MountPakFileEasy constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MountPakFileEasy constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MountPakFileEasy Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventMountPakFileEasy_Parms, PakFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PakFilename_MetaData), NewProp_PakFilename_MetaData) };
void Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventMountPakFileEasy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventMountPakFileEasy_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_PakFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PropPointers) < 2048);
// ********** End Function MountPakFileEasy Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "MountPakFileEasy", 	Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PakLoaderLibrary_eventMountPakFileEasy_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PakLoaderLibrary_eventMountPakFileEasy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execMountPakFileEasy)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PakFilename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPakLoaderLibrary::MountPakFileEasy(Z_Param_PakFilename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function MountPakFileEasy ********************************

// ********** Begin Class UPakLoaderLibrary Function ProjectPersistentDownloadDir ******************
struct Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics
{
	struct PakLoaderLibrary_eventProjectPersistentDownloadDir_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns directory of Unreal's persistent download directory. */" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns directory of Unreal's persistent download directory." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ProjectPersistentDownloadDir constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProjectPersistentDownloadDir constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProjectPersistentDownloadDir Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventProjectPersistentDownloadDir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PropPointers) < 2048);
// ********** End Function ProjectPersistentDownloadDir Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "ProjectPersistentDownloadDir", 	Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PakLoaderLibrary_eventProjectPersistentDownloadDir_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PakLoaderLibrary_eventProjectPersistentDownloadDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execProjectPersistentDownloadDir)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPakLoaderLibrary::ProjectPersistentDownloadDir();
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function ProjectPersistentDownloadDir ********************

// ********** Begin Class UPakLoaderLibrary Function RegisterEncryptionKey *************************
struct Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics
{
	struct PakLoaderLibrary_eventRegisterEncryptionKey_Parms
	{
		FString Guid;
		FString AesKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Registers an AES encryption key to the engine.\n\n\x09\x09@Guid: The encryption key guid. For example 00000000000000000000000000000000\n\x09\x09@AesKey: The AES key as base64. For example: zLQDKoikfG77t0B84QGt8CTpAyVjjj86dX3vo8mEmUE=\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers an AES encryption key to the engine.\n\n@Guid: The encryption key guid. For example 00000000000000000000000000000000\n@AesKey: The AES key as base64. For example: zLQDKoikfG77t0B84QGt8CTpAyVjjj86dX3vo8mEmUE=" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AesKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterEncryptionKey constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AesKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterEncryptionKey constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterEncryptionKey Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventRegisterEncryptionKey_Parms, Guid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_AesKey = { "AesKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventRegisterEncryptionKey_Parms, AesKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AesKey_MetaData), NewProp_AesKey_MetaData) };
void Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventRegisterEncryptionKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventRegisterEncryptionKey_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_AesKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PropPointers) < 2048);
// ********** End Function RegisterEncryptionKey Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "RegisterEncryptionKey", 	Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PakLoaderLibrary_eventRegisterEncryptionKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PakLoaderLibrary_eventRegisterEncryptionKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execRegisterEncryptionKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Guid);
	P_GET_PROPERTY(FStrProperty,Z_Param_AesKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPakLoaderLibrary::RegisterEncryptionKey(Z_Param_Guid,Z_Param_AesKey);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function RegisterEncryptionKey ***************************

// ********** Begin Class UPakLoaderLibrary Function RegisterMountPoint ****************************
struct Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics
{
	struct PakLoaderLibrary_eventRegisterMountPoint_Parms
	{
		FString RootPath;
		FString ContentPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09""Creates a link between a root path and a package content path (mount point).\n\x09\x09This is required to make references between assets work. Should be called after mounting a pak.\n\x09\x09See the parameters below for an example. After calling this function, the RootPath will point to the ContentPath.\n\x09\x09Without registering a mount point the engine doesn't know the root path of your mounted plugin.\n\x09\x09The ContentPath is the mount point of the pak file + the further part to your \"Content\" folder.\n\x09\x09See this image for another example: https://drive.google.com/file/d/1jKlOshFSnXQIXwKyENl1zwsskhl4Vke2/view?usp=sharing\n\x09\x09\n\x09\x09@RootPath: Top content folder name of where your assets are in (Example: /TestDLC/).\n\x09\x09@ContentPath: The path inside a pak to where the RootPath should point to. (Example: ../../../TestProject/Plugins/TestDLC/Content/)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a link between a root path and a package content path (mount point).\nThis is required to make references between assets work. Should be called after mounting a pak.\nSee the parameters below for an example. After calling this function, the RootPath will point to the ContentPath.\nWithout registering a mount point the engine doesn't know the root path of your mounted plugin.\nThe ContentPath is the mount point of the pak file + the further part to your \"Content\" folder.\nSee this image for another example: https://drive.google.com/file/d/1jKlOshFSnXQIXwKyENl1zwsskhl4Vke2/view?usp=sharing\n\n@RootPath: Top content folder name of where your assets are in (Example: /TestDLC/).\n@ContentPath: The path inside a pak to where the RootPath should point to. (Example: ../../../TestProject/Plugins/TestDLC/Content/)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterMountPoint constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_RootPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterMountPoint constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterMountPoint Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_RootPath = { "RootPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventRegisterMountPoint_Parms, RootPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPath_MetaData), NewProp_RootPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventRegisterMountPoint_Parms, ContentPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentPath_MetaData), NewProp_ContentPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_RootPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_ContentPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PropPointers) < 2048);
// ********** End Function RegisterMountPoint Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "RegisterMountPoint", 	Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PakLoaderLibrary_eventRegisterMountPoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PakLoaderLibrary_eventRegisterMountPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execRegisterMountPoint)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RootPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPakLoaderLibrary::RegisterMountPoint(Z_Param_RootPath,Z_Param_ContentPath);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function RegisterMountPoint ******************************

// ********** Begin Class UPakLoaderLibrary Function RuntimeLog ************************************
struct Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics
{
	struct PakLoaderLibrary_eventRuntimeLog_Parms
	{
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Logs to a file and console, helpful for testing packaged builds to see whats going on.\n\x09\x09Requires EnableRuntimeLog to be called first.\n\n\x09\x09@Text: Text to log.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logs to a file and console, helpful for testing packaged builds to see whats going on.\nRequires EnableRuntimeLog to be called first.\n\n@Text: Text to log." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RuntimeLog constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RuntimeLog constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RuntimeLog Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventRuntimeLog_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PropPointers) < 2048);
// ********** End Function RuntimeLog Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "RuntimeLog", 	Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PakLoaderLibrary_eventRuntimeLog_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PakLoaderLibrary_eventRuntimeLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execRuntimeLog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPakLoaderLibrary::RuntimeLog(Z_Param_Text);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function RuntimeLog **************************************

// ********** Begin Class UPakLoaderLibrary Function SHA1SUM ***************************************
struct Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics
{
	struct PakLoaderLibrary_eventSHA1SUM_Parms
	{
		FString Filename;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Returns SHA1 checksum of a file.\n\x09\n\x09\x09@Filename: File to generate checksum for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns SHA1 checksum of a file.\n\n@Filename: File to generate checksum for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SHA1SUM constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SHA1SUM constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SHA1SUM Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventSHA1SUM_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventSHA1SUM_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PropPointers) < 2048);
// ********** End Function SHA1SUM Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "SHA1SUM", 	Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PakLoaderLibrary_eventSHA1SUM_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PakLoaderLibrary_eventSHA1SUM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execSHA1SUM)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPakLoaderLibrary::SHA1SUM(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function SHA1SUM *****************************************

// ********** Begin Class UPakLoaderLibrary Function TryConvertFilenameToLongPackageName ***********
struct Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics
{
	struct PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms
	{
		FString Filename;
		FString PackageName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09""Filename to packagename. Returns a path starting with a valid root like /Game/, /MyDLC/ etc.\n\x09\x09Requires that the path is registered within Unreal. (RegisterMountPoint)\n\x09\x09""Example: ../../TestProject/Content/Meshes/SM_MyMesh = /Game/Meshes/SM_MyMesh\n\x09\n\x09\x09@Filename: Absolute file or path.\n\x09\x09@PackageName: Will hold the converted path. Empty if Filename's path is not registered.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filename to packagename. Returns a path starting with a valid root like /Game/, /MyDLC/ etc.\nRequires that the path is registered within Unreal. (RegisterMountPoint)\nExample: ../../TestProject/Content/Meshes/SM_MyMesh = /Game/Meshes/SM_MyMesh\n\n@Filename: Absolute file or path.\n@PackageName: Will hold the converted path. Empty if Filename's path is not registered." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryConvertFilenameToLongPackageName constinit property declarations ***
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryConvertFilenameToLongPackageName constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryConvertFilenameToLongPackageName Property Definitions **************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PropPointers) < 2048);
// ********** End Function TryConvertFilenameToLongPackageName Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "TryConvertFilenameToLongPackageName", 	Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execTryConvertFilenameToLongPackageName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPakLoaderLibrary::TryConvertFilenameToLongPackageName(Z_Param_Filename,Z_Param_Out_PackageName);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function TryConvertFilenameToLongPackageName *************

// ********** Begin Class UPakLoaderLibrary Function UnmountPakFile ********************************
struct Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics
{
	struct PakLoaderLibrary_eventUnmountPakFile_Parms
	{
		FString PakFilename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Unmounts a Pak that was previously mounted.\n\n\x09\x09@PakFilename: .pak file on disk to unmount.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unmounts a Pak that was previously mounted.\n\n@PakFilename: .pak file on disk to unmount." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnmountPakFile constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnmountPakFile constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnmountPakFile Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventUnmountPakFile_Parms, PakFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PakFilename_MetaData), NewProp_PakFilename_MetaData) };
void Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakLoaderLibrary_eventUnmountPakFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakLoaderLibrary_eventUnmountPakFile_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_PakFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PropPointers) < 2048);
// ********** End Function UnmountPakFile Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "UnmountPakFile", 	Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PakLoaderLibrary_eventUnmountPakFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PakLoaderLibrary_eventUnmountPakFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execUnmountPakFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PakFilename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPakLoaderLibrary::UnmountPakFile(Z_Param_PakFilename);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function UnmountPakFile **********************************

// ********** Begin Class UPakLoaderLibrary Function UnRegisterMountPoint **************************
struct Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics
{
	struct PakLoaderLibrary_eventUnRegisterMountPoint_Parms
	{
		FString RootPath;
		FString ContentPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09Unregister previously registered mount point. See RegisterMountPoint function.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister previously registered mount point. See RegisterMountPoint function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnRegisterMountPoint constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_RootPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnRegisterMountPoint constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnRegisterMountPoint Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_RootPath = { "RootPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventUnRegisterMountPoint_Parms, RootPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPath_MetaData), NewProp_RootPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakLoaderLibrary_eventUnRegisterMountPoint_Parms, ContentPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentPath_MetaData), NewProp_ContentPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_RootPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_ContentPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PropPointers) < 2048);
// ********** End Function UnRegisterMountPoint Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "UnRegisterMountPoint", 	Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PakLoaderLibrary_eventUnRegisterMountPoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PakLoaderLibrary_eventUnRegisterMountPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakLoaderLibrary::execUnRegisterMountPoint)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RootPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPakLoaderLibrary::UnRegisterMountPoint(Z_Param_RootPath,Z_Param_ContentPath);
	P_NATIVE_END;
}
// ********** End Class UPakLoaderLibrary Function UnRegisterMountPoint ****************************

// ********** Begin Class UPakLoaderLibrary ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPakLoaderLibrary;
UClass* UPakLoaderLibrary::GetPrivateStaticClass()
{
	using TClass = UPakLoaderLibrary;
	if (!Z_Registration_Info_UClass_UPakLoaderLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PakLoaderLibrary"),
			Z_Registration_Info_UClass_UPakLoaderLibrary.InnerSingleton,
			StaticRegisterNativesUPakLoaderLibrary,
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
	return Z_Registration_Info_UClass_UPakLoaderLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UPakLoaderLibrary_NoRegister()
{
	return UPakLoaderLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPakLoaderLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "PakLoaderLibrary.h" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPakLoaderLibrary constinit property declarations ************************
// ********** End Class UPakLoaderLibrary constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DoesPakDirectoryExist"), .Pointer = &UPakLoaderLibrary::execDoesPakDirectoryExist },
		{ .NameUTF8 = UTF8TEXT("EnableRuntimeLog"), .Pointer = &UPakLoaderLibrary::execEnableRuntimeLog },
		{ .NameUTF8 = UTF8TEXT("GetFilesInPak"), .Pointer = &UPakLoaderLibrary::execGetFilesInPak },
		{ .NameUTF8 = UTF8TEXT("GetFilesInPakDirectory"), .Pointer = &UPakLoaderLibrary::execGetFilesInPakDirectory },
		{ .NameUTF8 = UTF8TEXT("GetMountedPakFilenames"), .Pointer = &UPakLoaderLibrary::execGetMountedPakFilenames },
		{ .NameUTF8 = UTF8TEXT("GetPakFileAnimSequence"), .Pointer = &UPakLoaderLibrary::execGetPakFileAnimSequence },
		{ .NameUTF8 = UTF8TEXT("GetPakFileClass"), .Pointer = &UPakLoaderLibrary::execGetPakFileClass },
		{ .NameUTF8 = UTF8TEXT("GetPakFileMaterial"), .Pointer = &UPakLoaderLibrary::execGetPakFileMaterial },
		{ .NameUTF8 = UTF8TEXT("GetPakFileMaterialInstanceConstant"), .Pointer = &UPakLoaderLibrary::execGetPakFileMaterialInstanceConstant },
		{ .NameUTF8 = UTF8TEXT("GetPakFileObject"), .Pointer = &UPakLoaderLibrary::execGetPakFileObject },
		{ .NameUTF8 = UTF8TEXT("GetPakFileSkeletalMesh"), .Pointer = &UPakLoaderLibrary::execGetPakFileSkeletalMesh },
		{ .NameUTF8 = UTF8TEXT("GetPakFileSound"), .Pointer = &UPakLoaderLibrary::execGetPakFileSound },
		{ .NameUTF8 = UTF8TEXT("GetPakFileStaticMesh"), .Pointer = &UPakLoaderLibrary::execGetPakFileStaticMesh },
		{ .NameUTF8 = UTF8TEXT("GetPakFileText"), .Pointer = &UPakLoaderLibrary::execGetPakFileText },
		{ .NameUTF8 = UTF8TEXT("GetPakFileTexture2D"), .Pointer = &UPakLoaderLibrary::execGetPakFileTexture2D },
		{ .NameUTF8 = UTF8TEXT("GetProjectName"), .Pointer = &UPakLoaderLibrary::execGetProjectName },
		{ .NameUTF8 = UTF8TEXT("GetShortName"), .Pointer = &UPakLoaderLibrary::execGetShortName },
		{ .NameUTF8 = UTF8TEXT("IsPackagedBuild"), .Pointer = &UPakLoaderLibrary::execIsPackagedBuild },
		{ .NameUTF8 = UTF8TEXT("IsValidPakFile"), .Pointer = &UPakLoaderLibrary::execIsValidPakFile },
		{ .NameUTF8 = UTF8TEXT("LoadPakAssetRegistryFile"), .Pointer = &UPakLoaderLibrary::execLoadPakAssetRegistryFile },
		{ .NameUTF8 = UTF8TEXT("MountPakFile"), .Pointer = &UPakLoaderLibrary::execMountPakFile },
		{ .NameUTF8 = UTF8TEXT("MountPakFileEasy"), .Pointer = &UPakLoaderLibrary::execMountPakFileEasy },
		{ .NameUTF8 = UTF8TEXT("ProjectPersistentDownloadDir"), .Pointer = &UPakLoaderLibrary::execProjectPersistentDownloadDir },
		{ .NameUTF8 = UTF8TEXT("RegisterEncryptionKey"), .Pointer = &UPakLoaderLibrary::execRegisterEncryptionKey },
		{ .NameUTF8 = UTF8TEXT("RegisterMountPoint"), .Pointer = &UPakLoaderLibrary::execRegisterMountPoint },
		{ .NameUTF8 = UTF8TEXT("RuntimeLog"), .Pointer = &UPakLoaderLibrary::execRuntimeLog },
		{ .NameUTF8 = UTF8TEXT("SHA1SUM"), .Pointer = &UPakLoaderLibrary::execSHA1SUM },
		{ .NameUTF8 = UTF8TEXT("TryConvertFilenameToLongPackageName"), .Pointer = &UPakLoaderLibrary::execTryConvertFilenameToLongPackageName },
		{ .NameUTF8 = UTF8TEXT("UnmountPakFile"), .Pointer = &UPakLoaderLibrary::execUnmountPakFile },
		{ .NameUTF8 = UTF8TEXT("UnRegisterMountPoint"), .Pointer = &UPakLoaderLibrary::execUnRegisterMountPoint },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist, "DoesPakDirectoryExist" }, // 3584311743
		{ &Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog, "EnableRuntimeLog" }, // 2090188781
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak, "GetFilesInPak" }, // 3803508350
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory, "GetFilesInPakDirectory" }, // 2985731207
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames, "GetMountedPakFilenames" }, // 4247241250
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence, "GetPakFileAnimSequence" }, // 4122200384
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass, "GetPakFileClass" }, // 1493586738
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial, "GetPakFileMaterial" }, // 470337900
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant, "GetPakFileMaterialInstanceConstant" }, // 2276643811
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject, "GetPakFileObject" }, // 1935846275
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh, "GetPakFileSkeletalMesh" }, // 129074148
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound, "GetPakFileSound" }, // 1697184124
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh, "GetPakFileStaticMesh" }, // 3745784711
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText, "GetPakFileText" }, // 1548727082
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D, "GetPakFileTexture2D" }, // 492432079
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName, "GetProjectName" }, // 649755849
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetShortName, "GetShortName" }, // 3851799657
		{ &Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild, "IsPackagedBuild" }, // 3822611275
		{ &Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile, "IsValidPakFile" }, // 3432383518
		{ &Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile, "LoadPakAssetRegistryFile" }, // 751441764
		{ &Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile, "MountPakFile" }, // 2421022624
		{ &Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy, "MountPakFileEasy" }, // 3015462323
		{ &Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir, "ProjectPersistentDownloadDir" }, // 1176203429
		{ &Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey, "RegisterEncryptionKey" }, // 581740160
		{ &Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint, "RegisterMountPoint" }, // 3952638329
		{ &Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog, "RuntimeLog" }, // 31640327
		{ &Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM, "SHA1SUM" }, // 2984517622
		{ &Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName, "TryConvertFilenameToLongPackageName" }, // 2278635197
		{ &Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile, "UnmountPakFile" }, // 1073959327
		{ &Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint, "UnRegisterMountPoint" }, // 309397978
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPakLoaderLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPakLoaderLibrary_Statics
UObject* (*const Z_Construct_UClass_UPakLoaderLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PakLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPakLoaderLibrary_Statics::ClassParams = {
	&UPakLoaderLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPakLoaderLibrary_Statics::Class_MetaDataParams)
};
void UPakLoaderLibrary::StaticRegisterNativesUPakLoaderLibrary()
{
	UClass* Class = UPakLoaderLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPakLoaderLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPakLoaderLibrary()
{
	if (!Z_Registration_Info_UClass_UPakLoaderLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPakLoaderLibrary.OuterSingleton, Z_Construct_UClass_UPakLoaderLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPakLoaderLibrary.OuterSingleton;
}
UPakLoaderLibrary::UPakLoaderLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPakLoaderLibrary);
UPakLoaderLibrary::~UPakLoaderLibrary() {}
// ********** End Class UPakLoaderLibrary **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h__Script_PakLoader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPakLoaderLibrary, UPakLoaderLibrary::StaticClass, TEXT("UPakLoaderLibrary"), &Z_Registration_Info_UClass_UPakLoaderLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPakLoaderLibrary), 1386027127U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h__Script_PakLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h__Script_PakLoader_549632192{
	TEXT("/Script/PakLoader"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h__Script_PakLoader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h__Script_PakLoader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
