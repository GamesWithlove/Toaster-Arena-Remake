// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FLowEntryRegexCaptureGroup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFLowEntryRegexCaptureGroup() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLowEntryRegexCaptureGroup ****************************************
struct Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLowEntryRegexCaptureGroup); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLowEntryRegexCaptureGroup); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureGroupNumber_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the number of the capture group, starting with 1.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
		{ "ToolTip", "This is the number of the capture group, starting with 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginIndex_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the start index of the capture group match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
		{ "ToolTip", "This is the start index of the capture group match." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndIndex_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the end index of the capture group match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
		{ "ToolTip", "This is the end index of the capture group match." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the text of the capture group match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
		{ "ToolTip", "This is the text of the capture group match." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLowEntryRegexCaptureGroup constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureGroupNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BeginIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Match;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLowEntryRegexCaptureGroup constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowEntryRegexCaptureGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLowEntryRegexCaptureGroup;
class UScriptStruct* FLowEntryRegexCaptureGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLowEntryRegexCaptureGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLowEntryRegexCaptureGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("LowEntryRegexCaptureGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FLowEntryRegexCaptureGroup.OuterSingleton;
	}

// ********** Begin ScriptStruct FLowEntryRegexCaptureGroup Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_CaptureGroupNumber = { "CaptureGroupNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowEntryRegexCaptureGroup, CaptureGroupNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureGroupNumber_MetaData), NewProp_CaptureGroupNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowEntryRegexCaptureGroup, BeginIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginIndex_MetaData), NewProp_BeginIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowEntryRegexCaptureGroup, EndIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndIndex_MetaData), NewProp_EndIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowEntryRegexCaptureGroup, Match), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Match_MetaData), NewProp_Match_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_CaptureGroupNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_BeginIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_EndIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_Match,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLowEntryRegexCaptureGroup Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	nullptr,
	&NewStructOps,
	"LowEntryRegexCaptureGroup",
	Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::PropPointers),
	sizeof(FLowEntryRegexCaptureGroup),
	alignof(FLowEntryRegexCaptureGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FLowEntryRegexCaptureGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLowEntryRegexCaptureGroup.InnerSingleton, Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLowEntryRegexCaptureGroup.InnerSingleton);
}
// ********** End ScriptStruct FLowEntryRegexCaptureGroup ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexCaptureGroup_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLowEntryRegexCaptureGroup::StaticStruct, Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewStructOps, TEXT("LowEntryRegexCaptureGroup"),&Z_Registration_Info_UScriptStruct_FLowEntryRegexCaptureGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLowEntryRegexCaptureGroup), 4184603613U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexCaptureGroup_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexCaptureGroup_h__Script_LowEntryExtendedStandardLibrary_2779573008{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexCaptureGroup_h__Script_LowEntryExtendedStandardLibrary_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexCaptureGroup_h__Script_LowEntryExtendedStandardLibrary_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
