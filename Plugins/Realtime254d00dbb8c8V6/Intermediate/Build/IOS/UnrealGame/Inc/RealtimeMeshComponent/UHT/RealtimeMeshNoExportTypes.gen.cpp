// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshNoExportTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshNoExportTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionInfo();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshComplexGeometry();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshConfig();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshLODConfig();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshLODKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamRange();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERealtimeMeshProxyUpdateStatus ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshProxyUpdateStatus;
static UEnum* ERealtimeMeshProxyUpdateStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshProxyUpdateStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshProxyUpdateStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("ERealtimeMeshProxyUpdateStatus"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshProxyUpdateStatus.OuterSingleton;
}
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshProxyUpdateStatus>()
{
	return ERealtimeMeshProxyUpdateStatus_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Help intellisense to avoid interpreting this file's declaration of FVector etc as it assumes !CPP by default\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
		{ "NoProxy.Name", "ERealtimeMeshProxyUpdateStatus::NoProxy" },
		{ "NoUpdate.Name", "ERealtimeMeshProxyUpdateStatus::NoUpdate" },
		{ "ToolTip", "Help intellisense to avoid interpreting this file's declaration of FVector etc as it assumes !CPP by default" },
		{ "Updated.Name", "ERealtimeMeshProxyUpdateStatus::Updated" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshProxyUpdateStatus::NoProxy", (int64)ERealtimeMeshProxyUpdateStatus::NoProxy },
		{ "ERealtimeMeshProxyUpdateStatus::NoUpdate", (int64)ERealtimeMeshProxyUpdateStatus::NoUpdate },
		{ "ERealtimeMeshProxyUpdateStatus::Updated", (int64)ERealtimeMeshProxyUpdateStatus::Updated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	"ERealtimeMeshProxyUpdateStatus",
	"ERealtimeMeshProxyUpdateStatus",
	Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshProxyUpdateStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshProxyUpdateStatus.InnerSingleton, Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshProxyUpdateStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshProxyUpdateStatus.InnerSingleton;
}
// ********** End Enum ERealtimeMeshProxyUpdateStatus **********************************************

// ********** Begin Enum ERealtimeMeshOutcomePins **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshOutcomePins;
static UEnum* ERealtimeMeshOutcomePins_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshOutcomePins.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshOutcomePins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("ERealtimeMeshOutcomePins"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshOutcomePins.OuterSingleton;
}
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshOutcomePins>()
{
	return ERealtimeMeshOutcomePins_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failure.Name", "ERealtimeMeshOutcomePins::Failure" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
		{ "Success.Name", "ERealtimeMeshOutcomePins::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshOutcomePins::Failure", (int64)ERealtimeMeshOutcomePins::Failure },
		{ "ERealtimeMeshOutcomePins::Success", (int64)ERealtimeMeshOutcomePins::Success },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	"ERealtimeMeshOutcomePins",
	"ERealtimeMeshOutcomePins",
	Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshOutcomePins.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshOutcomePins.InnerSingleton, Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshOutcomePins.InnerSingleton;
}
// ********** End Enum ERealtimeMeshOutcomePins ****************************************************

// ********** Begin ScriptStruct FRealtimeMeshPolygonGroupRange ************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics
{
	struct FRealtimeMeshPolygonGroupRange
	{
		int32 StartIndex;
		int32 Count;
		int32 PolygonGroupIndex;
	};

	static_assert(sizeof(FRealtimeMeshPolygonGroupRange) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshPolygonGroupRange) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshPolygonGroupRange); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshPolygonGroupRange); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[] = {
		{ "Category", "RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupIndex_MetaData[] = {
		{ "Category", "RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshPolygonGroupRange constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonGroupIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshPolygonGroupRange constinit property declarations ******
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics

// ********** Begin ScriptStruct FRealtimeMeshPolygonGroupRange Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshPolygonGroupRange, StartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartIndex_MetaData), NewProp_StartIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshPolygonGroupRange, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::NewProp_PolygonGroupIndex = { "PolygonGroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshPolygonGroupRange, PolygonGroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonGroupIndex_MetaData), NewProp_PolygonGroupIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::NewProp_PolygonGroupIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshPolygonGroupRange Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshPolygonGroupRange",
	Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::PropPointers),
	sizeof(FRealtimeMeshPolygonGroupRange),
	alignof(FRealtimeMeshPolygonGroupRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshPolygonGroupRange_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshPolygonGroupRange **************************************

// ********** Begin ScriptStruct FRealtimeMeshStreamRange ******************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics
{
	struct FInt32RangeBound
	{
		TEnumAsByte<ERangeBoundTypes::Type> Type;
		int32 Value;
	};

	static_assert(sizeof(FInt32RangeBound) < MAX_uint16);
	static_assert(alignof(FInt32RangeBound) < MAX_uint8);
	struct FInt32Range
	{
		FInt32RangeBound LowerBound;
		FInt32RangeBound UpperBound;
	};

	static_assert(sizeof(FInt32Range) < MAX_uint16);
	static_assert(alignof(FInt32Range) < MAX_uint8);
	struct FRealtimeMeshStreamRange
	{
		FInt32Range Vertices;
		FInt32Range Indices;
	};

	static_assert(sizeof(FRealtimeMeshStreamRange) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshStreamRange) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshStreamRange); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshStreamRange); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "/Script/RealtimeMeshComponent.RealtimeMeshBlueprintFunctionLibrary:MakeStreamRange" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "RealtimeMesh|Streams" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "Category", "RealtimeMesh|Streams" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshStreamRange constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshStreamRange constinit property declarations ************
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics

// ********** Begin ScriptStruct FRealtimeMeshStreamRange Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamRange, Vertices), Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamRange, Indices), Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::NewProp_Indices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshStreamRange Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshStreamRange",
	Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::PropPointers),
	sizeof(FRealtimeMeshStreamRange),
	alignof(FRealtimeMeshStreamRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamRange()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshStreamRange_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshStreamRange ********************************************

// ********** Begin ScriptStruct FRealtimeMeshMaterialSlot *****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics
{
	struct FRealtimeMeshMaterialSlot
	{
		FName SlotName;
		TObjectPtr<UMaterialInterface> Material;
	};

	static_assert(sizeof(FRealtimeMeshMaterialSlot) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshMaterialSlot) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshMaterialSlot); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshMaterialSlot); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "RealtimeMesh|Material" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "RealtimeMesh|Material" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshMaterialSlot constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshMaterialSlot constinit property declarations ***********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics

// ********** Begin ScriptStruct FRealtimeMeshMaterialSlot Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshMaterialSlot, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshMaterialSlot, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshMaterialSlot Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshMaterialSlot",
	Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::PropPointers),
	sizeof(FRealtimeMeshMaterialSlot),
	alignof(FRealtimeMeshMaterialSlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshMaterialSlot_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshMaterialSlot *******************************************

// ********** Begin Enum ERealtimeMeshSectionDrawType **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshSectionDrawType;
static UEnum* ERealtimeMeshSectionDrawType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshSectionDrawType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshSectionDrawType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("ERealtimeMeshSectionDrawType"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshSectionDrawType.OuterSingleton;
}
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshSectionDrawType>()
{
	return ERealtimeMeshSectionDrawType_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dynamic.Name", "ERealtimeMeshSectionDrawType::Dynamic" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
		{ "Static.Name", "ERealtimeMeshSectionDrawType::Static" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshSectionDrawType::Static", (int64)ERealtimeMeshSectionDrawType::Static },
		{ "ERealtimeMeshSectionDrawType::Dynamic", (int64)ERealtimeMeshSectionDrawType::Dynamic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	"ERealtimeMeshSectionDrawType",
	"ERealtimeMeshSectionDrawType",
	Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshSectionDrawType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshSectionDrawType.InnerSingleton, Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshSectionDrawType.InnerSingleton;
}
// ********** End Enum ERealtimeMeshSectionDrawType ************************************************

// ********** Begin ScriptStruct FRealtimeMeshSectionConfig ****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics
{
	struct FRealtimeMeshSectionConfig
	{
		int32 MaterialSlot;
		bool bIsVisible;
		bool bCastsShadow;
		bool bIsMainPassRenderable;
		bool bForceOpaque;
	};

	static_assert(sizeof(FRealtimeMeshSectionConfig) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshSectionConfig) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshSectionConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshSectionConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlot_MetaData[] = {
		{ "Category", "RealtimeMesh|Section|Config" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "Category", "RealtimeMesh|Section|Config" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastsShadow_MetaData[] = {
		{ "Category", "RealtimeMesh|Section|Config" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMainPassRenderable_MetaData[] = {
		{ "Category", "RealtimeMesh|Section|Config" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceOpaque_MetaData[] = {
		{ "Category", "RealtimeMesh|Section|Config" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshSectionConfig constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlot;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bCastsShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastsShadow;
	static void NewProp_bIsMainPassRenderable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainPassRenderable;
	static void NewProp_bForceOpaque_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOpaque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshSectionConfig constinit property declarations **********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics

// ********** Begin ScriptStruct FRealtimeMeshSectionConfig Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_MaterialSlot = { "MaterialSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshSectionConfig, MaterialSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlot_MetaData), NewProp_MaterialSlot_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((FRealtimeMeshSectionConfig*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshSectionConfig), &Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bCastsShadow_SetBit(void* Obj)
{
	((FRealtimeMeshSectionConfig*)Obj)->bCastsShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bCastsShadow = { "bCastsShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshSectionConfig), &Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bCastsShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastsShadow_MetaData), NewProp_bCastsShadow_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bIsMainPassRenderable_SetBit(void* Obj)
{
	((FRealtimeMeshSectionConfig*)Obj)->bIsMainPassRenderable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bIsMainPassRenderable = { "bIsMainPassRenderable", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshSectionConfig), &Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bIsMainPassRenderable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMainPassRenderable_MetaData), NewProp_bIsMainPassRenderable_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
{
	((FRealtimeMeshSectionConfig*)Obj)->bForceOpaque = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshSectionConfig), &Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceOpaque_MetaData), NewProp_bForceOpaque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_MaterialSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bCastsShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bIsMainPassRenderable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::NewProp_bForceOpaque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshSectionConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshSectionConfig",
	Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::PropPointers),
	sizeof(FRealtimeMeshSectionConfig),
	alignof(FRealtimeMeshSectionConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshSectionConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshSectionConfig ******************************************

// ********** Begin ScriptStruct FRealtimeMeshSectionGroupConfig ***********************************
struct Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics
{
	struct FRealtimeMeshSectionGroupConfig
	{
		ERealtimeMeshSectionDrawType DrawType;
	};

	static_assert(sizeof(FRealtimeMeshSectionGroupConfig) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshSectionGroupConfig) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshSectionGroupConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshSectionGroupConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawType_MetaData[] = {
		{ "Category", "RealtimeMesh|SectionGroup|Config" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshSectionGroupConfig constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshSectionGroupConfig constinit property declarations *****
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics

// ********** Begin ScriptStruct FRealtimeMeshSectionGroupConfig Property Definitions **************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::NewProp_DrawType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::NewProp_DrawType = { "DrawType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshSectionGroupConfig, DrawType), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSectionDrawType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawType_MetaData), NewProp_DrawType_MetaData) }; // 1149205691
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::NewProp_DrawType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::NewProp_DrawType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshSectionGroupConfig Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshSectionGroupConfig",
	Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::PropPointers),
	sizeof(FRealtimeMeshSectionGroupConfig),
	alignof(FRealtimeMeshSectionGroupConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshSectionGroupConfig *************************************

// ********** Begin ScriptStruct FRealtimeMeshLODConfig ********************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics
{
	struct FRealtimeMeshLODConfig
	{
		bool bIsVisible;
		float ScreenSize;
	};

	static_assert(sizeof(FRealtimeMeshLODConfig) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshLODConfig) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshLODConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshLODConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "Category", "RealtimeMesh|LOD|Config" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "Category", "RealtimeMesh|LOD|Config" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshLODConfig constinit property declarations ************
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshLODConfig constinit property declarations **************
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics

// ********** Begin ScriptStruct FRealtimeMeshLODConfig Property Definitions ***********************
void Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((FRealtimeMeshLODConfig*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshLODConfig), &Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshLODConfig, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::NewProp_ScreenSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshLODConfig Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshLODConfig",
	Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::PropPointers),
	sizeof(FRealtimeMeshLODConfig),
	alignof(FRealtimeMeshLODConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshLODConfig()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshLODConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshLODConfig **********************************************

// ********** Begin ScriptStruct FRealtimeMeshConfig ***********************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics
{
	struct FRealtimeMeshConfig
	{
		int32 ForcedLOD;
	};

	static_assert(sizeof(FRealtimeMeshConfig) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshConfig) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[] = {
		{ "Category", "RealtimeMesh|LOD|Config" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshConfig constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshConfig constinit property declarations *****************
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics

// ********** Begin ScriptStruct FRealtimeMeshConfig Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshConfig, ForcedLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedLOD_MetaData), NewProp_ForcedLOD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::NewProp_ForcedLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshConfig Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshConfig",
	Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::PropPointers),
	sizeof(FRealtimeMeshConfig),
	alignof(FRealtimeMeshConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshConfig()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshConfig *************************************************

// ********** Begin ScriptStruct FRealtimeMeshLODKey ***********************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshLODKey_Statics
{
	struct FRealtimeMeshLODKey
	{
	};

	static_assert(sizeof(FRealtimeMeshLODKey) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshLODKey) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshLODKey); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshLODKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshLODKey constinit property declarations ***************
// ********** End ScriptStruct FRealtimeMeshLODKey constinit property declarations *****************
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshLODKey_Statics
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshLODKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshLODKey",
	nullptr,
	0,
	sizeof(FRealtimeMeshLODKey),
	alignof(FRealtimeMeshLODKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshLODKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshLODKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshLODKey()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshLODKey_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshLODKey *************************************************

// ********** Begin ScriptStruct FRealtimeMeshSectionGroupKey **************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey_Statics
{
	struct FRealtimeMeshSectionGroupKey
	{
	};

	static_assert(sizeof(FRealtimeMeshSectionGroupKey) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshSectionGroupKey) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshSectionGroupKey); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshSectionGroupKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshSectionGroupKey constinit property declarations ******
// ********** End ScriptStruct FRealtimeMeshSectionGroupKey constinit property declarations ********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey_Statics
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshSectionGroupKey",
	nullptr,
	0,
	sizeof(FRealtimeMeshSectionGroupKey),
	alignof(FRealtimeMeshSectionGroupKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshSectionGroupKey ****************************************

// ********** Begin ScriptStruct FRealtimeMeshSectionKey *******************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshSectionKey_Statics
{
	struct FRealtimeMeshSectionKey
	{
	};

	static_assert(sizeof(FRealtimeMeshSectionKey) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshSectionKey) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshSectionKey); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshSectionKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshSectionKey constinit property declarations ***********
// ********** End ScriptStruct FRealtimeMeshSectionKey constinit property declarations *************
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshSectionKey_Statics
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshSectionKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshSectionKey",
	nullptr,
	0,
	sizeof(FRealtimeMeshSectionKey),
	alignof(FRealtimeMeshSectionKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSectionKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshSectionKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionKey()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshSectionKey_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshSectionKey *********************************************

// ********** Begin Enum ERealtimeMeshStreamType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshStreamType;
static UEnum* ERealtimeMeshStreamType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshStreamType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshStreamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("ERealtimeMeshStreamType"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshStreamType.OuterSingleton;
}
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshStreamType>()
{
	return ERealtimeMeshStreamType_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Index.Name", "ERealtimeMeshStreamType::Index" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
		{ "Unknown.Name", "ERealtimeMeshStreamType::Unknown" },
		{ "Vertex.Name", "ERealtimeMeshStreamType::Vertex" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshStreamType::Unknown", (int64)ERealtimeMeshStreamType::Unknown },
		{ "ERealtimeMeshStreamType::Vertex", (int64)ERealtimeMeshStreamType::Vertex },
		{ "ERealtimeMeshStreamType::Index", (int64)ERealtimeMeshStreamType::Index },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	"ERealtimeMeshStreamType",
	"ERealtimeMeshStreamType",
	Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshStreamType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshStreamType.InnerSingleton, Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshStreamType.InnerSingleton;
}
// ********** End Enum ERealtimeMeshStreamType *****************************************************

// ********** Begin ScriptStruct FRealtimeMeshStreamKey ********************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics
{
	struct FRealtimeMeshStreamKey
	{
		ERealtimeMeshStreamType StreamType;
		FName StreamName;
	};

	static_assert(sizeof(FRealtimeMeshStreamKey) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshStreamKey) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshStreamKey); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshStreamKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "/Script/RealtimeMeshComponent.RealtimeMeshBlueprintFunctionLibrary:MakeStreamKey" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamType_MetaData[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamName_MetaData[] = {
		{ "Category", "RealtimeMesh|Key" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshStreamKey constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_StreamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StreamName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshStreamKey constinit property declarations **************
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics

// ********** Begin ScriptStruct FRealtimeMeshStreamKey Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::NewProp_StreamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::NewProp_StreamType = { "StreamType", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamKey, StreamType), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshStreamType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamType_MetaData), NewProp_StreamType_MetaData) }; // 74563454
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::NewProp_StreamName = { "StreamName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamKey, StreamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamName_MetaData), NewProp_StreamName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::NewProp_StreamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::NewProp_StreamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::NewProp_StreamName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshStreamKey Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshStreamKey",
	Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::PropPointers),
	sizeof(FRealtimeMeshStreamKey),
	alignof(FRealtimeMeshStreamKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamKey()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshStreamKey_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshStreamKey **********************************************

// ********** Begin Enum ERealtimeMeshCollisionUpdateResult ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshCollisionUpdateResult;
static UEnum* ERealtimeMeshCollisionUpdateResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshCollisionUpdateResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshCollisionUpdateResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("ERealtimeMeshCollisionUpdateResult"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshCollisionUpdateResult.OuterSingleton;
}
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshCollisionUpdateResult>()
{
	return ERealtimeMeshCollisionUpdateResult_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error.Name", "ERealtimeMeshCollisionUpdateResult::Error" },
		{ "Ignored.Name", "ERealtimeMeshCollisionUpdateResult::Ignored" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
		{ "Unknown.Name", "ERealtimeMeshCollisionUpdateResult::Unknown" },
		{ "Updated.Name", "ERealtimeMeshCollisionUpdateResult::Updated" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshCollisionUpdateResult::Unknown", (int64)ERealtimeMeshCollisionUpdateResult::Unknown },
		{ "ERealtimeMeshCollisionUpdateResult::Updated", (int64)ERealtimeMeshCollisionUpdateResult::Updated },
		{ "ERealtimeMeshCollisionUpdateResult::Ignored", (int64)ERealtimeMeshCollisionUpdateResult::Ignored },
		{ "ERealtimeMeshCollisionUpdateResult::Error", (int64)ERealtimeMeshCollisionUpdateResult::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	"ERealtimeMeshCollisionUpdateResult",
	"ERealtimeMeshCollisionUpdateResult",
	Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshCollisionUpdateResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshCollisionUpdateResult.InnerSingleton, Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshCollisionUpdateResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshCollisionUpdateResult.InnerSingleton;
}
// ********** End Enum ERealtimeMeshCollisionUpdateResult ******************************************

// ********** Begin ScriptStruct FRealtimeMeshCollisionConfiguration *******************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics
{
	struct FRealtimeMeshCollisionConfiguration
	{
		bool bUseComplexAsSimpleCollision;
		bool bUseAsyncCook;
		bool bShouldFastCookMeshes;
		bool bFlipNormals;
		bool bDeformableMesh;
		bool bMergeAllMeshes;
	};

	static_assert(sizeof(FRealtimeMeshCollisionConfiguration) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionConfiguration) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCollisionConfiguration); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCollisionConfiguration); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimpleCollision_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCook_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFastCookMeshes_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipNormals_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeformableMesh_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeAllMeshes_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCollisionConfiguration constinit property declarations 
	static void NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimpleCollision;
	static void NewProp_bUseAsyncCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCook;
	static void NewProp_bShouldFastCookMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFastCookMeshes;
	static void NewProp_bFlipNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipNormals;
	static void NewProp_bDeformableMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeformableMesh;
	static void NewProp_bMergeAllMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeAllMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshCollisionConfiguration constinit property declarations *
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics

// ********** Begin ScriptStruct FRealtimeMeshCollisionConfiguration Property Definitions **********
void Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj)
{
	((FRealtimeMeshCollisionConfiguration*)Obj)->bUseComplexAsSimpleCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bUseComplexAsSimpleCollision = { "bUseComplexAsSimpleCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCollisionConfiguration), &Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseComplexAsSimpleCollision_MetaData), NewProp_bUseComplexAsSimpleCollision_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bUseAsyncCook_SetBit(void* Obj)
{
	((FRealtimeMeshCollisionConfiguration*)Obj)->bUseAsyncCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bUseAsyncCook = { "bUseAsyncCook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCollisionConfiguration), &Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bUseAsyncCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncCook_MetaData), NewProp_bUseAsyncCook_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bShouldFastCookMeshes_SetBit(void* Obj)
{
	((FRealtimeMeshCollisionConfiguration*)Obj)->bShouldFastCookMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bShouldFastCookMeshes = { "bShouldFastCookMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCollisionConfiguration), &Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bShouldFastCookMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldFastCookMeshes_MetaData), NewProp_bShouldFastCookMeshes_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bFlipNormals_SetBit(void* Obj)
{
	((FRealtimeMeshCollisionConfiguration*)Obj)->bFlipNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bFlipNormals = { "bFlipNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCollisionConfiguration), &Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bFlipNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipNormals_MetaData), NewProp_bFlipNormals_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bDeformableMesh_SetBit(void* Obj)
{
	((FRealtimeMeshCollisionConfiguration*)Obj)->bDeformableMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bDeformableMesh = { "bDeformableMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCollisionConfiguration), &Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bDeformableMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeformableMesh_MetaData), NewProp_bDeformableMesh_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bMergeAllMeshes_SetBit(void* Obj)
{
	((FRealtimeMeshCollisionConfiguration*)Obj)->bMergeAllMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bMergeAllMeshes = { "bMergeAllMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCollisionConfiguration), &Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bMergeAllMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeAllMeshes_MetaData), NewProp_bMergeAllMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bUseComplexAsSimpleCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bUseAsyncCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bShouldFastCookMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bFlipNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bDeformableMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::NewProp_bMergeAllMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshCollisionConfiguration Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshCollisionConfiguration",
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::PropPointers),
	sizeof(FRealtimeMeshCollisionConfiguration),
	alignof(FRealtimeMeshCollisionConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshCollisionConfiguration_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshCollisionConfiguration *********************************

// ********** Begin ScriptStruct FRealtimeMeshCollisionShape ***************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics
{
	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	static_assert(sizeof(FRealtimeMeshCollisionShape) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionShape) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCollisionShape); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCollisionShape); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContributesToMass_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCollisionShape constinit property declarations *******
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bContributesToMass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContributesToMass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshCollisionShape constinit property declarations *********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics

// ********** Begin ScriptStruct FRealtimeMeshCollisionShape Property Definitions ******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionShape, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionShape, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionShape, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_bContributesToMass_SetBit(void* Obj)
{
	((FRealtimeMeshCollisionShape*)Obj)->bContributesToMass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_bContributesToMass = { "bContributesToMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCollisionShape), &Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_bContributesToMass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContributesToMass_MetaData), NewProp_bContributesToMass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::NewProp_bContributesToMass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshCollisionShape Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshCollisionShape",
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::PropPointers),
	sizeof(FRealtimeMeshCollisionShape),
	alignof(FRealtimeMeshCollisionShape),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshCollisionShape *****************************************

// ********** Begin ScriptStruct FRealtimeMeshCollisionSphere **************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics
{
	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	static_assert(sizeof(FRealtimeMeshCollisionShape) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionShape) < MAX_uint8);
	struct FRealtimeMeshCollisionSphere : public FRealtimeMeshCollisionShape
	{
		float Radius;
	};

	static_assert(sizeof(FRealtimeMeshCollisionSphere) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionSphere) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCollisionSphere); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCollisionSphere); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCollisionSphere constinit property declarations ******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshCollisionSphere constinit property declarations ********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics

// ********** Begin ScriptStruct FRealtimeMeshCollisionSphere Property Definitions *****************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionSphere, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshCollisionSphere Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape,
	nullptr,
	"RealtimeMeshCollisionSphere",
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::PropPointers),
	sizeof(FRealtimeMeshCollisionSphere),
	alignof(FRealtimeMeshCollisionSphere),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshCollisionSphere ****************************************

// ********** Begin ScriptStruct FRealtimeMeshCollisionBox *****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics
{
	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	static_assert(sizeof(FRealtimeMeshCollisionShape) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionShape) < MAX_uint8);
	struct FRealtimeMeshCollisionBox : public FRealtimeMeshCollisionShape
	{
		FVector Extents;
	};

	static_assert(sizeof(FRealtimeMeshCollisionBox) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionBox) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCollisionBox); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCollisionBox); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCollisionBox constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshCollisionBox constinit property declarations ***********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics

// ********** Begin ScriptStruct FRealtimeMeshCollisionBox Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionBox, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::NewProp_Extents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshCollisionBox Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape,
	nullptr,
	"RealtimeMeshCollisionBox",
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::PropPointers),
	sizeof(FRealtimeMeshCollisionBox),
	alignof(FRealtimeMeshCollisionBox),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshCollisionBox *******************************************

// ********** Begin ScriptStruct FRealtimeMeshCollisionCapsule *************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics
{
	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	static_assert(sizeof(FRealtimeMeshCollisionShape) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionShape) < MAX_uint8);
	struct FRealtimeMeshCollisionCapsule : public FRealtimeMeshCollisionShape
	{
		float Radius;
		float Length;
	};

	static_assert(sizeof(FRealtimeMeshCollisionCapsule) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionCapsule) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCollisionCapsule); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCollisionCapsule); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCollisionCapsule constinit property declarations *****
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshCollisionCapsule constinit property declarations *******
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics

// ********** Begin ScriptStruct FRealtimeMeshCollisionCapsule Property Definitions ****************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionCapsule, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionCapsule, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshCollisionCapsule Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape,
	nullptr,
	"RealtimeMeshCollisionCapsule",
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::PropPointers),
	sizeof(FRealtimeMeshCollisionCapsule),
	alignof(FRealtimeMeshCollisionCapsule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshCollisionCapsule ***************************************

// ********** Begin ScriptStruct FRealtimeMeshCollisionTaperedCapsule ******************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics
{
	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	static_assert(sizeof(FRealtimeMeshCollisionShape) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionShape) < MAX_uint8);
	struct FRealtimeMeshCollisionTaperedCapsule : public FRealtimeMeshCollisionShape
	{
		float RadiusA;
		float RadiusB;
		float Length;
	};

	static_assert(sizeof(FRealtimeMeshCollisionTaperedCapsule) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionTaperedCapsule) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCollisionTaperedCapsule); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCollisionTaperedCapsule); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusA_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusB_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCollisionTaperedCapsule constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusA;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshCollisionTaperedCapsule constinit property declarations 
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics

// ********** Begin ScriptStruct FRealtimeMeshCollisionTaperedCapsule Property Definitions *********
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::NewProp_RadiusA = { "RadiusA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionTaperedCapsule, RadiusA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusA_MetaData), NewProp_RadiusA_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::NewProp_RadiusB = { "RadiusB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionTaperedCapsule, RadiusB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusB_MetaData), NewProp_RadiusB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionTaperedCapsule, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::NewProp_RadiusA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::NewProp_RadiusB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshCollisionTaperedCapsule Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape,
	nullptr,
	"RealtimeMeshCollisionTaperedCapsule",
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::PropPointers),
	sizeof(FRealtimeMeshCollisionTaperedCapsule),
	alignof(FRealtimeMeshCollisionTaperedCapsule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshCollisionTaperedCapsule ********************************

// ********** Begin ScriptStruct FRealtimeMeshCollisionConvex **************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex_Statics
{
	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	static_assert(sizeof(FRealtimeMeshCollisionShape) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionShape) < MAX_uint8);
	struct FRealtimeMeshCollisionConvex : public FRealtimeMeshCollisionShape
	{
	};

	static_assert(sizeof(FRealtimeMeshCollisionConvex) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionConvex) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCollisionConvex); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCollisionConvex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCollisionConvex constinit property declarations ******
// ********** End ScriptStruct FRealtimeMeshCollisionConvex constinit property declarations ********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex_Statics
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionShape,
	nullptr,
	"RealtimeMeshCollisionConvex",
	nullptr,
	0,
	sizeof(FRealtimeMeshCollisionConvex),
	alignof(FRealtimeMeshCollisionConvex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshCollisionConvex ****************************************

// ********** Begin ScriptStruct FRealtimeMeshSimpleGeometry ***************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	static_assert(sizeof(FRealtimeMeshSimpleGeometry) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshSimpleGeometry) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshSimpleGeometry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshSimpleGeometry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshSimpleGeometry constinit property declarations *******
// ********** End ScriptStruct FRealtimeMeshSimpleGeometry constinit property declarations *********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry_Statics
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshSimpleGeometry",
	nullptr,
	0,
	sizeof(FRealtimeMeshSimpleGeometry),
	alignof(FRealtimeMeshSimpleGeometry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshSimpleGeometry *****************************************

// ********** Begin ScriptStruct FRealtimeMeshCollisionMesh ****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics
{
	struct FRealtimeMeshCollisionMesh
	{
		FName Name;
	};

	static_assert(sizeof(FRealtimeMeshCollisionMesh) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionMesh) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCollisionMesh); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCollisionMesh); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "RealtimeMesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCollisionMesh constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshCollisionMesh constinit property declarations **********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics

// ********** Begin ScriptStruct FRealtimeMeshCollisionMesh Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCollisionMesh, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshCollisionMesh Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshCollisionMesh",
	Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::PropPointers),
	sizeof(FRealtimeMeshCollisionMesh),
	alignof(FRealtimeMeshCollisionMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshCollisionMesh ******************************************

// ********** Begin ScriptStruct FRealtimeMeshComplexGeometry **************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshComplexGeometry_Statics
{
	struct FRealtimeMeshComplexGeometry
	{
	};

	static_assert(sizeof(FRealtimeMeshComplexGeometry) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshComplexGeometry) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshComplexGeometry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshComplexGeometry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshComplexGeometry constinit property declarations ******
// ********** End ScriptStruct FRealtimeMeshComplexGeometry constinit property declarations ********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshComplexGeometry_Statics
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshComplexGeometry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshComplexGeometry",
	nullptr,
	0,
	sizeof(FRealtimeMeshComplexGeometry),
	alignof(FRealtimeMeshComplexGeometry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshComplexGeometry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshComplexGeometry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshComplexGeometry()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshComplexGeometry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshComplexGeometry ****************************************

// ********** Begin ScriptStruct FRealtimeMeshCollisionInfo ****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionInfo_Statics
{
	struct FRealtimeMeshCollisionInfo
	{
	};

	static_assert(sizeof(FRealtimeMeshCollisionInfo) < MAX_uint16);
	static_assert(alignof(FRealtimeMeshCollisionInfo) < MAX_uint8);
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCollisionInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCollisionInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshNoExportTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCollisionInfo constinit property declarations ********
// ********** End ScriptStruct FRealtimeMeshCollisionInfo constinit property declarations **********
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCollisionInfo_Statics
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCollisionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	nullptr,
	"RealtimeMeshCollisionInfo",
	nullptr,
	0,
	sizeof(FRealtimeMeshCollisionInfo),
	alignof(FRealtimeMeshCollisionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCollisionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCollisionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionInfo()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeMeshCollisionInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(ReturnStruct);
}
// ********** End ScriptStruct FRealtimeMeshCollisionInfo ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshNoExportTypes_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERealtimeMeshProxyUpdateStatus_StaticEnum, TEXT("ERealtimeMeshProxyUpdateStatus"), &Z_Registration_Info_UEnum_ERealtimeMeshProxyUpdateStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2983683645U) },
		{ ERealtimeMeshOutcomePins_StaticEnum, TEXT("ERealtimeMeshOutcomePins"), &Z_Registration_Info_UEnum_ERealtimeMeshOutcomePins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4220098076U) },
		{ ERealtimeMeshSectionDrawType_StaticEnum, TEXT("ERealtimeMeshSectionDrawType"), &Z_Registration_Info_UEnum_ERealtimeMeshSectionDrawType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1149205691U) },
		{ ERealtimeMeshStreamType_StaticEnum, TEXT("ERealtimeMeshStreamType"), &Z_Registration_Info_UEnum_ERealtimeMeshStreamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 74563454U) },
		{ ERealtimeMeshCollisionUpdateResult_StaticEnum, TEXT("ERealtimeMeshCollisionUpdateResult"), &Z_Registration_Info_UEnum_ERealtimeMeshCollisionUpdateResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3721977398U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshNoExportTypes_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshNoExportTypes_h__Script_RealtimeMeshComponent_3537602845{
	TEXT("/Script/RealtimeMeshComponent"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshNoExportTypes_h__Script_RealtimeMeshComponent_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshNoExportTypes_h__Script_RealtimeMeshComponent_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
