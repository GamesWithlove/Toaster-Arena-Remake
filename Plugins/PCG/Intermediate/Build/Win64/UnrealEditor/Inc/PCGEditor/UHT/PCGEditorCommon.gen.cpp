// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGEditorCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditorCommon() {}
// Cross Module References
	PCGEDITOR_API UEnum* Z_Construct_UEnum_PCGEditor_EPCGElementType();
	PCGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGElementType;
	static UEnum* EPCGElementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGElementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGEditor_EPCGElementType, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("EPCGElementType"));
		}
		return Z_Registration_Info_UEnum_EPCGElementType.OuterSingleton;
	}
	template<> PCGEDITOR_API UEnum* StaticEnum<EPCGElementType>()
	{
		return EPCGElementType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCGEditor_EPCGElementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCGEditor_EPCGElementType_Statics::Enumerators[] = {
		{ "EPCGElementType::Native", (int64)EPCGElementType::Native },
		{ "EPCGElementType::Blueprint", (int64)EPCGElementType::Blueprint },
		{ "EPCGElementType::Subgraph", (int64)EPCGElementType::Subgraph },
		{ "EPCGElementType::Settings", (int64)EPCGElementType::Settings },
		{ "EPCGElementType::Other", (int64)EPCGElementType::Other },
		{ "EPCGElementType::All", (int64)EPCGElementType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCGEditor_EPCGElementType_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EPCGElementType::All" },
		{ "Blueprint.Name", "EPCGElementType::Blueprint" },
		{ "ModuleRelativePath", "Private/PCGEditorCommon.h" },
		{ "Native.Name", "EPCGElementType::Native" },
		{ "Other.Name", "EPCGElementType::Other" },
		{ "Settings.Name", "EPCGElementType::Settings" },
		{ "Subgraph.Name", "EPCGElementType::Subgraph" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGEditor_EPCGElementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCGEditor,
		nullptr,
		"EPCGElementType",
		"EPCGElementType",
		Z_Construct_UEnum_PCGEditor_EPCGElementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCGEditor_EPCGElementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCGEditor_EPCGElementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCGEditor_EPCGElementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCGEditor_EPCGElementType()
	{
		if (!Z_Registration_Info_UEnum_EPCGElementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGElementType.InnerSingleton, Z_Construct_UEnum_PCGEditor_EPCGElementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGElementType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGEditorCommonDummyStruct;
class UScriptStruct* FPCGEditorCommonDummyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGEditorCommonDummyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGEditorCommonDummyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("PCGEditorCommonDummyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PCGEditorCommonDummyStruct.OuterSingleton;
}
template<> PCGEDITOR_API UScriptStruct* StaticStruct<FPCGEditorCommonDummyStruct>()
{
	return FPCGEditorCommonDummyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to make sure UHT generates properly */" },
		{ "ModuleRelativePath", "Private/PCGEditorCommon.h" },
		{ "ToolTip", "Used to make sure UHT generates properly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGEditorCommonDummyStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
		nullptr,
		&NewStructOps,
		"PCGEditorCommonDummyStruct",
		sizeof(FPCGEditorCommonDummyStruct),
		alignof(FPCGEditorCommonDummyStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGEditorCommonDummyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGEditorCommonDummyStruct.InnerSingleton, Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGEditorCommonDummyStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h_Statics::EnumInfo[] = {
		{ EPCGElementType_StaticEnum, TEXT("EPCGElementType"), &Z_Registration_Info_UEnum_EPCGElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1838763857U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h_Statics::ScriptStructInfo[] = {
		{ FPCGEditorCommonDummyStruct::StaticStruct, Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct_Statics::NewStructOps, TEXT("PCGEditorCommonDummyStruct"), &Z_Registration_Info_UScriptStruct_PCGEditorCommonDummyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGEditorCommonDummyStruct), 1160418763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h_632728527(TEXT("/Script/PCGEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
