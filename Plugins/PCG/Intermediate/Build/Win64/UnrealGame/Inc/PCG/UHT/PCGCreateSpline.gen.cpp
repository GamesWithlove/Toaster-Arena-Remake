// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGCreateSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCreateSpline() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGCreateSplineSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGCreateSplineSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGCreateSplineMode();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGCreateSplineMode;
	static UEnum* EPCGCreateSplineMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGCreateSplineMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGCreateSplineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCreateSplineMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGCreateSplineMode"));
		}
		return Z_Registration_Info_UEnum_EPCGCreateSplineMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGCreateSplineMode>()
	{
		return EPCGCreateSplineMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGCreateSplineMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGCreateSplineMode_Statics::Enumerators[] = {
		{ "EPCGCreateSplineMode::CreateDataOnly", (int64)EPCGCreateSplineMode::CreateDataOnly },
		{ "EPCGCreateSplineMode::CreateComponent", (int64)EPCGCreateSplineMode::CreateComponent },
		{ "EPCGCreateSplineMode::CreateNewActor", (int64)EPCGCreateSplineMode::CreateNewActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGCreateSplineMode_Statics::Enum_MetaDataParams[] = {
		{ "CreateComponent.Name", "EPCGCreateSplineMode::CreateComponent" },
		{ "CreateDataOnly.Name", "EPCGCreateSplineMode::CreateDataOnly" },
		{ "CreateNewActor.Hidden", "" },
		{ "CreateNewActor.Name", "EPCGCreateSplineMode::CreateNewActor" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateSpline.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGCreateSplineMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGCreateSplineMode",
		"EPCGCreateSplineMode",
		Z_Construct_UEnum_PCG_EPCGCreateSplineMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGCreateSplineMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGCreateSplineMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGCreateSplineMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGCreateSplineMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGCreateSplineMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGCreateSplineMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGCreateSplineMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGCreateSplineMode.InnerSingleton;
	}
	void UPCGCreateSplineSettings::StaticRegisterNativesUPCGCreateSplineSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCreateSplineSettings);
	UClass* Z_Construct_UClass_UPCGCreateSplineSettings_NoRegister()
	{
		return UPCGCreateSplineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGCreateSplineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[];
#endif
		static void NewProp_bClosedLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinear_MetaData[];
#endif
		static void NewProp_bLinear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomTangents_MetaData[];
#endif
		static void NewProp_bApplyCustomTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ArriveTangentAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveTangentAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGCreateSplineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateSplineSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** PCG node that creates a spline presentation from the input points data, with optional tangents */" },
		{ "IncludePath", "Elements/PCGCreateSpline.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateSpline.h" },
		{ "ToolTip", "PCG node that creates a spline presentation from the input points data, with optional tangents" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateSpline.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateSplineSettings, Mode), Z_Construct_UEnum_PCG_EPCGCreateSplineMode, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_Mode_MetaData)) }; // 3291850002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateSpline.h" },
	};
#endif
	void Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bClosedLoop_SetBit(void* Obj)
	{
		((UPCGCreateSplineSettings*)Obj)->bClosedLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGCreateSplineSettings), &Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bClosedLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bClosedLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bLinear_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Controls whether the segment between control points is a curve (when false) or a straight line (when true).\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateSpline.h" },
		{ "ToolTip", "Controls whether the segment between control points is a curve (when false) or a straight line (when true)." },
	};
#endif
	void Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bLinear_SetBit(void* Obj)
	{
		((UPCGCreateSplineSettings*)Obj)->bLinear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bLinear = { "bLinear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGCreateSplineSettings), &Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bLinear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bLinear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bLinear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bApplyCustomTangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateSpline.h" },
	};
#endif
	void Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bApplyCustomTangents_SetBit(void* Obj)
	{
		((UPCGCreateSplineSettings*)Obj)->bApplyCustomTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bApplyCustomTangents = { "bApplyCustomTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGCreateSplineSettings), &Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bApplyCustomTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bApplyCustomTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bApplyCustomTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_ArriveTangentAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bApplyCustomTangents" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateSpline.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_ArriveTangentAttribute = { "ArriveTangentAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateSplineSettings, ArriveTangentAttribute), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_ArriveTangentAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_ArriveTangentAttribute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_LeaveTangentAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bApplyCustomTangents" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateSpline.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_LeaveTangentAttribute = { "LeaveTangentAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateSplineSettings, LeaveTangentAttribute), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_LeaveTangentAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_LeaveTangentAttribute_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCreateSplineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bClosedLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bLinear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_bApplyCustomTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_ArriveTangentAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSplineSettings_Statics::NewProp_LeaveTangentAttribute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGCreateSplineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCreateSplineSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCreateSplineSettings_Statics::ClassParams = {
		&UPCGCreateSplineSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGCreateSplineSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSplineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGCreateSplineSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGCreateSplineSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCreateSplineSettings.OuterSingleton, Z_Construct_UClass_UPCGCreateSplineSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGCreateSplineSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGCreateSplineSettings>()
	{
		return UPCGCreateSplineSettings::StaticClass();
	}
	UPCGCreateSplineSettings::UPCGCreateSplineSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCreateSplineSettings);
	UPCGCreateSplineSettings::~UPCGCreateSplineSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_Statics::EnumInfo[] = {
		{ EPCGCreateSplineMode_StaticEnum, TEXT("EPCGCreateSplineMode"), &Z_Registration_Info_UEnum_EPCGCreateSplineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3291850002U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCreateSplineSettings, UPCGCreateSplineSettings::StaticClass, TEXT("UPCGCreateSplineSettings"), &Z_Registration_Info_UClass_UPCGCreateSplineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCreateSplineSettings), 3904831031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_602892146(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
