// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Tests/Determinism/PCGDeterminismTestsCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDeterminismTestsCommon() {}
// Cross Module References
	PCG_API UEnum* Z_Construct_UEnum_PCG_EDeterminismLevel();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDataType();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FDeterminismTestResult();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeterminismLevel;
	static UEnum* EDeterminismLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDeterminismLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDeterminismLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EDeterminismLevel, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EDeterminismLevel"));
		}
		return Z_Registration_Info_UEnum_EDeterminismLevel.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EDeterminismLevel>()
	{
		return EDeterminismLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EDeterminismLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EDeterminismLevel_Statics::Enumerators[] = {
		{ "EDeterminismLevel::None", (int64)EDeterminismLevel::None },
		{ "EDeterminismLevel::NoDeterminism", (int64)EDeterminismLevel::NoDeterminism },
		{ "EDeterminismLevel::Basic", (int64)EDeterminismLevel::Basic },
		{ "EDeterminismLevel::OrderOrthogonal", (int64)EDeterminismLevel::OrderOrthogonal },
		{ "EDeterminismLevel::OrderConsistent", (int64)EDeterminismLevel::OrderConsistent },
		{ "EDeterminismLevel::OrderIndependent", (int64)EDeterminismLevel::OrderIndependent },
		{ "EDeterminismLevel::Deterministic", (int64)EDeterminismLevel::Deterministic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EDeterminismLevel_Statics::Enum_MetaDataParams[] = {
		{ "Basic.Name", "EDeterminismLevel::Basic" },
		{ "Comment", "// This will include multiple values of different meanings, but we use an enum to facilitate data passing\n" },
		{ "Deterministic.Name", "EDeterminismLevel::Deterministic" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestsCommon.h" },
		{ "NoDeterminism.Name", "EDeterminismLevel::NoDeterminism" },
		{ "None.Name", "EDeterminismLevel::None" },
		{ "OrderConsistent.Name", "EDeterminismLevel::OrderConsistent" },
		{ "OrderIndependent.Name", "EDeterminismLevel::OrderIndependent" },
		{ "OrderOrthogonal.Name", "EDeterminismLevel::OrderOrthogonal" },
		{ "ToolTip", "This will include multiple values of different meanings, but we use an enum to facilitate data passing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EDeterminismLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EDeterminismLevel",
		"EDeterminismLevel",
		Z_Construct_UEnum_PCG_EDeterminismLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EDeterminismLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EDeterminismLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EDeterminismLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EDeterminismLevel()
	{
		if (!Z_Registration_Info_UEnum_EDeterminismLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeterminismLevel.InnerSingleton, Z_Construct_UEnum_PCG_EDeterminismLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDeterminismLevel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeterminismTestResult;
class UScriptStruct* FDeterminismTestResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeterminismTestResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeterminismTestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeterminismTestResult, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("DeterminismTestResult"));
	}
	return Z_Registration_Info_UScriptStruct_DeterminismTestResult.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FDeterminismTestResult>()
{
	return FDeterminismTestResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeterminismTestResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestResultTitle_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TestResultTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestResultName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestResultName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataTypesTested_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTypesTested_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataTypesTested;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestResults_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TestResults_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TestResults_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestResults_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TestResults;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalDetails_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalDetails_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlagRaised_MetaData[];
#endif
		static void NewProp_bFlagRaised_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagRaised;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestsCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeterminismTestResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultTitle_MetaData[] = {
		{ "Category", "Determinism" },
		{ "Comment", "/** The node's title */" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestsCommon.h" },
		{ "ToolTip", "The node's title" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultTitle = { "TestResultTitle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeterminismTestResult, TestResultTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultName_MetaData[] = {
		{ "Category", "Determinism" },
		{ "Comment", "/** The node's name */" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestsCommon.h" },
		{ "ToolTip", "The node's name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultName = { "TestResultName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeterminismTestResult, TestResultName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Determinism" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestsCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeterminismTestResult, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_Seed_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_DataTypesTested_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_DataTypesTested_MetaData[] = {
		{ "Category", "Determinism" },
		{ "Comment", "/** BitFlags for which data types were tested */" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestsCommon.h" },
		{ "ToolTip", "BitFlags for which data types were tested" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_DataTypesTested = { "DataTypesTested", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeterminismTestResult, DataTypesTested), Z_Construct_UEnum_PCG_EPCGDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_DataTypesTested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_DataTypesTested_MetaData)) }; // 1627789319
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults_ValueProp = { "TestResults", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_PCG_EDeterminismLevel, METADATA_PARAMS(nullptr, 0) }; // 1171908060
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults_Key_KeyProp = { "TestResults_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults_MetaData[] = {
		{ "Category", "Determinism" },
		{ "Comment", "/** A mapping of [test names : test results] */" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestsCommon.h" },
		{ "ToolTip", "A mapping of [test names : test results]" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults = { "TestResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeterminismTestResult, TestResults), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults_MetaData)) }; // 1171908060
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_AdditionalDetails_Inner = { "AdditionalDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_AdditionalDetails_MetaData[] = {
		{ "Category", "Determinism" },
		{ "Comment", "/** A mapping of [test name : additional details] */" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestsCommon.h" },
		{ "ToolTip", "A mapping of [test name : additional details]" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_AdditionalDetails = { "AdditionalDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeterminismTestResult, AdditionalDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_AdditionalDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_AdditionalDetails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_bFlagRaised_MetaData[] = {
		{ "Category", "Determinism" },
		{ "Comment", "/** T/F whether a flag has been raised on this node's tests (for UI) */" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismTestsCommon.h" },
		{ "ToolTip", "T/F whether a flag has been raised on this node's tests (for UI)" },
	};
#endif
	void Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_bFlagRaised_SetBit(void* Obj)
	{
		((FDeterminismTestResult*)Obj)->bFlagRaised = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_bFlagRaised = { "bFlagRaised", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDeterminismTestResult), &Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_bFlagRaised_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_bFlagRaised_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_bFlagRaised_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResultName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_DataTypesTested_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_DataTypesTested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_TestResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_AdditionalDetails_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_AdditionalDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_bFlagRaised,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"DeterminismTestResult",
		sizeof(FDeterminismTestResult),
		alignof(FDeterminismTestResult),
		Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeterminismTestResult()
	{
		if (!Z_Registration_Info_UScriptStruct_DeterminismTestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeterminismTestResult.InnerSingleton, Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeterminismTestResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h_Statics::EnumInfo[] = {
		{ EDeterminismLevel_StaticEnum, TEXT("EDeterminismLevel"), &Z_Registration_Info_UEnum_EDeterminismLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1171908060U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h_Statics::ScriptStructInfo[] = {
		{ FDeterminismTestResult::StaticStruct, Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewStructOps, TEXT("DeterminismTestResult"), &Z_Registration_Info_UScriptStruct_DeterminismTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeterminismTestResult), 4278178366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h_2236398203(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
