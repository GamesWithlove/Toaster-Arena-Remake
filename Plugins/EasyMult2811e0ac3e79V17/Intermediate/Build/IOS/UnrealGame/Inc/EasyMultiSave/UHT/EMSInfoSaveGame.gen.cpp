// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSInfoSaveGame.h"
#include "EMSData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSInfoSaveGame() {}

// ********** Begin Cross Module References ********************************************************
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEMSInfoSaveGame *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEMSInfoSaveGame;
UClass* UEMSInfoSaveGame::GetPrivateStaticClass()
{
	using TClass = UEMSInfoSaveGame;
	if (!Z_Registration_Info_UClass_UEMSInfoSaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EMSInfoSaveGame"),
			Z_Registration_Info_UClass_UEMSInfoSaveGame.InnerSingleton,
			StaticRegisterNativesUEMSInfoSaveGame,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEMSInfoSaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister()
{
	return UEMSInfoSaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEMSInfoSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Public/EMSInfoSaveGame.h" },
		{ "ModuleRelativePath", "Common/Public/EMSInfoSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfo_MetaData[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "Common/Public/EMSInfoSaveGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEMSInfoSaveGame constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEMSInfoSaveGame constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSInfoSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEMSInfoSaveGame_Statics

// ********** Begin Class UEMSInfoSaveGame Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSInfoSaveGame, SlotInfo), Z_Construct_UScriptStruct_FSaveSlotInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInfo_MetaData), NewProp_SlotInfo_MetaData) }; // 2264383217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSInfoSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSInfoSaveGame_Statics::PropPointers) < 2048);
// ********** End Class UEMSInfoSaveGame Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UEMSInfoSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSInfoSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSInfoSaveGame_Statics::ClassParams = {
	&UEMSInfoSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEMSInfoSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSInfoSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSInfoSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSInfoSaveGame_Statics::Class_MetaDataParams)
};
void UEMSInfoSaveGame::StaticRegisterNativesUEMSInfoSaveGame()
{
}
UClass* Z_Construct_UClass_UEMSInfoSaveGame()
{
	if (!Z_Registration_Info_UClass_UEMSInfoSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSInfoSaveGame.OuterSingleton, Z_Construct_UClass_UEMSInfoSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSInfoSaveGame.OuterSingleton;
}
UEMSInfoSaveGame::UEMSInfoSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEMSInfoSaveGame);
UEMSInfoSaveGame::~UEMSInfoSaveGame() {}
// ********** End Class UEMSInfoSaveGame ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSInfoSaveGame_h__Script_EasyMultiSave_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSInfoSaveGame, UEMSInfoSaveGame::StaticClass, TEXT("UEMSInfoSaveGame"), &Z_Registration_Info_UClass_UEMSInfoSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSInfoSaveGame), 3232665533U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSInfoSaveGame_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSInfoSaveGame_h__Script_EasyMultiSave_2777545926{
	TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSInfoSaveGame_h__Script_EasyMultiSave_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSInfoSaveGame_h__Script_EasyMultiSave_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
