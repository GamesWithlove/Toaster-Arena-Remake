// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Public/EMSTypes.h"

#ifdef EASYMULTISAVE_EMSTypes_generated_h
#error "EMSTypes.generated.h already included, missing '#pragma once' in EMSTypes.h"
#endif
#define EASYMULTISAVE_EMSTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h

// ********** Begin Enum EActorType ****************************************************************
#define FOREACH_ENUM_EACTORTYPE(op) \
	op(EActorType::AT_Runtime) \
	op(EActorType::AT_Placed) \
	op(EActorType::AT_LevelScript) \
	op(EActorType::AT_PlayerActor) \
	op(EActorType::AT_PlayerPawn) \
	op(EActorType::AT_GameObject) \
	op(EActorType::AT_Persistent) \
	op(EActorType::AT_Destroyed) 

enum class EActorType : uint8;
template<> struct TIsUEnumClass<EActorType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorType>();
// ********** End Enum EActorType ******************************************************************

// ********** Begin Enum EDataLoadType *************************************************************
#define FOREACH_ENUM_EDATALOADTYPE(op) \
	op(EDataLoadType::DATA_Level) \
	op(EDataLoadType::DATA_Player) \
	op(EDataLoadType::DATA_Object) \
	op(EDataLoadType::DATA_Collection) 

enum class EDataLoadType : uint8;
template<> struct TIsUEnumClass<EDataLoadType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataLoadType>();
// ********** End Enum EDataLoadType ***************************************************************

// ********** Begin Enum ESaveGameMode *************************************************************
#define FOREACH_ENUM_ESAVEGAMEMODE(op) \
	op(ESaveGameMode::MODE_Player) \
	op(ESaveGameMode::MODE_Level) \
	op(ESaveGameMode::MODE_All) 

enum class ESaveGameMode : uint8;
template<> struct TIsUEnumClass<ESaveGameMode> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveGameMode>();
// ********** End Enum ESaveGameMode ***************************************************************

// ********** Begin Enum EAsyncCheckType ***********************************************************
#define FOREACH_ENUM_EASYNCCHECKTYPE(op) \
	op(EAsyncCheckType::CT_Both) \
	op(EAsyncCheckType::CT_Save) \
	op(EAsyncCheckType::CT_Load) 

enum class EAsyncCheckType : uint8;
template<> struct TIsUEnumClass<EAsyncCheckType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAsyncCheckType>();
// ********** End Enum EAsyncCheckType *************************************************************

// ********** Begin Enum ESaveErrorType ************************************************************
#define FOREACH_ENUM_ESAVEERRORTYPE(op) \
	op(ESaveErrorType::ER_Player) \
	op(ESaveErrorType::ER_Level) \
	op(ESaveErrorType::ER_Object) \
	op(ESaveErrorType::ER_Collection) 

enum class ESaveErrorType : uint8;
template<> struct TIsUEnumClass<ESaveErrorType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveErrorType>();
// ********** End Enum ESaveErrorType **************************************************************

// ********** Begin Enum EPrepareType **************************************************************
#define FOREACH_ENUM_EPREPARETYPE(op) \
	op(EPrepareType::PT_Default) \
	op(EPrepareType::PT_FullReload) 

enum class EPrepareType : uint8;
template<> struct TIsUEnumClass<EPrepareType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPrepareType>();
// ********** End Enum EPrepareType ****************************************************************

// ********** Begin Enum EFileValidity *************************************************************
#define FOREACH_ENUM_EFILEVALIDITY(op) \
	op(EFileValidity::FILE_VALID) \
	op(EFileValidity::FILE_MISSING) \
	op(EFileValidity::FILE_INVALID) \
	op(EFileValidity::FILE_INCOMPATIBLE) 

enum class EFileValidity : uint8;
template<> struct TIsUEnumClass<EFileValidity> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFileValidity>();
// ********** End Enum EFileValidity ***************************************************************

// ********** Begin Enum ESaveObjectType ***********************************************************
#define FOREACH_ENUM_ESAVEOBJECTTYPE(op) \
	op(ESaveObjectType::SaveGameOnly) \
	op(ESaveObjectType::CompleteObject) 

enum class ESaveObjectType : uint8;
template<> struct TIsUEnumClass<ESaveObjectType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveObjectType>();
// ********** End Enum ESaveObjectType *************************************************************

// ********** Begin Enum ENextStepType *************************************************************
#define FOREACH_ENUM_ENEXTSTEPTYPE(op) \
	op(ENextStepType::SaveLevel) \
	op(ENextStepType::FinishSave) 

enum class ENextStepType : uint8;
template<> struct TIsUEnumClass<ENextStepType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENextStepType>();
// ********** End Enum ENextStepType ***************************************************************

// ********** Begin Enum EIntegrityCheckResult *****************************************************
#define FOREACH_ENUM_EINTEGRITYCHECKRESULT(op) \
	op(EIntegrityCheckResult::Success) \
	op(EIntegrityCheckResult::VersionMismatch) \
	op(EIntegrityCheckResult::Invalid) \
	op(EIntegrityCheckResult::Unknown) 

enum class EIntegrityCheckResult : uint8;
template<> struct TIsUEnumClass<EIntegrityCheckResult> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EIntegrityCheckResult>();
// ********** End Enum EIntegrityCheckResult *******************************************************

// ********** Begin Enum ESaveEventType ************************************************************
#define FOREACH_ENUM_ESAVEEVENTTYPE(op) \
	op(ESaveEventType::PreSave) \
	op(ESaveEventType::PostSave) 

enum class ESaveEventType : uint8;
template<> struct TIsUEnumClass<ESaveEventType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveEventType>();
// ********** End Enum ESaveEventType **************************************************************

// ********** Begin Enum ELoadMethod ***************************************************************
#define FOREACH_ENUM_ELOADMETHOD(op) \
	op(ELoadMethod::LM_Default) \
	op(ELoadMethod::LM_Deferred) \
	op(ELoadMethod::LM_Thread) 

enum class ELoadMethod : uint8;
template<> struct TIsUEnumClass<ELoadMethod> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELoadMethod>();
// ********** End Enum ELoadMethod *****************************************************************

// ********** Begin Enum EFileSaveMethod ***********************************************************
#define FOREACH_ENUM_EFILESAVEMETHOD(op) \
	op(EFileSaveMethod::FM_Desktop) \
	op(EFileSaveMethod::FM_Console) \
	op(EFileSaveMethod::FM_ConsoleCompressed) 

enum class EFileSaveMethod : uint8;
template<> struct TIsUEnumClass<EFileSaveMethod> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFileSaveMethod>();
// ********** End Enum EFileSaveMethod *************************************************************

// ********** Begin Enum ESaveTypeFlags ************************************************************
#define FOREACH_ENUM_ESAVETYPEFLAGS(op) \
	op(ESaveTypeFlags::None) \
	op(ESaveTypeFlags::SF_Player) \
	op(ESaveTypeFlags::SF_Level) 

enum class ESaveTypeFlags : uint8;
template<> struct TIsUEnumClass<ESaveTypeFlags> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveTypeFlags>();
// ********** End Enum ESaveTypeFlags **************************************************************

// ********** Begin Enum EMultiLevelSaveMethod *****************************************************
#define FOREACH_ENUM_EMULTILEVELSAVEMETHOD(op) \
	op(EMultiLevelSaveMethod::ML_Disabled) \
	op(EMultiLevelSaveMethod::ML_Normal) \
	op(EMultiLevelSaveMethod::ML_Stream) \
	op(EMultiLevelSaveMethod::ML_Full) 

enum class EMultiLevelSaveMethod : uint8;
template<> struct TIsUEnumClass<EMultiLevelSaveMethod> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiLevelSaveMethod>();
// ********** End Enum EMultiLevelSaveMethod *******************************************************

// ********** Begin Enum EThumbnailImageFormat *****************************************************
#define FOREACH_ENUM_ETHUMBNAILIMAGEFORMAT(op) \
	op(EThumbnailImageFormat::Png) \
	op(EThumbnailImageFormat::Jpeg) 

enum class EThumbnailImageFormat : uint8;
template<> struct TIsUEnumClass<EThumbnailImageFormat> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EThumbnailImageFormat>();
// ********** End Enum EThumbnailImageFormat *******************************************************

// ********** Begin Enum ESaveFileCheckType ********************************************************
#define FOREACH_ENUM_ESAVEFILECHECKTYPE(op) \
	op(ESaveFileCheckType::CheckForGame) \
	op(ESaveFileCheckType::CheckForCustom) \
	op(ESaveFileCheckType::CheckForCustomSlot) \
	op(ESaveFileCheckType::CheckForSlotOnly) \
	op(ESaveFileCheckType::CheckForPlayerOnly) \
	op(ESaveFileCheckType::CheckForLevelOnly) 

enum class ESaveFileCheckType : uint8;
template<> struct TIsUEnumClass<ESaveFileCheckType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveFileCheckType>();
// ********** End Enum ESaveFileCheckType **********************************************************

// ********** Begin Enum EOldPackageEngine *********************************************************
#define FOREACH_ENUM_EOLDPACKAGEENGINE(op) \
	op(EOldPackageEngine::EN_UE40) \
	op(EOldPackageEngine::EN_UE50) \
	op(EOldPackageEngine::EN_UE54) 

enum class EOldPackageEngine : uint8;
template<> struct TIsUEnumClass<EOldPackageEngine> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOldPackageEngine>();
// ********** End Enum EOldPackageEngine ***********************************************************

// ********** Begin Enum EAutoSaveStreamMethod *****************************************************
#define FOREACH_ENUM_EAUTOSAVESTREAMMETHOD(op) \
	op(EAutoSaveStreamMethod::Enabled) \
	op(EAutoSaveStreamMethod::MemoryOnly) \
	op(EAutoSaveStreamMethod::Disabled) 

enum class EAutoSaveStreamMethod : uint8;
template<> struct TIsUEnumClass<EAutoSaveStreamMethod> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutoSaveStreamMethod>();
// ********** End Enum EAutoSaveStreamMethod *******************************************************

// ********** Begin Enum EWorldPartitionMethod *****************************************************
#define FOREACH_ENUM_EWORLDPARTITIONMETHOD(op) \
	op(EWorldPartitionMethod::Enabled) \
	op(EWorldPartitionMethod::MemoryOnly) \
	op(EWorldPartitionMethod::LoadOnly) \
	op(EWorldPartitionMethod::Disabled) 

enum class EWorldPartitionMethod : uint8;
template<> struct TIsUEnumClass<EWorldPartitionMethod> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionMethod>();
// ********** End Enum EWorldPartitionMethod *******************************************************

// ********** Begin Enum EWorldPartitionInit *******************************************************
#define FOREACH_ENUM_EWORLDPARTITIONINIT(op) \
	op(EWorldPartitionInit::Default) \
	op(EWorldPartitionInit::Skip) 

enum class EWorldPartitionInit : uint8;
template<> struct TIsUEnumClass<EWorldPartitionInit> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionInit>();
// ********** End Enum EWorldPartitionInit *********************************************************

// ********** Begin Enum ELoadedStateMod ***********************************************************
#define FOREACH_ENUM_ELOADEDSTATEMOD(op) \
	op(ELoadedStateMod::NoModify) \
	op(ELoadedStateMod::Unloaded) \
	op(ELoadedStateMod::Loaded) 

enum class ELoadedStateMod : uint8;
template<> struct TIsUEnumClass<ELoadedStateMod> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELoadedStateMod>();
// ********** End Enum ELoadedStateMod *************************************************************

// ********** Begin Enum EResetCustomSaveType ******************************************************
#define FOREACH_ENUM_ERESETCUSTOMSAVETYPE(op) \
	op(EResetCustomSaveType::Full) \
	op(EResetCustomSaveType::ClearMemory) \
	op(EResetCustomSaveType::ResetDefault) 

enum class EResetCustomSaveType : uint8;
template<> struct TIsUEnumClass<EResetCustomSaveType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EResetCustomSaveType>();
// ********** End Enum EResetCustomSaveType ********************************************************

// ********** Begin Enum EDeleteSlotType ***********************************************************
#define FOREACH_ENUM_EDELETESLOTTYPE(op) \
	op(EDeleteSlotType::Full) \
	op(EDeleteSlotType::Player) \
	op(EDeleteSlotType::Level) 

enum class EDeleteSlotType : uint8;
template<> struct TIsUEnumClass<EDeleteSlotType> { enum { Value = true }; };
template<> EASYMULTISAVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDeleteSlotType>();
// ********** End Enum EDeleteSlotType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
