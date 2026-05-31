// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSTypes() {}

// ********** Begin Cross Module References ********************************************************
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EActorType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EDataLoadType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EFileValidity();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ENextStepType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EPrepareType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveErrorType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveEventType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveGameMode();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveObjectType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EActorType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorType;
static UEnum* EActorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EActorType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EActorType"));
	}
	return Z_Registration_Info_UEnum_EActorType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorType>()
{
	return EActorType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EActorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AT_Destroyed.Name", "EActorType::AT_Destroyed" },
		{ "AT_GameObject.Name", "EActorType::AT_GameObject" },
		{ "AT_LevelScript.Name", "EActorType::AT_LevelScript" },
		{ "AT_Persistent.Name", "EActorType::AT_Persistent" },
		{ "AT_Placed.Name", "EActorType::AT_Placed" },
		{ "AT_PlayerActor.Name", "EActorType::AT_PlayerActor" },
		{ "AT_PlayerPawn.Name", "EActorType::AT_PlayerPawn" },
		{ "AT_Runtime.Name", "EActorType::AT_Runtime" },
		{ "Comment", "/**\nEnums\n**///Serialized values, never change order or add entries in the middle.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "ToolTip", "Enums\n//Serialized values, never change order or add entries in the middle." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActorType::AT_Runtime", (int64)EActorType::AT_Runtime },
		{ "EActorType::AT_Placed", (int64)EActorType::AT_Placed },
		{ "EActorType::AT_LevelScript", (int64)EActorType::AT_LevelScript },
		{ "EActorType::AT_PlayerActor", (int64)EActorType::AT_PlayerActor },
		{ "EActorType::AT_PlayerPawn", (int64)EActorType::AT_PlayerPawn },
		{ "EActorType::AT_GameObject", (int64)EActorType::AT_GameObject },
		{ "EActorType::AT_Persistent", (int64)EActorType::AT_Persistent },
		{ "EActorType::AT_Destroyed", (int64)EActorType::AT_Destroyed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EActorType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EActorType",
	"EActorType",
	Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EActorType()
{
	if (!Z_Registration_Info_UEnum_EActorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActorType.InnerSingleton;
}
// ********** End Enum EActorType ******************************************************************

// ********** Begin Enum EDataLoadType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLoadType;
static UEnum* EDataLoadType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataLoadType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataLoadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EDataLoadType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EDataLoadType"));
	}
	return Z_Registration_Info_UEnum_EDataLoadType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataLoadType>()
{
	return EDataLoadType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DATA_Collection.Name", "EDataLoadType::DATA_Collection" },
		{ "DATA_Level.Name", "EDataLoadType::DATA_Level" },
		{ "DATA_Object.Name", "EDataLoadType::DATA_Object" },
		{ "DATA_Player.Name", "EDataLoadType::DATA_Player" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataLoadType::DATA_Level", (int64)EDataLoadType::DATA_Level },
		{ "EDataLoadType::DATA_Player", (int64)EDataLoadType::DATA_Player },
		{ "EDataLoadType::DATA_Object", (int64)EDataLoadType::DATA_Object },
		{ "EDataLoadType::DATA_Collection", (int64)EDataLoadType::DATA_Collection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EDataLoadType",
	"EDataLoadType",
	Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EDataLoadType()
{
	if (!Z_Registration_Info_UEnum_EDataLoadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLoadType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataLoadType.InnerSingleton;
}
// ********** End Enum EDataLoadType ***************************************************************

// ********** Begin Enum ESaveGameMode *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveGameMode;
static UEnum* ESaveGameMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveGameMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveGameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveGameMode"));
	}
	return Z_Registration_Info_UEnum_ESaveGameMode.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveGameMode>()
{
	return ESaveGameMode_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MODE_All.Name", "ESaveGameMode::MODE_All" },
		{ "MODE_Level.Name", "ESaveGameMode::MODE_Level" },
		{ "MODE_Player.Name", "ESaveGameMode::MODE_Player" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveGameMode::MODE_Player", (int64)ESaveGameMode::MODE_Player },
		{ "ESaveGameMode::MODE_Level", (int64)ESaveGameMode::MODE_Level },
		{ "ESaveGameMode::MODE_All", (int64)ESaveGameMode::MODE_All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveGameMode",
	"ESaveGameMode",
	Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveGameMode()
{
	if (!Z_Registration_Info_UEnum_ESaveGameMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveGameMode.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveGameMode.InnerSingleton;
}
// ********** End Enum ESaveGameMode ***************************************************************

// ********** Begin Enum EAsyncCheckType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAsyncCheckType;
static UEnum* EAsyncCheckType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAsyncCheckType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAsyncCheckType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EAsyncCheckType"));
	}
	return Z_Registration_Info_UEnum_EAsyncCheckType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAsyncCheckType>()
{
	return EAsyncCheckType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CT_Both.DisplayName", "Both" },
		{ "CT_Both.Name", "EAsyncCheckType::CT_Both" },
		{ "CT_Load.DisplayName", "Load Only" },
		{ "CT_Load.Name", "EAsyncCheckType::CT_Load" },
		{ "CT_Save.DisplayName", "Save Only" },
		{ "CT_Save.Name", "EAsyncCheckType::CT_Save" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAsyncCheckType::CT_Both", (int64)EAsyncCheckType::CT_Both },
		{ "EAsyncCheckType::CT_Save", (int64)EAsyncCheckType::CT_Save },
		{ "EAsyncCheckType::CT_Load", (int64)EAsyncCheckType::CT_Load },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EAsyncCheckType",
	"EAsyncCheckType",
	Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType()
{
	if (!Z_Registration_Info_UEnum_EAsyncCheckType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAsyncCheckType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAsyncCheckType.InnerSingleton;
}
// ********** End Enum EAsyncCheckType *************************************************************

// ********** Begin Enum ESaveErrorType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveErrorType;
static UEnum* ESaveErrorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveErrorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveErrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveErrorType"));
	}
	return Z_Registration_Info_UEnum_ESaveErrorType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveErrorType>()
{
	return ESaveErrorType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ER_Collection.DisplayName", "Collection" },
		{ "ER_Collection.Name", "ESaveErrorType::ER_Collection" },
		{ "ER_Level.DisplayName", "Level Actors" },
		{ "ER_Level.Name", "ESaveErrorType::ER_Level" },
		{ "ER_Object.DisplayName", "Object" },
		{ "ER_Object.Name", "ESaveErrorType::ER_Object" },
		{ "ER_Player.DisplayName", "Player Actors" },
		{ "ER_Player.Name", "ESaveErrorType::ER_Player" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveErrorType::ER_Player", (int64)ESaveErrorType::ER_Player },
		{ "ESaveErrorType::ER_Level", (int64)ESaveErrorType::ER_Level },
		{ "ESaveErrorType::ER_Object", (int64)ESaveErrorType::ER_Object },
		{ "ESaveErrorType::ER_Collection", (int64)ESaveErrorType::ER_Collection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveErrorType",
	"ESaveErrorType",
	Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveErrorType()
{
	if (!Z_Registration_Info_UEnum_ESaveErrorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveErrorType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveErrorType.InnerSingleton;
}
// ********** End Enum ESaveErrorType **************************************************************

// ********** Begin Enum EPrepareType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPrepareType;
static UEnum* EPrepareType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPrepareType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPrepareType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EPrepareType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EPrepareType"));
	}
	return Z_Registration_Info_UEnum_EPrepareType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPrepareType>()
{
	return EPrepareType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "PT_Default.Name", "EPrepareType::PT_Default" },
		{ "PT_FullReload.Name", "EPrepareType::PT_FullReload" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPrepareType::PT_Default", (int64)EPrepareType::PT_Default },
		{ "EPrepareType::PT_FullReload", (int64)EPrepareType::PT_FullReload },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EPrepareType",
	"EPrepareType",
	Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EPrepareType()
{
	if (!Z_Registration_Info_UEnum_EPrepareType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPrepareType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPrepareType.InnerSingleton;
}
// ********** End Enum EPrepareType ****************************************************************

// ********** Begin Enum EFileValidity *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileValidity;
static UEnum* EFileValidity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFileValidity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFileValidity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EFileValidity, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EFileValidity"));
	}
	return Z_Registration_Info_UEnum_EFileValidity.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFileValidity>()
{
	return EFileValidity_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FILE_INCOMPATIBLE.Name", "EFileValidity::FILE_INCOMPATIBLE" },
		{ "FILE_INVALID.Name", "EFileValidity::FILE_INVALID" },
		{ "FILE_MISSING.Name", "EFileValidity::FILE_MISSING" },
		{ "FILE_VALID.Name", "EFileValidity::FILE_VALID" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFileValidity::FILE_VALID", (int64)EFileValidity::FILE_VALID },
		{ "EFileValidity::FILE_MISSING", (int64)EFileValidity::FILE_MISSING },
		{ "EFileValidity::FILE_INVALID", (int64)EFileValidity::FILE_INVALID },
		{ "EFileValidity::FILE_INCOMPATIBLE", (int64)EFileValidity::FILE_INCOMPATIBLE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EFileValidity",
	"EFileValidity",
	Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EFileValidity()
{
	if (!Z_Registration_Info_UEnum_EFileValidity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileValidity.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFileValidity.InnerSingleton;
}
// ********** End Enum EFileValidity ***************************************************************

// ********** Begin Enum ESaveObjectType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveObjectType;
static UEnum* ESaveObjectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveObjectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveObjectType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveObjectType"));
	}
	return Z_Registration_Info_UEnum_ESaveObjectType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveObjectType>()
{
	return ESaveObjectType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveObjectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CompleteObject.Name", "ESaveObjectType::CompleteObject" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "SaveGameOnly.Name", "ESaveObjectType::SaveGameOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveObjectType::SaveGameOnly", (int64)ESaveObjectType::SaveGameOnly },
		{ "ESaveObjectType::CompleteObject", (int64)ESaveObjectType::CompleteObject },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_ESaveObjectType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveObjectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveObjectType",
	"ESaveObjectType",
	Z_Construct_UEnum_EasyMultiSave_ESaveObjectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveObjectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveObjectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveObjectType()
{
	if (!Z_Registration_Info_UEnum_ESaveObjectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveObjectType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveObjectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveObjectType.InnerSingleton;
}
// ********** End Enum ESaveObjectType *************************************************************

// ********** Begin Enum ENextStepType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENextStepType;
static UEnum* ENextStepType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENextStepType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENextStepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ENextStepType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ENextStepType"));
	}
	return Z_Registration_Info_UEnum_ENextStepType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENextStepType>()
{
	return ENextStepType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FinishSave.Name", "ENextStepType::FinishSave" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "SaveLevel.Name", "ENextStepType::SaveLevel" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENextStepType::SaveLevel", (int64)ENextStepType::SaveLevel },
		{ "ENextStepType::FinishSave", (int64)ENextStepType::FinishSave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ENextStepType",
	"ENextStepType",
	Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ENextStepType()
{
	if (!Z_Registration_Info_UEnum_ENextStepType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENextStepType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENextStepType.InnerSingleton;
}
// ********** End Enum ENextStepType ***************************************************************

// ********** Begin Enum EIntegrityCheckResult *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIntegrityCheckResult;
static UEnum* EIntegrityCheckResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIntegrityCheckResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIntegrityCheckResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EIntegrityCheckResult"));
	}
	return Z_Registration_Info_UEnum_EIntegrityCheckResult.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EIntegrityCheckResult>()
{
	return EIntegrityCheckResult_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EIntegrityCheckResult::Invalid" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "Success.Name", "EIntegrityCheckResult::Success" },
		{ "Unknown.Name", "EIntegrityCheckResult::Unknown" },
		{ "VersionMismatch.Name", "EIntegrityCheckResult::VersionMismatch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIntegrityCheckResult::Success", (int64)EIntegrityCheckResult::Success },
		{ "EIntegrityCheckResult::VersionMismatch", (int64)EIntegrityCheckResult::VersionMismatch },
		{ "EIntegrityCheckResult::Invalid", (int64)EIntegrityCheckResult::Invalid },
		{ "EIntegrityCheckResult::Unknown", (int64)EIntegrityCheckResult::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EIntegrityCheckResult",
	"EIntegrityCheckResult",
	Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult()
{
	if (!Z_Registration_Info_UEnum_EIntegrityCheckResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIntegrityCheckResult.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EIntegrityCheckResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIntegrityCheckResult.InnerSingleton;
}
// ********** End Enum EIntegrityCheckResult *******************************************************

// ********** Begin Enum ESaveEventType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveEventType;
static UEnum* ESaveEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveEventType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveEventType"));
	}
	return Z_Registration_Info_UEnum_ESaveEventType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveEventType>()
{
	return ESaveEventType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "PostSave.Name", "ESaveEventType::PostSave" },
		{ "PreSave.Name", "ESaveEventType::PreSave" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveEventType::PreSave", (int64)ESaveEventType::PreSave },
		{ "ESaveEventType::PostSave", (int64)ESaveEventType::PostSave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_ESaveEventType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveEventType",
	"ESaveEventType",
	Z_Construct_UEnum_EasyMultiSave_ESaveEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveEventType()
{
	if (!Z_Registration_Info_UEnum_ESaveEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveEventType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveEventType.InnerSingleton;
}
// ********** End Enum ESaveEventType **************************************************************

// ********** Begin Enum ELoadMethod ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadMethod;
static UEnum* ELoadMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELoadMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELoadMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadMethod"));
	}
	return Z_Registration_Info_UEnum_ELoadMethod.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELoadMethod>()
{
	return ELoadMethod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELoadMethod::LM_Default", (int64)ELoadMethod::LM_Default },
		{ "ELoadMethod::LM_Deferred", (int64)ELoadMethod::LM_Deferred },
		{ "ELoadMethod::LM_Thread", (int64)ELoadMethod::LM_Thread },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ELoadMethod",
	"ELoadMethod",
	Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod()
{
	if (!Z_Registration_Info_UEnum_ELoadMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELoadMethod.InnerSingleton;
}
// ********** End Enum ELoadMethod *****************************************************************

// ********** Begin Enum EFileSaveMethod ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileSaveMethod;
static UEnum* EFileSaveMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFileSaveMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFileSaveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EFileSaveMethod"));
	}
	return Z_Registration_Info_UEnum_EFileSaveMethod.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFileSaveMethod>()
{
	return EFileSaveMethod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FM_Console.Comment", "/** No folders. No Compression. Each slot has it's own files with '_SlotName' suffix. */" },
		{ "FM_Console.DisplayName", "Console" },
		{ "FM_Console.Name", "EFileSaveMethod::FM_Console" },
		{ "FM_Console.ToolTip", "No folders. No Compression. Each slot has it's own files with '_SlotName' suffix." },
		{ "FM_ConsoleCompressed.Comment", "/** No folders. Files are compressed. Each slot has it's own files with '_SlotName' suffix.*/" },
		{ "FM_ConsoleCompressed.DisplayName", "Console[Compressed]" },
		{ "FM_ConsoleCompressed.Name", "EFileSaveMethod::FM_ConsoleCompressed" },
		{ "FM_ConsoleCompressed.ToolTip", "No folders. Files are compressed. Each slot has it's own files with '_SlotName' suffix." },
		{ "FM_Desktop.Comment", "/** Each slot has it's own folder. Files are compressed. */" },
		{ "FM_Desktop.DisplayName", "Desktop" },
		{ "FM_Desktop.Name", "EFileSaveMethod::FM_Desktop" },
		{ "FM_Desktop.ToolTip", "Each slot has it's own folder. Files are compressed." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFileSaveMethod::FM_Desktop", (int64)EFileSaveMethod::FM_Desktop },
		{ "EFileSaveMethod::FM_Console", (int64)EFileSaveMethod::FM_Console },
		{ "EFileSaveMethod::FM_ConsoleCompressed", (int64)EFileSaveMethod::FM_ConsoleCompressed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EFileSaveMethod",
	"EFileSaveMethod",
	Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod()
{
	if (!Z_Registration_Info_UEnum_EFileSaveMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileSaveMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFileSaveMethod.InnerSingleton;
}
// ********** End Enum EFileSaveMethod *************************************************************

// ********** Begin Enum ESaveTypeFlags ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveTypeFlags;
static UEnum* ESaveTypeFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveTypeFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveTypeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveTypeFlags"));
	}
	return Z_Registration_Info_UEnum_ESaveTypeFlags.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveTypeFlags>()
{
	return ESaveTypeFlags_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ESaveTypeFlags::None" },
		{ "SF_Level.Comment", "/** Level Actors and Level Blueprints. */" },
		{ "SF_Level.DisplayName", "Level Actors" },
		{ "SF_Level.Name", "ESaveTypeFlags::SF_Level" },
		{ "SF_Level.ToolTip", "Level Actors and Level Blueprints." },
		{ "SF_Player.Comment", "/** Player Controller, Pawn and Player State. */" },
		{ "SF_Player.DisplayName", "Player Actors" },
		{ "SF_Player.Name", "ESaveTypeFlags::SF_Player" },
		{ "SF_Player.ToolTip", "Player Controller, Pawn and Player State." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveTypeFlags::None", (int64)ESaveTypeFlags::None },
		{ "ESaveTypeFlags::SF_Player", (int64)ESaveTypeFlags::SF_Player },
		{ "ESaveTypeFlags::SF_Level", (int64)ESaveTypeFlags::SF_Level },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveTypeFlags",
	"ESaveTypeFlags",
	Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags()
{
	if (!Z_Registration_Info_UEnum_ESaveTypeFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveTypeFlags.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveTypeFlags.InnerSingleton;
}
// ********** End Enum ESaveTypeFlags **************************************************************

// ********** Begin Enum EMultiLevelSaveMethod *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiLevelSaveMethod;
static UEnum* EMultiLevelSaveMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMultiLevelSaveMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMultiLevelSaveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EMultiLevelSaveMethod"));
	}
	return Z_Registration_Info_UEnum_EMultiLevelSaveMethod.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiLevelSaveMethod>()
{
	return EMultiLevelSaveMethod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMultiLevelSaveMethod::ML_Disabled", (int64)EMultiLevelSaveMethod::ML_Disabled },
		{ "EMultiLevelSaveMethod::ML_Normal", (int64)EMultiLevelSaveMethod::ML_Normal },
		{ "EMultiLevelSaveMethod::ML_Stream", (int64)EMultiLevelSaveMethod::ML_Stream },
		{ "EMultiLevelSaveMethod::ML_Full", (int64)EMultiLevelSaveMethod::ML_Full },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EMultiLevelSaveMethod",
	"EMultiLevelSaveMethod",
	Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod()
{
	if (!Z_Registration_Info_UEnum_EMultiLevelSaveMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiLevelSaveMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMultiLevelSaveMethod.InnerSingleton;
}
// ********** End Enum EMultiLevelSaveMethod *******************************************************

// ********** Begin Enum EThumbnailImageFormat *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThumbnailImageFormat;
static UEnum* EThumbnailImageFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EThumbnailImageFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EThumbnailImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EThumbnailImageFormat"));
	}
	return Z_Registration_Info_UEnum_EThumbnailImageFormat.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EThumbnailImageFormat>()
{
	return EThumbnailImageFormat_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Jpeg.Comment", "/** Use lower quality, but fast jpeg compression. */" },
		{ "Jpeg.Name", "EThumbnailImageFormat::Jpeg" },
		{ "Jpeg.ToolTip", "Use lower quality, but fast jpeg compression." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "Png.Comment", "/** Use high quality, but slow png compression. */" },
		{ "Png.Name", "EThumbnailImageFormat::Png" },
		{ "Png.ToolTip", "Use high quality, but slow png compression." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EThumbnailImageFormat::Png", (int64)EThumbnailImageFormat::Png },
		{ "EThumbnailImageFormat::Jpeg", (int64)EThumbnailImageFormat::Jpeg },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EThumbnailImageFormat",
	"EThumbnailImageFormat",
	Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat()
{
	if (!Z_Registration_Info_UEnum_EThumbnailImageFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThumbnailImageFormat.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EThumbnailImageFormat.InnerSingleton;
}
// ********** End Enum EThumbnailImageFormat *******************************************************

// ********** Begin Enum ESaveFileCheckType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveFileCheckType;
static UEnum* ESaveFileCheckType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveFileCheckType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveFileCheckType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveFileCheckType"));
	}
	return Z_Registration_Info_UEnum_ESaveFileCheckType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveFileCheckType>()
{
	return ESaveFileCheckType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CheckForCustom.Comment", "/** Check Custom Save File without considering Slots.*/" },
		{ "CheckForCustom.DisplayName", "Custom Save" },
		{ "CheckForCustom.Name", "ESaveFileCheckType::CheckForCustom" },
		{ "CheckForCustom.ToolTip", "Check Custom Save File without considering Slots." },
		{ "CheckForCustomSlot.Comment", "/** Check Custom Save File or Custom Player within the Current Save Slot.*/" },
		{ "CheckForCustomSlot.DisplayName", "Custom Save in Slot" },
		{ "CheckForCustomSlot.Name", "ESaveFileCheckType::CheckForCustomSlot" },
		{ "CheckForCustomSlot.ToolTip", "Check Custom Save File or Custom Player within the Current Save Slot." },
		{ "CheckForGame.Comment", "/** Check Current Slot, Player and Level Files.*/" },
		{ "CheckForGame.DisplayName", "Default" },
		{ "CheckForGame.Name", "ESaveFileCheckType::CheckForGame" },
		{ "CheckForGame.ToolTip", "Check Current Slot, Player and Level Files." },
		{ "CheckForLevelOnly.Comment", "/** Check only the Level/Actor save file of the Current Save Slot. */" },
		{ "CheckForLevelOnly.DisplayName", "Level Only" },
		{ "CheckForLevelOnly.Name", "ESaveFileCheckType::CheckForLevelOnly" },
		{ "CheckForLevelOnly.ToolTip", "Check only the Level/Actor save file of the Current Save Slot." },
		{ "CheckForPlayerOnly.Comment", "/** Check only the Player save file of the Current Save Slot. */" },
		{ "CheckForPlayerOnly.DisplayName", "Player Only" },
		{ "CheckForPlayerOnly.Name", "ESaveFileCheckType::CheckForPlayerOnly" },
		{ "CheckForPlayerOnly.ToolTip", "Check only the Player save file of the Current Save Slot." },
		{ "CheckForSlotOnly.Comment", "/** Will Check only for the Slot Info of the Current Save Slot.*/" },
		{ "CheckForSlotOnly.DisplayName", "Slot Only" },
		{ "CheckForSlotOnly.Name", "ESaveFileCheckType::CheckForSlotOnly" },
		{ "CheckForSlotOnly.ToolTip", "Will Check only for the Slot Info of the Current Save Slot." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveFileCheckType::CheckForGame", (int64)ESaveFileCheckType::CheckForGame },
		{ "ESaveFileCheckType::CheckForCustom", (int64)ESaveFileCheckType::CheckForCustom },
		{ "ESaveFileCheckType::CheckForCustomSlot", (int64)ESaveFileCheckType::CheckForCustomSlot },
		{ "ESaveFileCheckType::CheckForSlotOnly", (int64)ESaveFileCheckType::CheckForSlotOnly },
		{ "ESaveFileCheckType::CheckForPlayerOnly", (int64)ESaveFileCheckType::CheckForPlayerOnly },
		{ "ESaveFileCheckType::CheckForLevelOnly", (int64)ESaveFileCheckType::CheckForLevelOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveFileCheckType",
	"ESaveFileCheckType",
	Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType()
{
	if (!Z_Registration_Info_UEnum_ESaveFileCheckType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveFileCheckType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveFileCheckType.InnerSingleton;
}
// ********** End Enum ESaveFileCheckType **********************************************************

// ********** Begin Enum EOldPackageEngine *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOldPackageEngine;
static UEnum* EOldPackageEngine_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOldPackageEngine.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOldPackageEngine.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EOldPackageEngine"));
	}
	return Z_Registration_Info_UEnum_EOldPackageEngine.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOldPackageEngine>()
{
	return EOldPackageEngine_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EN_UE40.Comment", "/** Unreal Engine 4. Package Version 555. */" },
		{ "EN_UE40.DisplayName", "Unreal Engine 4" },
		{ "EN_UE40.Name", "EOldPackageEngine::EN_UE40" },
		{ "EN_UE40.ToolTip", "Unreal Engine 4. Package Version 555." },
		{ "EN_UE50.Comment", "/** Unreal Engine 5.0 - 5.3. Package Version 1009. */" },
		{ "EN_UE50.DisplayName", "Unreal Engine 5.0+" },
		{ "EN_UE50.Name", "EOldPackageEngine::EN_UE50" },
		{ "EN_UE50.ToolTip", "Unreal Engine 5.0 - 5.3. Package Version 1009." },
		{ "EN_UE54.Comment", "/** Unreal Engine 5.4 and newer. Package Version 1012 or higher. */" },
		{ "EN_UE54.DisplayName", "Unreal Engine 5.4+" },
		{ "EN_UE54.Name", "EOldPackageEngine::EN_UE54" },
		{ "EN_UE54.ToolTip", "Unreal Engine 5.4 and newer. Package Version 1012 or higher." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOldPackageEngine::EN_UE40", (int64)EOldPackageEngine::EN_UE40 },
		{ "EOldPackageEngine::EN_UE50", (int64)EOldPackageEngine::EN_UE50 },
		{ "EOldPackageEngine::EN_UE54", (int64)EOldPackageEngine::EN_UE54 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EOldPackageEngine",
	"EOldPackageEngine",
	Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine()
{
	if (!Z_Registration_Info_UEnum_EOldPackageEngine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOldPackageEngine.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOldPackageEngine.InnerSingleton;
}
// ********** End Enum EOldPackageEngine ***********************************************************

// ********** Begin Enum EAutoSaveStreamMethod *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoSaveStreamMethod;
static UEnum* EAutoSaveStreamMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutoSaveStreamMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutoSaveStreamMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EAutoSaveStreamMethod"));
	}
	return Z_Registration_Info_UEnum_EAutoSaveStreamMethod.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutoSaveStreamMethod>()
{
	return EAutoSaveStreamMethod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "/** Disables all automatic loading and saving for Streaming Levels. */" },
		{ "Disabled.Name", "EAutoSaveStreamMethod::Disabled" },
		{ "Disabled.ToolTip", "Disables all automatic loading and saving for Streaming Levels." },
		{ "Enabled.Comment", "/** \n\x09""Automatically saves Streaming Level data to disk.\n\x09'Memory Only' is recommended for better performance and stability. \n\x09*/" },
		{ "Enabled.Name", "EAutoSaveStreamMethod::Enabled" },
		{ "Enabled.ToolTip", "Automatically saves Streaming Level data to disk.\n'Memory Only' is recommended for better performance and stability." },
		{ "MemoryOnly.Comment", "/** \n\x09""Automatically saves Streaming Level data to memory.\n\x09Improves performance, but changes must be manually saved to disk using 'Save Game Actors'. \n\x09*/" },
		{ "MemoryOnly.Name", "EAutoSaveStreamMethod::MemoryOnly" },
		{ "MemoryOnly.ToolTip", "Automatically saves Streaming Level data to memory.\nImproves performance, but changes must be manually saved to disk using 'Save Game Actors'." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutoSaveStreamMethod::Enabled", (int64)EAutoSaveStreamMethod::Enabled },
		{ "EAutoSaveStreamMethod::MemoryOnly", (int64)EAutoSaveStreamMethod::MemoryOnly },
		{ "EAutoSaveStreamMethod::Disabled", (int64)EAutoSaveStreamMethod::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EAutoSaveStreamMethod",
	"EAutoSaveStreamMethod",
	Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod()
{
	if (!Z_Registration_Info_UEnum_EAutoSaveStreamMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoSaveStreamMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutoSaveStreamMethod.InnerSingleton;
}
// ********** End Enum EAutoSaveStreamMethod *******************************************************

// ********** Begin Enum EWorldPartitionMethod *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionMethod;
static UEnum* EWorldPartitionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EWorldPartitionMethod"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionMethod.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionMethod>()
{
	return EWorldPartitionMethod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "/** Disables all automatic loading and saving for World Partition. */" },
		{ "Disabled.Name", "EWorldPartitionMethod::Disabled" },
		{ "Disabled.ToolTip", "Disables all automatic loading and saving for World Partition." },
		{ "Enabled.Comment", "/** \n\x09""Automatically saves World Partition data to disk.\n\x09'Memory Only' is recommended for better performance and stability. \n\x09*/" },
		{ "Enabled.Name", "EWorldPartitionMethod::Enabled" },
		{ "Enabled.ToolTip", "Automatically saves World Partition data to disk.\n'Memory Only' is recommended for better performance and stability." },
		{ "LoadOnly.Comment", "/** Automatically loads World Partition data, but never saves. All saving must be done manually. */" },
		{ "LoadOnly.Name", "EWorldPartitionMethod::LoadOnly" },
		{ "LoadOnly.ToolTip", "Automatically loads World Partition data, but never saves. All saving must be done manually." },
		{ "MemoryOnly.Comment", "/** \n\x09""Automatically saves World Partition data to memory.\n\x09Improves performance, but changes must be manually saved to disk using 'Save Game Actors'. \n\x09*/" },
		{ "MemoryOnly.Name", "EWorldPartitionMethod::MemoryOnly" },
		{ "MemoryOnly.ToolTip", "Automatically saves World Partition data to memory.\nImproves performance, but changes must be manually saved to disk using 'Save Game Actors'." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionMethod::Enabled", (int64)EWorldPartitionMethod::Enabled },
		{ "EWorldPartitionMethod::MemoryOnly", (int64)EWorldPartitionMethod::MemoryOnly },
		{ "EWorldPartitionMethod::LoadOnly", (int64)EWorldPartitionMethod::LoadOnly },
		{ "EWorldPartitionMethod::Disabled", (int64)EWorldPartitionMethod::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EWorldPartitionMethod",
	"EWorldPartitionMethod",
	Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionMethod.InnerSingleton;
}
// ********** End Enum EWorldPartitionMethod *******************************************************

// ********** Begin Enum EWorldPartitionInit *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionInit;
static UEnum* EWorldPartitionInit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionInit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionInit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EWorldPartitionInit"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionInit.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionInit>()
{
	return EWorldPartitionInit_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Comment", "/** Automatically loads Level Actors on begin. */" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EWorldPartitionInit::Default" },
		{ "Default.ToolTip", "Automatically loads Level Actors on begin." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "Skip.Comment", "/** Will not automatically load the Level at the beginning. */" },
		{ "Skip.DisplayName", "Skip Initial Load" },
		{ "Skip.Name", "EWorldPartitionInit::Skip" },
		{ "Skip.ToolTip", "Will not automatically load the Level at the beginning." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionInit::Default", (int64)EWorldPartitionInit::Default },
		{ "EWorldPartitionInit::Skip", (int64)EWorldPartitionInit::Skip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EWorldPartitionInit",
	"EWorldPartitionInit",
	Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionInit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionInit.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionInit.InnerSingleton;
}
// ********** End Enum EWorldPartitionInit *********************************************************

// ********** Begin Enum ELoadedStateMod ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadedStateMod;
static UEnum* ELoadedStateMod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELoadedStateMod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELoadedStateMod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadedStateMod"));
	}
	return Z_Registration_Info_UEnum_ELoadedStateMod.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELoadedStateMod>()
{
	return ELoadedStateMod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Loaded.Comment", "/** Set the state of the Actor to loaded. */" },
		{ "Loaded.DisplayName", "Loaded" },
		{ "Loaded.Name", "ELoadedStateMod::Loaded" },
		{ "Loaded.ToolTip", "Set the state of the Actor to loaded." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "NoModify.Comment", "/** The loaded state of the Actor is not changed. */" },
		{ "NoModify.DisplayName", "Do Not Change" },
		{ "NoModify.Name", "ELoadedStateMod::NoModify" },
		{ "NoModify.ToolTip", "The loaded state of the Actor is not changed." },
		{ "Unloaded.Comment", "/** Set the state of the Actor to unloaded. */" },
		{ "Unloaded.DisplayName", "Unloaded" },
		{ "Unloaded.Name", "ELoadedStateMod::Unloaded" },
		{ "Unloaded.ToolTip", "Set the state of the Actor to unloaded." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELoadedStateMod::NoModify", (int64)ELoadedStateMod::NoModify },
		{ "ELoadedStateMod::Unloaded", (int64)ELoadedStateMod::Unloaded },
		{ "ELoadedStateMod::Loaded", (int64)ELoadedStateMod::Loaded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ELoadedStateMod",
	"ELoadedStateMod",
	Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod()
{
	if (!Z_Registration_Info_UEnum_ELoadedStateMod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadedStateMod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELoadedStateMod.InnerSingleton;
}
// ********** End Enum ELoadedStateMod *************************************************************

// ********** Begin Enum EResetCustomSaveType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResetCustomSaveType;
static UEnum* EResetCustomSaveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EResetCustomSaveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EResetCustomSaveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EResetCustomSaveType"));
	}
	return Z_Registration_Info_UEnum_EResetCustomSaveType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EResetCustomSaveType>()
{
	return EResetCustomSaveType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClearMemory.Comment", "/** Clear only cached/memory data while keeping the current property values intact. The Custom Save will be reloaded from disk. */" },
		{ "ClearMemory.DisplayName", "Memory Only" },
		{ "ClearMemory.Name", "EResetCustomSaveType::ClearMemory" },
		{ "ClearMemory.ToolTip", "Clear only cached/memory data while keeping the current property values intact. The Custom Save will be reloaded from disk." },
		{ "Full.Comment", "/** Reset property values and clears memory data. The Custom Save will be reloaded from disk. */" },
		{ "Full.DisplayName", "Full Reset" },
		{ "Full.Name", "EResetCustomSaveType::Full" },
		{ "Full.ToolTip", "Reset property values and clears memory data. The Custom Save will be reloaded from disk." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "ResetDefault.Comment", "/** Reset all properties to their default values for the object in memory. */" },
		{ "ResetDefault.DisplayName", "Defaults Only" },
		{ "ResetDefault.Name", "EResetCustomSaveType::ResetDefault" },
		{ "ResetDefault.ToolTip", "Reset all properties to their default values for the object in memory." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EResetCustomSaveType::Full", (int64)EResetCustomSaveType::Full },
		{ "EResetCustomSaveType::ClearMemory", (int64)EResetCustomSaveType::ClearMemory },
		{ "EResetCustomSaveType::ResetDefault", (int64)EResetCustomSaveType::ResetDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EResetCustomSaveType",
	"EResetCustomSaveType",
	Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType()
{
	if (!Z_Registration_Info_UEnum_EResetCustomSaveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResetCustomSaveType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EResetCustomSaveType.InnerSingleton;
}
// ********** End Enum EResetCustomSaveType ********************************************************

// ********** Begin Enum EDeleteSlotType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeleteSlotType;
static UEnum* EDeleteSlotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDeleteSlotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDeleteSlotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EDeleteSlotType"));
	}
	return Z_Registration_Info_UEnum_EDeleteSlotType.OuterSingleton;
}
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDeleteSlotType>()
{
	return EDeleteSlotType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Full.Comment", "/** Deletes the Complete Slot including Custom Save Objects. */" },
		{ "Full.DisplayName", "Full Slot" },
		{ "Full.Name", "EDeleteSlotType::Full" },
		{ "Full.ToolTip", "Deletes the Complete Slot including Custom Save Objects." },
		{ "Level.Comment", "/** Deletes only the Level save data from Slot. */" },
		{ "Level.DisplayName", "Level Only" },
		{ "Level.Name", "EDeleteSlotType::Level" },
		{ "Level.ToolTip", "Deletes only the Level save data from Slot." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "Player.Comment", "/** Deletes only the Player save data from Slot. */" },
		{ "Player.DisplayName", "Player Only" },
		{ "Player.Name", "EDeleteSlotType::Player" },
		{ "Player.ToolTip", "Deletes only the Player save data from Slot." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDeleteSlotType::Full", (int64)EDeleteSlotType::Full },
		{ "EDeleteSlotType::Player", (int64)EDeleteSlotType::Player },
		{ "EDeleteSlotType::Level", (int64)EDeleteSlotType::Level },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EDeleteSlotType",
	"EDeleteSlotType",
	Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType()
{
	if (!Z_Registration_Info_UEnum_EDeleteSlotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeleteSlotType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDeleteSlotType.InnerSingleton;
}
// ********** End Enum EDeleteSlotType *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h__Script_EasyMultiSave_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EActorType_StaticEnum, TEXT("EActorType"), &Z_Registration_Info_UEnum_EActorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3337923362U) },
		{ EDataLoadType_StaticEnum, TEXT("EDataLoadType"), &Z_Registration_Info_UEnum_EDataLoadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 873382094U) },
		{ ESaveGameMode_StaticEnum, TEXT("ESaveGameMode"), &Z_Registration_Info_UEnum_ESaveGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4239817921U) },
		{ EAsyncCheckType_StaticEnum, TEXT("EAsyncCheckType"), &Z_Registration_Info_UEnum_EAsyncCheckType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1319765633U) },
		{ ESaveErrorType_StaticEnum, TEXT("ESaveErrorType"), &Z_Registration_Info_UEnum_ESaveErrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 175764029U) },
		{ EPrepareType_StaticEnum, TEXT("EPrepareType"), &Z_Registration_Info_UEnum_EPrepareType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1221238092U) },
		{ EFileValidity_StaticEnum, TEXT("EFileValidity"), &Z_Registration_Info_UEnum_EFileValidity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3191389915U) },
		{ ESaveObjectType_StaticEnum, TEXT("ESaveObjectType"), &Z_Registration_Info_UEnum_ESaveObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 540148058U) },
		{ ENextStepType_StaticEnum, TEXT("ENextStepType"), &Z_Registration_Info_UEnum_ENextStepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2824135315U) },
		{ EIntegrityCheckResult_StaticEnum, TEXT("EIntegrityCheckResult"), &Z_Registration_Info_UEnum_EIntegrityCheckResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1609846498U) },
		{ ESaveEventType_StaticEnum, TEXT("ESaveEventType"), &Z_Registration_Info_UEnum_ESaveEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3231239494U) },
		{ ELoadMethod_StaticEnum, TEXT("ELoadMethod"), &Z_Registration_Info_UEnum_ELoadMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2881638976U) },
		{ EFileSaveMethod_StaticEnum, TEXT("EFileSaveMethod"), &Z_Registration_Info_UEnum_EFileSaveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 920385345U) },
		{ ESaveTypeFlags_StaticEnum, TEXT("ESaveTypeFlags"), &Z_Registration_Info_UEnum_ESaveTypeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 263889188U) },
		{ EMultiLevelSaveMethod_StaticEnum, TEXT("EMultiLevelSaveMethod"), &Z_Registration_Info_UEnum_EMultiLevelSaveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1716654252U) },
		{ EThumbnailImageFormat_StaticEnum, TEXT("EThumbnailImageFormat"), &Z_Registration_Info_UEnum_EThumbnailImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4107142756U) },
		{ ESaveFileCheckType_StaticEnum, TEXT("ESaveFileCheckType"), &Z_Registration_Info_UEnum_ESaveFileCheckType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3155290117U) },
		{ EOldPackageEngine_StaticEnum, TEXT("EOldPackageEngine"), &Z_Registration_Info_UEnum_EOldPackageEngine, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 773600468U) },
		{ EAutoSaveStreamMethod_StaticEnum, TEXT("EAutoSaveStreamMethod"), &Z_Registration_Info_UEnum_EAutoSaveStreamMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3385659069U) },
		{ EWorldPartitionMethod_StaticEnum, TEXT("EWorldPartitionMethod"), &Z_Registration_Info_UEnum_EWorldPartitionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4152695580U) },
		{ EWorldPartitionInit_StaticEnum, TEXT("EWorldPartitionInit"), &Z_Registration_Info_UEnum_EWorldPartitionInit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2810195111U) },
		{ ELoadedStateMod_StaticEnum, TEXT("ELoadedStateMod"), &Z_Registration_Info_UEnum_ELoadedStateMod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 591343747U) },
		{ EResetCustomSaveType_StaticEnum, TEXT("EResetCustomSaveType"), &Z_Registration_Info_UEnum_EResetCustomSaveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 674170833U) },
		{ EDeleteSlotType_StaticEnum, TEXT("EDeleteSlotType"), &Z_Registration_Info_UEnum_EDeleteSlotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2488421181U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h__Script_EasyMultiSave_3860693700{
	TEXT("/Script/EasyMultiSave"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h__Script_EasyMultiSave_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h__Script_EasyMultiSave_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
