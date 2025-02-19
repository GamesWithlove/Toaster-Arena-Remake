// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGWorldData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGWorldData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSurfaceData();
	PCG_API UClass* Z_Construct_UClass_UPCGVolumeData();
	PCG_API UClass* Z_Construct_UClass_UPCGWorldRayHitData();
	PCG_API UClass* Z_Construct_UClass_UPCGWorldRayHitData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGWorldVolumetricData();
	PCG_API UClass* Z_Construct_UClass_UPCGWorldVolumetricData_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag;
	static UEnum* EPCGWorldQueryFilterByTag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGWorldQueryFilterByTag"));
		}
		return Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGWorldQueryFilterByTag>()
	{
		return EPCGWorldQueryFilterByTag_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics::Enumerators[] = {
		{ "EPCGWorldQueryFilterByTag::NoTagFilter", (int64)EPCGWorldQueryFilterByTag::NoTagFilter },
		{ "EPCGWorldQueryFilterByTag::IncludeTagged", (int64)EPCGWorldQueryFilterByTag::IncludeTagged },
		{ "EPCGWorldQueryFilterByTag::ExcludeTagged", (int64)EPCGWorldQueryFilterByTag::ExcludeTagged },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics::Enum_MetaDataParams[] = {
		{ "ExcludeTagged.Name", "EPCGWorldQueryFilterByTag::ExcludeTagged" },
		{ "IncludeTagged.Name", "EPCGWorldQueryFilterByTag::IncludeTagged" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "NoTagFilter.Name", "EPCGWorldQueryFilterByTag::NoTagFilter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGWorldQueryFilterByTag",
		"EPCGWorldQueryFilterByTag",
		Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag()
	{
		if (!Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.InnerSingleton, Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGWorldCommonQueryParams;
class UScriptStruct* FPCGWorldCommonQueryParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGWorldCommonQueryParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGWorldCommonQueryParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGWorldCommonQueryParams"));
	}
	return Z_Registration_Info_UScriptStruct_PCGWorldCommonQueryParams.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGWorldCommonQueryParams>()
{
	return FPCGWorldCommonQueryParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePCGHits_MetaData[];
#endif
		static void NewProp_bIgnorePCGHits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePCGHits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelfHits_MetaData[];
#endif
		static void NewProp_bIgnoreSelfHits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelfHits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ActorTagFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorTagFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTagsList_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorTagsList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreLandscapeHits_MetaData[];
#endif
		static void NewProp_bIgnoreLandscapeHits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreLandscapeHits;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParsedActorTagsList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParsedActorTagsList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ParsedActorTagsList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGWorldCommonQueryParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnorePCGHits_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** If true, will ignore hits/overlaps on content created from PCG. */" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If true, will ignore hits/overlaps on content created from PCG." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnorePCGHits_SetBit(void* Obj)
	{
		((FPCGWorldCommonQueryParams*)Obj)->bIgnorePCGHits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnorePCGHits = { "bIgnorePCGHits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGWorldCommonQueryParams), &Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnorePCGHits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnorePCGHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnorePCGHits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreSelfHits_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreSelfHits_SetBit(void* Obj)
	{
		((FPCGWorldCommonQueryParams*)Obj)->bIgnoreSelfHits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreSelfHits = { "bIgnoreSelfHits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGWorldCommonQueryParams), &Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreSelfHits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreSelfHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreSelfHits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Data|Advanced" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGWorldCommonQueryParams, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_CollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_CollisionChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "Data|Advanced" },
		{ "Comment", "/** Queries against complex collision if enabled, performance warning */" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Queries against complex collision if enabled, performance warning" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((FPCGWorldCommonQueryParams*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGWorldCommonQueryParams), &Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bTraceComplex_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagFilter_MetaData[] = {
		{ "Category", "Data|Filtering" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagFilter = { "ActorTagFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGWorldCommonQueryParams, ActorTagFilter), Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagFilter_MetaData)) }; // 517786070
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagsList_MetaData[] = {
		{ "Category", "Data|Filtering" },
		{ "EditCondition", "TagFilter != EPCGWorldQueryFilterByTag::NoTagFilter" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagsList = { "ActorTagsList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGWorldCommonQueryParams, ActorTagsList), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagsList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreLandscapeHits_MetaData[] = {
		{ "Category", "Data|Filtering" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreLandscapeHits_SetBit(void* Obj)
	{
		((FPCGWorldCommonQueryParams*)Obj)->bIgnoreLandscapeHits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreLandscapeHits = { "bIgnoreLandscapeHits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGWorldCommonQueryParams), &Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreLandscapeHits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreLandscapeHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreLandscapeHits_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ParsedActorTagsList_ElementProp = { "ParsedActorTagsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ParsedActorTagsList_MetaData[] = {
		{ "Comment", "// Not exposed, will be filled in when initializing this\n" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "ToolTip", "Not exposed, will be filled in when initializing this" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ParsedActorTagsList = { "ParsedActorTagsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGWorldCommonQueryParams, ParsedActorTagsList), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ParsedActorTagsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ParsedActorTagsList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnorePCGHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreSelfHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ActorTagsList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreLandscapeHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ParsedActorTagsList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_ParsedActorTagsList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGWorldCommonQueryParams",
		sizeof(FPCGWorldCommonQueryParams),
		alignof(FPCGWorldCommonQueryParams),
		Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGWorldCommonQueryParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGWorldCommonQueryParams.InnerSingleton, Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGWorldCommonQueryParams.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGWorldVolumetricQueryParams>() == std::is_polymorphic<FPCGWorldCommonQueryParams>(), "USTRUCT FPCGWorldVolumetricQueryParams cannot be polymorphic unless super FPCGWorldCommonQueryParams is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGWorldVolumetricQueryParams;
class UScriptStruct* FPCGWorldVolumetricQueryParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGWorldVolumetricQueryParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGWorldVolumetricQueryParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGWorldVolumetricQueryParams"));
	}
	return Z_Registration_Info_UScriptStruct_PCGWorldVolumetricQueryParams.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGWorldVolumetricQueryParams>()
{
	return FPCGWorldVolumetricQueryParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchForOverlap_MetaData[];
#endif
		static void NewProp_bSearchForOverlap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchForOverlap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGWorldVolumetricQueryParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewProp_bSearchForOverlap_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** Controls whether we are trying to find an overlap with physical objects (true) or to find empty spaces that do not contain anything (false) */" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls whether we are trying to find an overlap with physical objects (true) or to find empty spaces that do not contain anything (false)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewProp_bSearchForOverlap_SetBit(void* Obj)
	{
		((FPCGWorldVolumetricQueryParams*)Obj)->bSearchForOverlap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewProp_bSearchForOverlap = { "bSearchForOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGWorldVolumetricQueryParams), &Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewProp_bSearchForOverlap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewProp_bSearchForOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewProp_bSearchForOverlap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewProp_bSearchForOverlap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams,
		&NewStructOps,
		"PCGWorldVolumetricQueryParams",
		sizeof(FPCGWorldVolumetricQueryParams),
		alignof(FPCGWorldVolumetricQueryParams),
		Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGWorldVolumetricQueryParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGWorldVolumetricQueryParams.InnerSingleton, Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGWorldVolumetricQueryParams.InnerSingleton;
	}
	void UPCGWorldVolumetricData::StaticRegisterNativesUPCGWorldVolumetricData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGWorldVolumetricData);
	UClass* Z_Construct_UClass_UPCGWorldVolumetricData_NoRegister()
	{
		return UPCGWorldVolumetricData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGWorldVolumetricData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginatingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OriginatingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGWorldVolumetricData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGVolumeData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldVolumetricData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Queries volume for presence of world collision or not. Can be used to voxelize environment. */" },
		{ "IncludePath", "Data/PCGWorldData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "ToolTip", "Queries volume for presence of world collision or not. Can be used to voxelize environment." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "//~End UPCGSpatialDataWithPointCache\n" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGWorldVolumetricData, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_OriginatingComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_OriginatingComponent = { "OriginatingComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGWorldVolumetricData, OriginatingComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_OriginatingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_OriginatingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_QueryParams_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGWorldVolumetricData, QueryParams), Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams, METADATA_PARAMS(Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_QueryParams_MetaData)) }; // 2445480103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGWorldVolumetricData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_OriginatingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorldVolumetricData_Statics::NewProp_QueryParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGWorldVolumetricData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGWorldVolumetricData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGWorldVolumetricData_Statics::ClassParams = {
		&UPCGWorldVolumetricData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGWorldVolumetricData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldVolumetricData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGWorldVolumetricData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldVolumetricData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGWorldVolumetricData()
	{
		if (!Z_Registration_Info_UClass_UPCGWorldVolumetricData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGWorldVolumetricData.OuterSingleton, Z_Construct_UClass_UPCGWorldVolumetricData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGWorldVolumetricData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGWorldVolumetricData>()
	{
		return UPCGWorldVolumetricData::StaticClass();
	}
	UPCGWorldVolumetricData::UPCGWorldVolumetricData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGWorldVolumetricData);
	UPCGWorldVolumetricData::~UPCGWorldVolumetricData() {}

static_assert(std::is_polymorphic<FPCGWorldRayHitQueryParams>() == std::is_polymorphic<FPCGWorldCommonQueryParams>(), "USTRUCT FPCGWorldRayHitQueryParams cannot be polymorphic unless super FPCGWorldCommonQueryParams is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGWorldRayHitQueryParams;
class UScriptStruct* FPCGWorldRayHitQueryParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGWorldRayHitQueryParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGWorldRayHitQueryParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGWorldRayHitQueryParams"));
	}
	return Z_Registration_Info_UScriptStruct_PCGWorldRayHitQueryParams.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGWorldRayHitQueryParams>()
{
	return FPCGWorldRayHitQueryParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultParams_MetaData[];
#endif
		static void NewProp_bOverrideDefaultParams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayLength_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RayLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyMetadataFromLandscape_MetaData[];
#endif
		static void NewProp_bApplyMetadataFromLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyMetadataFromLandscape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGWorldRayHitQueryParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bOverrideDefaultParams_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bOverrideDefaultParams_SetBit(void* Obj)
	{
		((FPCGWorldRayHitQueryParams*)Obj)->bOverrideDefaultParams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bOverrideDefaultParams = { "bOverrideDefaultParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGWorldRayHitQueryParams), &Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bOverrideDefaultParams_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bOverrideDefaultParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bOverrideDefaultParams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayOrigin_MetaData[] = {
		{ "Category", "Data" },
		{ "EditCondition", "bOverrideDefaultParams" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGWorldRayHitQueryParams, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayDirection_MetaData[] = {
		{ "Category", "Data" },
		{ "EditCondition", "bOverrideDefaultParams" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGWorldRayHitQueryParams, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayLength_MetaData[] = {
		{ "Category", "Data" },
		{ "EditCondition", "bOverrideDefaultParams" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayLength = { "RayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGWorldRayHitQueryParams, RayLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bApplyMetadataFromLandscape_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// TODO: see in FCollisionQueryParams if there are some flags we want to expose\n// examples: bReturnFaceIndex, bReturnPhysicalMaterial, some ignore patterns\n" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TODO: see in FCollisionQueryParams if there are some flags we want to expose\nexamples: bReturnFaceIndex, bReturnPhysicalMaterial, some ignore patterns" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bApplyMetadataFromLandscape_SetBit(void* Obj)
	{
		((FPCGWorldRayHitQueryParams*)Obj)->bApplyMetadataFromLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bApplyMetadataFromLandscape = { "bApplyMetadataFromLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGWorldRayHitQueryParams), &Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bApplyMetadataFromLandscape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bApplyMetadataFromLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bApplyMetadataFromLandscape_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bOverrideDefaultParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_RayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bApplyMetadataFromLandscape,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams,
		&NewStructOps,
		"PCGWorldRayHitQueryParams",
		sizeof(FPCGWorldRayHitQueryParams),
		alignof(FPCGWorldRayHitQueryParams),
		Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGWorldRayHitQueryParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGWorldRayHitQueryParams.InnerSingleton, Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGWorldRayHitQueryParams.InnerSingleton;
	}
	void UPCGWorldRayHitData::StaticRegisterNativesUPCGWorldRayHitData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGWorldRayHitData);
	UClass* Z_Construct_UClass_UPCGWorldRayHitData_NoRegister()
	{
		return UPCGWorldRayHitData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGWorldRayHitData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginatingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OriginatingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGWorldRayHitData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSurfaceData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldRayHitData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Executes collision queries against world collision. */" },
		{ "IncludePath", "Data/PCGWorldData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "ToolTip", "Executes collision queries against world collision." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "// ~End UPCGConcreteDataWithPointCache interface\n" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "ToolTip", "~End UPCGConcreteDataWithPointCache interface" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGWorldRayHitData, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_OriginatingComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_OriginatingComponent = { "OriginatingComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGWorldRayHitData, OriginatingComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_OriginatingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_OriginatingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGWorldRayHitData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_QueryParams_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Data/PCGWorldData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGWorldRayHitData, QueryParams), Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams, METADATA_PARAMS(Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_QueryParams_MetaData)) }; // 2934727496
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGWorldRayHitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_OriginatingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorldRayHitData_Statics::NewProp_QueryParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGWorldRayHitData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGWorldRayHitData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGWorldRayHitData_Statics::ClassParams = {
		&UPCGWorldRayHitData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGWorldRayHitData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldRayHitData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGWorldRayHitData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldRayHitData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGWorldRayHitData()
	{
		if (!Z_Registration_Info_UClass_UPCGWorldRayHitData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGWorldRayHitData.OuterSingleton, Z_Construct_UClass_UPCGWorldRayHitData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGWorldRayHitData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGWorldRayHitData>()
	{
		return UPCGWorldRayHitData::StaticClass();
	}
	UPCGWorldRayHitData::UPCGWorldRayHitData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGWorldRayHitData);
	UPCGWorldRayHitData::~UPCGWorldRayHitData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics::EnumInfo[] = {
		{ EPCGWorldQueryFilterByTag_StaticEnum, TEXT("EPCGWorldQueryFilterByTag"), &Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 517786070U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics::ScriptStructInfo[] = {
		{ FPCGWorldCommonQueryParams::StaticStruct, Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewStructOps, TEXT("PCGWorldCommonQueryParams"), &Z_Registration_Info_UScriptStruct_PCGWorldCommonQueryParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGWorldCommonQueryParams), 4129026104U) },
		{ FPCGWorldVolumetricQueryParams::StaticStruct, Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewStructOps, TEXT("PCGWorldVolumetricQueryParams"), &Z_Registration_Info_UScriptStruct_PCGWorldVolumetricQueryParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGWorldVolumetricQueryParams), 2445480103U) },
		{ FPCGWorldRayHitQueryParams::StaticStruct, Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewStructOps, TEXT("PCGWorldRayHitQueryParams"), &Z_Registration_Info_UScriptStruct_PCGWorldRayHitQueryParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGWorldRayHitQueryParams), 2934727496U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGWorldVolumetricData, UPCGWorldVolumetricData::StaticClass, TEXT("UPCGWorldVolumetricData"), &Z_Registration_Info_UClass_UPCGWorldVolumetricData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGWorldVolumetricData), 652169280U) },
		{ Z_Construct_UClass_UPCGWorldRayHitData, UPCGWorldRayHitData::StaticClass, TEXT("UPCGWorldRayHitData"), &Z_Registration_Info_UClass_UPCGWorldRayHitData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGWorldRayHitData), 4213280467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_986760997(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
