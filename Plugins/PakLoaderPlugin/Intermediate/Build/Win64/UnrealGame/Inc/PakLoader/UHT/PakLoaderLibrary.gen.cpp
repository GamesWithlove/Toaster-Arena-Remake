// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PakLoader/Public/PakLoaderLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePakLoaderLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
// End Cross Module References
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPakLoaderLibrary::GetPakFileText(Z_Param_Filename,Z_Param_Out_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileAnimSequence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=UPakLoaderLibrary::GetPakFileAnimSequence(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileMaterialInstanceConstant)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceConstant**)Z_Param__Result=UPakLoaderLibrary::GetPakFileMaterialInstanceConstant(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileMaterial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterial**)Z_Param__Result=UPakLoaderLibrary::GetPakFileMaterial(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileSound)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=UPakLoaderLibrary::GetPakFileSound(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileSkeletalMesh)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=UPakLoaderLibrary::GetPakFileSkeletalMesh(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileStaticMesh)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=UPakLoaderLibrary::GetPakFileStaticMesh(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileTexture2D)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UPakLoaderLibrary::GetPakFileTexture2D(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UPakLoaderLibrary::GetPakFileObject(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetPakFileClass)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UPakLoaderLibrary::GetPakFileClass(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execDoesPakDirectoryExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PakDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPakLoaderLibrary::DoesPakDirectoryExist(Z_Param_PakDirectory);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetFilesInPakDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PakDirectory);
		P_GET_UBOOL(Z_Param_bRecursively);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UPakLoaderLibrary::GetFilesInPakDirectory(Z_Param_PakDirectory,Z_Param_bRecursively);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UPakLoaderLibrary::execLoadPakAssetRegistryFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetRegistryFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPakLoaderLibrary::LoadPakAssetRegistryFile(Z_Param_AssetRegistryFile);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UPakLoaderLibrary::execRegisterMountPoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RootPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPakLoaderLibrary::RegisterMountPoint(Z_Param_RootPath,Z_Param_ContentPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execUnmountPakFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PakFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPakLoaderLibrary::UnmountPakFile(Z_Param_PakFilename);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UPakLoaderLibrary::execMountPakFileEasy)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PakFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPakLoaderLibrary::MountPakFileEasy(Z_Param_PakFilename);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetMountedPakFilenames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UPakLoaderLibrary::GetMountedPakFilenames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetShortName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LongName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPakLoaderLibrary::GetShortName(Z_Param_LongName);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UPakLoaderLibrary::execSHA1SUM)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPakLoaderLibrary::SHA1SUM(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execProjectPersistentDownloadDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPakLoaderLibrary::ProjectPersistentDownloadDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execGetProjectName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPakLoaderLibrary::GetProjectName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakLoaderLibrary::execRuntimeLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPakLoaderLibrary::RuntimeLog(Z_Param_Text);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UPakLoaderLibrary::execIsPackagedBuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPakLoaderLibrary::IsPackagedBuild();
		P_NATIVE_END;
	}
	void UPakLoaderLibrary::StaticRegisterNativesUPakLoaderLibrary()
	{
		UClass* Class = UPakLoaderLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesPakDirectoryExist", &UPakLoaderLibrary::execDoesPakDirectoryExist },
			{ "EnableRuntimeLog", &UPakLoaderLibrary::execEnableRuntimeLog },
			{ "GetFilesInPak", &UPakLoaderLibrary::execGetFilesInPak },
			{ "GetFilesInPakDirectory", &UPakLoaderLibrary::execGetFilesInPakDirectory },
			{ "GetMountedPakFilenames", &UPakLoaderLibrary::execGetMountedPakFilenames },
			{ "GetPakFileAnimSequence", &UPakLoaderLibrary::execGetPakFileAnimSequence },
			{ "GetPakFileClass", &UPakLoaderLibrary::execGetPakFileClass },
			{ "GetPakFileMaterial", &UPakLoaderLibrary::execGetPakFileMaterial },
			{ "GetPakFileMaterialInstanceConstant", &UPakLoaderLibrary::execGetPakFileMaterialInstanceConstant },
			{ "GetPakFileObject", &UPakLoaderLibrary::execGetPakFileObject },
			{ "GetPakFileSkeletalMesh", &UPakLoaderLibrary::execGetPakFileSkeletalMesh },
			{ "GetPakFileSound", &UPakLoaderLibrary::execGetPakFileSound },
			{ "GetPakFileStaticMesh", &UPakLoaderLibrary::execGetPakFileStaticMesh },
			{ "GetPakFileText", &UPakLoaderLibrary::execGetPakFileText },
			{ "GetPakFileTexture2D", &UPakLoaderLibrary::execGetPakFileTexture2D },
			{ "GetProjectName", &UPakLoaderLibrary::execGetProjectName },
			{ "GetShortName", &UPakLoaderLibrary::execGetShortName },
			{ "IsPackagedBuild", &UPakLoaderLibrary::execIsPackagedBuild },
			{ "IsValidPakFile", &UPakLoaderLibrary::execIsValidPakFile },
			{ "LoadPakAssetRegistryFile", &UPakLoaderLibrary::execLoadPakAssetRegistryFile },
			{ "MountPakFile", &UPakLoaderLibrary::execMountPakFile },
			{ "MountPakFileEasy", &UPakLoaderLibrary::execMountPakFileEasy },
			{ "ProjectPersistentDownloadDir", &UPakLoaderLibrary::execProjectPersistentDownloadDir },
			{ "RegisterEncryptionKey", &UPakLoaderLibrary::execRegisterEncryptionKey },
			{ "RegisterMountPoint", &UPakLoaderLibrary::execRegisterMountPoint },
			{ "RuntimeLog", &UPakLoaderLibrary::execRuntimeLog },
			{ "SHA1SUM", &UPakLoaderLibrary::execSHA1SUM },
			{ "TryConvertFilenameToLongPackageName", &UPakLoaderLibrary::execTryConvertFilenameToLongPackageName },
			{ "UnmountPakFile", &UPakLoaderLibrary::execUnmountPakFile },
			{ "UnRegisterMountPoint", &UPakLoaderLibrary::execUnRegisterMountPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics
	{
		struct PakLoaderLibrary_eventDoesPakDirectoryExist_Parms
		{
			FString PakDirectory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PakDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PakDirectory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_PakDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_PakDirectory = { "PakDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventDoesPakDirectoryExist_Parms, PakDirectory), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_PakDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_PakDirectory_MetaData)) };
	void Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventDoesPakDirectoryExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventDoesPakDirectoryExist_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_PakDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Tests if a specific pak directory exists.\n\x09\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Tests if a specific pak directory exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "DoesPakDirectoryExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PakLoaderLibrary_eventDoesPakDirectoryExist_Parms), Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics
	{
		struct PakLoaderLibrary_eventEnableRuntimeLog_Parms
		{
			bool bEnable;
			FString NewLogPath;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLogPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewLogPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventEnableRuntimeLog_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventEnableRuntimeLog_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_NewLogPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_NewLogPath = { "NewLogPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventEnableRuntimeLog_Parms, NewLogPath), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_NewLogPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_NewLogPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::NewProp_NewLogPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Logs to a file and console, helpful for testing packaged builds to see whats going on.\n\x09\n\x09\x09@bEnable: treu to enable logging.\n\x09\x09@NewLogPath: File to output the text log.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Logs to a file and console, helpful for testing packaged builds to see whats going on.\n\n@bEnable: treu to enable logging.\n@NewLogPath: File to output the text log." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "EnableRuntimeLog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PakLoaderLibrary_eventEnableRuntimeLog_Parms), Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics
	{
		struct PakLoaderLibrary_eventGetFilesInPak_Parms
		{
			FString PakFilename;
			bool bUAssetOnly;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
		static void NewProp_bUAssetOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUAssetOnly;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetFilesInPak_Parms, PakFilename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_PakFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_PakFilename_MetaData)) };
	void Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_bUAssetOnly_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventGetFilesInPak_Parms*)Obj)->bUAssetOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_bUAssetOnly = { "bUAssetOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventGetFilesInPak_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_bUAssetOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetFilesInPak_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_PakFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_bUAssetOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Returns all files from inside a .pak file\n\n\x09\x09@PakFilename: .pak file on disk.\n\x09*/" },
		{ "CPP_Default_bUAssetOnly", "true" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Returns all files from inside a .pak file\n\n@PakFilename: .pak file on disk." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetFilesInPak", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PakLoaderLibrary_eventGetFilesInPak_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics
	{
		struct PakLoaderLibrary_eventGetFilesInPakDirectory_Parms
		{
			FString PakDirectory;
			bool bRecursively;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PakDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PakDirectory;
		static void NewProp_bRecursively_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursively;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_PakDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_PakDirectory = { "PakDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetFilesInPakDirectory_Parms, PakDirectory), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_PakDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_PakDirectory_MetaData)) };
	void Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_bRecursively_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventGetFilesInPakDirectory_Parms*)Obj)->bRecursively = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_bRecursively = { "bRecursively", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventGetFilesInPakDirectory_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_bRecursively_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetFilesInPakDirectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_PakDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_bRecursively,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Returns all files in a specific pak directory.\n\x09\x09\n\x09\x09@PakDirectory: Path in pak (Example: ../../../TestProject)\n\x09\x09@bRecursively: true to also return files in subfolders.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Returns all files in a specific pak directory.\n\n@PakDirectory: Path in pak (Example: ../../../TestProject)\n@bRecursively: true to also return files in subfolders." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetFilesInPakDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PakLoaderLibrary_eventGetFilesInPakDirectory_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics
	{
		struct PakLoaderLibrary_eventGetMountedPakFilenames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetMountedPakFilenames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Returns an array of all currently mounted pak files. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Returns an array of all currently mounted pak files." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetMountedPakFilenames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PakLoaderLibrary_eventGetMountedPakFilenames_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileAnimSequence_Parms
		{
			FString Filename;
			UAnimSequence* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileAnimSequence_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileAnimSequence_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Utility to load UAnimSequence asset from pak. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Utility to load UAnimSequence asset from pak." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileAnimSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PakLoaderLibrary_eventGetPakFileAnimSequence_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileClass_Parms
		{
			FString Filename;
			UClass* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileClass_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Loads any class (ie Blueprints) from a pak file. Returns UClass which you can cast to your desired class (ie AActor).\n\x09\n\x09\x09@Filename: The file to load as class. (Example: /TestDLC/Blueprints/BP_Test)\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Loads any class (ie Blueprints) from a pak file. Returns UClass which you can cast to your desired class (ie AActor).\n\n@Filename: The file to load as class. (Example: /TestDLC/Blueprints/BP_Test)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PakLoaderLibrary_eventGetPakFileClass_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileMaterial_Parms
		{
			FString Filename;
			UMaterial* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileMaterial_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Utility to load UMaterial asset from pak. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Utility to load UMaterial asset from pak." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PakLoaderLibrary_eventGetPakFileMaterial_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileMaterialInstanceConstant_Parms
		{
			FString Filename;
			UMaterialInstanceConstant* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileMaterialInstanceConstant_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileMaterialInstanceConstant_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Utility to load UMaterialInstanceConstant asset from pak. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Utility to load UMaterialInstanceConstant asset from pak." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileMaterialInstanceConstant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PakLoaderLibrary_eventGetPakFileMaterialInstanceConstant_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileObject_Parms
		{
			FString Filename;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileObject_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Loads any object (assets) from a pak file. Returns UObject which you can cast to your desired asset class type.\n\x09\n\x09\x09@Filename: The file to load as object. (Example: /TestDLC/Meshes/SM_Chair)\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Loads any object (assets) from a pak file. Returns UObject which you can cast to your desired asset class type.\n\n@Filename: The file to load as object. (Example: /TestDLC/Meshes/SM_Chair)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PakLoaderLibrary_eventGetPakFileObject_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileSkeletalMesh_Parms
		{
			FString Filename;
			USkeletalMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileSkeletalMesh_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Utility to load USkeletalMesh asset from pak. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Utility to load USkeletalMesh asset from pak." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PakLoaderLibrary_eventGetPakFileSkeletalMesh_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileSound_Parms
		{
			FString Filename;
			USoundBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileSound_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Utility to load USoundBase asset from pak. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Utility to load USoundBase asset from pak." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PakLoaderLibrary_eventGetPakFileSound_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileStaticMesh_Parms
		{
			FString Filename;
			UStaticMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileStaticMesh_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Utility to load UStaticMesh asset from pak. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Utility to load UStaticMesh asset from pak." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PakLoaderLibrary_eventGetPakFileStaticMesh_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileText_Parms
		{
			FString Filename;
			FString String;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileText_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileText_Parms, String), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventGetPakFileText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventGetPakFileText_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Reads content as string from pak. Requires full absolute path. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Reads content as string from pak. Requires full absolute path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PakLoaderLibrary_eventGetPakFileText_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics
	{
		struct PakLoaderLibrary_eventGetPakFileTexture2D_Parms
		{
			FString Filename;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileTexture2D_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetPakFileTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Utility to load UTexture2D asset from pak. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Utility to load UTexture2D asset from pak." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetPakFileTexture2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PakLoaderLibrary_eventGetPakFileTexture2D_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics
	{
		struct PakLoaderLibrary_eventGetProjectName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Returns name of this Unreal project. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Returns name of this Unreal project." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetProjectName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PakLoaderLibrary_eventGetProjectName_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics
	{
		struct PakLoaderLibrary_eventGetShortName_Parms
		{
			FString LongName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LongName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_LongName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_LongName = { "LongName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetShortName_Parms, LongName), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_LongName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_LongName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventGetShortName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_LongName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* \n\x09\x09Returns everything after the last slash.\n\x09\x09""Example: /Game/Textures/T_MyTexture = T_MyTexture\n\x09\n\x09\x09@LongName: Long package name to short package name.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Returns everything after the last slash.\nExample: /Game/Textures/T_MyTexture = T_MyTexture\n\n@LongName: Long package name to short package name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "GetShortName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PakLoaderLibrary_eventGetShortName_Parms), Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_GetShortName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_GetShortName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics
	{
		struct PakLoaderLibrary_eventIsPackagedBuild_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventIsPackagedBuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventIsPackagedBuild_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Returns true if this current build is a packaged (shipping) build. Returns false if it is an editor build. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Returns true if this current build is a packaged (shipping) build. Returns false if it is an editor build." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "IsPackagedBuild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PakLoaderLibrary_eventIsPackagedBuild_Parms), Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics
	{
		struct PakLoaderLibrary_eventIsValidPakFile_Parms
		{
			FString PakFilename;
			int64 PakSize;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_PakSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventIsValidPakFile_Parms, PakFilename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakFilename_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakSize = { "PakSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventIsValidPakFile_Parms, PakSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventIsValidPakFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventIsValidPakFile_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_PakSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Tests if a file on disk is a valid .pak file. Also returns size in bytes of the Pak content.\n\x09\n\x09\x09@PakFilename: .pak file on disk.\n\x09\x09@PakSize: If pak file is valid then this variable will hold the pak's size in bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Tests if a file on disk is a valid .pak file. Also returns size in bytes of the Pak content.\n\n@PakFilename: .pak file on disk.\n@PakSize: If pak file is valid then this variable will hold the pak's size in bytes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "IsValidPakFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PakLoaderLibrary_eventIsValidPakFile_Parms), Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics
	{
		struct PakLoaderLibrary_eventLoadPakAssetRegistryFile_Parms
		{
			FString AssetRegistryFile;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetRegistryFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::NewProp_AssetRegistryFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::NewProp_AssetRegistryFile = { "AssetRegistryFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventLoadPakAssetRegistryFile_Parms, AssetRegistryFile), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::NewProp_AssetRegistryFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::NewProp_AssetRegistryFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::NewProp_AssetRegistryFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Loads an AssetRegistry.bin file to publish new files to Unreal's asset registry.\n\x09\n\x09\x09@AssetRegistryFile: Full path to an AssetRegistry.bin file. Example: (../../../TestProject/Plugins/TestDLC/AssetRegistry.bin)\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Loads an AssetRegistry.bin file to publish new files to Unreal's asset registry.\n\n@AssetRegistryFile: Full path to an AssetRegistry.bin file. Example: (../../../TestProject/Plugins/TestDLC/AssetRegistry.bin)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "LoadPakAssetRegistryFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PakLoaderLibrary_eventLoadPakAssetRegistryFile_Parms), Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics
	{
		struct PakLoaderLibrary_eventMountPakFile_Parms
		{
			FString PakFilename;
			FString MountPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MountPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventMountPakFile_Parms, PakFilename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_PakFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_PakFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_MountPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_MountPath = { "MountPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventMountPakFile_Parms, MountPath), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_MountPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_MountPath_MetaData)) };
	void Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventMountPakFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventMountPakFile_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_PakFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_MountPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Mounts a pak file. !!!Read the plugins documentation to learn about mount points etc.!!!\n\n\x09\x09@PakFilename: .pak file on disk.\n\x09\x09@MountPath: Where to mount the Pak content. Leave empty if unsure (mount path as specified in the pak file will be used).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Mounts a pak file. !!!Read the plugins documentation to learn about mount points etc.!!!\n\n@PakFilename: .pak file on disk.\n@MountPath: Where to mount the Pak content. Leave empty if unsure (mount path as specified in the pak file will be used)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "MountPakFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PakLoaderLibrary_eventMountPakFile_Parms), Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics
	{
		struct PakLoaderLibrary_eventMountPakFileEasy_Parms
		{
			FString PakFilename;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventMountPakFileEasy_Parms, PakFilename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_PakFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_PakFilename_MetaData)) };
	void Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventMountPakFileEasy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventMountPakFileEasy_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_PakFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Mounts a pak file and automatically tries to register the mount path.\n\x09\x09If you use this function then you don't have to call RegisterMountPoint yourself.\n\x09\x09This function also automatically tries to load the asset registry file of the pak.\n\x09\x09This only requirement for this function is that the pak file contains an AssetRegistry.bin file\n\x09\x09in order to detect the root and content path automatically.\n\n\x09\x09@PakFilename: .pak file on disk.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Mounts a pak file and automatically tries to register the mount path.\nIf you use this function then you don't have to call RegisterMountPoint yourself.\nThis function also automatically tries to load the asset registry file of the pak.\nThis only requirement for this function is that the pak file contains an AssetRegistry.bin file\nin order to detect the root and content path automatically.\n\n@PakFilename: .pak file on disk." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "MountPakFileEasy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PakLoaderLibrary_eventMountPakFileEasy_Parms), Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics
	{
		struct PakLoaderLibrary_eventProjectPersistentDownloadDir_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventProjectPersistentDownloadDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/* Returns directory of Unreal's persistent download directory. */" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Returns directory of Unreal's persistent download directory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "ProjectPersistentDownloadDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PakLoaderLibrary_eventProjectPersistentDownloadDir_Parms), Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics
	{
		struct PakLoaderLibrary_eventRegisterEncryptionKey_Parms
		{
			FString Guid;
			FString AesKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AesKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AesKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_Guid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventRegisterEncryptionKey_Parms, Guid), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_AesKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_AesKey = { "AesKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventRegisterEncryptionKey_Parms, AesKey), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_AesKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_AesKey_MetaData)) };
	void Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventRegisterEncryptionKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventRegisterEncryptionKey_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_AesKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Registers an AES encryption key to the engine.\n\n\x09\x09@Guid: The encryption key guid. For example 00000000000000000000000000000000\n\x09\x09@AesKey: The AES key as base64. For example: zLQDKoikfG77t0B84QGt8CTpAyVjjj86dX3vo8mEmUE=\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Registers an AES encryption key to the engine.\n\n@Guid: The encryption key guid. For example 00000000000000000000000000000000\n@AesKey: The AES key as base64. For example: zLQDKoikfG77t0B84QGt8CTpAyVjjj86dX3vo8mEmUE=" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "RegisterEncryptionKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PakLoaderLibrary_eventRegisterEncryptionKey_Parms), Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics
	{
		struct PakLoaderLibrary_eventRegisterMountPoint_Parms
		{
			FString RootPath;
			FString ContentPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_RootPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_RootPath = { "RootPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventRegisterMountPoint_Parms, RootPath), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_RootPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_RootPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventRegisterMountPoint_Parms, ContentPath), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_ContentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_ContentPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_RootPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::NewProp_ContentPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09""Creates a link between a root path and a package content path (mount point).\n\x09\x09This is required to make references between assets work. Should be called after mounting a pak.\n\x09\x09See the parameters below for an example. After calling this function, the RootPath will point to the ContentPath.\n\x09\x09Without registering a mount point the engine doesn't know the root path of your mounted plugin.\n\x09\x09The ContentPath is the mount point of the pak file + the further part to your \"Content\" folder.\n\x09\x09See this image for another example: https://drive.google.com/file/d/1jKlOshFSnXQIXwKyENl1zwsskhl4Vke2/view?usp=sharing\n\x09\x09\n\x09\x09@RootPath: Top content folder name of where your assets are in (Example: /TestDLC/).\n\x09\x09@ContentPath: The path inside a pak to where the RootPath should point to. (Example: ../../../TestProject/Plugins/TestDLC/Content/)\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Creates a link between a root path and a package content path (mount point).\nThis is required to make references between assets work. Should be called after mounting a pak.\nSee the parameters below for an example. After calling this function, the RootPath will point to the ContentPath.\nWithout registering a mount point the engine doesn't know the root path of your mounted plugin.\nThe ContentPath is the mount point of the pak file + the further part to your \"Content\" folder.\nSee this image for another example: https://drive.google.com/file/d/1jKlOshFSnXQIXwKyENl1zwsskhl4Vke2/view?usp=sharing\n\n@RootPath: Top content folder name of where your assets are in (Example: /TestDLC/).\n@ContentPath: The path inside a pak to where the RootPath should point to. (Example: ../../../TestProject/Plugins/TestDLC/Content/)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "RegisterMountPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PakLoaderLibrary_eventRegisterMountPoint_Parms), Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics
	{
		struct PakLoaderLibrary_eventRuntimeLog_Parms
		{
			FString Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventRuntimeLog_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Logs to a file and console, helpful for testing packaged builds to see whats going on.\n\x09\x09Requires EnableRuntimeLog to be called first.\n\n\x09\x09@Text: Text to log.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Logs to a file and console, helpful for testing packaged builds to see whats going on.\nRequires EnableRuntimeLog to be called first.\n\n@Text: Text to log." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "RuntimeLog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PakLoaderLibrary_eventRuntimeLog_Parms), Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics
	{
		struct PakLoaderLibrary_eventSHA1SUM_Parms
		{
			FString Filename;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventSHA1SUM_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventSHA1SUM_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Returns SHA1 checksum of a file.\n\x09\n\x09\x09@Filename: File to generate checksum for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Returns SHA1 checksum of a file.\n\n@Filename: File to generate checksum for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "SHA1SUM", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PakLoaderLibrary_eventSHA1SUM_Parms), Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics
	{
		struct PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms
		{
			FString Filename;
			FString PackageName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09""Filename to packagename. Returns a path starting with a valid root like /Game/, /MyDLC/ etc.\n\x09\x09Requires that the path is registered within Unreal. (RegisterMountPoint)\n\x09\x09""Example: ../../TestProject/Content/Meshes/SM_MyMesh = /Game/Meshes/SM_MyMesh\n\x09\n\x09\x09@Filename: Absolute file or path.\n\x09\x09@PackageName: Will hold the converted path. Empty if Filename's path is not registered.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Filename to packagename. Returns a path starting with a valid root like /Game/, /MyDLC/ etc.\nRequires that the path is registered within Unreal. (RegisterMountPoint)\nExample: ../../TestProject/Content/Meshes/SM_MyMesh = /Game/Meshes/SM_MyMesh\n\n@Filename: Absolute file or path.\n@PackageName: Will hold the converted path. Empty if Filename's path is not registered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "TryConvertFilenameToLongPackageName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PakLoaderLibrary_eventTryConvertFilenameToLongPackageName_Parms), Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics
	{
		struct PakLoaderLibrary_eventUnmountPakFile_Parms
		{
			FString PakFilename;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PakFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_PakFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventUnmountPakFile_Parms, PakFilename), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_PakFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_PakFilename_MetaData)) };
	void Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakLoaderLibrary_eventUnmountPakFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakLoaderLibrary_eventUnmountPakFile_Parms), &Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_PakFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Unmounts a Pak that was previously mounted.\n\n\x09\x09@PakFilename: .pak file on disk to unmount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Unmounts a Pak that was previously mounted.\n\n@PakFilename: .pak file on disk to unmount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "UnmountPakFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PakLoaderLibrary_eventUnmountPakFile_Parms), Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics
	{
		struct PakLoaderLibrary_eventUnRegisterMountPoint_Parms
		{
			FString RootPath;
			FString ContentPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_RootPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_RootPath = { "RootPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventUnRegisterMountPoint_Parms, RootPath), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_RootPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_RootPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakLoaderLibrary_eventUnRegisterMountPoint_Parms, ContentPath), METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_ContentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_ContentPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_RootPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::NewProp_ContentPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PakLoader" },
		{ "Comment", "/*\n\x09\x09Unregister previously registered mount point. See RegisterMountPoint function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
		{ "ToolTip", "Unregister previously registered mount point. See RegisterMountPoint function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakLoaderLibrary, nullptr, "UnRegisterMountPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PakLoaderLibrary_eventUnRegisterMountPoint_Parms), Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPakLoaderLibrary);
	UClass* Z_Construct_UClass_UPakLoaderLibrary_NoRegister()
	{
		return UPakLoaderLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPakLoaderLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPakLoaderLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PakLoader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPakLoaderLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPakLoaderLibrary_DoesPakDirectoryExist, "DoesPakDirectoryExist" }, // 719164043
		{ &Z_Construct_UFunction_UPakLoaderLibrary_EnableRuntimeLog, "EnableRuntimeLog" }, // 1804347985
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPak, "GetFilesInPak" }, // 4012978384
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetFilesInPakDirectory, "GetFilesInPakDirectory" }, // 1608252046
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetMountedPakFilenames, "GetMountedPakFilenames" }, // 4000401044
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileAnimSequence, "GetPakFileAnimSequence" }, // 3521119915
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileClass, "GetPakFileClass" }, // 1675292540
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterial, "GetPakFileMaterial" }, // 3180714038
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileMaterialInstanceConstant, "GetPakFileMaterialInstanceConstant" }, // 2722742320
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileObject, "GetPakFileObject" }, // 1022109133
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSkeletalMesh, "GetPakFileSkeletalMesh" }, // 2367192548
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileSound, "GetPakFileSound" }, // 1161487822
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileStaticMesh, "GetPakFileStaticMesh" }, // 1691764248
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileText, "GetPakFileText" }, // 3260621662
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetPakFileTexture2D, "GetPakFileTexture2D" }, // 3458588393
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetProjectName, "GetProjectName" }, // 2340312749
		{ &Z_Construct_UFunction_UPakLoaderLibrary_GetShortName, "GetShortName" }, // 1972078189
		{ &Z_Construct_UFunction_UPakLoaderLibrary_IsPackagedBuild, "IsPackagedBuild" }, // 467042115
		{ &Z_Construct_UFunction_UPakLoaderLibrary_IsValidPakFile, "IsValidPakFile" }, // 1048874928
		{ &Z_Construct_UFunction_UPakLoaderLibrary_LoadPakAssetRegistryFile, "LoadPakAssetRegistryFile" }, // 1018474508
		{ &Z_Construct_UFunction_UPakLoaderLibrary_MountPakFile, "MountPakFile" }, // 726827955
		{ &Z_Construct_UFunction_UPakLoaderLibrary_MountPakFileEasy, "MountPakFileEasy" }, // 2764068443
		{ &Z_Construct_UFunction_UPakLoaderLibrary_ProjectPersistentDownloadDir, "ProjectPersistentDownloadDir" }, // 953829204
		{ &Z_Construct_UFunction_UPakLoaderLibrary_RegisterEncryptionKey, "RegisterEncryptionKey" }, // 849511017
		{ &Z_Construct_UFunction_UPakLoaderLibrary_RegisterMountPoint, "RegisterMountPoint" }, // 852037087
		{ &Z_Construct_UFunction_UPakLoaderLibrary_RuntimeLog, "RuntimeLog" }, // 318967046
		{ &Z_Construct_UFunction_UPakLoaderLibrary_SHA1SUM, "SHA1SUM" }, // 752491924
		{ &Z_Construct_UFunction_UPakLoaderLibrary_TryConvertFilenameToLongPackageName, "TryConvertFilenameToLongPackageName" }, // 1070175688
		{ &Z_Construct_UFunction_UPakLoaderLibrary_UnmountPakFile, "UnmountPakFile" }, // 1580042588
		{ &Z_Construct_UFunction_UPakLoaderLibrary_UnRegisterMountPoint, "UnRegisterMountPoint" }, // 3785134067
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakLoaderLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PakLoaderLibrary.h" },
		{ "ModuleRelativePath", "Public/PakLoaderLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPakLoaderLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPakLoaderLibrary>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UPakLoaderLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPakLoaderLibrary()
	{
		if (!Z_Registration_Info_UClass_UPakLoaderLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPakLoaderLibrary.OuterSingleton, Z_Construct_UClass_UPakLoaderLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPakLoaderLibrary.OuterSingleton;
	}
	template<> PAKLOADER_API UClass* StaticClass<UPakLoaderLibrary>()
	{
		return UPakLoaderLibrary::StaticClass();
	}
	UPakLoaderLibrary::UPakLoaderLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPakLoaderLibrary);
	UPakLoaderLibrary::~UPakLoaderLibrary() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPakLoaderLibrary, UPakLoaderLibrary::StaticClass, TEXT("UPakLoaderLibrary"), &Z_Registration_Info_UClass_UPakLoaderLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPakLoaderLibrary), 2302374688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_2783018522(TEXT("/Script/PakLoader"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
