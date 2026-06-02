// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/LowEntryExtendedStandardLibrary.h"

#ifdef LOWENTRYEXTENDEDSTANDARDLIBRARY_LowEntryExtendedStandardLibrary_generated_h
#error "LowEntryExtendedStandardLibrary.generated.h already included, missing '#pragma once' in LowEntryExtendedStandardLibrary.h"
#endif
#define LOWENTRYEXTENDEDSTANDARDLIBRARY_LowEntryExtendedStandardLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class ASceneCapture2D;
class UClass;
class ULocalPlayer;
class ULowEntryBitDataEntry;
class ULowEntryBitDataReader;
class ULowEntryBitDataWriter;
class ULowEntryByteArray;
class ULowEntryByteDataEntry;
class ULowEntryByteDataReader;
class ULowEntryByteDataWriter;
class ULowEntryDouble;
class ULowEntryExecutionQueue;
class ULowEntryLatentActionBoolean;
class ULowEntryLatentActionFloat;
class ULowEntryLatentActionInteger;
class ULowEntryLatentActionNone;
class ULowEntryLatentActionObject;
class ULowEntryLatentActionString;
class ULowEntryLatentActionStruct;
class ULowEntryLong;
class ULowEntryParsedHashcash;
class UMediaPlayer;
class UMediaSoundComponent;
class UMediaTexture;
class UObject;
class USceneCaptureComponent2D;
class USoundClass;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;
enum class ELowEntryBatteryState : uint8;
enum class ELowEntryExtendedStandardLibrary0to9 : uint8;
enum class ELowEntryExtendedStandardLibrary1to10other : uint8;
enum class ELowEntryExtendedStandardLibraryTrueOrFalse : uint8;
enum class ELowEntryHmacAlgorithm : uint8;
enum class ELowEntryImageFormat : uint8;
enum class ELowEntrySplitScreenType : uint8;
enum class ELowEntrySplitScreenTypeThreePlayers : uint8;
enum class ELowEntrySplitScreenTypeTwoPlayers : uint8;
struct FColor;
struct FDateTime;
struct FGeometry;
struct FInstancedStruct;
struct FLatentActionInfo;
struct FLowEntryRegexMatch;
struct FMargin;
struct FTimespan;

// ********** Begin Delegate FDelegateULowEntryExtendedStandardLibraryCompareObjects ***************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_72_DELEGATE \
LOWENTRYEXTENDEDSTANDARDLIBRARY_API void FDelegateULowEntryExtendedStandardLibraryCompareObjects_DelegateWrapper(const FScriptDelegate& DelegateULowEntryExtendedStandardLibraryCompareObjects, UObject* ObjectA, UObject* ObjectB, bool& Result);


// ********** End Delegate FDelegateULowEntryExtendedStandardLibraryCompareObjects *****************

// ********** Begin Delegate FDelegateULowEntryExtendedStandardLibraryCompareStructs ***************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_74_DELEGATE \
LOWENTRYEXTENDEDSTANDARDLIBRARY_API void FDelegateULowEntryExtendedStandardLibraryCompareStructs_DelegateWrapper(const FScriptDelegate& DelegateULowEntryExtendedStandardLibraryCompareStructs, FInstancedStruct const& StructA, FInstancedStruct const& StructB, bool& Result);


// ********** End Delegate FDelegateULowEntryExtendedStandardLibraryCompareStructs *****************

// ********** Begin Class ULowEntryExtendedStandardLibrary *****************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_80_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMergeEncapsulatedByteArrays); \
	DECLARE_FUNCTION(execEncapsulateByteArray); \
	DECLARE_FUNCTION(execSimpleKismetSystemLibraryPrintString); \
	DECLARE_FUNCTION(execPlayerControllerGetLocalPlayer); \
	DECLARE_FUNCTION(execCaseSwitchObject); \
	DECLARE_FUNCTION(execCaseSwitchByte); \
	DECLARE_FUNCTION(execCaseSwitchInteger); \
	DECLARE_FUNCTION(execExecToByte); \
	DECLARE_FUNCTION(execExecToInteger); \
	DECLARE_FUNCTION(execExecToBoolean); \
	DECLARE_FUNCTION(execGetKeyboardFocusedWidgetType); \
	DECLARE_FUNCTION(execGetUserFocusedWidgetType); \
	DECLARE_FUNCTION(execClearKeyboardFocus); \
	DECLARE_FUNCTION(execClearUserFocus); \
	DECLARE_FUNCTION(execClearAllUserFocus); \
	DECLARE_FUNCTION(execGetAbsoluteToLocalScale); \
	DECLARE_FUNCTION(execGetLocalToAbsoluteScale); \
	DECLARE_FUNCTION(execGetAbsoluteSize); \
	DECLARE_FUNCTION(execDivide_Vector2dVector2d); \
	DECLARE_FUNCTION(execGetClassWithName); \
	DECLARE_FUNCTION(execClipboardSet); \
	DECLARE_FUNCTION(execClipboardGet); \
	DECLARE_FUNCTION(execSetWorldRenderingEnabled); \
	DECLARE_FUNCTION(execIsWorldRenderingEnabled); \
	DECLARE_FUNCTION(execSetSplitScreenType_ThreePlayers); \
	DECLARE_FUNCTION(execSetSplitScreenType_TwoPlayers); \
	DECLARE_FUNCTION(execGetSplitScreenType); \
	DECLARE_FUNCTION(execSetSplitScreenEnabled); \
	DECLARE_FUNCTION(execSetWindowMode); \
	DECLARE_FUNCTION(execGetWindowMode); \
	DECLARE_FUNCTION(execGetWindowBorderSize); \
	DECLARE_FUNCTION(execSetWindowPositiomInPercentagesCentered); \
	DECLARE_FUNCTION(execSetWindowPositionInPercentagesCentered); \
	DECLARE_FUNCTION(execSetWindowSize); \
	DECLARE_FUNCTION(execSetWindowPosition); \
	DECLARE_FUNCTION(execGetWindowPositiomInPercentagesCentered); \
	DECLARE_FUNCTION(execGetWindowPositionInPercentagesCentered); \
	DECLARE_FUNCTION(execGetWindowSize); \
	DECLARE_FUNCTION(execGetWindowPosition); \
	DECLARE_FUNCTION(execGetWindowBounds); \
	DECLARE_FUNCTION(execGetPrimaryMonitorWorkArea); \
	DECLARE_FUNCTION(execGetPrimaryMonitorResolution); \
	DECLARE_FUNCTION(execSetMouseLockedToViewport); \
	DECLARE_FUNCTION(execGetMousePositionInPercentages); \
	DECLARE_FUNCTION(execSetMousePositionInPercentages); \
	DECLARE_FUNCTION(execGetMousePosition); \
	DECLARE_FUNCTION(execSetMousePosition); \
	DECLARE_FUNCTION(execDouble_Create); \
	DECLARE_FUNCTION(execDouble_CreateZero); \
	DECLARE_FUNCTION(execLong_Create); \
	DECLARE_FUNCTION(execLong_CreateZero); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromStringUtf8Array); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromBooleanArray); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromDoubleBytesArray); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromDoubleArray); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromFloatArray); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromLongBytesArray); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromLongArray); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromPositiveInteger3Array); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromPositiveInteger2Array); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromPositiveInteger1Array); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromIntegerArray); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromByteArray); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromIntegerArrayMostSignificantBits); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromIntegerArrayLeastSignificantBits); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromByteArrayMostSignificantBits); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromByteArrayLeastSignificantBits); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromBitArray); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromStringUtf8); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromBoolean); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromDoubleBytes); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromDouble); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromFloat); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromLongBytes); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromLong); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromPositiveInteger3); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromPositiveInteger2); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromPositiveInteger1); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromInteger); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromByte); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromIntegerMostSignificantBits); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromIntegerLeastSignificantBits); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromByteMostSignificantBits); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromByteLeastSignificantBits); \
	DECLARE_FUNCTION(execBitDataEntry_CreateFromBit); \
	DECLARE_FUNCTION(execBitDataWriter_GetBytes); \
	DECLARE_FUNCTION(execBitDataWriter_CreateFromEntryArrayPure); \
	DECLARE_FUNCTION(execBitDataWriter_CreateFromEntryArray); \
	DECLARE_FUNCTION(execBitDataReader_Create); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromStringUtf8Array); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromBooleanArray); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromDoubleBytesArray); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromDoubleArray); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromFloatArray); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromLongBytesArray); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromLongArray); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromPositiveInteger3Array); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromPositiveInteger2Array); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromPositiveInteger1Array); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromIntegerArray); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromByteArray); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromStringUtf8); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromBoolean); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromDoubleBytes); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromDouble); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromFloat); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromLongBytes); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromLong); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromPositiveInteger3); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromPositiveInteger2); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromPositiveInteger1); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromInteger); \
	DECLARE_FUNCTION(execByteDataEntry_CreateFromByte); \
	DECLARE_FUNCTION(execByteDataWriter_GetBytes); \
	DECLARE_FUNCTION(execByteDataWriter_CreateFromEntryArrayPure); \
	DECLARE_FUNCTION(execByteDataWriter_CreateFromEntryArray); \
	DECLARE_FUNCTION(execByteDataReader_Create); \
	DECLARE_FUNCTION(execTickSeconds); \
	DECLARE_FUNCTION(execTickFrames); \
	DECLARE_FUNCTION(execChangeMap); \
	DECLARE_FUNCTION(execServerChangeMap); \
	DECLARE_FUNCTION(execJoinGame); \
	DECLARE_FUNCTION(execHostGame); \
	DECLARE_FUNCTION(execCrash); \
	DECLARE_FUNCTION(execRegexReplace); \
	DECLARE_FUNCTION(execRegexGetMatches); \
	DECLARE_FUNCTION(execRegexCount); \
	DECLARE_FUNCTION(execRegexMatch); \
	DECLARE_FUNCTION(execReplaceCharactersExcept); \
	DECLARE_FUNCTION(execRemoveCharactersExcept); \
	DECLARE_FUNCTION(execCreateString); \
	DECLARE_FUNCTION(execNextQueueExecution); \
	DECLARE_FUNCTION(execQueueExecutions); \
	DECLARE_FUNCTION(execRetriggerableRandomDelayFrames); \
	DECLARE_FUNCTION(execRandomDelayFrames); \
	DECLARE_FUNCTION(execRetriggerableDelayFrames); \
	DECLARE_FUNCTION(execDelayFrames); \
	DECLARE_FUNCTION(execRetriggerableRandomDelay); \
	DECLARE_FUNCTION(execRandomDelay); \
	DECLARE_FUNCTION(execSortStructArrayDirectly); \
	DECLARE_FUNCTION(execSortStructArray); \
	DECLARE_FUNCTION(execSortObjectArrayDirectly); \
	DECLARE_FUNCTION(execSortObjectArray); \
	DECLARE_FUNCTION(execSortTimespanArrayDirectly); \
	DECLARE_FUNCTION(execSortTimespanArray); \
	DECLARE_FUNCTION(execSortDateTimeArrayDirectly); \
	DECLARE_FUNCTION(execSortDateTimeArray); \
	DECLARE_FUNCTION(execSortByteArrayDirectly); \
	DECLARE_FUNCTION(execSortByteArray); \
	DECLARE_FUNCTION(execSortDoubleArrayDirectly); \
	DECLARE_FUNCTION(execSortDoubleArray); \
	DECLARE_FUNCTION(execSortFloatArrayDirectly); \
	DECLARE_FUNCTION(execSortFloatArray); \
	DECLARE_FUNCTION(execSortIntegerArrayDirectly); \
	DECLARE_FUNCTION(execSortIntegerArray); \
	DECLARE_FUNCTION(execSortStringArrayDirectly); \
	DECLARE_FUNCTION(execSortStringArray); \
	DECLARE_FUNCTION(execConvertUtcDateToLocalDate); \
	DECLARE_FUNCTION(execConvertLocalDateToUtcDate); \
	DECLARE_FUNCTION(execDateTime_FromUnixTimestamp); \
	DECLARE_FUNCTION(execDateTime_ToUnixTimestamp); \
	DECLARE_FUNCTION(execDateTime_ToString); \
	DECLARE_FUNCTION(execDateTime_ToIso8601); \
	DECLARE_FUNCTION(execMinOfTimespanArray); \
	DECLARE_FUNCTION(execMaxOfTimespanArray); \
	DECLARE_FUNCTION(execMinOfDateTimeArray); \
	DECLARE_FUNCTION(execMaxOfDateTimeArray); \
	DECLARE_FUNCTION(execMinOfStringArray); \
	DECLARE_FUNCTION(execMaxOfStringArray); \
	DECLARE_FUNCTION(execFloorDecimals); \
	DECLARE_FUNCTION(execCeilDecimals); \
	DECLARE_FUNCTION(execRoundDecimals); \
	DECLARE_FUNCTION(execGreaterEqualByteFloat); \
	DECLARE_FUNCTION(execLessEqualByteFloat); \
	DECLARE_FUNCTION(execGreaterByteFloat); \
	DECLARE_FUNCTION(execLessByteFloat); \
	DECLARE_FUNCTION(execGreaterEqualByteInteger); \
	DECLARE_FUNCTION(execLessEqualByteInteger); \
	DECLARE_FUNCTION(execGreaterByteInteger); \
	DECLARE_FUNCTION(execLessByteInteger); \
	DECLARE_FUNCTION(execGreaterEqualFloatByte); \
	DECLARE_FUNCTION(execLessEqualFloatByte); \
	DECLARE_FUNCTION(execGreaterFloatByte); \
	DECLARE_FUNCTION(execLessFloatByte); \
	DECLARE_FUNCTION(execGreaterEqualFloatInteger); \
	DECLARE_FUNCTION(execLessEqualFloatInteger); \
	DECLARE_FUNCTION(execGreaterFloatInteger); \
	DECLARE_FUNCTION(execLessFloatInteger); \
	DECLARE_FUNCTION(execGreaterEqualIntegerByte); \
	DECLARE_FUNCTION(execLessEqualIntegerByte); \
	DECLARE_FUNCTION(execGreaterIntegerByte); \
	DECLARE_FUNCTION(execLessIntegerByte); \
	DECLARE_FUNCTION(execGreaterEqualIntegerFloat); \
	DECLARE_FUNCTION(execLessEqualIntegerFloat); \
	DECLARE_FUNCTION(execGreaterIntegerFloat); \
	DECLARE_FUNCTION(execLessIntegerFloat); \
	DECLARE_FUNCTION(execGreaterEqualStringString); \
	DECLARE_FUNCTION(execLessEqualStringString); \
	DECLARE_FUNCTION(execGreaterStringString); \
	DECLARE_FUNCTION(execLessStringString); \
	DECLARE_FUNCTION(execMaxString); \
	DECLARE_FUNCTION(execMinString); \
	DECLARE_FUNCTION(execTabCharacter); \
	DECLARE_FUNCTION(execCarriageReturnCharacter); \
	DECLARE_FUNCTION(execWindowsNewlineCharacter); \
	DECLARE_FUNCTION(execNewlineCharacter); \
	DECLARE_FUNCTION(execParsedHashcashIsValid); \
	DECLARE_FUNCTION(execHashcashParse); \
	DECLARE_FUNCTION(execHashcashParseArray); \
	DECLARE_FUNCTION(execHashcashCustomCreationDate); \
	DECLARE_FUNCTION(execHashcash); \
	DECLARE_FUNCTION(execHashcashArrayCustomCreationDate); \
	DECLARE_FUNCTION(execHashcashArray); \
	DECLARE_FUNCTION(execHMAC); \
	DECLARE_FUNCTION(execBCrypt); \
	DECLARE_FUNCTION(execSha512); \
	DECLARE_FUNCTION(execSha256); \
	DECLARE_FUNCTION(execSha1); \
	DECLARE_FUNCTION(execMd5); \
	DECLARE_FUNCTION(execPearson); \
	DECLARE_FUNCTION(execSceneCaptureComponent2D_SetFov); \
	DECLARE_FUNCTION(execSceneCaptureComponent2D_GetFov); \
	DECLARE_FUNCTION(execSceneCapture2D_SetFov); \
	DECLARE_FUNCTION(execSceneCapture2D_GetFov); \
	DECLARE_FUNCTION(execTextureUpdateResource); \
	DECLARE_FUNCTION(execLoadVideo); \
	DECLARE_FUNCTION(execTextureRenderTarget2DToPixels); \
	DECLARE_FUNCTION(execSceneCaptureComponent2DToPixels); \
	DECLARE_FUNCTION(execSceneCapture2DToPixels); \
	DECLARE_FUNCTION(execTextureRenderTarget2DToBytes); \
	DECLARE_FUNCTION(execSceneCaptureComponent2DToBytes); \
	DECLARE_FUNCTION(execSceneCapture2DToBytes); \
	DECLARE_FUNCTION(execPixelsToExistingTexture2D); \
	DECLARE_FUNCTION(execPixelsToTexture2D); \
	DECLARE_FUNCTION(execTexture2DToPixels); \
	DECLARE_FUNCTION(execInvertPixelChannelA); \
	DECLARE_FUNCTION(execInvertPixelChannelB); \
	DECLARE_FUNCTION(execInvertPixelChannelG); \
	DECLARE_FUNCTION(execInvertPixelChannelR); \
	DECLARE_FUNCTION(execFlipPixelChannelsBA); \
	DECLARE_FUNCTION(execFlipPixelChannelsGA); \
	DECLARE_FUNCTION(execFlipPixelChannelsRA); \
	DECLARE_FUNCTION(execFlipPixelChannelsRB); \
	DECLARE_FUNCTION(execFlipPixelChannelsGB); \
	DECLARE_FUNCTION(execFlipPixelChannelsRG); \
	DECLARE_FUNCTION(execGrayscalePixels); \
	DECLARE_FUNCTION(execGrayscalePixel); \
	DECLARE_FUNCTION(execPixelsToBytes); \
	DECLARE_FUNCTION(execBytesToPixels); \
	DECLARE_FUNCTION(execTexture2DToBytes); \
	DECLARE_FUNCTION(execBytesToExistingImage); \
	DECLARE_FUNCTION(execBytesToImage); \
	DECLARE_FUNCTION(execGetByteWithBitSet); \
	DECLARE_FUNCTION(execIsBitSet); \
	DECLARE_FUNCTION(execByteToBits); \
	DECLARE_FUNCTION(execBitsToByte); \
	DECLARE_FUNCTION(execBytesToByte); \
	DECLARE_FUNCTION(execByteToBytes); \
	DECLARE_FUNCTION(execParseStringIntoDoubleBytes); \
	DECLARE_FUNCTION(execBytesToDoubleBytes); \
	DECLARE_FUNCTION(execBytesToDouble); \
	DECLARE_FUNCTION(execDoubleToBytes); \
	DECLARE_FUNCTION(execBytesToFloat); \
	DECLARE_FUNCTION(execFloatToBytes); \
	DECLARE_FUNCTION(execParseStringIntoLongBytes); \
	DECLARE_FUNCTION(execParseStringIntoLong); \
	DECLARE_FUNCTION(execBytesToLongBytes); \
	DECLARE_FUNCTION(execBytesToLong); \
	DECLARE_FUNCTION(execLongToBytes); \
	DECLARE_FUNCTION(execBytesToInteger); \
	DECLARE_FUNCTION(execIntegerToBytes); \
	DECLARE_FUNCTION(execByteToBoolean); \
	DECLARE_FUNCTION(execBooleanToByte); \
	DECLARE_FUNCTION(execBytesToBoolean); \
	DECLARE_FUNCTION(execBooleanToBytes); \
	DECLARE_FUNCTION(execBytesToBitString); \
	DECLARE_FUNCTION(execBitStringToBytes); \
	DECLARE_FUNCTION(execBytesToBinary); \
	DECLARE_FUNCTION(execBinaryToBytes); \
	DECLARE_FUNCTION(execBytesToHex); \
	DECLARE_FUNCTION(execHexToBytes); \
	DECLARE_FUNCTION(execBytesToBase64Url); \
	DECLARE_FUNCTION(execBase64UrlToBytes); \
	DECLARE_FUNCTION(execBase64UrlToBase64); \
	DECLARE_FUNCTION(execBase64ToBase64Url); \
	DECLARE_FUNCTION(execBytesToBase64); \
	DECLARE_FUNCTION(execBase64ToBytes); \
	DECLARE_FUNCTION(execBytesToStringUtf8); \
	DECLARE_FUNCTION(execStringToBytesUtf8); \
	DECLARE_FUNCTION(execGenerateRandomBytesRandomLength); \
	DECLARE_FUNCTION(execGenerateRandomBytes); \
	DECLARE_FUNCTION(execBytesSubArray); \
	DECLARE_FUNCTION(execMergeBytes); \
	DECLARE_FUNCTION(execSplitBytes); \
	DECLARE_FUNCTION(execAreBytesEqual); \
	DECLARE_FUNCTION(execLatentAction_Create_Struct); \
	DECLARE_FUNCTION(execLatentAction_Create_String); \
	DECLARE_FUNCTION(execLatentAction_Create_Object); \
	DECLARE_FUNCTION(execLatentAction_Create_None); \
	DECLARE_FUNCTION(execLatentAction_Create_Integer); \
	DECLARE_FUNCTION(execLatentAction_Create_Float); \
	DECLARE_FUNCTION(execLatentAction_Create_Boolean); \
	DECLARE_FUNCTION(execSoundClass_GetPitch); \
	DECLARE_FUNCTION(execSoundClass_SetPitch); \
	DECLARE_FUNCTION(execSoundClass_GetVolume); \
	DECLARE_FUNCTION(execSoundClass_SetVolume); \
	DECLARE_FUNCTION(execSetGenericTeamId); \
	DECLARE_FUNCTION(execGetGenericTeamId); \
	DECLARE_FUNCTION(execCreateObject); \
	DECLARE_FUNCTION(execGetMaximumVolume); \
	DECLARE_FUNCTION(execGetCurrentVolume); \
	DECLARE_FUNCTION(execAreAndroidHeadphonesPluggedIn); \
	DECLARE_FUNCTION(execGetAndroidNumberOfCores); \
	DECLARE_FUNCTION(execGetAndroidBuildVersion); \
	DECLARE_FUNCTION(execGetAndroidGlVersion); \
	DECLARE_FUNCTION(execGetAndroidGpuFamily); \
	DECLARE_FUNCTION(execGetAndroidDefaultLocale); \
	DECLARE_FUNCTION(execGetAndroidOsLanguage); \
	DECLARE_FUNCTION(execGetAndroidVersion); \
	DECLARE_FUNCTION(execGetAndroidDeviceModel); \
	DECLARE_FUNCTION(execGetAndroidDeviceMake); \
	DECLARE_FUNCTION(execGetAndroidVolume); \
	DECLARE_FUNCTION(execGetCurrentVolumePercentage); \
	DECLARE_FUNCTION(execGetBatteryTemperature); \
	DECLARE_FUNCTION(execGetBatteryCharge); \
	DECLARE_FUNCTION(execGetBatteryState); \
	DECLARE_FUNCTION(execGetProjectVersion); \
	DECLARE_FUNCTION(execGetProjectName); \
	DECLARE_FUNCTION(execDesktopPlatform); \
	DECLARE_FUNCTION(execIosPlatform); \
	DECLARE_FUNCTION(execAndroidPlatform); \
	DECLARE_FUNCTION(execSwitchPlatform); \
	DECLARE_FUNCTION(execXboxOnePlatform); \
	DECLARE_FUNCTION(execPs4Platform); \
	DECLARE_FUNCTION(execMacPlatform); \
	DECLARE_FUNCTION(execLinuxPlatform); \
	DECLARE_FUNCTION(execWindowsRtArmPlatform); \
	DECLARE_FUNCTION(execWindowsRtPlatform); \
	DECLARE_FUNCTION(execWindows64Platform); \
	DECLARE_FUNCTION(execWindows32Platform); \
	DECLARE_FUNCTION(execWindowsPlatform); \
	DECLARE_FUNCTION(execHtml5Platform); \
	DECLARE_FUNCTION(execWithEditor); \
	DECLARE_FUNCTION(execShippingBuild); \
	DECLARE_FUNCTION(execTestBuild); \
	DECLARE_FUNCTION(execDevelopmentBuild); \
	DECLARE_FUNCTION(execDebugBuild);


struct Z_Construct_UClass_ULowEntryExtendedStandardLibrary_Statics;
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryExtendedStandardLibrary_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_80_INCLASS \
private: \
	static void StaticRegisterNativesULowEntryExtendedStandardLibrary(); \
	friend struct ::Z_Construct_UClass_ULowEntryExtendedStandardLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* ::Z_Construct_UClass_ULowEntryExtendedStandardLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULowEntryExtendedStandardLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LowEntryExtendedStandardLibrary"), Z_Construct_UClass_ULowEntryExtendedStandardLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULowEntryExtendedStandardLibrary)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULowEntryExtendedStandardLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULowEntryExtendedStandardLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULowEntryExtendedStandardLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULowEntryExtendedStandardLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULowEntryExtendedStandardLibrary(ULowEntryExtendedStandardLibrary&&) = delete; \
	ULowEntryExtendedStandardLibrary(const ULowEntryExtendedStandardLibrary&) = delete; \
	NO_API virtual ~ULowEntryExtendedStandardLibrary();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_77_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_80_RPC_WRAPPERS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_80_INCLASS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULowEntryExtendedStandardLibrary;

// ********** End Class ULowEntryExtendedStandardLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExtendedStandardLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
