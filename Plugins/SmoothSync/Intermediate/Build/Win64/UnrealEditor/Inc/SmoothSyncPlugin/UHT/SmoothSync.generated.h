// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmoothSync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef SMOOTHSYNCPLUGIN_SmoothSync_generated_h
#error "SmoothSync.generated.h already included, missing '#pragma once' in SmoothSync.h"
#endif
#define SMOOTHSYNCPLUGIN_SmoothSync_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_RPC_WRAPPERS \
	virtual bool SmoothSyncTeleportClientToServer_Validate(FVector3f , FVector3f , FVector3f , float ); \
	virtual void SmoothSyncTeleportClientToServer_Implementation(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime); \
	virtual bool SmoothSyncTeleportServerToClients_Validate(FVector3f , FVector3f , FVector3f , float ); \
	virtual void SmoothSyncTeleportServerToClients_Implementation(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime); \
	virtual bool SmoothSyncEnableClientToServer_Validate(bool ); \
	virtual void SmoothSyncEnableClientToServer_Implementation(bool enable); \
	virtual bool SmoothSyncEnableServerToClients_Validate(bool ); \
	virtual void SmoothSyncEnableServerToClients_Implementation(bool enable); \
	virtual bool ClientSendsTransformToServer_Validate(TArray<uint8> const& ); \
	virtual void ClientSendsTransformToServer_Implementation(TArray<uint8> const& value); \
	virtual bool ServerSendsTransformToEveryone_Validate(TArray<uint8> const& ); \
	virtual void ServerSendsTransformToEveryone_Implementation(TArray<uint8> const& value); \
 \
	DECLARE_FUNCTION(execSmoothSyncTeleportClientToServer); \
	DECLARE_FUNCTION(execSmoothSyncTeleportServerToClients); \
	DECLARE_FUNCTION(execSmoothSyncEnableClientToServer); \
	DECLARE_FUNCTION(execSmoothSyncEnableServerToClients); \
	DECLARE_FUNCTION(execClientSendsTransformToServer); \
	DECLARE_FUNCTION(execServerSendsTransformToEveryone); \
	DECLARE_FUNCTION(execsetSceneComponentToSync); \
	DECLARE_FUNCTION(execforceStateSendNextFrame); \
	DECLARE_FUNCTION(execenableSmoothSync); \
	DECLARE_FUNCTION(execteleport); \
	DECLARE_FUNCTION(execclearBuffer);


#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SmoothSyncTeleportClientToServer_Validate(FVector3f , FVector3f , FVector3f , float ); \
	virtual void SmoothSyncTeleportClientToServer_Implementation(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime); \
	virtual bool SmoothSyncTeleportServerToClients_Validate(FVector3f , FVector3f , FVector3f , float ); \
	virtual void SmoothSyncTeleportServerToClients_Implementation(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime); \
	virtual bool SmoothSyncEnableClientToServer_Validate(bool ); \
	virtual void SmoothSyncEnableClientToServer_Implementation(bool enable); \
	virtual bool SmoothSyncEnableServerToClients_Validate(bool ); \
	virtual void SmoothSyncEnableServerToClients_Implementation(bool enable); \
	virtual bool ClientSendsTransformToServer_Validate(TArray<uint8> const& ); \
	virtual void ClientSendsTransformToServer_Implementation(TArray<uint8> const& value); \
	virtual bool ServerSendsTransformToEveryone_Validate(TArray<uint8> const& ); \
	virtual void ServerSendsTransformToEveryone_Implementation(TArray<uint8> const& value); \
 \
	DECLARE_FUNCTION(execSmoothSyncTeleportClientToServer); \
	DECLARE_FUNCTION(execSmoothSyncTeleportServerToClients); \
	DECLARE_FUNCTION(execSmoothSyncEnableClientToServer); \
	DECLARE_FUNCTION(execSmoothSyncEnableServerToClients); \
	DECLARE_FUNCTION(execClientSendsTransformToServer); \
	DECLARE_FUNCTION(execServerSendsTransformToEveryone); \
	DECLARE_FUNCTION(execsetSceneComponentToSync); \
	DECLARE_FUNCTION(execforceStateSendNextFrame); \
	DECLARE_FUNCTION(execenableSmoothSync); \
	DECLARE_FUNCTION(execteleport); \
	DECLARE_FUNCTION(execclearBuffer);


#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_CALLBACK_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmoothSync(); \
	friend struct Z_Construct_UClass_USmoothSync_Statics; \
public: \
	DECLARE_CLASS(USmoothSync, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmoothSyncPlugin"), NO_API) \
	DECLARE_SERIALIZER(USmoothSync)


#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUSmoothSync(); \
	friend struct Z_Construct_UClass_USmoothSync_Statics; \
public: \
	DECLARE_CLASS(USmoothSync, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmoothSyncPlugin"), NO_API) \
	DECLARE_SERIALIZER(USmoothSync)


#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmoothSync(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmoothSync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmoothSync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmoothSync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmoothSync(USmoothSync&&); \
	NO_API USmoothSync(const USmoothSync&); \
public: \
	NO_API virtual ~USmoothSync();


#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmoothSync(USmoothSync&&); \
	NO_API USmoothSync(const USmoothSync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmoothSync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmoothSync); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USmoothSync) \
	NO_API virtual ~USmoothSync();


#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_44_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMOOTHSYNCPLUGIN_API UClass* StaticClass<class USmoothSync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h


#define FOREACH_ENUM_SYNCMODE(op) \
	op(SyncMode::XYZ) \
	op(SyncMode::XY) \
	op(SyncMode::XZ) \
	op(SyncMode::YZ) \
	op(SyncMode::X) \
	op(SyncMode::Y) \
	op(SyncMode::Z) \
	op(SyncMode::NONE) 

enum class SyncMode : uint8;
template<> struct TIsUEnumClass<SyncMode> { enum { Value = true }; };
template<> SMOOTHSYNCPLUGIN_API UEnum* StaticEnum<SyncMode>();

#define FOREACH_ENUM_EXTRAPOLATIONMODE(op) \
	op(ExtrapolationMode::UNLIMITED) \
	op(ExtrapolationMode::LIMITED) \
	op(ExtrapolationMode::NONE) 

enum class ExtrapolationMode : uint8;
template<> struct TIsUEnumClass<ExtrapolationMode> { enum { Value = true }; };
template<> SMOOTHSYNCPLUGIN_API UEnum* StaticEnum<ExtrapolationMode>();

#define FOREACH_ENUM_RESTSTATE(op) \
	op(RestState::AT_REST) \
	op(RestState::JUST_STARTED_MOVING) \
	op(RestState::MOVING) 

enum class RestState : uint8;
template<> struct TIsUEnumClass<RestState> { enum { Value = true }; };
template<> SMOOTHSYNCPLUGIN_API UEnum* StaticEnum<RestState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
