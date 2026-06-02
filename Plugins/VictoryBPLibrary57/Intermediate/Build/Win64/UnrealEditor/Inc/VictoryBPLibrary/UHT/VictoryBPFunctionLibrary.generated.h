// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VictoryBPFunctionLibrary.h"

#ifdef VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h
#error "VictoryBPFunctionLibrary.generated.h already included, missing '#pragma once' in VictoryBPFunctionLibrary.h"
#endif
#define VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class ASceneCapture2D;
class UClass;
class UDynamicMeshComponent;
class UObject;
class URamaVictoryPluginCreateProcessPipe;
class USceneCaptureComponent2D;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture2D;
class UUserWidget;
class UWidget;
struct FDateTime;
struct FKey;
struct FLinearColor;

// ********** Begin Class URamaVictoryPluginCreateProcessPipe **************************************
#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPipeIsValid); \
	DECLARE_FUNCTION(execReadFromPipe); \
	DECLARE_FUNCTION(execClosePipe); \
	DECLARE_FUNCTION(execCreatePipe);


struct Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics;
VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURamaVictoryPluginCreateProcessPipe(); \
	friend struct ::Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VICTORYBPLIBRARY_API UClass* ::Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_NoRegister(); \
public: \
	DECLARE_CLASS2(URamaVictoryPluginCreateProcessPipe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_NoRegister) \
	DECLARE_SERIALIZER(URamaVictoryPluginCreateProcessPipe)


#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URamaVictoryPluginCreateProcessPipe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URamaVictoryPluginCreateProcessPipe(URamaVictoryPluginCreateProcessPipe&&) = delete; \
	URamaVictoryPluginCreateProcessPipe(const URamaVictoryPluginCreateProcessPipe&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaVictoryPluginCreateProcessPipe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaVictoryPluginCreateProcessPipe); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaVictoryPluginCreateProcessPipe) \
	NO_API virtual ~URamaVictoryPluginCreateProcessPipe();


#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_24_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URamaVictoryPluginCreateProcessPipe;

// ********** End Class URamaVictoryPluginCreateProcessPipe ****************************************

// ********** Begin Class UVictoryBPFunctionLibrary ************************************************
#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_RPC_WRAPPERS \
	DECLARE_FUNCTION(execClosestPointsOnTwoLines); \
	DECLARE_FUNCTION(execClosestPointsOfLineSegments); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execFlashGameOnTaskBar); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfActor); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfLocation); \
	DECLARE_FUNCTION(execClientWindow__GameWindowIsForeGroundInOS); \
	DECLARE_FUNCTION(execVictory_SaveStringToOSClipboard); \
	DECLARE_FUNCTION(execVictory_GetStringFromOSClipboard); \
	DECLARE_FUNCTION(execIsAlphaNumeric); \
	DECLARE_FUNCTION(execString__CombineStrings_Multi); \
	DECLARE_FUNCTION(execString__CombineStrings); \
	DECLARE_FUNCTION(execHasSubstring); \
	DECLARE_FUNCTION(execLoadStringFromFile); \
	DECLARE_FUNCTION(execLoadStringArrayFromFile); \
	DECLARE_FUNCTION(execFileIO__SaveStringArrayToFile); \
	DECLARE_FUNCTION(execFileIO__SaveStringTextToFile); \
	DECLARE_FUNCTION(execGetNamesOfLoadedLevels); \
	DECLARE_FUNCTION(execViewport__GetCenterOfViewport); \
	DECLARE_FUNCTION(execViewport__GetMousePosition); \
	DECLARE_FUNCTION(execViewport__SetMousePosition); \
	DECLARE_FUNCTION(execVictory_GetPixelsArrayFromT2D); \
	DECLARE_FUNCTION(execVictory_GetPixelFromT2D); \
	DECLARE_FUNCTION(execVictory_SavePixels); \
	DECLARE_FUNCTION(execVictory_Get_Pixel); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile_Pixels); \
	DECLARE_FUNCTION(execUTCToLocal); \
	DECLARE_FUNCTION(execGetUTCFromUnixTimeStamp); \
	DECLARE_FUNCTION(execGetUnixTimeStamp); \
	DECLARE_FUNCTION(execVictoryIsApplicationRunning); \
	DECLARE_FUNCTION(execVictoryGetApplicationName); \
	DECLARE_FUNCTION(execVictoryCreateProc); \
	DECLARE_FUNCTION(execVictory_GetFilesInRootAndAllSubFolders); \
	DECLARE_FUNCTION(execVictory_GetFiles); \
	DECLARE_FUNCTION(execVictory_SetTimeStamp); \
	DECLARE_FUNCTION(execVictory_GetFileTimeStamp); \
	DECLARE_FUNCTION(execGenerateUniqueContentRelativeFileName); \
	DECLARE_FUNCTION(execText_ToInt); \
	DECLARE_FUNCTION(execText_ToFloat); \
	DECLARE_FUNCTION(execAccessor__GetPlayerController); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsetsFromRotation); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsets); \
	DECLARE_FUNCTION(execViewportPositionDeproject); \
	DECLARE_FUNCTION(execGetAllBoneNamesBelowBone); \
	DECLARE_FUNCTION(execServerTravel); \
	DECLARE_FUNCTION(execWorldType__InGameInstanceWorld); \
	DECLARE_FUNCTION(execWorldType__InPIEWorld); \
	DECLARE_FUNCTION(execWorldType__InEditorWorld); \
	DECLARE_FUNCTION(execCapture2D_SaveImage); \
	DECLARE_FUNCTION(execCaptureComponent2D_SaveImage); \
	DECLARE_FUNCTION(execCapture2D_Project); \
	DECLARE_FUNCTION(execCaptureComponent2D_Project); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFileByExtension); \
	DECLARE_FUNCTION(execVictorySimulateKeyPress); \
	DECLARE_FUNCTION(execVictorySimulateMouseWheel); \
	DECLARE_FUNCTION(execRemoveAllWidgetsOfClass); \
	DECLARE_FUNCTION(execIsWidgetOfClassInViewport); \
	DECLARE_FUNCTION(execGetWidgetFromName); \
	DECLARE_FUNCTION(execWidgetGetParentOfClass); \
	DECLARE_FUNCTION(execWidgetGetChildrenOfClass); \
	DECLARE_FUNCTION(execGetFirstWidgetOfClass); \
	DECLARE_FUNCTION(execVictorySortStringArray); \
	DECLARE_FUNCTION(execVictorySortFloatArray); \
	DECLARE_FUNCTION(execVictorySortIntArray); \
	DECLARE_FUNCTION(execVictoryFloatMinusEquals); \
	DECLARE_FUNCTION(execVictoryFloatPlusEquals); \
	DECLARE_FUNCTION(execVictoryIntMinusEquals); \
	DECLARE_FUNCTION(execVictoryIntPlusEquals); \
	DECLARE_FUNCTION(execGetObjectPath); \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath); \
	DECLARE_FUNCTION(execGetStaticMeshVertexLocations); \
	DECLARE_FUNCTION(execCreateStaticMeshAssetFromDynamicMesh);


struct Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics;
VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUVictoryBPFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VICTORYBPLIBRARY_API UClass* ::Z_Construct_UClass_UVictoryBPFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVictoryBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), Z_Construct_UClass_UVictoryBPFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVictoryBPFunctionLibrary)


#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVictoryBPFunctionLibrary(UVictoryBPFunctionLibrary&&) = delete; \
	UVictoryBPFunctionLibrary(const UVictoryBPFunctionLibrary&) = delete; \
	NO_API virtual ~UVictoryBPFunctionLibrary();


#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_77_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVictoryBPFunctionLibrary;

// ********** End Class UVictoryBPFunctionLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h

// ********** Begin Enum EJoyImageFormats **********************************************************
#define FOREACH_ENUM_EJOYIMAGEFORMATS(op) \
	op(JPG) \
	op(PNG) \
	op(BMP) \
	op(ICO) \
	op(EXR) \
	op(ICNS) \
	op(JoyImageFormats_Max) 
// ********** End Enum EJoyImageFormats ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
