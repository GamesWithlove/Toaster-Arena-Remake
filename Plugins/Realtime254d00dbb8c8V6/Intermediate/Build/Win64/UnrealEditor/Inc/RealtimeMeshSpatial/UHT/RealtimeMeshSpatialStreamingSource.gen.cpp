// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshSpatialStreamingSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshSpatialStreamingSource() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHSPATIAL_API UEnum* Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshSpatial();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERealtimeMeshStreamingSourcePriority **************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshStreamingSourcePriority;
static UEnum* ERealtimeMeshStreamingSourcePriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshStreamingSourcePriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshStreamingSourcePriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshSpatial(), TEXT("ERealtimeMeshStreamingSourcePriority"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshStreamingSourcePriority.OuterSingleton;
}
template<> REALTIMEMESHSPATIAL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshStreamingSourcePriority>()
{
	return ERealtimeMeshStreamingSourcePriority_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Streaming Source Priority\n */" },
#endif
		{ "Default.Name", "ERealtimeMeshStreamingSourcePriority::Default" },
		{ "High.Name", "ERealtimeMeshStreamingSourcePriority::High" },
		{ "Highest.Name", "ERealtimeMeshStreamingSourcePriority::Highest" },
		{ "Low.Name", "ERealtimeMeshStreamingSourcePriority::Low" },
		{ "Lowest.Name", "ERealtimeMeshStreamingSourcePriority::Lowest" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSource.h" },
		{ "Normal.Name", "ERealtimeMeshStreamingSourcePriority::Normal" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Streaming Source Priority" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshStreamingSourcePriority::Highest", (int64)ERealtimeMeshStreamingSourcePriority::Highest },
		{ "ERealtimeMeshStreamingSourcePriority::High", (int64)ERealtimeMeshStreamingSourcePriority::High },
		{ "ERealtimeMeshStreamingSourcePriority::Normal", (int64)ERealtimeMeshStreamingSourcePriority::Normal },
		{ "ERealtimeMeshStreamingSourcePriority::Low", (int64)ERealtimeMeshStreamingSourcePriority::Low },
		{ "ERealtimeMeshStreamingSourcePriority::Lowest", (int64)ERealtimeMeshStreamingSourcePriority::Lowest },
		{ "ERealtimeMeshStreamingSourcePriority::Default", (int64)ERealtimeMeshStreamingSourcePriority::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
	nullptr,
	"ERealtimeMeshStreamingSourcePriority",
	"ERealtimeMeshStreamingSourcePriority",
	Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshStreamingSourcePriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshStreamingSourcePriority.InnerSingleton, Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshStreamingSourcePriority.InnerSingleton;
}
// ********** End Enum ERealtimeMeshStreamingSourcePriority ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSource_h__Script_RealtimeMeshSpatial_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERealtimeMeshStreamingSourcePriority_StaticEnum, TEXT("ERealtimeMeshStreamingSourcePriority"), &Z_Registration_Info_UEnum_ERealtimeMeshStreamingSourcePriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1765397894U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSource_h__Script_RealtimeMeshSpatial_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSource_h__Script_RealtimeMeshSpatial_165710689{
	TEXT("/Script/RealtimeMeshSpatial"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSource_h__Script_RealtimeMeshSpatial_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSource_h__Script_RealtimeMeshSpatial_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
