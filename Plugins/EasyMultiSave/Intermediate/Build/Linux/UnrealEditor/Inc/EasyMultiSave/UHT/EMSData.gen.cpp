// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EActorType();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EDataLoadType();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveErrorType();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveGameMode();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FControllerSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FGameObjectSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelArchive();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelScriptSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStackArchive();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiLevelStreamingData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerArchive();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerPositionArchive();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStackArchive();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FRawObjectSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveVersionInfo();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateActorResult;
	static UEnum* EUpdateActorResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUpdateActorResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUpdateActorResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EUpdateActorResult"));
		}
		return Z_Registration_Info_UEnum_EUpdateActorResult.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EUpdateActorResult>()
	{
		return EUpdateActorResult_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Statics::Enumerators[] = {
		{ "EUpdateActorResult::RES_Success", (int64)EUpdateActorResult::RES_Success },
		{ "EUpdateActorResult::RES_Skip", (int64)EUpdateActorResult::RES_Skip },
		{ "EUpdateActorResult::RES_ShouldSpawnNewActor", (int64)EUpdateActorResult::RES_ShouldSpawnNewActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
		{ "RES_ShouldSpawnNewActor.Name", "EUpdateActorResult::RES_ShouldSpawnNewActor" },
		{ "RES_Skip.Name", "EUpdateActorResult::RES_Skip" },
		{ "RES_Success.Name", "EUpdateActorResult::RES_Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EUpdateActorResult",
		"EUpdateActorResult",
		Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult()
	{
		if (!Z_Registration_Info_UEnum_EUpdateActorResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateActorResult.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUpdateActorResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLoadType;
	static UEnum* EDataLoadType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataLoadType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataLoadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EDataLoadType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EDataLoadType"));
		}
		return Z_Registration_Info_UEnum_EDataLoadType.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EDataLoadType>()
	{
		return EDataLoadType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enumerators[] = {
		{ "EDataLoadType::DATA_Level", (int64)EDataLoadType::DATA_Level },
		{ "EDataLoadType::DATA_Player", (int64)EDataLoadType::DATA_Player },
		{ "EDataLoadType::DATA_Object", (int64)EDataLoadType::DATA_Object },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enum_MetaDataParams[] = {
		{ "DATA_Level.Name", "EDataLoadType::DATA_Level" },
		{ "DATA_Object.Name", "EDataLoadType::DATA_Object" },
		{ "DATA_Player.Name", "EDataLoadType::DATA_Player" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EDataLoadType",
		"EDataLoadType",
		Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EDataLoadType()
	{
		if (!Z_Registration_Info_UEnum_EDataLoadType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLoadType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataLoadType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorType;
	static UEnum* EActorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EActorType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EActorType"));
		}
		return Z_Registration_Info_UEnum_EActorType.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EActorType>()
	{
		return EActorType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EActorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enumerators[] = {
		{ "EActorType::AT_Runtime", (int64)EActorType::AT_Runtime },
		{ "EActorType::AT_Placed", (int64)EActorType::AT_Placed },
		{ "EActorType::AT_LevelScript", (int64)EActorType::AT_LevelScript },
		{ "EActorType::AT_PlayerActor", (int64)EActorType::AT_PlayerActor },
		{ "EActorType::AT_PlayerPawn", (int64)EActorType::AT_PlayerPawn },
		{ "EActorType::AT_GameObject", (int64)EActorType::AT_GameObject },
		{ "EActorType::AT_Persistent", (int64)EActorType::AT_Persistent },
		{ "EActorType::AT_Destroyed", (int64)EActorType::AT_Destroyed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enum_MetaDataParams[] = {
		{ "AT_Destroyed.Name", "EActorType::AT_Destroyed" },
		{ "AT_GameObject.Name", "EActorType::AT_GameObject" },
		{ "AT_LevelScript.Name", "EActorType::AT_LevelScript" },
		{ "AT_Persistent.Name", "EActorType::AT_Persistent" },
		{ "AT_Placed.Name", "EActorType::AT_Placed" },
		{ "AT_PlayerActor.Name", "EActorType::AT_PlayerActor" },
		{ "AT_PlayerPawn.Name", "EActorType::AT_PlayerPawn" },
		{ "AT_Runtime.Name", "EActorType::AT_Runtime" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EActorType",
		"EActorType",
		Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EActorType()
	{
		if (!Z_Registration_Info_UEnum_EActorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveGameMode;
	static UEnum* ESaveGameMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESaveGameMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESaveGameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveGameMode"));
		}
		return Z_Registration_Info_UEnum_ESaveGameMode.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveGameMode>()
	{
		return ESaveGameMode_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enumerators[] = {
		{ "ESaveGameMode::MODE_Player", (int64)ESaveGameMode::MODE_Player },
		{ "ESaveGameMode::MODE_Level", (int64)ESaveGameMode::MODE_Level },
		{ "ESaveGameMode::MODE_All", (int64)ESaveGameMode::MODE_All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enum_MetaDataParams[] = {
		{ "MODE_All.Name", "ESaveGameMode::MODE_All" },
		{ "MODE_Level.Name", "ESaveGameMode::MODE_Level" },
		{ "MODE_Player.Name", "ESaveGameMode::MODE_Player" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"ESaveGameMode",
		"ESaveGameMode",
		Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveGameMode()
	{
		if (!Z_Registration_Info_UEnum_ESaveGameMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveGameMode.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESaveGameMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAsyncCheckType;
	static UEnum* EAsyncCheckType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAsyncCheckType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAsyncCheckType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EAsyncCheckType"));
		}
		return Z_Registration_Info_UEnum_EAsyncCheckType.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EAsyncCheckType>()
	{
		return EAsyncCheckType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enumerators[] = {
		{ "EAsyncCheckType::CT_Both", (int64)EAsyncCheckType::CT_Both },
		{ "EAsyncCheckType::CT_Save", (int64)EAsyncCheckType::CT_Save },
		{ "EAsyncCheckType::CT_Load", (int64)EAsyncCheckType::CT_Load },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enum_MetaDataParams[] = {
		{ "CT_Both.DisplayName", "Both" },
		{ "CT_Both.Name", "EAsyncCheckType::CT_Both" },
		{ "CT_Load.DisplayName", "Load Only" },
		{ "CT_Load.Name", "EAsyncCheckType::CT_Load" },
		{ "CT_Save.DisplayName", "Save Only" },
		{ "CT_Save.Name", "EAsyncCheckType::CT_Save" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EAsyncCheckType",
		"EAsyncCheckType",
		Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType()
	{
		if (!Z_Registration_Info_UEnum_EAsyncCheckType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAsyncCheckType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAsyncCheckType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveErrorType;
	static UEnum* ESaveErrorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESaveErrorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESaveErrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveErrorType"));
		}
		return Z_Registration_Info_UEnum_ESaveErrorType.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveErrorType>()
	{
		return ESaveErrorType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enumerators[] = {
		{ "ESaveErrorType::ER_Player", (int64)ESaveErrorType::ER_Player },
		{ "ESaveErrorType::ER_Level", (int64)ESaveErrorType::ER_Level },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ER_Level.DisplayName", "Level Actors" },
		{ "ER_Level.Name", "ESaveErrorType::ER_Level" },
		{ "ER_Player.DisplayName", "Player Actors" },
		{ "ER_Player.Name", "ESaveErrorType::ER_Player" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"ESaveErrorType",
		"ESaveErrorType",
		Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveErrorType()
	{
		if (!Z_Registration_Info_UEnum_ESaveErrorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveErrorType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESaveErrorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadMethod;
	static UEnum* ELoadMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoadMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoadMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadMethod"));
		}
		return Z_Registration_Info_UEnum_ELoadMethod.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadMethod>()
	{
		return ELoadMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enumerators[] = {
		{ "ELoadMethod::LM_Default", (int64)ELoadMethod::LM_Default },
		{ "ELoadMethod::LM_Deferred", (int64)ELoadMethod::LM_Deferred },
		{ "ELoadMethod::LM_Thread", (int64)ELoadMethod::LM_Thread },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enum_MetaDataParams[] = {
		{ "LM_Default.Comment", "/** Useful for small amounts of Actors. Blocks the game thread during load. */" },
		{ "LM_Default.DisplayName", "Default" },
		{ "LM_Default.Name", "ELoadMethod::LM_Default" },
		{ "LM_Default.ToolTip", "Useful for small amounts of Actors. Blocks the game thread during load." },
		{ "LM_Deferred.Comment", "/** Useful large amounts of runtime spawned Actors. */" },
		{ "LM_Deferred.DisplayName", "Deferred" },
		{ "LM_Deferred.Name", "ELoadMethod::LM_Deferred" },
		{ "LM_Deferred.ToolTip", "Useful large amounts of runtime spawned Actors." },
		{ "LM_Thread.Comment", "/** Useful for large amounts of placed Actors.\x09*/" },
		{ "LM_Thread.DisplayName", "Multi-Thread" },
		{ "LM_Thread.Name", "ELoadMethod::LM_Thread" },
		{ "LM_Thread.ToolTip", "Useful for large amounts of placed Actors." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"ELoadMethod",
		"ELoadMethod",
		Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod()
	{
		if (!Z_Registration_Info_UEnum_ELoadMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoadMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileSaveMethod;
	static UEnum* EFileSaveMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFileSaveMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFileSaveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EFileSaveMethod"));
		}
		return Z_Registration_Info_UEnum_EFileSaveMethod.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EFileSaveMethod>()
	{
		return EFileSaveMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enumerators[] = {
		{ "EFileSaveMethod::FM_Desktop", (int64)EFileSaveMethod::FM_Desktop },
		{ "EFileSaveMethod::FM_Console", (int64)EFileSaveMethod::FM_Console },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enum_MetaDataParams[] = {
		{ "FM_Console.Comment", "/** No folders. No Compression. Each slot has it's own files with '_SlotName' suffix. */" },
		{ "FM_Console.DisplayName", "Console" },
		{ "FM_Console.Name", "EFileSaveMethod::FM_Console" },
		{ "FM_Console.ToolTip", "No folders. No Compression. Each slot has it's own files with '_SlotName' suffix." },
		{ "FM_Desktop.Comment", "/** Each slot has it's own folder. */" },
		{ "FM_Desktop.DisplayName", "Desktop" },
		{ "FM_Desktop.Name", "EFileSaveMethod::FM_Desktop" },
		{ "FM_Desktop.ToolTip", "Each slot has it's own folder." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EFileSaveMethod",
		"EFileSaveMethod",
		Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod()
	{
		if (!Z_Registration_Info_UEnum_EFileSaveMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileSaveMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFileSaveMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveTypeFlags;
	static UEnum* ESaveTypeFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESaveTypeFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESaveTypeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveTypeFlags"));
		}
		return Z_Registration_Info_UEnum_ESaveTypeFlags.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveTypeFlags>()
	{
		return ESaveTypeFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enumerators[] = {
		{ "ESaveTypeFlags::SF_Player", (int64)ESaveTypeFlags::SF_Player },
		{ "ESaveTypeFlags::SF_Level", (int64)ESaveTypeFlags::SF_Level },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
		{ "SF_Level.Comment", "/** Save Level Actors and Level Blueprints. */" },
		{ "SF_Level.DisplayName", "Level Actors" },
		{ "SF_Level.Name", "ESaveTypeFlags::SF_Level" },
		{ "SF_Level.ToolTip", "Save Level Actors and Level Blueprints." },
		{ "SF_Player.Comment", "/** Save Player Controller, Pawn and Player State. */" },
		{ "SF_Player.DisplayName", "Player Actors" },
		{ "SF_Player.Name", "ESaveTypeFlags::SF_Player" },
		{ "SF_Player.ToolTip", "Save Player Controller, Pawn and Player State." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"ESaveTypeFlags",
		"ESaveTypeFlags",
		Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags()
	{
		if (!Z_Registration_Info_UEnum_ESaveTypeFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveTypeFlags.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESaveTypeFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadTypeFlags;
	static UEnum* ELoadTypeFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoadTypeFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoadTypeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadTypeFlags"));
		}
		return Z_Registration_Info_UEnum_ELoadTypeFlags.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadTypeFlags>()
	{
		return ELoadTypeFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enumerators[] = {
		{ "ELoadTypeFlags::LF_Player", (int64)ELoadTypeFlags::LF_Player },
		{ "ELoadTypeFlags::LF_Level", (int64)ELoadTypeFlags::LF_Level },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "LF_Level.Comment", "/** Load Level Actors and Level Blueprints. */" },
		{ "LF_Level.DisplayName", "Level Actors" },
		{ "LF_Level.Name", "ELoadTypeFlags::LF_Level" },
		{ "LF_Level.ToolTip", "Load Level Actors and Level Blueprints." },
		{ "LF_Player.Comment", "/** Load Player Controller, Pawn and Player State. */" },
		{ "LF_Player.DisplayName", "Player Actors" },
		{ "LF_Player.Name", "ELoadTypeFlags::LF_Player" },
		{ "LF_Player.ToolTip", "Load Player Controller, Pawn and Player State." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"ELoadTypeFlags",
		"ELoadTypeFlags",
		Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags()
	{
		if (!Z_Registration_Info_UEnum_ELoadTypeFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadTypeFlags.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoadTypeFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiLevelSaveMethod;
	static UEnum* EMultiLevelSaveMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMultiLevelSaveMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMultiLevelSaveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EMultiLevelSaveMethod"));
		}
		return Z_Registration_Info_UEnum_EMultiLevelSaveMethod.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EMultiLevelSaveMethod>()
	{
		return EMultiLevelSaveMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enumerators[] = {
		{ "EMultiLevelSaveMethod::ML_Disabled", (int64)EMultiLevelSaveMethod::ML_Disabled },
		{ "EMultiLevelSaveMethod::ML_Normal", (int64)EMultiLevelSaveMethod::ML_Normal },
		{ "EMultiLevelSaveMethod::ML_Stream", (int64)EMultiLevelSaveMethod::ML_Stream },
		{ "EMultiLevelSaveMethod::ML_Full", (int64)EMultiLevelSaveMethod::ML_Full },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enum_MetaDataParams[] = {
		{ "ML_Disabled.Comment", "/** Multi Level Saving Disabled. */" },
		{ "ML_Disabled.DisplayName", "Disabled" },
		{ "ML_Disabled.Name", "EMultiLevelSaveMethod::ML_Disabled" },
		{ "ML_Disabled.ToolTip", "Multi Level Saving Disabled." },
		{ "ML_Full.Comment", "/** For multiple Persistent Levels with World Partition and/or Streaming Sub-Levels. */" },
		{ "ML_Full.DisplayName", "Full" },
		{ "ML_Full.Name", "EMultiLevelSaveMethod::ML_Full" },
		{ "ML_Full.ToolTip", "For multiple Persistent Levels with World Partition and/or Streaming Sub-Levels." },
		{ "ML_Normal.Comment", "/** For multiple Persistent Levels only. */" },
		{ "ML_Normal.DisplayName", "Basic" },
		{ "ML_Normal.Name", "EMultiLevelSaveMethod::ML_Normal" },
		{ "ML_Normal.ToolTip", "For multiple Persistent Levels only." },
		{ "ML_Stream.Comment", "/** For one Persistent Level with World Partition or Streaming Sub-Levels. */" },
		{ "ML_Stream.DisplayName", "Streaming" },
		{ "ML_Stream.Name", "EMultiLevelSaveMethod::ML_Stream" },
		{ "ML_Stream.ToolTip", "For one Persistent Level with World Partition or Streaming Sub-Levels." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EMultiLevelSaveMethod",
		"EMultiLevelSaveMethod",
		Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod()
	{
		if (!Z_Registration_Info_UEnum_EMultiLevelSaveMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiLevelSaveMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMultiLevelSaveMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThumbnailImageFormat;
	static UEnum* EThumbnailImageFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EThumbnailImageFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EThumbnailImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EThumbnailImageFormat"));
		}
		return Z_Registration_Info_UEnum_EThumbnailImageFormat.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EThumbnailImageFormat>()
	{
		return EThumbnailImageFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enumerators[] = {
		{ "EThumbnailImageFormat::Png", (int64)EThumbnailImageFormat::Png },
		{ "EThumbnailImageFormat::Jpeg", (int64)EThumbnailImageFormat::Jpeg },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enum_MetaDataParams[] = {
		{ "Jpeg.Comment", "/** Use lower quality, but fast jpeg compression. */" },
		{ "Jpeg.Name", "EThumbnailImageFormat::Jpeg" },
		{ "Jpeg.ToolTip", "Use lower quality, but fast jpeg compression." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
		{ "Png.Comment", "/** Use high quality, but slow png compression. */" },
		{ "Png.Name", "EThumbnailImageFormat::Png" },
		{ "Png.ToolTip", "Use high quality, but slow png compression." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EThumbnailImageFormat",
		"EThumbnailImageFormat",
		Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat()
	{
		if (!Z_Registration_Info_UEnum_EThumbnailImageFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThumbnailImageFormat.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EThumbnailImageFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveFileCheckType;
	static UEnum* ESaveFileCheckType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESaveFileCheckType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESaveFileCheckType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveFileCheckType"));
		}
		return Z_Registration_Info_UEnum_ESaveFileCheckType.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveFileCheckType>()
	{
		return ESaveFileCheckType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enumerators[] = {
		{ "ESaveFileCheckType::CheckForGame", (int64)ESaveFileCheckType::CheckForGame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CheckForGame.Comment", "/** Check if the save file version matches the predefined one in the project settings. */" },
		{ "CheckForGame.DisplayName", "Save Game Version" },
		{ "CheckForGame.Name", "ESaveFileCheckType::CheckForGame" },
		{ "CheckForGame.ToolTip", "Check if the save file version matches the predefined one in the project settings." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"ESaveFileCheckType",
		"ESaveFileCheckType",
		Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType()
	{
		if (!Z_Registration_Info_UEnum_ESaveFileCheckType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveFileCheckType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESaveFileCheckType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOldPackageEngine;
	static UEnum* EOldPackageEngine_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOldPackageEngine.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOldPackageEngine.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EOldPackageEngine"));
		}
		return Z_Registration_Info_UEnum_EOldPackageEngine.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EOldPackageEngine>()
	{
		return EOldPackageEngine_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enumerators[] = {
		{ "EOldPackageEngine::EN_UE40", (int64)EOldPackageEngine::EN_UE40 },
		{ "EOldPackageEngine::EN_UE50", (int64)EOldPackageEngine::EN_UE50 },
		{ "EOldPackageEngine::EN_UE54", (int64)EOldPackageEngine::EN_UE54 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enum_MetaDataParams[] = {
		{ "EN_UE40.Comment", "/** Unreal Engine 4. Package Version 555. */" },
		{ "EN_UE40.DisplayName", "Unreal Engine 4" },
		{ "EN_UE40.Name", "EOldPackageEngine::EN_UE40" },
		{ "EN_UE40.ToolTip", "Unreal Engine 4. Package Version 555." },
		{ "EN_UE50.Comment", "/** Unreal Engine 5.0 - 5.3. Package Version 1009. */" },
		{ "EN_UE50.DisplayName", "Unreal Engine 5.0+" },
		{ "EN_UE50.Name", "EOldPackageEngine::EN_UE50" },
		{ "EN_UE50.ToolTip", "Unreal Engine 5.0 - 5.3. Package Version 1009." },
		{ "EN_UE54.Comment", "/** Unreal Engine 5.4 and newer. Package Version 1012. */" },
		{ "EN_UE54.DisplayName", "Unreal Engine 5.4+" },
		{ "EN_UE54.Name", "EOldPackageEngine::EN_UE54" },
		{ "EN_UE54.ToolTip", "Unreal Engine 5.4 and newer. Package Version 1012." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EOldPackageEngine",
		"EOldPackageEngine",
		Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine()
	{
		if (!Z_Registration_Info_UEnum_EOldPackageEngine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOldPackageEngine.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOldPackageEngine.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionMethod;
	static UEnum* EWorldPartitionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldPartitionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EWorldPartitionMethod"));
		}
		return Z_Registration_Info_UEnum_EWorldPartitionMethod.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EWorldPartitionMethod>()
	{
		return EWorldPartitionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enumerators[] = {
		{ "EWorldPartitionMethod::Enabled", (int64)EWorldPartitionMethod::Enabled },
		{ "EWorldPartitionMethod::MemoryOnly", (int64)EWorldPartitionMethod::MemoryOnly },
		{ "EWorldPartitionMethod::LoadOnly", (int64)EWorldPartitionMethod::LoadOnly },
		{ "EWorldPartitionMethod::Disabled", (int64)EWorldPartitionMethod::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "/** Automatic World Partition saving/loading is disabled. */" },
		{ "Disabled.Name", "EWorldPartitionMethod::Disabled" },
		{ "Disabled.ToolTip", "Automatic World Partition saving/loading is disabled." },
		{ "Enabled.Comment", "/** Automatic World Partition saving/loading is enabled. */" },
		{ "Enabled.Name", "EWorldPartitionMethod::Enabled" },
		{ "Enabled.ToolTip", "Automatic World Partition saving/loading is enabled." },
		{ "LoadOnly.Comment", "/** Automatic World Partition loading is enabled. All saving must be done manually. */" },
		{ "LoadOnly.Name", "EWorldPartitionMethod::LoadOnly" },
		{ "LoadOnly.ToolTip", "Automatic World Partition loading is enabled. All saving must be done manually." },
		{ "MemoryOnly.Comment", "/** Automatic World Partition loading is enabled. Data persists in memory. Saving to disk must be done manually. */" },
		{ "MemoryOnly.Name", "EWorldPartitionMethod::MemoryOnly" },
		{ "MemoryOnly.ToolTip", "Automatic World Partition loading is enabled. Data persists in memory. Saving to disk must be done manually." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EWorldPartitionMethod",
		"EWorldPartitionMethod",
		Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldPartitionMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionInit;
	static UEnum* EWorldPartitionInit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionInit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldPartitionInit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EWorldPartitionInit"));
		}
		return Z_Registration_Info_UEnum_EWorldPartitionInit.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EWorldPartitionInit>()
	{
		return EWorldPartitionInit_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enumerators[] = {
		{ "EWorldPartitionInit::Default", (int64)EWorldPartitionInit::Default },
		{ "EWorldPartitionInit::Skip", (int64)EWorldPartitionInit::Skip },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "/** Automatically loads Level Actors on begin. */" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EWorldPartitionInit::Default" },
		{ "Default.ToolTip", "Automatically loads Level Actors on begin." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
		{ "Skip.Comment", "/** Will not automatically load the Level at the beginning. */" },
		{ "Skip.DisplayName", "Skip Initial Load" },
		{ "Skip.Name", "EWorldPartitionInit::Skip" },
		{ "Skip.ToolTip", "Will not automatically load the Level at the beginning." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"EWorldPartitionInit",
		"EWorldPartitionInit",
		Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionInit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionInit.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldPartitionInit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadedStateMod;
	static UEnum* ELoadedStateMod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoadedStateMod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoadedStateMod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadedStateMod"));
		}
		return Z_Registration_Info_UEnum_ELoadedStateMod.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadedStateMod>()
	{
		return ELoadedStateMod_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enumerators[] = {
		{ "ELoadedStateMod::NoModify", (int64)ELoadedStateMod::NoModify },
		{ "ELoadedStateMod::Unloaded", (int64)ELoadedStateMod::Unloaded },
		{ "ELoadedStateMod::Loaded", (int64)ELoadedStateMod::Loaded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enum_MetaDataParams[] = {
		{ "Loaded.Comment", "/** Set the state of the Actor to loaded. */" },
		{ "Loaded.DisplayName", "Loaded" },
		{ "Loaded.Name", "ELoadedStateMod::Loaded" },
		{ "Loaded.ToolTip", "Set the state of the Actor to loaded." },
		{ "ModuleRelativePath", "Public/EMSData.h" },
		{ "NoModify.Comment", "/** The loaded state of the Actor is not changed. */" },
		{ "NoModify.DisplayName", "Do Not Change" },
		{ "NoModify.Name", "ELoadedStateMod::NoModify" },
		{ "NoModify.ToolTip", "The loaded state of the Actor is not changed." },
		{ "Unloaded.Comment", "/** Set the state of the Actor to unloaded. */" },
		{ "Unloaded.DisplayName", "Unloaded" },
		{ "Unloaded.Name", "ELoadedStateMod::Unloaded" },
		{ "Unloaded.ToolTip", "Set the state of the Actor to unloaded." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"ELoadedStateMod",
		"ELoadedStateMod",
		Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod()
	{
		if (!Z_Registration_Info_UEnum_ELoadedStateMod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadedStateMod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoadedStateMod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveSlotInfo;
class UScriptStruct* FSaveSlotInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveSlotInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveSlotInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveSlotInfo, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("SaveSlotInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SaveSlotInfo.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FSaveSlotInfo>()
{
	return FSaveSlotInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSaveSlotInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Level;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nSave Game Data\n**/" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
		{ "ToolTip", "Save Game Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveSlotInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSaveSlotInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSaveSlotInfo, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSaveSlotInfo, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSaveSlotInfo, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"SaveSlotInfo",
		sizeof(FSaveSlotInfo),
		alignof(FSaveSlotInfo),
		Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SaveSlotInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveSlotInfo.InnerSingleton, Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SaveSlotInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawObjectSaveData;
class UScriptStruct* FRawObjectSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawObjectSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawObjectSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawObjectSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("RawObjectSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_RawObjectSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FRawObjectSaveData>()
{
	return FRawObjectSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRawObjectSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawObjectSaveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "RawData" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawObjectSaveData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "RawData" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawObjectSaveData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"RawObjectSaveData",
		sizeof(FRawObjectSaveData),
		alignof(FRawObjectSaveData),
		Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawObjectSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_RawObjectSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawObjectSaveData.InnerSingleton, Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RawObjectSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentSaveData;
class UScriptStruct* FComponentSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ComponentSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FComponentSaveData>()
{
	return FComponentSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nSave Game Archives\n**/" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
		{ "ToolTip", "Save Game Archives" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSaveData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"ComponentSaveData",
		sizeof(FComponentSaveData),
		alignof(FComponentSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentSaveData.InnerSingleton, Z_Construct_UScriptStruct_FComponentSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameObjectSaveData;
class UScriptStruct* FGameObjectSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameObjectSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameObjectSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameObjectSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("GameObjectSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_GameObjectSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FGameObjectSaveData>()
{
	return FGameObjectSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameObjectSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameObjectSaveData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"GameObjectSaveData",
		sizeof(FGameObjectSaveData),
		alignof(FGameObjectSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameObjectSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameObjectSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameObjectSaveData.InnerSingleton, Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameObjectSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSaveData;
class UScriptStruct* FActorSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ActorSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FActorSaveData>()
{
	return FActorSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSaveData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"ActorSaveData",
		sizeof(FActorSaveData),
		alignof(FActorSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton, Z_Construct_UScriptStruct_FActorSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelScriptSaveData;
class UScriptStruct* FLevelScriptSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelScriptSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelScriptSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelScriptSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelScriptSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_LevelScriptSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FLevelScriptSaveData>()
{
	return FLevelScriptSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelScriptSaveData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"LevelScriptSaveData",
		sizeof(FLevelScriptSaveData),
		alignof(FLevelScriptSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelScriptSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelScriptSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelScriptSaveData.InnerSingleton, Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelScriptSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelArchive;
class UScriptStruct* FLevelArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelArchive"));
	}
	return Z_Registration_Info_UScriptStruct_LevelArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FLevelArchive>()
{
	return FLevelArchive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelArchive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelArchive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelArchive>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelArchive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"LevelArchive",
		sizeof(FLevelArchive),
		alignof(FLevelArchive),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelArchive()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelArchive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelArchive.InnerSingleton, Z_Construct_UScriptStruct_FLevelArchive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelArchive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelStackArchive;
class UScriptStruct* FLevelStackArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelStackArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelStackArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelStackArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelStackArchive"));
	}
	return Z_Registration_Info_UScriptStruct_LevelStackArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FLevelStackArchive>()
{
	return FLevelStackArchive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelStackArchive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStackArchive_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelStackArchive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelStackArchive>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelStackArchive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"LevelStackArchive",
		sizeof(FLevelStackArchive),
		alignof(FLevelStackArchive),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStackArchive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStackArchive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelStackArchive()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelStackArchive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelStackArchive.InnerSingleton, Z_Construct_UScriptStruct_FLevelStackArchive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelStackArchive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiLevelStreamingData;
class UScriptStruct* FMultiLevelStreamingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiLevelStreamingData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("MultiLevelStreamingData"));
	}
	return Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FMultiLevelStreamingData>()
{
	return FMultiLevelStreamingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiLevelStreamingData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"MultiLevelStreamingData",
		sizeof(FMultiLevelStreamingData),
		alignof(FMultiLevelStreamingData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiLevelStreamingData()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.InnerSingleton, Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PawnSaveData;
class UScriptStruct* FPawnSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PawnSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PawnSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PawnSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_PawnSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPawnSaveData>()
{
	return FPawnSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPawnSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPawnSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnSaveData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"PawnSaveData",
		sizeof(FPawnSaveData),
		alignof(FPawnSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPawnSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_PawnSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PawnSaveData.InnerSingleton, Z_Construct_UScriptStruct_FPawnSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PawnSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControllerSaveData;
class UScriptStruct* FControllerSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControllerSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControllerSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControllerSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ControllerSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_ControllerSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FControllerSaveData>()
{
	return FControllerSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControllerSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControllerSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControllerSaveData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControllerSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"ControllerSaveData",
		sizeof(FControllerSaveData),
		alignof(FControllerSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControllerSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_ControllerSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControllerSaveData.InnerSingleton, Z_Construct_UScriptStruct_FControllerSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControllerSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerArchive;
class UScriptStruct* FPlayerArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerArchive"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPlayerArchive>()
{
	return FPlayerArchive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerArchive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerArchive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerArchive>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerArchive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"PlayerArchive",
		sizeof(FPlayerArchive),
		alignof(FPlayerArchive),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerArchive()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerArchive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerArchive.InnerSingleton, Z_Construct_UScriptStruct_FPlayerArchive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerArchive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerPositionArchive;
class UScriptStruct* FPlayerPositionArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerPositionArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerPositionArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerPositionArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerPositionArchive"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerPositionArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPlayerPositionArchive>()
{
	return FPlayerPositionArchive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerPositionArchive>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"PlayerPositionArchive",
		sizeof(FPlayerPositionArchive),
		alignof(FPlayerPositionArchive),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerPositionArchive()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerPositionArchive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerPositionArchive.InnerSingleton, Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerPositionArchive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStackArchive;
class UScriptStruct* FPlayerStackArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStackArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStackArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStackArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerStackArchive"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStackArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPlayerStackArchive>()
{
	return FPlayerStackArchive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerStackArchive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStackArchive>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"PlayerStackArchive",
		sizeof(FPlayerStackArchive),
		alignof(FPlayerStackArchive),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStackArchive()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerStackArchive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStackArchive.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerStackArchive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveVersionInfo;
class UScriptStruct* FSaveVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveVersionInfo, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("SaveVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SaveVersionInfo.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FSaveVersionInfo>()
{
	return FSaveVersionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSaveVersionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nSave Data Classes\n**/" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
		{ "ToolTip", "Save Data Classes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveVersionInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"SaveVersionInfo",
		sizeof(FSaveVersionInfo),
		alignof(FSaveVersionInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveVersionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SaveVersionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SaveVersionInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_Statics::EnumInfo[] = {
		{ EUpdateActorResult_StaticEnum, TEXT("EUpdateActorResult"), &Z_Registration_Info_UEnum_EUpdateActorResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1834452746U) },
		{ EDataLoadType_StaticEnum, TEXT("EDataLoadType"), &Z_Registration_Info_UEnum_EDataLoadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3847376353U) },
		{ EActorType_StaticEnum, TEXT("EActorType"), &Z_Registration_Info_UEnum_EActorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 54528244U) },
		{ ESaveGameMode_StaticEnum, TEXT("ESaveGameMode"), &Z_Registration_Info_UEnum_ESaveGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3998499989U) },
		{ EAsyncCheckType_StaticEnum, TEXT("EAsyncCheckType"), &Z_Registration_Info_UEnum_EAsyncCheckType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1259784642U) },
		{ ESaveErrorType_StaticEnum, TEXT("ESaveErrorType"), &Z_Registration_Info_UEnum_ESaveErrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3919759823U) },
		{ ELoadMethod_StaticEnum, TEXT("ELoadMethod"), &Z_Registration_Info_UEnum_ELoadMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3320513782U) },
		{ EFileSaveMethod_StaticEnum, TEXT("EFileSaveMethod"), &Z_Registration_Info_UEnum_EFileSaveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3517802261U) },
		{ ESaveTypeFlags_StaticEnum, TEXT("ESaveTypeFlags"), &Z_Registration_Info_UEnum_ESaveTypeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 611070751U) },
		{ ELoadTypeFlags_StaticEnum, TEXT("ELoadTypeFlags"), &Z_Registration_Info_UEnum_ELoadTypeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2131352942U) },
		{ EMultiLevelSaveMethod_StaticEnum, TEXT("EMultiLevelSaveMethod"), &Z_Registration_Info_UEnum_EMultiLevelSaveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4088156773U) },
		{ EThumbnailImageFormat_StaticEnum, TEXT("EThumbnailImageFormat"), &Z_Registration_Info_UEnum_EThumbnailImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1811406035U) },
		{ ESaveFileCheckType_StaticEnum, TEXT("ESaveFileCheckType"), &Z_Registration_Info_UEnum_ESaveFileCheckType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1928543965U) },
		{ EOldPackageEngine_StaticEnum, TEXT("EOldPackageEngine"), &Z_Registration_Info_UEnum_EOldPackageEngine, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2475030580U) },
		{ EWorldPartitionMethod_StaticEnum, TEXT("EWorldPartitionMethod"), &Z_Registration_Info_UEnum_EWorldPartitionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 997150232U) },
		{ EWorldPartitionInit_StaticEnum, TEXT("EWorldPartitionInit"), &Z_Registration_Info_UEnum_EWorldPartitionInit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3553696299U) },
		{ ELoadedStateMod_StaticEnum, TEXT("ELoadedStateMod"), &Z_Registration_Info_UEnum_ELoadedStateMod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1903958542U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_Statics::ScriptStructInfo[] = {
		{ FSaveSlotInfo::StaticStruct, Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewStructOps, TEXT("SaveSlotInfo"), &Z_Registration_Info_UScriptStruct_SaveSlotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveSlotInfo), 2846274175U) },
		{ FRawObjectSaveData::StaticStruct, Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewStructOps, TEXT("RawObjectSaveData"), &Z_Registration_Info_UScriptStruct_RawObjectSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawObjectSaveData), 674332204U) },
		{ FComponentSaveData::StaticStruct, Z_Construct_UScriptStruct_FComponentSaveData_Statics::NewStructOps, TEXT("ComponentSaveData"), &Z_Registration_Info_UScriptStruct_ComponentSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSaveData), 3479728952U) },
		{ FGameObjectSaveData::StaticStruct, Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::NewStructOps, TEXT("GameObjectSaveData"), &Z_Registration_Info_UScriptStruct_GameObjectSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameObjectSaveData), 1033339996U) },
		{ FActorSaveData::StaticStruct, Z_Construct_UScriptStruct_FActorSaveData_Statics::NewStructOps, TEXT("ActorSaveData"), &Z_Registration_Info_UScriptStruct_ActorSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSaveData), 1761664848U) },
		{ FLevelScriptSaveData::StaticStruct, Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::NewStructOps, TEXT("LevelScriptSaveData"), &Z_Registration_Info_UScriptStruct_LevelScriptSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelScriptSaveData), 3566394910U) },
		{ FLevelArchive::StaticStruct, Z_Construct_UScriptStruct_FLevelArchive_Statics::NewStructOps, TEXT("LevelArchive"), &Z_Registration_Info_UScriptStruct_LevelArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelArchive), 1469099123U) },
		{ FLevelStackArchive::StaticStruct, Z_Construct_UScriptStruct_FLevelStackArchive_Statics::NewStructOps, TEXT("LevelStackArchive"), &Z_Registration_Info_UScriptStruct_LevelStackArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelStackArchive), 1347787134U) },
		{ FMultiLevelStreamingData::StaticStruct, Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::NewStructOps, TEXT("MultiLevelStreamingData"), &Z_Registration_Info_UScriptStruct_MultiLevelStreamingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiLevelStreamingData), 3024221988U) },
		{ FPawnSaveData::StaticStruct, Z_Construct_UScriptStruct_FPawnSaveData_Statics::NewStructOps, TEXT("PawnSaveData"), &Z_Registration_Info_UScriptStruct_PawnSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPawnSaveData), 1177466952U) },
		{ FControllerSaveData::StaticStruct, Z_Construct_UScriptStruct_FControllerSaveData_Statics::NewStructOps, TEXT("ControllerSaveData"), &Z_Registration_Info_UScriptStruct_ControllerSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControllerSaveData), 2390210929U) },
		{ FPlayerArchive::StaticStruct, Z_Construct_UScriptStruct_FPlayerArchive_Statics::NewStructOps, TEXT("PlayerArchive"), &Z_Registration_Info_UScriptStruct_PlayerArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerArchive), 2324393426U) },
		{ FPlayerPositionArchive::StaticStruct, Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::NewStructOps, TEXT("PlayerPositionArchive"), &Z_Registration_Info_UScriptStruct_PlayerPositionArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerPositionArchive), 208679482U) },
		{ FPlayerStackArchive::StaticStruct, Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::NewStructOps, TEXT("PlayerStackArchive"), &Z_Registration_Info_UScriptStruct_PlayerStackArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStackArchive), 4026008531U) },
		{ FSaveVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::NewStructOps, TEXT("SaveVersionInfo"), &Z_Registration_Info_UScriptStruct_SaveVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveVersionInfo), 700859237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_2606638414(TEXT("/Script/EasyMultiSave"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
