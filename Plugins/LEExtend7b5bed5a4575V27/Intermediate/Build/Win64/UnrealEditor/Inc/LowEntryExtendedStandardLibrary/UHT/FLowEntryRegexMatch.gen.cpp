// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FLowEntryRegexMatch.h"
#include "FLowEntryRegexCaptureGroup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFLowEntryRegexMatch() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexMatch();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLowEntryRegexMatch ***********************************************
struct Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLowEntryRegexMatch); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLowEntryRegexMatch); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchNumber_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This is the number of the match, starting with 1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the number of the match, starting with 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginIndex_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This is the start index of the match.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the start index of the match." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndIndex_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This is the end index of the match.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the end index of the match." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This is the text of the match.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the text of the match." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureGroups_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* These are the capture group matches of the match.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are the capture group matches of the match." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLowEntryRegexMatch constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BeginIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Match;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CaptureGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLowEntryRegexMatch constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowEntryRegexMatch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLowEntryRegexMatch;
class UScriptStruct* FLowEntryRegexMatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLowEntryRegexMatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLowEntryRegexMatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowEntryRegexMatch, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("LowEntryRegexMatch"));
	}
	return Z_Registration_Info_UScriptStruct_FLowEntryRegexMatch.OuterSingleton;
	}

// ********** Begin ScriptStruct FLowEntryRegexMatch Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_MatchNumber = { "MatchNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowEntryRegexMatch, MatchNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchNumber_MetaData), NewProp_MatchNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowEntryRegexMatch, BeginIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginIndex_MetaData), NewProp_BeginIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowEntryRegexMatch, EndIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndIndex_MetaData), NewProp_EndIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowEntryRegexMatch, Match), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Match_MetaData), NewProp_Match_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups_Inner = { "CaptureGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup, METADATA_PARAMS(0, nullptr) }; // 4136704639
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups = { "CaptureGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowEntryRegexMatch, CaptureGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureGroups_MetaData), NewProp_CaptureGroups_MetaData) }; // 4136704639
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_MatchNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_BeginIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_EndIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_Match,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLowEntryRegexMatch Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	nullptr,
	&NewStructOps,
	"LowEntryRegexMatch",
	Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::PropPointers),
	sizeof(FLowEntryRegexMatch),
	alignof(FLowEntryRegexMatch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexMatch()
{
	if (!Z_Registration_Info_UScriptStruct_FLowEntryRegexMatch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLowEntryRegexMatch.InnerSingleton, Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLowEntryRegexMatch.InnerSingleton);
}
// ********** End ScriptStruct FLowEntryRegexMatch *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexMatch_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLowEntryRegexMatch::StaticStruct, Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewStructOps, TEXT("LowEntryRegexMatch"),&Z_Registration_Info_UScriptStruct_FLowEntryRegexMatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLowEntryRegexMatch), 1468473367U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexMatch_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexMatch_h__Script_LowEntryExtendedStandardLibrary_2738490613{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexMatch_h__Script_LowEntryExtendedStandardLibrary_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_FLowEntryRegexMatch_h__Script_LowEntryExtendedStandardLibrary_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
