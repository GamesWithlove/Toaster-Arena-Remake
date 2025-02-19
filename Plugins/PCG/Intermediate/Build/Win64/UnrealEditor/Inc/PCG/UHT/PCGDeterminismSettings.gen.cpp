// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Tests/Determinism/PCGDeterminismSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDeterminismSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PCG_API UClass* Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDeterminismSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGDeterminismSettings;
class UScriptStruct* FPCGDeterminismSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGDeterminismSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGDeterminismSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDeterminismSettings, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGDeterminismSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PCGDeterminismSettings.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGDeterminismSettings>()
{
	return FPCGDeterminismSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNativeTests_MetaData[];
#endif
		static void NewProp_bNativeTests_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNativeTests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBlueprintDeterminismTest_MetaData[];
#endif
		static void NewProp_bUseBlueprintDeterminismTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBlueprintDeterminismTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeterminismTestBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DeterminismTestBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGDeterminismSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bNativeTests_MetaData[] = {
		{ "Category", "Determinism" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bNativeTests_SetBit(void* Obj)
	{
		((FPCGDeterminismSettings*)Obj)->bNativeTests = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bNativeTests = { "bNativeTests", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGDeterminismSettings), &Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bNativeTests_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bNativeTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bNativeTests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bUseBlueprintDeterminismTest_MetaData[] = {
		{ "Category", "Determinism" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bUseBlueprintDeterminismTest_SetBit(void* Obj)
	{
		((FPCGDeterminismSettings*)Obj)->bUseBlueprintDeterminismTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bUseBlueprintDeterminismTest = { "bUseBlueprintDeterminismTest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGDeterminismSettings), &Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bUseBlueprintDeterminismTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bUseBlueprintDeterminismTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bUseBlueprintDeterminismTest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_DeterminismTestBlueprint_MetaData[] = {
		{ "Category", "Determinism" },
		{ "EditCondition", "bUseBlueprintDeterminismTest" },
		{ "ModuleRelativePath", "Public/Tests/Determinism/PCGDeterminismSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_DeterminismTestBlueprint = { "DeterminismTestBlueprint", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDeterminismSettings, DeterminismTestBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_DeterminismTestBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_DeterminismTestBlueprint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bNativeTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_bUseBlueprintDeterminismTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewProp_DeterminismTestBlueprint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGDeterminismSettings",
		sizeof(FPCGDeterminismSettings),
		alignof(FPCGDeterminismSettings),
		Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGDeterminismSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGDeterminismSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGDeterminismSettings.InnerSingleton, Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGDeterminismSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismSettings_h_Statics::ScriptStructInfo[] = {
		{ FPCGDeterminismSettings::StaticStruct, Z_Construct_UScriptStruct_FPCGDeterminismSettings_Statics::NewStructOps, TEXT("PCGDeterminismSettings"), &Z_Registration_Info_UScriptStruct_PCGDeterminismSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGDeterminismSettings), 629052197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismSettings_h_2093757957(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
