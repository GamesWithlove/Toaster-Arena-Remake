// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSActorLoader.h"
#include "EMSData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSActorLoader() {}

// ********** Begin Cross Module References ********************************************************
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorByteKey();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLoaderInitData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLoaderInitData ***************************************************
struct Z_Construct_UScriptStruct_FLoaderInitData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLoaderInitData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLoaderInitData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSActorLoader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActorMap_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSActorLoader.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLoaderInitData constinit property declarations *******************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InActorMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InActorMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLoaderInitData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoaderInitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLoaderInitData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLoaderInitData;
class UScriptStruct* FLoaderInitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLoaderInitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLoaderInitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoaderInitData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LoaderInitData"));
	}
	return Z_Registration_Info_UScriptStruct_FLoaderInitData.OuterSingleton;
	}

// ********** Begin ScriptStruct FLoaderInitData Property Definitions ******************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLoaderInitData_Statics::NewProp_InActorMap_ValueProp = { "InActorMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoaderInitData_Statics::NewProp_InActorMap_Key_KeyProp = { "InActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorByteKey, METADATA_PARAMS(0, nullptr) }; // 768632040
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLoaderInitData_Statics::NewProp_InActorMap = { "InActorMap", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoaderInitData, InActorMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActorMap_MetaData), NewProp_InActorMap_MetaData) }; // 768632040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoaderInitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoaderInitData_Statics::NewProp_InActorMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoaderInitData_Statics::NewProp_InActorMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoaderInitData_Statics::NewProp_InActorMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoaderInitData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLoaderInitData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoaderInitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"LoaderInitData",
	Z_Construct_UScriptStruct_FLoaderInitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoaderInitData_Statics::PropPointers),
	sizeof(FLoaderInitData),
	alignof(FLoaderInitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoaderInitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoaderInitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLoaderInitData()
{
	if (!Z_Registration_Info_UScriptStruct_FLoaderInitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLoaderInitData.InnerSingleton, Z_Construct_UScriptStruct_FLoaderInitData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLoaderInitData.InnerSingleton);
}
// ********** End ScriptStruct FLoaderInitData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSActorLoader_h__Script_EasyMultiSave_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLoaderInitData::StaticStruct, Z_Construct_UScriptStruct_FLoaderInitData_Statics::NewStructOps, TEXT("LoaderInitData"),&Z_Registration_Info_UScriptStruct_FLoaderInitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoaderInitData), 1972234614U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSActorLoader_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSActorLoader_h__Script_EasyMultiSave_3248698113{
	TEXT("/Script/EasyMultiSave"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSActorLoader_h__Script_EasyMultiSave_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSActorLoader_h__Script_EasyMultiSave_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
