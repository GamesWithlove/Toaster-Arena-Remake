// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGProjectionParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGProjectionParams() {}
// Cross Module References
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataFilterMode();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataOp();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGProjectionParams();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGProjectionParams;
class UScriptStruct* FPCGProjectionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGProjectionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGProjectionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGProjectionParams, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGProjectionParams"));
	}
	return Z_Registration_Info_UScriptStruct_PCGProjectionParams.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGProjectionParams>()
{
	return FPCGProjectionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGProjectionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectPositions_MetaData[];
#endif
		static void NewProp_bProjectPositions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectPositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectRotations_MetaData[];
#endif
		static void NewProp_bProjectRotations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectRotations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectScales_MetaData[];
#endif
		static void NewProp_bProjectScales_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectScales;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectColors_MetaData[];
#endif
		static void NewProp_bProjectColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeList_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeList;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeMergeOperation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMergeOperation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeMergeOperation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters that control projection behaviour. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGProjectionParams.h" },
		{ "ToolTip", "Parameters that control projection behaviour." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGProjectionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectPositions_MetaData[] = {
		{ "Category", "Apply Data" },
		{ "Comment", "/** Project positions. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGProjectionParams.h" },
		{ "ToolTip", "Project positions." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectPositions_SetBit(void* Obj)
	{
		((FPCGProjectionParams*)Obj)->bProjectPositions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectPositions = { "bProjectPositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGProjectionParams), &Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectPositions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectPositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectRotations_MetaData[] = {
		{ "Category", "Apply Data" },
		{ "Comment", "/** Project rotations. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGProjectionParams.h" },
		{ "ToolTip", "Project rotations." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectRotations_SetBit(void* Obj)
	{
		((FPCGProjectionParams*)Obj)->bProjectRotations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectRotations = { "bProjectRotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGProjectionParams), &Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectRotations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectRotations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectScales_MetaData[] = {
		{ "Category", "Apply Data" },
		{ "Comment", "/** Project scales. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGProjectionParams.h" },
		{ "ToolTip", "Project scales." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectScales_SetBit(void* Obj)
	{
		((FPCGProjectionParams*)Obj)->bProjectScales = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectScales = { "bProjectScales", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGProjectionParams), &Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectScales_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectScales_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectScales_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectColors_MetaData[] = {
		{ "Category", "Apply Data" },
		{ "Comment", "/** Project colors. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGProjectionParams.h" },
		{ "ToolTip", "Project colors." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectColors_SetBit(void* Obj)
	{
		((FPCGProjectionParams*)Obj)->bProjectColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectColors = { "bProjectColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGProjectionParams), &Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeList_MetaData[] = {
		{ "Category", "Apply Data" },
		{ "Comment", "/** Attributes to either explicitly exclude or include in the projection operation, depending on the Attribute Mode setting. Leave empty to gather all attributes and their values. Format is comma separated list like: Attribute1,Attribute2 .*/" },
		{ "ModuleRelativePath", "Public/Elements/PCGProjectionParams.h" },
		{ "ToolTip", "Attributes to either explicitly exclude or include in the projection operation, depending on the Attribute Mode setting. Leave empty to gather all attributes and their values. Format is comma separated list like: Attribute1,Attribute2 ." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeList = { "AttributeList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGProjectionParams, AttributeList), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeList_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMode_MetaData[] = {
		{ "Category", "Apply Data" },
		{ "Comment", "/** How the attribute list is used. Exclude Attributes will ignore these attributes and their values on the projection target. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGProjectionParams.h" },
		{ "ToolTip", "How the attribute list is used. Exclude Attributes will ignore these attributes and their values on the projection target." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMode = { "AttributeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGProjectionParams, AttributeMode), Z_Construct_UEnum_PCG_EPCGMetadataFilterMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMode_MetaData)) }; // 3006613261
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMergeOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMergeOperation_MetaData[] = {
		{ "Category", "Apply Data" },
		{ "Comment", "/** Operation to use to combine attributes that reside on both source and target data. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGProjectionParams.h" },
		{ "ToolTip", "Operation to use to combine attributes that reside on both source and target data." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMergeOperation = { "AttributeMergeOperation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGProjectionParams, AttributeMergeOperation), Z_Construct_UEnum_PCG_EPCGMetadataOp, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMergeOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMergeOperation_MetaData)) }; // 1394887189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectRotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectScales,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_bProjectColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMergeOperation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewProp_AttributeMergeOperation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGProjectionParams",
		sizeof(FPCGProjectionParams),
		alignof(FPCGProjectionParams),
		Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGProjectionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGProjectionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGProjectionParams.InnerSingleton, Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGProjectionParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionParams_h_Statics::ScriptStructInfo[] = {
		{ FPCGProjectionParams::StaticStruct, Z_Construct_UScriptStruct_FPCGProjectionParams_Statics::NewStructOps, TEXT("PCGProjectionParams"), &Z_Registration_Info_UScriptStruct_PCGProjectionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGProjectionParams), 304869056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionParams_h_2287346349(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
