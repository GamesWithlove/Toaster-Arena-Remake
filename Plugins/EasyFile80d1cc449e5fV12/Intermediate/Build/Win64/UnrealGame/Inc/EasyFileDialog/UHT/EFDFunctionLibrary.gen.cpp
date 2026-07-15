// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EFDFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEFDFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
EASYFILEDIALOG_API UClass* Z_Construct_UClass_UEFDFunctionLibrary();
EASYFILEDIALOG_API UClass* Z_Construct_UClass_UEFDFunctionLibrary_NoRegister();
EASYFILEDIALOG_API UEnum* Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_EasyFileDialog();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEFDFunctionLibrary Function OpenFileDialog ******************************
struct Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics
{
	struct EFDFunctionLibrary_eventOpenFileDialog_Parms
	{
		FString DialogTitle;
		FString DefaultPath;
		FString DefaultFile;
		FString FileTypes;
		TEnumAsByte<EEasyFileDialogFlags> Flags;
		TArray<FString> OutFilenames;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyFileDialog" },
		{ "Comment", "// Open File Dialog\n" },
		{ "ModuleRelativePath", "Public/EFDFunctionLibrary.h" },
		{ "ToolTip", "Open File Dialog" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenFileDialog constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilenames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFilenames;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenFileDialog constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenFileDialog Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTitle_MetaData), NewProp_DialogTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPath_MetaData), NewProp_DefaultPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultFile = { "DefaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, DefaultFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFile_MetaData), NewProp_DefaultFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, FileTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileTypes_MetaData), NewProp_FileTypes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, Flags), Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags, METADATA_PARAMS(0, nullptr) }; // 516898821
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_OutFilenames_Inner = { "OutFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_OutFilenames = { "OutFilenames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, OutFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EFDFunctionLibrary_eventOpenFileDialog_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EFDFunctionLibrary_eventOpenFileDialog_Parms), &Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_FileTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_OutFilenames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_OutFilenames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::PropPointers) < 2048);
// ********** End Function OpenFileDialog Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEFDFunctionLibrary, nullptr, "OpenFileDialog", 	Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::EFDFunctionLibrary_eventOpenFileDialog_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::EFDFunctionLibrary_eventOpenFileDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEFDFunctionLibrary::execOpenFileDialog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
	P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFilenames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEFDFunctionLibrary::OpenFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_DefaultFile,Z_Param_FileTypes,EEasyFileDialogFlags(Z_Param_Flags),Z_Param_Out_OutFilenames);
	P_NATIVE_END;
}
// ********** End Class UEFDFunctionLibrary Function OpenFileDialog ********************************

// ********** Begin Class UEFDFunctionLibrary Function OpenFolderDialog ****************************
struct Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics
{
	struct EFDFunctionLibrary_eventOpenFolderDialog_Parms
	{
		FString DialogTitle;
		FString DefaultPath;
		FString OutFolderName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyFileDialog" },
		{ "Comment", "// Open Folder Dialog\n" },
		{ "ModuleRelativePath", "Public/EFDFunctionLibrary.h" },
		{ "ToolTip", "Open Folder Dialog" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenFolderDialog constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFolderName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenFolderDialog constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenFolderDialog Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFolderDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTitle_MetaData), NewProp_DialogTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFolderDialog_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPath_MetaData), NewProp_DefaultPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_OutFolderName = { "OutFolderName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFolderDialog_Parms, OutFolderName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EFDFunctionLibrary_eventOpenFolderDialog_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EFDFunctionLibrary_eventOpenFolderDialog_Parms), &Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DefaultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_OutFolderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::PropPointers) < 2048);
// ********** End Function OpenFolderDialog Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEFDFunctionLibrary, nullptr, "OpenFolderDialog", 	Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::EFDFunctionLibrary_eventOpenFolderDialog_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::EFDFunctionLibrary_eventOpenFolderDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEFDFunctionLibrary::execOpenFolderDialog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFolderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEFDFunctionLibrary::OpenFolderDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_Out_OutFolderName);
	P_NATIVE_END;
}
// ********** End Class UEFDFunctionLibrary Function OpenFolderDialog ******************************

// ********** Begin Class UEFDFunctionLibrary Function SaveFileDialog ******************************
struct Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics
{
	struct EFDFunctionLibrary_eventSaveFileDialog_Parms
	{
		FString DialogTitle;
		FString DefaultPath;
		FString DefaultFile;
		FString FileTypeDescription;
		FString FileType;
		TEnumAsByte<EEasyFileDialogFlags> Flags;
		TArray<FString> OutFilenames;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyFileDialog" },
		{ "Comment", "// Save File Dialog\n" },
		{ "ModuleRelativePath", "Public/EFDFunctionLibrary.h" },
		{ "ToolTip", "Save File Dialog" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileTypeDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveFileDialog constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypeDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilenames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFilenames;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveFileDialog constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveFileDialog Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTitle_MetaData), NewProp_DialogTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPath_MetaData), NewProp_DefaultPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultFile = { "DefaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, DefaultFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFile_MetaData), NewProp_DefaultFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileTypeDescription = { "FileTypeDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, FileTypeDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileTypeDescription_MetaData), NewProp_FileTypeDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, FileType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileType_MetaData), NewProp_FileType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, Flags), Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags, METADATA_PARAMS(0, nullptr) }; // 516898821
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_OutFilenames_Inner = { "OutFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_OutFilenames = { "OutFilenames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, OutFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EFDFunctionLibrary_eventSaveFileDialog_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EFDFunctionLibrary_eventSaveFileDialog_Parms), &Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileTypeDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_OutFilenames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_OutFilenames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::PropPointers) < 2048);
// ********** End Function SaveFileDialog Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEFDFunctionLibrary, nullptr, "SaveFileDialog", 	Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::EFDFunctionLibrary_eventSaveFileDialog_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::EFDFunctionLibrary_eventSaveFileDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEFDFunctionLibrary::execSaveFileDialog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileTypeDescription);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
	P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFilenames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEFDFunctionLibrary::SaveFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_DefaultFile,Z_Param_FileTypeDescription,Z_Param_FileType,EEasyFileDialogFlags(Z_Param_Flags),Z_Param_Out_OutFilenames);
	P_NATIVE_END;
}
// ********** End Class UEFDFunctionLibrary Function SaveFileDialog ********************************

// ********** Begin Class UEFDFunctionLibrary ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEFDFunctionLibrary;
UClass* UEFDFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UEFDFunctionLibrary;
	if (!Z_Registration_Info_UClass_UEFDFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EFDFunctionLibrary"),
			Z_Registration_Info_UClass_UEFDFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUEFDFunctionLibrary,
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
	return Z_Registration_Info_UClass_UEFDFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UEFDFunctionLibrary_NoRegister()
{
	return UEFDFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEFDFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EFDFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/EFDFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEFDFunctionLibrary constinit property declarations **********************
// ********** End Class UEFDFunctionLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OpenFileDialog"), .Pointer = &UEFDFunctionLibrary::execOpenFileDialog },
		{ .NameUTF8 = UTF8TEXT("OpenFolderDialog"), .Pointer = &UEFDFunctionLibrary::execOpenFolderDialog },
		{ .NameUTF8 = UTF8TEXT("SaveFileDialog"), .Pointer = &UEFDFunctionLibrary::execSaveFileDialog },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog, "OpenFileDialog" }, // 1683639203
		{ &Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog, "OpenFolderDialog" }, // 8785869
		{ &Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog, "SaveFileDialog" }, // 1631123147
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEFDFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEFDFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UEFDFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFileDialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEFDFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEFDFunctionLibrary_Statics::ClassParams = {
	&UEFDFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEFDFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEFDFunctionLibrary_Statics::Class_MetaDataParams)
};
void UEFDFunctionLibrary::StaticRegisterNativesUEFDFunctionLibrary()
{
	UClass* Class = UEFDFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEFDFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEFDFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UEFDFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEFDFunctionLibrary.OuterSingleton, Z_Construct_UClass_UEFDFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEFDFunctionLibrary.OuterSingleton;
}
UEFDFunctionLibrary::UEFDFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEFDFunctionLibrary);
UEFDFunctionLibrary::~UEFDFunctionLibrary() {}
// ********** End Class UEFDFunctionLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h__Script_EasyFileDialog_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEFDFunctionLibrary, UEFDFunctionLibrary::StaticClass, TEXT("UEFDFunctionLibrary"), &Z_Registration_Info_UClass_UEFDFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEFDFunctionLibrary), 2053591167U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h__Script_EasyFileDialog_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h__Script_EasyFileDialog_1149477065{
	TEXT("/Script/EasyFileDialog"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h__Script_EasyFileDialog_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h__Script_EasyFileDialog_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
