// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Metadata/PCGMetadataCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataCommon() {}
// Cross Module References
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataFilterMode();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataOp();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataOp;
	static UEnum* EPCGMetadataOp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataOp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataOp, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataOp"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataOp.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataOp>()
	{
		return EPCGMetadataOp_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataOp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataOp_Statics::Enumerators[] = {
		{ "EPCGMetadataOp::Min", (int64)EPCGMetadataOp::Min },
		{ "EPCGMetadataOp::Max", (int64)EPCGMetadataOp::Max },
		{ "EPCGMetadataOp::Sub", (int64)EPCGMetadataOp::Sub },
		{ "EPCGMetadataOp::Add", (int64)EPCGMetadataOp::Add },
		{ "EPCGMetadataOp::Mul", (int64)EPCGMetadataOp::Mul },
		{ "EPCGMetadataOp::Div", (int64)EPCGMetadataOp::Div },
		{ "EPCGMetadataOp::SourceValue", (int64)EPCGMetadataOp::SourceValue },
		{ "EPCGMetadataOp::TargetValue", (int64)EPCGMetadataOp::TargetValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataOp_Statics::Enum_MetaDataParams[] = {
		{ "Add.Comment", "/** Add the values. */" },
		{ "Add.Name", "EPCGMetadataOp::Add" },
		{ "Add.ToolTip", "Add the values." },
		{ "Div.Comment", "/** Divide the values. */" },
		{ "Div.Name", "EPCGMetadataOp::Div" },
		{ "Div.ToolTip", "Divide the values." },
		{ "Max.Comment", "/** Take the maximum value. */" },
		{ "Max.Name", "EPCGMetadataOp::Max" },
		{ "Max.ToolTip", "Take the maximum value." },
		{ "Min.Comment", "/** Take the minimum value. */" },
		{ "Min.Name", "EPCGMetadataOp::Min" },
		{ "Min.ToolTip", "Take the minimum value." },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataCommon.h" },
		{ "Mul.Comment", "/** Multiply the values. */" },
		{ "Mul.Name", "EPCGMetadataOp::Mul" },
		{ "Mul.ToolTip", "Multiply the values." },
		{ "SourceValue.Comment", "/** Pick the source (first) value. */" },
		{ "SourceValue.Name", "EPCGMetadataOp::SourceValue" },
		{ "SourceValue.ToolTip", "Pick the source (first) value." },
		{ "Sub.Comment", "/** Subtract the values. */" },
		{ "Sub.Name", "EPCGMetadataOp::Sub" },
		{ "Sub.ToolTip", "Subtract the values." },
		{ "TargetValue.Comment", "/** Pick the target (second) value. */" },
		{ "TargetValue.Name", "EPCGMetadataOp::TargetValue" },
		{ "TargetValue.ToolTip", "Pick the target (second) value." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataOp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataOp",
		"EPCGMetadataOp",
		Z_Construct_UEnum_PCG_EPCGMetadataOp_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataOp_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMetadataOp_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataOp_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataOp()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataOp.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataOp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataOp.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataFilterMode;
	static UEnum* EPCGMetadataFilterMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataFilterMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataFilterMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataFilterMode"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataFilterMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataFilterMode>()
	{
		return EPCGMetadataFilterMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataFilterMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataFilterMode_Statics::Enumerators[] = {
		{ "EPCGMetadataFilterMode::ExcludeAttributes", (int64)EPCGMetadataFilterMode::ExcludeAttributes },
		{ "EPCGMetadataFilterMode::IncludeAttributes", (int64)EPCGMetadataFilterMode::IncludeAttributes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataFilterMode_Statics::Enum_MetaDataParams[] = {
		{ "ExcludeAttributes.Comment", "/** The listed attributes will be unchanged by the projection and will not be added from the target data. */" },
		{ "ExcludeAttributes.Name", "EPCGMetadataFilterMode::ExcludeAttributes" },
		{ "ExcludeAttributes.ToolTip", "The listed attributes will be unchanged by the projection and will not be added from the target data." },
		{ "IncludeAttributes.Comment", "/** Only the listed attributes will be changed by the projection or added from the target data. */" },
		{ "IncludeAttributes.Name", "EPCGMetadataFilterMode::IncludeAttributes" },
		{ "IncludeAttributes.ToolTip", "Only the listed attributes will be changed by the projection or added from the target data." },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataFilterMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataFilterMode",
		"EPCGMetadataFilterMode",
		Z_Construct_UEnum_PCG_EPCGMetadataFilterMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataFilterMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMetadataFilterMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataFilterMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataFilterMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataFilterMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataFilterMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataFilterMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataFilterMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataCommon_h_Statics::EnumInfo[] = {
		{ EPCGMetadataOp_StaticEnum, TEXT("EPCGMetadataOp"), &Z_Registration_Info_UEnum_EPCGMetadataOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1394887189U) },
		{ EPCGMetadataFilterMode_StaticEnum, TEXT("EPCGMetadataFilterMode"), &Z_Registration_Info_UEnum_EPCGMetadataFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3006613261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataCommon_h_2716737877(TEXT("/Script/PCG"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
