// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VictoryBPFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class ASceneCapture2D;
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
#ifdef VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h
#error "VictoryBPFunctionLibrary.generated.h already included, missing '#pragma once' in VictoryBPFunctionLibrary.h"
#endif
#define VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h

#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_SPARSE_DATA
#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPipeIsValid); \
	DECLARE_FUNCTION(execReadFromPipe); \
	DECLARE_FUNCTION(execClosePipe); \
	DECLARE_FUNCTION(execCreatePipe);


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPipeIsValid); \
	DECLARE_FUNCTION(execReadFromPipe); \
	DECLARE_FUNCTION(execClosePipe); \
	DECLARE_FUNCTION(execCreatePipe);


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_ACCESSORS
#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURamaVictoryPluginCreateProcessPipe(); \
	friend struct Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics; \
public: \
	DECLARE_CLASS(URamaVictoryPluginCreateProcessPipe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(URamaVictoryPluginCreateProcessPipe)


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesURamaVictoryPluginCreateProcessPipe(); \
	friend struct Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics; \
public: \
	DECLARE_CLASS(URamaVictoryPluginCreateProcessPipe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(URamaVictoryPluginCreateProcessPipe)


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URamaVictoryPluginCreateProcessPipe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaVictoryPluginCreateProcessPipe) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaVictoryPluginCreateProcessPipe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaVictoryPluginCreateProcessPipe); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URamaVictoryPluginCreateProcessPipe(URamaVictoryPluginCreateProcessPipe&&); \
	NO_API URamaVictoryPluginCreateProcessPipe(const URamaVictoryPluginCreateProcessPipe&); \
public: \
	NO_API virtual ~URamaVictoryPluginCreateProcessPipe();


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URamaVictoryPluginCreateProcessPipe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URamaVictoryPluginCreateProcessPipe(URamaVictoryPluginCreateProcessPipe&&); \
	NO_API URamaVictoryPluginCreateProcessPipe(const URamaVictoryPluginCreateProcessPipe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaVictoryPluginCreateProcessPipe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaVictoryPluginCreateProcessPipe); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaVictoryPluginCreateProcessPipe) \
	NO_API virtual ~URamaVictoryPluginCreateProcessPipe();


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_24_PROLOG
#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_SPARSE_DATA \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_RPC_WRAPPERS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_ACCESSORS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_INCLASS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_SPARSE_DATA \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_ACCESSORS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VICTORYBPLIBRARY_API UClass* StaticClass<class URamaVictoryPluginCreateProcessPipe>();

#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_SPARSE_DATA
#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_RPC_WRAPPERS \
 \
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


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
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


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_ACCESSORS
#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVictoryBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVictoryBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPFunctionLibrary)


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUVictoryBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVictoryBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPFunctionLibrary)


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPFunctionLibrary(UVictoryBPFunctionLibrary&&); \
	NO_API UVictoryBPFunctionLibrary(const UVictoryBPFunctionLibrary&); \
public: \
	NO_API virtual ~UVictoryBPFunctionLibrary();


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPFunctionLibrary(UVictoryBPFunctionLibrary&&); \
	NO_API UVictoryBPFunctionLibrary(const UVictoryBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPFunctionLibrary) \
	NO_API virtual ~UVictoryBPFunctionLibrary();


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_77_PROLOG
#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_SPARSE_DATA \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_RPC_WRAPPERS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_ACCESSORS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_INCLASS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_SPARSE_DATA \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_ACCESSORS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VictoryBPFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VICTORYBPLIBRARY_API UClass* StaticClass<class UVictoryBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Sun5_PluginStaging_Output52_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h


#define FOREACH_ENUM_EJOYIMAGEFORMATS(op) \
	op(JPG) \
	op(PNG) \
	op(BMP) \
	op(ICO) \
	op(EXR) \
	op(ICNS) \
	op(JoyImageFormats_Max) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
