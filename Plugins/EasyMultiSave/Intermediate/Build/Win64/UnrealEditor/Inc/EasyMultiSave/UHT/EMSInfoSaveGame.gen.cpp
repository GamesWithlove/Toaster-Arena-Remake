// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSInfoSaveGame.h"
#include "EasyMultiSave/Public/EMSData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSInfoSaveGame() {}
// Cross Module References
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	void UEMSInfoSaveGame::StaticRegisterNativesUEMSInfoSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSInfoSaveGame);
	UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister()
	{
		return UEMSInfoSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UEMSInfoSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSInfoSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSInfoSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSInfoSaveGame.h" },
		{ "ModuleRelativePath", "Public/EMSInfoSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo_MetaData[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "Public/EMSInfoSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSInfoSaveGame, SlotInfo), Z_Construct_UScriptStruct_FSaveSlotInfo, METADATA_PARAMS(Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo_MetaData)) }; // 2846274175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSInfoSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSInfoSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSInfoSaveGame>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UEMSInfoSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSInfoSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSInfoSaveGame()
	{
		if (!Z_Registration_Info_UClass_UEMSInfoSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSInfoSaveGame.OuterSingleton, Z_Construct_UClass_UEMSInfoSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSInfoSaveGame.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSInfoSaveGame>()
	{
		return UEMSInfoSaveGame::StaticClass();
	}
	UEMSInfoSaveGame::UEMSInfoSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSInfoSaveGame);
	UEMSInfoSaveGame::~UEMSInfoSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSInfoSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSInfoSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSInfoSaveGame, UEMSInfoSaveGame::StaticClass, TEXT("UEMSInfoSaveGame"), &Z_Registration_Info_UClass_UEMSInfoSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSInfoSaveGame), 4056427401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSInfoSaveGame_h_2762937575(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSInfoSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSInfoSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
