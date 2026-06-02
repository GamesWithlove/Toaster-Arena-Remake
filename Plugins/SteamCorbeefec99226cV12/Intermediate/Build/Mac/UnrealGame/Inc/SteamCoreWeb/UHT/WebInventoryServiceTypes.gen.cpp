// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryService/WebInventoryServiceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebInventoryServiceTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType();
STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemsItem();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModifyItemPropertyType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifyItemPropertyType;
static UEnum* EModifyItemPropertyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModifyItemPropertyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModifyItemPropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("EModifyItemPropertyType"));
	}
	return Z_Registration_Info_UEnum_EModifyItemPropertyType.OuterSingleton;
}
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<EModifyItemPropertyType>()
{
	return EModifyItemPropertyType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BOOL.Name", "EModifyItemPropertyType::BOOL" },
		{ "FLOAT.Name", "EModifyItemPropertyType::FLOAT" },
		{ "INT.Name", "EModifyItemPropertyType::INT" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
		{ "REMOVE.Name", "EModifyItemPropertyType::REMOVE" },
		{ "STRING.Name", "EModifyItemPropertyType::STRING" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModifyItemPropertyType::STRING", (int64)EModifyItemPropertyType::STRING },
		{ "EModifyItemPropertyType::BOOL", (int64)EModifyItemPropertyType::BOOL },
		{ "EModifyItemPropertyType::INT", (int64)EModifyItemPropertyType::INT },
		{ "EModifyItemPropertyType::FLOAT", (int64)EModifyItemPropertyType::FLOAT },
		{ "EModifyItemPropertyType::REMOVE", (int64)EModifyItemPropertyType::REMOVE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	nullptr,
	"EModifyItemPropertyType",
	"EModifyItemPropertyType",
	Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType()
{
	if (!Z_Registration_Info_UEnum_EModifyItemPropertyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifyItemPropertyType.InnerSingleton, Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModifyItemPropertyType.InnerSingleton;
}
// ********** End Enum EModifyItemPropertyType *****************************************************

// ********** Begin ScriptStruct FModifyItemsItem **************************************************
struct Z_Construct_UScriptStruct_FModifyItemsItem_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FModifyItemsItem); }
	static inline consteval int16 GetStructAlignment() { return alignof(FModifyItemsItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyItemPropertyType_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValueString_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValueBool_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValueInt_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValueFloat_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValueRemove_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FModifyItemsItem constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModifyItemPropertyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModifyItemPropertyType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyValueString;
	static void NewProp_PropertyValueBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PropertyValueBool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyValueInt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyValueFloat;
	static void NewProp_PropertyValueRemove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PropertyValueRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FModifyItemsItem constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyItemsItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FModifyItemsItem_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModifyItemsItem;
class UScriptStruct* FModifyItemsItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModifyItemsItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModifyItemsItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyItemsItem, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ModifyItemsItem"));
	}
	return Z_Registration_Info_UScriptStruct_FModifyItemsItem.OuterSingleton;
	}

// ********** Begin ScriptStruct FModifyItemsItem Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemsItem, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemsItem, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_ModifyItemPropertyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_ModifyItemPropertyType = { "ModifyItemPropertyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemsItem, ModifyItemPropertyType), Z_Construct_UEnum_SteamCoreWeb_EModifyItemPropertyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyItemPropertyType_MetaData), NewProp_ModifyItemPropertyType_MetaData) }; // 51491904
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueString = { "PropertyValueString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemsItem, PropertyValueString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyValueString_MetaData), NewProp_PropertyValueString_MetaData) };
void Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueBool_SetBit(void* Obj)
{
	((FModifyItemsItem*)Obj)->PropertyValueBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueBool = { "PropertyValueBool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModifyItemsItem), &Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyValueBool_MetaData), NewProp_PropertyValueBool_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueInt = { "PropertyValueInt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemsItem, PropertyValueInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyValueInt_MetaData), NewProp_PropertyValueInt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueFloat = { "PropertyValueFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemsItem, PropertyValueFloat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyValueFloat_MetaData), NewProp_PropertyValueFloat_MetaData) };
void Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueRemove_SetBit(void* Obj)
{
	((FModifyItemsItem*)Obj)->PropertyValueRemove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueRemove = { "PropertyValueRemove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModifyItemsItem), &Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueRemove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyValueRemove_MetaData), NewProp_PropertyValueRemove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifyItemsItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_ModifyItemPropertyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_ModifyItemPropertyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueBool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewProp_PropertyValueRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemsItem_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FModifyItemsItem Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyItemsItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	nullptr,
	&NewStructOps,
	"ModifyItemsItem",
	Z_Construct_UScriptStruct_FModifyItemsItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemsItem_Statics::PropPointers),
	sizeof(FModifyItemsItem),
	alignof(FModifyItemsItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemsItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifyItemsItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifyItemsItem()
{
	if (!Z_Registration_Info_UScriptStruct_FModifyItemsItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModifyItemsItem.InnerSingleton, Z_Construct_UScriptStruct_FModifyItemsItem_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FModifyItemsItem.InnerSingleton);
}
// ********** End ScriptStruct FModifyItemsItem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceTypes_h__Script_SteamCoreWeb_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModifyItemPropertyType_StaticEnum, TEXT("EModifyItemPropertyType"), &Z_Registration_Info_UEnum_EModifyItemPropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 51491904U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModifyItemsItem::StaticStruct, Z_Construct_UScriptStruct_FModifyItemsItem_Statics::NewStructOps, TEXT("ModifyItemsItem"),&Z_Registration_Info_UScriptStruct_FModifyItemsItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyItemsItem), 3570067542U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceTypes_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceTypes_h__Script_SteamCoreWeb_3668834606{
	TEXT("/Script/SteamCoreWeb"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceTypes_h__Script_SteamCoreWeb_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceTypes_h__Script_SteamCoreWeb_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceTypes_h__Script_SteamCoreWeb_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceTypes_h__Script_SteamCoreWeb_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
