// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGDataFromActor.h"
#include "PCG/Public/Elements/PCGActorSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDataFromActor() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGDataFromActorSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGDataFromActorSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGActorSelectorSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGGetDataFromActorMode;
	static UEnum* EPCGGetDataFromActorMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGGetDataFromActorMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGGetDataFromActorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGGetDataFromActorMode"));
		}
		return Z_Registration_Info_UEnum_EPCGGetDataFromActorMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGGetDataFromActorMode>()
	{
		return EPCGGetDataFromActorMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode_Statics::Enumerators[] = {
		{ "EPCGGetDataFromActorMode::ParseActorComponents", (int64)EPCGGetDataFromActorMode::ParseActorComponents },
		{ "EPCGGetDataFromActorMode::GetSinglePoint", (int64)EPCGGetDataFromActorMode::GetSinglePoint },
		{ "EPCGGetDataFromActorMode::GetDataFromProperty", (int64)EPCGGetDataFromActorMode::GetDataFromProperty },
		{ "EPCGGetDataFromActorMode::GetDataFromPCGComponent", (int64)EPCGGetDataFromActorMode::GetDataFromPCGComponent },
		{ "EPCGGetDataFromActorMode::GetDataFromPCGComponentOrParseComponents", (int64)EPCGGetDataFromActorMode::GetDataFromPCGComponentOrParseComponents },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode_Statics::Enum_MetaDataParams[] = {
		{ "GetDataFromPCGComponent.Name", "EPCGGetDataFromActorMode::GetDataFromPCGComponent" },
		{ "GetDataFromPCGComponentOrParseComponents.Name", "EPCGGetDataFromActorMode::GetDataFromPCGComponentOrParseComponents" },
		{ "GetDataFromProperty.Name", "EPCGGetDataFromActorMode::GetDataFromProperty" },
		{ "GetSinglePoint.Name", "EPCGGetDataFromActorMode::GetSinglePoint" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataFromActor.h" },
		{ "ParseActorComponents.Name", "EPCGGetDataFromActorMode::ParseActorComponents" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGGetDataFromActorMode",
		"EPCGGetDataFromActorMode",
		Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGGetDataFromActorMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGGetDataFromActorMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGGetDataFromActorMode.InnerSingleton;
	}
	void UPCGDataFromActorSettings::StaticRegisterNativesUPCGDataFromActorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDataFromActorSettings);
	UClass* Z_Construct_UClass_UPCGDataFromActorSettings_NoRegister()
	{
		return UPCGDataFromActorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDataFromActorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSelector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorSelector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayModeSettings_MetaData[];
#endif
		static void NewProp_bDisplayModeSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayModeSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExpectedPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpectedPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackActorsOnlyWithinBounds_MetaData[];
#endif
		static void NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackActorsOnlyWithinBounds;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDataFromActorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataFromActorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Builds a collection of PCG-compatible data from the selected actors. */" },
		{ "IncludePath", "Elements/PCGDataFromActor.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataFromActor.h" },
		{ "ToolTip", "Builds a collection of PCG-compatible data from the selected actors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ActorSelector_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataFromActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ActorSelector = { "ActorSelector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDataFromActorSettings, ActorSelector), Z_Construct_UScriptStruct_FPCGActorSelectorSettings, METADATA_PARAMS(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ActorSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ActorSelector_MetaData)) }; // 1237266657
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bDisplayModeSettings" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataFromActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDataFromActorSettings, Mode), Z_Construct_UEnum_PCG_EPCGGetDataFromActorMode, METADATA_PARAMS(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_Mode_MetaData)) }; // 3123689807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bDisplayModeSettings_MetaData[] = {
		{ "Comment", "// This can be set false by inheriting nodes to hide the 'Mode' property.\n" },
		{ "EditCondition", "FALSE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataFromActor.h" },
		{ "ToolTip", "This can be set false by inheriting nodes to hide the 'Mode' property." },
	};
#endif
	void Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bDisplayModeSettings_SetBit(void* Obj)
	{
		((UPCGDataFromActorSettings*)Obj)->bDisplayModeSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bDisplayModeSettings = { "bDisplayModeSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGDataFromActorSettings), &Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bDisplayModeSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bDisplayModeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bDisplayModeSettings_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ExpectedPins_Inner = { "ExpectedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ExpectedPins_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGGetDataFromActorMode::GetDataFromPCGComponent || Mode == EPCGGetDataFromActorMode::GetDataFromPCGComponentOrParseComponents" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataFromActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ExpectedPins = { "ExpectedPins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDataFromActorSettings, ExpectedPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ExpectedPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ExpectedPins_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGGetDataFromActorMode::GetDataFromProperty" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataFromActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDataFromActorSettings, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataFromActor.h" },
		{ "ToolTip", "If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor." },
	};
#endif
	void Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj)
	{
		((UPCGDataFromActorSettings*)Obj)->bTrackActorsOnlyWithinBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds = { "bTrackActorsOnlyWithinBounds", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGDataFromActorSettings), &Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGDataFromActorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ActorSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bDisplayModeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ExpectedPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_ExpectedPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_PropertyName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataFromActorSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDataFromActorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDataFromActorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDataFromActorSettings_Statics::ClassParams = {
		&UPCGDataFromActorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGDataFromActorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFromActorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDataFromActorSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGDataFromActorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDataFromActorSettings.OuterSingleton, Z_Construct_UClass_UPCGDataFromActorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDataFromActorSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDataFromActorSettings>()
	{
		return UPCGDataFromActorSettings::StaticClass();
	}
	UPCGDataFromActorSettings::UPCGDataFromActorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDataFromActorSettings);
	UPCGDataFromActorSettings::~UPCGDataFromActorSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_Statics::EnumInfo[] = {
		{ EPCGGetDataFromActorMode_StaticEnum, TEXT("EPCGGetDataFromActorMode"), &Z_Registration_Info_UEnum_EPCGGetDataFromActorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3123689807U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDataFromActorSettings, UPCGDataFromActorSettings::StaticClass, TEXT("UPCGDataFromActorSettings"), &Z_Registration_Info_UClass_UPCGDataFromActorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDataFromActorSettings), 2467018687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_313938259(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
