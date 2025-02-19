// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDataTableRowToParamDataTestStruct() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGDataTableRowToParamDataTestStruct;
class UScriptStruct* FPCGDataTableRowToParamDataTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGDataTableRowToParamDataTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGDataTableRowToParamDataTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGDataTableRowToParamDataTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PCGDataTableRowToParamDataTestStruct.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGDataTableRowToParamDataTestStruct>()
{
	return FPCGDataTableRowToParamDataTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_I32_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_I32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_I64_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_I64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F32_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_F32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F64_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_F64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_V2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_V2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_V3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_V3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_V4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_V4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGDataTableRowToParamDataTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I32 = { "I32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, I32), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I64 = { "I64", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, I64), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F32 = { "F32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, F32), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F64 = { "F64", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, F64), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V2_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V2 = { "V2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, V2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V3_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V3 = { "V3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, V3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V4_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V4 = { "V4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, V4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_SoftPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGDataTableRowToParamDataTestStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_SoftPath = { "SoftPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataTableRowToParamDataTestStruct, SoftPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_SoftPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_SoftPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_I64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_F64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_V4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewProp_SoftPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGDataTableRowToParamDataTestStruct",
		sizeof(FPCGDataTableRowToParamDataTestStruct),
		alignof(FPCGDataTableRowToParamDataTestStruct),
		Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGDataTableRowToParamDataTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGDataTableRowToParamDataTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGDataTableRowToParamDataTestStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGDataTableRowToParamDataTestStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGDataTableRowToParamDataTestStruct_h_Statics::ScriptStructInfo[] = {
		{ FPCGDataTableRowToParamDataTestStruct::StaticStruct, Z_Construct_UScriptStruct_FPCGDataTableRowToParamDataTestStruct_Statics::NewStructOps, TEXT("PCGDataTableRowToParamDataTestStruct"), &Z_Registration_Info_UScriptStruct_PCGDataTableRowToParamDataTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGDataTableRowToParamDataTestStruct), 157295318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGDataTableRowToParamDataTestStruct_h_1197681563(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGDataTableRowToParamDataTestStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGDataTableRowToParamDataTestStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
