// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGCrc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCrc() {}
// Cross Module References
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGCrc();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGCrc;
class UScriptStruct* FPCGCrc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGCrc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGCrc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGCrc, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGCrc"));
	}
	return Z_Registration_Info_UScriptStruct_PCGCrc.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGCrc>()
{
	return FPCGCrc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGCrc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGCrc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Crc with valid flag and helper functionality. */" },
		{ "ModuleRelativePath", "Public/PCGCrc.h" },
		{ "ToolTip", "Crc with valid flag and helper functionality." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGCrc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGCrc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Crc" },
		{ "Comment", "/** Crc32 value. */" },
		{ "ModuleRelativePath", "Public/PCGCrc.h" },
		{ "ToolTip", "Crc32 value." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGCrc, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_bValid_MetaData[] = {
		{ "Category", "Crc" },
		{ "ModuleRelativePath", "Public/PCGCrc.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FPCGCrc*)Obj)->bValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGCrc), &Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_bValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_bValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGCrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGCrc_Statics::NewProp_bValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGCrc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGCrc",
		sizeof(FPCGCrc),
		alignof(FPCGCrc),
		Z_Construct_UScriptStruct_FPCGCrc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGCrc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGCrc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGCrc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGCrc()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGCrc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGCrc.InnerSingleton, Z_Construct_UScriptStruct_FPCGCrc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGCrc.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCrc_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCrc_h_Statics::ScriptStructInfo[] = {
		{ FPCGCrc::StaticStruct, Z_Construct_UScriptStruct_FPCGCrc_Statics::NewStructOps, TEXT("PCGCrc"), &Z_Registration_Info_UScriptStruct_PCGCrc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGCrc), 3994413531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCrc_h_2204801255(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCrc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCrc_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
