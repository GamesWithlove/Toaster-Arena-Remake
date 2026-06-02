// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCore/SteamUtilities.h"

#ifdef STEAMCORE_SteamUtilities_generated_h
#error "SteamUtilities.generated.h already included, missing '#pragma once' in SteamUtilities.h"
#endif
#define STEAMCORE_SteamUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class UObject;
class UServerFilter;
class USteamCoreAsyncActionListenForControllerChange;
class USteamCoreVoice;
enum class ESteamAccountType : uint8;
enum class ESteamAttributeType : uint8;
enum class ESteamComparisonOp : uint8;
enum class ESteamCoreIdentical : uint8;
enum class ESteamCoreValid : uint8;
enum class ESteamMessageType : uint8;
struct FBlueprintSessionResult;
struct FDateTime;
struct FHostPingData;
struct FPublishedFileID;
struct FSteamGameID;
struct FSteamID;
struct FSteamInventoryUpdateHandle;
struct FSteamItemInstanceID;
struct FSteamSessionSearchSetting;
struct FSteamSessionSetting;
struct FSteamTicketHandle;
struct FSteamUGCHandle;

// ********** Begin Delegate FOnSteamMessage *******************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_21_DELEGATE \
STEAMCORE_API void FOnSteamMessage_DelegateWrapper(const FScriptDelegate& OnSteamMessage, ESteamMessageType Type, const FString& Message);


// ********** End Delegate FOnSteamMessage *********************************************************

// ********** Begin Delegate FOnHTTPResponse *******************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_22_DELEGATE \
STEAMCORE_API void FOnHTTPResponse_DelegateWrapper(const FScriptDelegate& OnHTTPResponse, const FString& Response);


// ********** End Delegate FOnHTTPResponse *********************************************************

// ********** Begin Delegate FOnControllerChangedCallback ******************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_23_DELEGATE \
STEAMCORE_API void FOnControllerChangedCallback_DelegateWrapper(const FMulticastScriptDelegate& OnControllerChangedCallback, bool bIsConnected, int32 UserId);


// ********** End Delegate FOnControllerChangedCallback ********************************************

// ********** Begin Class USteamCoreVoice **********************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConstructSteamCoreVoice); \
	DECLARE_FUNCTION(execDestroySteamCoreVoice); \
	DECLARE_FUNCTION(execAddAudioBuffer);


struct Z_Construct_UClass_USteamCoreVoice_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreVoice_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreVoice(); \
	friend struct ::Z_Construct_UClass_USteamCoreVoice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreVoice_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreVoice, USoundWaveProcedural, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreVoice_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreVoice)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreVoice(USteamCoreVoice&&) = delete; \
	USteamCoreVoice(const USteamCoreVoice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreVoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreVoice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreVoice) \
	NO_API virtual ~USteamCoreVoice();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_25_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_28_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreVoice;

// ********** End Class USteamCoreVoice ************************************************************

// ********** Begin Class USteamCoreAsyncActionListenForControllerChange ***************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execListenForControllerChange);


struct Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreAsyncActionListenForControllerChange(); \
	friend struct ::Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreAsyncActionListenForControllerChange, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreAsyncActionListenForControllerChange)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAsyncActionListenForControllerChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreAsyncActionListenForControllerChange(USteamCoreAsyncActionListenForControllerChange&&) = delete; \
	USteamCoreAsyncActionListenForControllerChange(const USteamCoreAsyncActionListenForControllerChange&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAsyncActionListenForControllerChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAsyncActionListenForControllerChange); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAsyncActionListenForControllerChange) \
	NO_API virtual ~USteamCoreAsyncActionListenForControllerChange();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_49_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreAsyncActionListenForControllerChange;

// ********** End Class USteamCoreAsyncActionListenForControllerChange *****************************

// ********** Begin Class USteamUtilities **********************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execListenForSteamMessages); \
	DECLARE_FUNCTION(execIsRecalculatingPing); \
	DECLARE_FUNCTION(execGetPingFromHostData); \
	DECLARE_FUNCTION(execGetHostPingData); \
	DECLARE_FUNCTION(execIsUsingP2PRelays); \
	DECLARE_FUNCTION(execPatchSessionResult); \
	DECLARE_FUNCTION(execK2_IsPlayerInSession); \
	DECLARE_FUNCTION(execWriteBytesToFile); \
	DECLARE_FUNCTION(execReadFileToBytes); \
	DECLARE_FUNCTION(execK2_HexToString); \
	DECLARE_FUNCTION(execK2_HexToBytes); \
	DECLARE_FUNCTION(execIsSteamServerInitialized); \
	DECLARE_FUNCTION(execBP_BytesToString); \
	DECLARE_FUNCTION(execBP_StringToBytes); \
	DECLARE_FUNCTION(execGetSteamIdFromPlayerState); \
	DECLARE_FUNCTION(execGetPublicIp); \
	DECLARE_FUNCTION(execEncryptString); \
	DECLARE_FUNCTION(execFromUnixTimestamp); \
	DECLARE_FUNCTION(execConstructServerFilter); \
	DECLARE_FUNCTION(execIsSteamAvailable); \
	DECLARE_FUNCTION(execIsLobby); \
	DECLARE_FUNCTION(execGetAccountType); \
	DECLARE_FUNCTION(execGetGameEngineInitialized); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals_Exec); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals); \
	DECLARE_FUNCTION(execPublishedFileID_NotEquals); \
	DECLARE_FUNCTION(execPublishedFileID_Equals_Exec); \
	DECLARE_FUNCTION(execPublishedFileID_Equals); \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execEqual_Exec); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid); \
	DECLARE_FUNCTION(execIsUGCHandleValid_Exec); \
	DECLARE_FUNCTION(execIsUGCHandleValid); \
	DECLARE_FUNCTION(execIsGameIDValid_Exec); \
	DECLARE_FUNCTION(execIsGameIDValid); \
	DECLARE_FUNCTION(execIsSteamIDValid_Exec); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid_Exec); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execBreakTicketHandle); \
	DECLARE_FUNCTION(execBreakInventoryUpdateHandle); \
	DECLARE_FUNCTION(execBreakUGCHandle); \
	DECLARE_FUNCTION(execBreakPublishedFileID); \
	DECLARE_FUNCTION(execBreakSteamGameID); \
	DECLARE_FUNCTION(execBreakSteamID); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execMakeSearchInteger); \
	DECLARE_FUNCTION(execMakeSearchString); \
	DECLARE_FUNCTION(execMakeInteger); \
	DECLARE_FUNCTION(execMakeString); \
	DECLARE_FUNCTION(execMakeTicketHandle); \
	DECLARE_FUNCTION(execMakeInventoryUpdateHandle); \
	DECLARE_FUNCTION(execMakeUGCHandle); \
	DECLARE_FUNCTION(execMakePublishedFileID); \
	DECLARE_FUNCTION(execMakeSteamGameID); \
	DECLARE_FUNCTION(execMakeSteamID);


struct Z_Construct_UClass_USteamUtilities_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamUtilities_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamUtilities(); \
	friend struct ::Z_Construct_UClass_USteamUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamUtilities_NoRegister) \
	DECLARE_SERIALIZER(USteamUtilities)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamUtilities(USteamUtilities&&) = delete; \
	USteamUtilities(const USteamUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamUtilities); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamUtilities) \
	NO_API virtual ~USteamUtilities();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_121_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_124_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamUtilities;

// ********** End Class USteamUtilities ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamCore_SteamUtilities_h

// ********** Begin Enum ESteamCoreValid ***********************************************************
#define FOREACH_ENUM_ESTEAMCOREVALID(op) \
	op(ESteamCoreValid::Valid) \
	op(ESteamCoreValid::NotValid) 

enum class ESteamCoreValid : uint8;
template<> struct TIsUEnumClass<ESteamCoreValid> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreValid>();
// ********** End Enum ESteamCoreValid *************************************************************

// ********** Begin Enum ESteamCoreIdentical *******************************************************
#define FOREACH_ENUM_ESTEAMCOREIDENTICAL(op) \
	op(ESteamCoreIdentical::Identical) \
	op(ESteamCoreIdentical::NotIdentical) 

enum class ESteamCoreIdentical : uint8;
template<> struct TIsUEnumClass<ESteamCoreIdentical> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreIdentical>();
// ********** End Enum ESteamCoreIdentical *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
