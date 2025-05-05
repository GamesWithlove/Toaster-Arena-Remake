// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataOpElementBase.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataOpElementBase() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseMode;
	static UEnum* EPCGMetadataSettingsBaseMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataSettingsBaseMode"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataSettingsBaseMode>()
	{
		return EPCGMetadataSettingsBaseMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode_Statics::Enumerators[] = {
		{ "EPCGMetadataSettingsBaseMode::Inferred", (int64)EPCGMetadataSettingsBaseMode::Inferred },
		{ "EPCGMetadataSettingsBaseMode::NoBroadcast", (int64)EPCGMetadataSettingsBaseMode::NoBroadcast },
		{ "EPCGMetadataSettingsBaseMode::Broadcast", (int64)EPCGMetadataSettingsBaseMode::Broadcast },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode_Statics::Enum_MetaDataParams[] = {
		{ "Broadcast.Name", "EPCGMetadataSettingsBaseMode::Broadcast" },
		{ "Broadcast.ToolTip", "If there is no entry or a single entry, will repeat this value." },
		{ "Comment", "// Defines behavior when number of entries doesn't match in inputs\n" },
		{ "Inferred.Name", "EPCGMetadataSettingsBaseMode::Inferred" },
		{ "Inferred.Tooltip", "Broadcast for ParamData and no broadcast for SpatialData." },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataOpElementBase.h" },
		{ "NoBroadcast.Name", "EPCGMetadataSettingsBaseMode::NoBroadcast" },
		{ "NoBroadcast.ToolTip", "If number of entries doesn't match, will use the default value." },
		{ "ToolTip", "Defines behavior when number of entries doesn't match in inputs" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataSettingsBaseMode",
		"EPCGMetadataSettingsBaseMode",
		Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseTypes;
	static UEnum* EPCGMetadataSettingsBaseTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataSettingsBaseTypes"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseTypes.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataSettingsBaseTypes>()
	{
		return EPCGMetadataSettingsBaseTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes_Statics::Enumerators[] = {
		{ "EPCGMetadataSettingsBaseTypes::AutoUpcastTypes", (int64)EPCGMetadataSettingsBaseTypes::AutoUpcastTypes },
		{ "EPCGMetadataSettingsBaseTypes::StrictTypes", (int64)EPCGMetadataSettingsBaseTypes::StrictTypes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes_Statics::Enum_MetaDataParams[] = {
		{ "AutoUpcastTypes.Name", "EPCGMetadataSettingsBaseTypes::AutoUpcastTypes" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataOpElementBase.h" },
		{ "StrictTypes.Name", "EPCGMetadataSettingsBaseTypes::StrictTypes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataSettingsBaseTypes",
		"EPCGMetadataSettingsBaseTypes",
		Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseTypes.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseTypes.InnerSingleton;
	}
	void UPCGMetadataSettingsBase::StaticRegisterNativesUPCGMetadataSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataSettingsBase);
	UClass* Z_Construct_UClass_UPCGMetadataSettingsBase_NoRegister()
	{
		return UPCGMetadataSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputTarget;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputAttributeName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Base class for all Metadata operations.\n * Metadata operation can work with attributes or properties. For example you could compute the addition between all points density and a constant from\n * a param data.\n * The output will be the duplication of the first input, with the same metadata + the result of the operation (either in an attribute or a property)\n * The new attribute can collide with one of the attributes in the incoming metadata. In this case, the attribute value will be overridden by the result\n * of the operation. It will also override the type of the attribute if it doesn't match the original.\n * \n * We only support operations between points and between spatial data. They all need to match (or be a param data)\n * For example, if input 0 is a point data and input 1 is a spatial data, we fail.\n * \n * You can specify the name of the attribute for each input and for the output.\n * If the input name is None, it will take the lastest attribute in the input metadata.\n * If the output name is None, it will take the input name.\n * \n * Each operation has some requirements for the input types, and can broadcast some values into others (example Vector + Float -> Vector).\n * For example, if the op only accept booleans, all other value types will throw an error.\n * \n * If there are multiple values for an attribute, the operation will be done on all values. If one input has N elements and the second has 1 element,\n * the second will be repeated for each element of the first for the operation. We only support N-N operations and N-1 operation (ie. The number of values\n * needs to be all the same or 1)\n * \n * If the node doesn't provide an output, check the logs to know why it failed.\n */" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataOpElementBase.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataOpElementBase.h" },
		{ "ToolTip", "Base class for all Metadata operations.\nMetadata operation can work with attributes or properties. For example you could compute the addition between all points density and a constant from\na param data.\nThe output will be the duplication of the first input, with the same metadata + the result of the operation (either in an attribute or a property)\nThe new attribute can collide with one of the attributes in the incoming metadata. In this case, the attribute value will be overridden by the result\nof the operation. It will also override the type of the attribute if it doesn't match the original.\n\nWe only support operations between points and between spatial data. They all need to match (or be a param data)\nFor example, if input 0 is a point data and input 1 is a spatial data, we fail.\n\nYou can specify the name of the attribute for each input and for the output.\nIf the input name is None, it will take the lastest attribute in the input metadata.\nIf the output name is None, it will take the input name.\n\nEach operation has some requirements for the input types, and can broadcast some values into others (example Vector + Float -> Vector).\nFor example, if the op only accept booleans, all other value types will throw an error.\n\nIf there are multiple values for an attribute, the operation will be done on all values. If one input has N elements and the second has 1 element,\nthe second will be repeated for each element of the first for the operation. We only support N-N operations and N-1 operation (ie. The number of values\nneeds to be all the same or 1)\n\nIf the node doesn't provide an output, check the logs to know why it failed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputTarget_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataOpElementBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputTarget = { "OutputTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataSettingsBase, OutputTarget), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputTarget_MetaData)) }; // 3655039818
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataOpElementBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputAttributeName = { "OutputAttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataSettingsBase, OutputAttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputAttributeName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_Mode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataOpElementBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataSettingsBase, Mode_DEPRECATED), Z_Construct_UEnum_PCG_EPCGMetadataSettingsBaseMode, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_Mode_MetaData)) }; // 3716256021
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputTarget,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_OutputAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::NewProp_Mode,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::ClassParams = {
		&UPCGMetadataSettingsBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataSettingsBase()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataSettingsBase.OuterSingleton, Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataSettingsBase.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataSettingsBase>()
	{
		return UPCGMetadataSettingsBase::StaticClass();
	}
	UPCGMetadataSettingsBase::UPCGMetadataSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataSettingsBase);
	UPCGMetadataSettingsBase::~UPCGMetadataSettingsBase() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_Statics::EnumInfo[] = {
		{ EPCGMetadataSettingsBaseMode_StaticEnum, TEXT("EPCGMetadataSettingsBaseMode"), &Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3716256021U) },
		{ EPCGMetadataSettingsBaseTypes_StaticEnum, TEXT("EPCGMetadataSettingsBaseTypes"), &Z_Registration_Info_UEnum_EPCGMetadataSettingsBaseTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3990852453U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataSettingsBase, UPCGMetadataSettingsBase::StaticClass, TEXT("UPCGMetadataSettingsBase"), &Z_Registration_Info_UClass_UPCGMetadataSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataSettingsBase), 119159662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_1058627903(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
