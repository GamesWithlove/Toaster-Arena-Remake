// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGContext() {}
// Cross Module References
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGExecutionPhase();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGContext();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExecutionPhase;
	static UEnum* EPCGExecutionPhase_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGExecutionPhase.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGExecutionPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGExecutionPhase, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGExecutionPhase"));
		}
		return Z_Registration_Info_UEnum_EPCGExecutionPhase.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGExecutionPhase>()
	{
		return EPCGExecutionPhase_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics::Enumerators[] = {
		{ "EPCGExecutionPhase::NotExecuted", (int64)EPCGExecutionPhase::NotExecuted },
		{ "EPCGExecutionPhase::PrepareData", (int64)EPCGExecutionPhase::PrepareData },
		{ "EPCGExecutionPhase::Execute", (int64)EPCGExecutionPhase::Execute },
		{ "EPCGExecutionPhase::PostExecute", (int64)EPCGExecutionPhase::PostExecute },
		{ "EPCGExecutionPhase::Done", (int64)EPCGExecutionPhase::Done },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics::Enum_MetaDataParams[] = {
		{ "Done.Name", "EPCGExecutionPhase::Done" },
		{ "Execute.Name", "EPCGExecutionPhase::Execute" },
		{ "ModuleRelativePath", "Public/PCGContext.h" },
		{ "NotExecuted.Name", "EPCGExecutionPhase::NotExecuted" },
		{ "PostExecute.Name", "EPCGExecutionPhase::PostExecute" },
		{ "PrepareData.Name", "EPCGExecutionPhase::PrepareData" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGExecutionPhase",
		"EPCGExecutionPhase",
		Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGExecutionPhase()
	{
		if (!Z_Registration_Info_UEnum_EPCGExecutionPhase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExecutionPhase.InnerSingleton, Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGExecutionPhase.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGContext;
class UScriptStruct* FPCGContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGContext, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGContext"));
	}
	return Z_Registration_Info_UScriptStruct_PCGContext.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGContext>()
{
	return FPCGContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGContext",
		sizeof(FPCGContext),
		alignof(FPCGContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGContext()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGContext.InnerSingleton, Z_Construct_UScriptStruct_FPCGContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h_Statics::EnumInfo[] = {
		{ EPCGExecutionPhase_StaticEnum, TEXT("EPCGExecutionPhase"), &Z_Registration_Info_UEnum_EPCGExecutionPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1362868761U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h_Statics::ScriptStructInfo[] = {
		{ FPCGContext::StaticStruct, Z_Construct_UScriptStruct_FPCGContext_Statics::NewStructOps, TEXT("PCGContext"), &Z_Registration_Info_UScriptStruct_PCGContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGContext), 742208121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h_1450451607(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
