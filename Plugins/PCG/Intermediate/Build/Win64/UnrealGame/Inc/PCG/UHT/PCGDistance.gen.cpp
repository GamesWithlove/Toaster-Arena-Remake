// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGDistance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDistance() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGDistanceSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGDistanceSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_PCGDistanceShape();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_PCGDistanceShape;
	static UEnum* PCGDistanceShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_PCGDistanceShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_PCGDistanceShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_PCGDistanceShape, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGDistanceShape"));
		}
		return Z_Registration_Info_UEnum_PCGDistanceShape.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<PCGDistanceShape>()
	{
		return PCGDistanceShape_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_PCGDistanceShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_PCGDistanceShape_Statics::Enumerators[] = {
		{ "PCGDistanceShape::SphereBounds", (int64)PCGDistanceShape::SphereBounds },
		{ "PCGDistanceShape::BoxBounds", (int64)PCGDistanceShape::BoxBounds },
		{ "PCGDistanceShape::Center", (int64)PCGDistanceShape::Center },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_PCGDistanceShape_Statics::Enum_MetaDataParams[] = {
		{ "BoxBounds.Name", "PCGDistanceShape::BoxBounds" },
		{ "Center.Name", "PCGDistanceShape::Center" },
		{ "ModuleRelativePath", "Public/Elements/PCGDistance.h" },
		{ "SphereBounds.Name", "PCGDistanceShape::SphereBounds" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_PCGDistanceShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"PCGDistanceShape",
		"PCGDistanceShape",
		Z_Construct_UEnum_PCG_PCGDistanceShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_PCGDistanceShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_PCGDistanceShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_PCGDistanceShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_PCGDistanceShape()
	{
		if (!Z_Registration_Info_UEnum_PCGDistanceShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PCGDistanceShape.InnerSingleton, Z_Construct_UEnum_PCG_PCGDistanceShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_PCGDistanceShape.InnerSingleton;
	}
	void UPCGDistanceSettings::StaticRegisterNativesUPCGDistanceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDistanceSettings);
	UClass* Z_Construct_UClass_UPCGDistanceSettings_NoRegister()
	{
		return UPCGDistanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDistanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputDistanceVector_MetaData[];
#endif
		static void NewProp_bOutputDistanceVector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputDistanceVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetDensity_MetaData[];
#endif
		static void NewProp_bSetDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaximumDistance;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceShape;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetShape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDistanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDistanceSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Calculates the distance between two points (inherently a n*n operation)\n */" },
		{ "IncludePath", "Elements/PCGDistance.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGDistance.h" },
		{ "ToolTip", "Calculates the distance between two points (inherently a n*n operation)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to store on the point.Use 'None' to disable */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDistance.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to store on the point.Use 'None' to disable" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDistanceSettings, AttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bOutputDistanceVector_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls whether the attribute will be a scalar or a vector */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDistance.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls whether the attribute will be a scalar or a vector" },
	};
#endif
	void Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bOutputDistanceVector_SetBit(void* Obj)
	{
		((UPCGDistanceSettings*)Obj)->bOutputDistanceVector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bOutputDistanceVector = { "bOutputDistanceVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGDistanceSettings), &Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bOutputDistanceVector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bOutputDistanceVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bOutputDistanceVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bSetDensity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, will also set the density to be 0 - 1 based on MaximumDistance */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDistance.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If true, will also set the density to be 0 - 1 based on MaximumDistance" },
	};
#endif
	void Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bSetDensity_SetBit(void* Obj)
	{
		((UPCGDistanceSettings*)Obj)->bSetDensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bSetDensity = { "bSetDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGDistanceSettings), &Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bSetDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bSetDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bSetDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_MaximumDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** A maximum distance to search, which is used as an optimization */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDistance.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A maximum distance to search, which is used as an optimization" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_MaximumDistance = { "MaximumDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDistanceSettings, MaximumDistance), METADATA_PARAMS(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_MaximumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_MaximumDistance_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_SourceShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_SourceShape_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What shape is used on the 'source' points */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDistance.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "What shape is used on the 'source' points" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_SourceShape = { "SourceShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDistanceSettings, SourceShape), Z_Construct_UEnum_PCG_PCGDistanceShape, METADATA_PARAMS(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_SourceShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_SourceShape_MetaData)) }; // 1337963856
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_TargetShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_TargetShape_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What shape is used on the 'target' points */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDistance.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "What shape is used on the 'target' points" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_TargetShape = { "TargetShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDistanceSettings, TargetShape), Z_Construct_UEnum_PCG_PCGDistanceShape, METADATA_PARAMS(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_TargetShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_TargetShape_MetaData)) }; // 1337963856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGDistanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bOutputDistanceVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_bSetDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_MaximumDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_SourceShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_SourceShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_TargetShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDistanceSettings_Statics::NewProp_TargetShape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDistanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDistanceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDistanceSettings_Statics::ClassParams = {
		&UPCGDistanceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGDistanceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDistanceSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGDistanceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDistanceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDistanceSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGDistanceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDistanceSettings.OuterSingleton, Z_Construct_UClass_UPCGDistanceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDistanceSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDistanceSettings>()
	{
		return UPCGDistanceSettings::StaticClass();
	}
	UPCGDistanceSettings::UPCGDistanceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDistanceSettings);
	UPCGDistanceSettings::~UPCGDistanceSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_Statics::EnumInfo[] = {
		{ PCGDistanceShape_StaticEnum, TEXT("PCGDistanceShape"), &Z_Registration_Info_UEnum_PCGDistanceShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1337963856U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDistanceSettings, UPCGDistanceSettings::StaticClass, TEXT("UPCGDistanceSettings"), &Z_Registration_Info_UClass_UPCGDistanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDistanceSettings), 1211909402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_3350701254(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
