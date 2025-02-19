// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmoothSyncPlugin/Public/SmoothSync.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmoothSync() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SMOOTHSYNCPLUGIN_API UClass* Z_Construct_UClass_USmoothSync();
	SMOOTHSYNCPLUGIN_API UClass* Z_Construct_UClass_USmoothSync_NoRegister();
	SMOOTHSYNCPLUGIN_API UEnum* Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode();
	SMOOTHSYNCPLUGIN_API UEnum* Z_Construct_UEnum_SmoothSyncPlugin_RestState();
	SMOOTHSYNCPLUGIN_API UEnum* Z_Construct_UEnum_SmoothSyncPlugin_SyncMode();
	UPackage* Z_Construct_UPackage__Script_SmoothSyncPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SyncMode;
	static UEnum* SyncMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SyncMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SyncMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmoothSyncPlugin_SyncMode, (UObject*)Z_Construct_UPackage__Script_SmoothSyncPlugin(), TEXT("SyncMode"));
		}
		return Z_Registration_Info_UEnum_SyncMode.OuterSingleton;
	}
	template<> SMOOTHSYNCPLUGIN_API UEnum* StaticEnum<SyncMode>()
	{
		return SyncMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SmoothSyncPlugin_SyncMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmoothSyncPlugin_SyncMode_Statics::Enumerators[] = {
		{ "SyncMode::XYZ", (int64)SyncMode::XYZ },
		{ "SyncMode::XY", (int64)SyncMode::XY },
		{ "SyncMode::XZ", (int64)SyncMode::XZ },
		{ "SyncMode::YZ", (int64)SyncMode::YZ },
		{ "SyncMode::X", (int64)SyncMode::X },
		{ "SyncMode::Y", (int64)SyncMode::Y },
		{ "SyncMode::Z", (int64)SyncMode::Z },
		{ "SyncMode::NONE", (int64)SyncMode::NONE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmoothSyncPlugin_SyncMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>The variables that will be synced.</summary>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "NONE.Name", "SyncMode::NONE" },
		{ "ToolTip", "<summary>The variables that will be synced.</summary>" },
		{ "X.Name", "SyncMode::X" },
		{ "XY.Name", "SyncMode::XY" },
		{ "XYZ.Name", "SyncMode::XYZ" },
		{ "XZ.Name", "SyncMode::XZ" },
		{ "Y.Name", "SyncMode::Y" },
		{ "YZ.Name", "SyncMode::YZ" },
		{ "Z.Name", "SyncMode::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmoothSyncPlugin_SyncMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmoothSyncPlugin,
		nullptr,
		"SyncMode",
		"SyncMode",
		Z_Construct_UEnum_SmoothSyncPlugin_SyncMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmoothSyncPlugin_SyncMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SmoothSyncPlugin_SyncMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SmoothSyncPlugin_SyncMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SmoothSyncPlugin_SyncMode()
	{
		if (!Z_Registration_Info_UEnum_SyncMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SyncMode.InnerSingleton, Z_Construct_UEnum_SmoothSyncPlugin_SyncMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SyncMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ExtrapolationMode;
	static UEnum* ExtrapolationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ExtrapolationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ExtrapolationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode, (UObject*)Z_Construct_UPackage__Script_SmoothSyncPlugin(), TEXT("ExtrapolationMode"));
		}
		return Z_Registration_Info_UEnum_ExtrapolationMode.OuterSingleton;
	}
	template<> SMOOTHSYNCPLUGIN_API UEnum* StaticEnum<ExtrapolationMode>()
	{
		return ExtrapolationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode_Statics::Enumerators[] = {
		{ "ExtrapolationMode::UNLIMITED", (int64)ExtrapolationMode::UNLIMITED },
		{ "ExtrapolationMode::LIMITED", (int64)ExtrapolationMode::LIMITED },
		{ "ExtrapolationMode::NONE", (int64)ExtrapolationMode::NONE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>The extrapolation mode.</summary>\n" },
		{ "LIMITED.Name", "ExtrapolationMode::LIMITED" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "NONE.Name", "ExtrapolationMode::NONE" },
		{ "ToolTip", "<summary>The extrapolation mode.</summary>" },
		{ "UNLIMITED.Name", "ExtrapolationMode::UNLIMITED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmoothSyncPlugin,
		nullptr,
		"ExtrapolationMode",
		"ExtrapolationMode",
		Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode()
	{
		if (!Z_Registration_Info_UEnum_ExtrapolationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ExtrapolationMode.InnerSingleton, Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ExtrapolationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_RestState;
	static UEnum* RestState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_RestState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_RestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmoothSyncPlugin_RestState, (UObject*)Z_Construct_UPackage__Script_SmoothSyncPlugin(), TEXT("RestState"));
		}
		return Z_Registration_Info_UEnum_RestState.OuterSingleton;
	}
	template<> SMOOTHSYNCPLUGIN_API UEnum* StaticEnum<RestState>()
	{
		return RestState_StaticEnum();
	}
	struct Z_Construct_UEnum_SmoothSyncPlugin_RestState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmoothSyncPlugin_RestState_Statics::Enumerators[] = {
		{ "RestState::AT_REST", (int64)RestState::AT_REST },
		{ "RestState::JUST_STARTED_MOVING", (int64)RestState::JUST_STARTED_MOVING },
		{ "RestState::MOVING", (int64)RestState::MOVING },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmoothSyncPlugin_RestState_Statics::Enum_MetaDataParams[] = {
		{ "AT_REST.Name", "RestState::AT_REST" },
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>The variables that will be synced.</summary>\n" },
		{ "JUST_STARTED_MOVING.Name", "RestState::JUST_STARTED_MOVING" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "MOVING.Name", "RestState::MOVING" },
		{ "ToolTip", "<summary>The variables that will be synced.</summary>" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmoothSyncPlugin_RestState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmoothSyncPlugin,
		nullptr,
		"RestState",
		"RestState",
		Z_Construct_UEnum_SmoothSyncPlugin_RestState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmoothSyncPlugin_RestState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SmoothSyncPlugin_RestState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SmoothSyncPlugin_RestState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SmoothSyncPlugin_RestState()
	{
		if (!Z_Registration_Info_UEnum_RestState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_RestState.InnerSingleton, Z_Construct_UEnum_SmoothSyncPlugin_RestState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_RestState.InnerSingleton;
	}
	DEFINE_FUNCTION(USmoothSync::execSmoothSyncTeleportClientToServer)
	{
		P_GET_STRUCT(FVector3f,Z_Param_position);
		P_GET_STRUCT(FVector3f,Z_Param_rotation);
		P_GET_STRUCT(FVector3f,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tempOwnerTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SmoothSyncTeleportClientToServer_Validate(Z_Param_position,Z_Param_rotation,Z_Param_scale,Z_Param_tempOwnerTime))
		{
			RPC_ValidateFailed(TEXT("SmoothSyncTeleportClientToServer_Validate"));
			return;
		}
		P_THIS->SmoothSyncTeleportClientToServer_Implementation(Z_Param_position,Z_Param_rotation,Z_Param_scale,Z_Param_tempOwnerTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execSmoothSyncTeleportServerToClients)
	{
		P_GET_STRUCT(FVector3f,Z_Param_position);
		P_GET_STRUCT(FVector3f,Z_Param_rotation);
		P_GET_STRUCT(FVector3f,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tempOwnerTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SmoothSyncTeleportServerToClients_Validate(Z_Param_position,Z_Param_rotation,Z_Param_scale,Z_Param_tempOwnerTime))
		{
			RPC_ValidateFailed(TEXT("SmoothSyncTeleportServerToClients_Validate"));
			return;
		}
		P_THIS->SmoothSyncTeleportServerToClients_Implementation(Z_Param_position,Z_Param_rotation,Z_Param_scale,Z_Param_tempOwnerTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execSmoothSyncEnableClientToServer)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SmoothSyncEnableClientToServer_Validate(Z_Param_enable))
		{
			RPC_ValidateFailed(TEXT("SmoothSyncEnableClientToServer_Validate"));
			return;
		}
		P_THIS->SmoothSyncEnableClientToServer_Implementation(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execSmoothSyncEnableServerToClients)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SmoothSyncEnableServerToClients_Validate(Z_Param_enable))
		{
			RPC_ValidateFailed(TEXT("SmoothSyncEnableServerToClients_Validate"));
			return;
		}
		P_THIS->SmoothSyncEnableServerToClients_Implementation(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execClientSendsTransformToServer)
	{
		P_GET_TARRAY(uint8,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientSendsTransformToServer_Validate(Z_Param_value))
		{
			RPC_ValidateFailed(TEXT("ClientSendsTransformToServer_Validate"));
			return;
		}
		P_THIS->ClientSendsTransformToServer_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execServerSendsTransformToEveryone)
	{
		P_GET_TARRAY(uint8,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSendsTransformToEveryone_Validate(Z_Param_value))
		{
			RPC_ValidateFailed(TEXT("ServerSendsTransformToEveryone_Validate"));
			return;
		}
		P_THIS->ServerSendsTransformToEveryone_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execsetSceneComponentToSync)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_theComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setSceneComponentToSync(Z_Param_theComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execforceStateSendNextFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->forceStateSendNextFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execenableSmoothSync)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->enableSmoothSync(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execteleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->teleport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmoothSync::execclearBuffer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->clearBuffer();
		P_NATIVE_END;
	}
	struct SmoothSync_eventClientSendsTransformToServer_Parms
	{
		TArray<uint8> value;
	};
	struct SmoothSync_eventServerSendsTransformToEveryone_Parms
	{
		TArray<uint8> value;
	};
	struct SmoothSync_eventSmoothSyncEnableClientToServer_Parms
	{
		bool enable;
	};
	struct SmoothSync_eventSmoothSyncEnableServerToClients_Parms
	{
		bool enable;
	};
	struct SmoothSync_eventSmoothSyncTeleportClientToServer_Parms
	{
		FVector3f position;
		FVector3f rotation;
		FVector3f scale;
		float tempOwnerTime;
	};
	struct SmoothSync_eventSmoothSyncTeleportServerToClients_Parms
	{
		FVector3f position;
		FVector3f rotation;
		FVector3f scale;
		float tempOwnerTime;
	};
	static FName NAME_USmoothSync_ClientSendsTransformToServer = FName(TEXT("ClientSendsTransformToServer"));
	void USmoothSync::ClientSendsTransformToServer(TArray<uint8> const& value)
	{
		SmoothSync_eventClientSendsTransformToServer_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_USmoothSync_ClientSendsTransformToServer),&Parms);
	}
	static FName NAME_USmoothSync_ServerSendsTransformToEveryone = FName(TEXT("ServerSendsTransformToEveryone"));
	void USmoothSync::ServerSendsTransformToEveryone(TArray<uint8> const& value)
	{
		SmoothSync_eventServerSendsTransformToEveryone_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_USmoothSync_ServerSendsTransformToEveryone),&Parms);
	}
	static FName NAME_USmoothSync_SmoothSyncEnableClientToServer = FName(TEXT("SmoothSyncEnableClientToServer"));
	void USmoothSync::SmoothSyncEnableClientToServer(bool enable)
	{
		SmoothSync_eventSmoothSyncEnableClientToServer_Parms Parms;
		Parms.enable=enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USmoothSync_SmoothSyncEnableClientToServer),&Parms);
	}
	static FName NAME_USmoothSync_SmoothSyncEnableServerToClients = FName(TEXT("SmoothSyncEnableServerToClients"));
	void USmoothSync::SmoothSyncEnableServerToClients(bool enable)
	{
		SmoothSync_eventSmoothSyncEnableServerToClients_Parms Parms;
		Parms.enable=enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USmoothSync_SmoothSyncEnableServerToClients),&Parms);
	}
	static FName NAME_USmoothSync_SmoothSyncTeleportClientToServer = FName(TEXT("SmoothSyncTeleportClientToServer"));
	void USmoothSync::SmoothSyncTeleportClientToServer(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime)
	{
		SmoothSync_eventSmoothSyncTeleportClientToServer_Parms Parms;
		Parms.position=position;
		Parms.rotation=rotation;
		Parms.scale=scale;
		Parms.tempOwnerTime=tempOwnerTime;
		ProcessEvent(FindFunctionChecked(NAME_USmoothSync_SmoothSyncTeleportClientToServer),&Parms);
	}
	static FName NAME_USmoothSync_SmoothSyncTeleportServerToClients = FName(TEXT("SmoothSyncTeleportServerToClients"));
	void USmoothSync::SmoothSyncTeleportServerToClients(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime)
	{
		SmoothSync_eventSmoothSyncTeleportServerToClients_Parms Parms;
		Parms.position=position;
		Parms.rotation=rotation;
		Parms.scale=scale;
		Parms.tempOwnerTime=tempOwnerTime;
		ProcessEvent(FindFunctionChecked(NAME_USmoothSync_SmoothSyncTeleportServerToClients),&Parms);
	}
	void USmoothSync::StaticRegisterNativesUSmoothSync()
	{
		UClass* Class = USmoothSync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "clearBuffer", &USmoothSync::execclearBuffer },
			{ "ClientSendsTransformToServer", &USmoothSync::execClientSendsTransformToServer },
			{ "enableSmoothSync", &USmoothSync::execenableSmoothSync },
			{ "forceStateSendNextFrame", &USmoothSync::execforceStateSendNextFrame },
			{ "ServerSendsTransformToEveryone", &USmoothSync::execServerSendsTransformToEveryone },
			{ "setSceneComponentToSync", &USmoothSync::execsetSceneComponentToSync },
			{ "SmoothSyncEnableClientToServer", &USmoothSync::execSmoothSyncEnableClientToServer },
			{ "SmoothSyncEnableServerToClients", &USmoothSync::execSmoothSyncEnableServerToClients },
			{ "SmoothSyncTeleportClientToServer", &USmoothSync::execSmoothSyncTeleportClientToServer },
			{ "SmoothSyncTeleportServerToClients", &USmoothSync::execSmoothSyncTeleportServerToClients },
			{ "teleport", &USmoothSync::execteleport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USmoothSync_clearBuffer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_clearBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothSync" },
		{ "Comment", "/// Clear the state buffer. You will call this on all unowned Actor instances on ownership changes.\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "Clear the state buffer. You will call this on all unowned Actor instances on ownership changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_clearBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "clearBuffer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_clearBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_clearBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_clearBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_clearBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventClientSendsTransformToServer_Parms, value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::NewProp_value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::NewProp_value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "ClientSendsTransformToServer", nullptr, nullptr, sizeof(SmoothSync_eventClientSendsTransformToServer_Parms), Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics
	{
		struct SmoothSync_eventenableSmoothSync_Parms
		{
			bool enable;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((SmoothSync_eventenableSmoothSync_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmoothSync_eventenableSmoothSync_Parms), &Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::NewProp_enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothSync" },
		{ "Comment", "/// Used to turn Smooth Sync on and off. True to enable Smooth Sync. False to disable Smooth Sync.\n///\x09Will automatically send RPCs across the network. Is meant to be called on the owned version of the Actor.\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "Used to turn Smooth Sync on and off. True to enable Smooth Sync. False to disable Smooth Sync.\n      Will automatically send RPCs across the network. Is meant to be called on the owned version of the Actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "enableSmoothSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::SmoothSync_eventenableSmoothSync_Parms), Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_enableSmoothSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_enableSmoothSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_forceStateSendNextFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_forceStateSendNextFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothSync" },
		{ "Comment", "/// Forces the SmoothState (Transform) to be sent on owned objects the next time it goes through TickComponent(). \n/// The SmoothState (Transform) will get sent next frame regardless of all limitations.\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "Forces the SmoothState (Transform) to be sent on owned objects the next time it goes through TickComponent().\nThe SmoothState (Transform) will get sent next frame regardless of all limitations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_forceStateSendNextFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "forceStateSendNextFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_forceStateSendNextFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_forceStateSendNextFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_forceStateSendNextFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_forceStateSendNextFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventServerSendsTransformToEveryone_Parms, value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::NewProp_value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::NewProp_value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "ServerSendsTransformToEveryone", nullptr, nullptr, sizeof(SmoothSync_eventServerSendsTransformToEveryone_Parms), Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics
	{
		struct SmoothSync_eventsetSceneComponentToSync_Parms
		{
			USceneComponent* theComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_theComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_theComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::NewProp_theComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::NewProp_theComponent = { "theComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventsetSceneComponentToSync_Parms, theComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::NewProp_theComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::NewProp_theComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::NewProp_theComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothSync" },
		{ "Comment", "/// Used to set the transform that you want to sync on this SmoothSync. If this is not called, SmoothSync will sync the actor. \n/// Must have one SmoothSync for each Transform that you want to sync. \n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "Used to set the transform that you want to sync on this SmoothSync. If this is not called, SmoothSync will sync the actor.\nMust have one SmoothSync for each Transform that you want to sync." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "setSceneComponentToSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::SmoothSync_eventsetSceneComponentToSync_Parms), Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_setSceneComponentToSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_setSceneComponentToSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics
	{
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((SmoothSync_eventSmoothSyncEnableClientToServer_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmoothSync_eventSmoothSyncEnableClientToServer_Parms), &Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::NewProp_enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "SmoothSyncEnableClientToServer", nullptr, nullptr, sizeof(SmoothSync_eventSmoothSyncEnableClientToServer_Parms), Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics
	{
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((SmoothSync_eventSmoothSyncEnableServerToClients_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmoothSync_eventSmoothSyncEnableServerToClients_Parms), &Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::NewProp_enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "SmoothSyncEnableServerToClients", nullptr, nullptr, sizeof(SmoothSync_eventSmoothSyncEnableServerToClients_Parms), Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tempOwnerTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventSmoothSyncTeleportClientToServer_Parms, position), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventSmoothSyncTeleportClientToServer_Parms, rotation), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventSmoothSyncTeleportClientToServer_Parms, scale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::NewProp_tempOwnerTime = { "tempOwnerTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventSmoothSyncTeleportClientToServer_Parms, tempOwnerTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::NewProp_tempOwnerTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "SmoothSyncTeleportClientToServer", nullptr, nullptr, sizeof(SmoothSync_eventSmoothSyncTeleportClientToServer_Parms), Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tempOwnerTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventSmoothSyncTeleportServerToClients_Parms, position), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventSmoothSyncTeleportServerToClients_Parms, rotation), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventSmoothSyncTeleportServerToClients_Parms, scale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::NewProp_tempOwnerTime = { "tempOwnerTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmoothSync_eventSmoothSyncTeleportServerToClients_Parms, tempOwnerTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::NewProp_tempOwnerTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "SmoothSyncTeleportServerToClients", nullptr, nullptr, sizeof(SmoothSync_eventSmoothSyncTeleportServerToClients_Parms), Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmoothSync_teleport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmoothSync_teleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothSync" },
		{ "Comment", "/// Teleport the player so that position will not be interpolated on non-owners. Use teleport() on the owner and \n/// the Actor will jump to the current owner's position on non-owners. \n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "Teleport the player so that position will not be interpolated on non-owners. Use teleport() on the owner and\nthe Actor will jump to the current owner's position on non-owners." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothSync_teleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothSync, nullptr, "teleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmoothSync_teleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothSync_teleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmoothSync_teleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothSync_teleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothSync);
	UClass* Z_Construct_UClass_USmoothSync_NoRegister()
	{
		return USmoothSync::StaticClass();
	}
	struct Z_Construct_UClass_USmoothSync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interpolationBackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_interpolationBackTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_extrapolationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_extrapolationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_extrapolationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useExtrapolationTimeLimit_MetaData[];
#endif
		static void NewProp_useExtrapolationTimeLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useExtrapolationTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_extrapolationTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_extrapolationTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useExtrapolationDistanceLimit_MetaData[];
#endif
		static void NewProp_useExtrapolationDistanceLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useExtrapolationDistanceLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_extrapolationDistanceLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_extrapolationDistanceLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sendPositionThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sendPositionThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sendRotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sendRotationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sendScaleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sendScaleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sendVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sendVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sendAngularVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sendAngularVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_receivedPositionThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_receivedPositionThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_receivedRotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_receivedRotationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionSnapThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionSnapThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotationSnapThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSnapThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scaleSnapThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scaleSnapThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionLerpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionLerpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotationLerpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationLerpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scaleLerpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scaleLerpSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_syncPosition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_syncPosition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_syncPosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_syncRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_syncRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_syncRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_syncScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_syncScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_syncScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_syncVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_syncVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_syncVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_syncAngularVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_syncAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_syncAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_syncMovementMode_MetaData[];
#endif
		static void NewProp_syncMovementMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_syncMovementMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isPositionCompressed_MetaData[];
#endif
		static void NewProp_isPositionCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPositionCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isRotationCompressed_MetaData[];
#endif
		static void NewProp_isRotationCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isRotationCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isScaleCompressed_MetaData[];
#endif
		static void NewProp_isScaleCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isScaleCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isVelocityCompressed_MetaData[];
#endif
		static void NewProp_isVelocityCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isVelocityCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAngularVelocityCompressed_MetaData[];
#endif
		static void NewProp_isAngularVelocityCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAngularVelocityCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sendRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sendRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isUsingOriginRebasing_MetaData[];
#endif
		static void NewProp_isUsingOriginRebasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isUsingOriginRebasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_alwaysSendOrigin_MetaData[];
#endif
		static void NewProp_alwaysSendOrigin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_alwaysSendOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_syncOwnershipChange_MetaData[];
#endif
		static void NewProp_syncOwnershipChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_syncOwnershipChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_realComponentToSync_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_realComponentToSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interpolationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_interpolationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_atRestPositionThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_atRestPositionThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_atRestRotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_atRestRotationThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmoothSync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SmoothSyncPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USmoothSync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USmoothSync_clearBuffer, "clearBuffer" }, // 2877751008
		{ &Z_Construct_UFunction_USmoothSync_ClientSendsTransformToServer, "ClientSendsTransformToServer" }, // 1663503231
		{ &Z_Construct_UFunction_USmoothSync_enableSmoothSync, "enableSmoothSync" }, // 1958504331
		{ &Z_Construct_UFunction_USmoothSync_forceStateSendNextFrame, "forceStateSendNextFrame" }, // 968044221
		{ &Z_Construct_UFunction_USmoothSync_ServerSendsTransformToEveryone, "ServerSendsTransformToEveryone" }, // 2699170165
		{ &Z_Construct_UFunction_USmoothSync_setSceneComponentToSync, "setSceneComponentToSync" }, // 3377937030
		{ &Z_Construct_UFunction_USmoothSync_SmoothSyncEnableClientToServer, "SmoothSyncEnableClientToServer" }, // 3418538052
		{ &Z_Construct_UFunction_USmoothSync_SmoothSyncEnableServerToClients, "SmoothSyncEnableServerToClients" }, // 3247467088
		{ &Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportClientToServer, "SmoothSyncTeleportClientToServer" }, // 2872135232
		{ &Z_Construct_UFunction_USmoothSync_SmoothSyncTeleportServerToClients, "SmoothSyncTeleportServerToClients" }, // 2538849154
		{ &Z_Construct_UFunction_USmoothSync_teleport, "teleport" }, // 3333322844
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SmoothSync.h" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationBackTime_MetaData[] = {
		{ "Category", "Important" },
		{ "Comment", "/// <summary>How much time in the past non-owned objects should be.</summary>\n/// <remarks>\n/// interpolationBackTime is the amount of time in the past the object will be on non-owners.\n/// This is so if you hit a latency spike, you still have a buffer of the interpolation back time of known States \n/// before you start extrapolating into the unknown.\n///\n/// Increasing will make interpolation more likely to be used,\n/// which means the synced position will be more likely to be an actual position that the owner was at.\n///\n/// Decreasing will make extrapolation more likely to be used,\n/// this will increase reponsiveness, but with any latency spikes that last longer than the interpolationBackTime, \n/// the position will be less correct to where the player was actually at.\n///\n/// Keep this higher than 1/SendRate to attempt to always interpolate. Keep in mind your send rate may fluctuate\n/// depending on your Unreal NetpdateFrequency settings and NetPriority. \n///  \n/// Measured in seconds.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>How much time in the past non-owned objects should be.</summary>\n<remarks>\ninterpolationBackTime is the amount of time in the past the object will be on non-owners.\nThis is so if you hit a latency spike, you still have a buffer of the interpolation back time of known States\nbefore you start extrapolating into the unknown.\n\nIncreasing will make interpolation more likely to be used,\nwhich means the synced position will be more likely to be an actual position that the owner was at.\n\nDecreasing will make extrapolation more likely to be used,\nthis will increase reponsiveness, but with any latency spikes that last longer than the interpolationBackTime,\nthe position will be less correct to where the player was actually at.\n\nKeep this higher than 1/SendRate to attempt to always interpolate. Keep in mind your send rate may fluctuate\ndepending on your Unreal NetpdateFrequency settings and NetPriority.\n\nMeasured in seconds.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationBackTime = { "interpolationBackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, interpolationBackTime), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationBackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationBackTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationMode_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/// <summary>The amount of extrapolation used.</summary>\n/// <remarks>\n/// Extrapolation is going into the unknown based on information we had in the past. Generally, you'll\n/// want extrapolation to help fill in missing information during lag spikes. \n/// None - Use no extrapolation. \n/// Limited - Use the settings for extrapolation limits. \n/// Unlimited - Allow extrapolation forever. \n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>The amount of extrapolation used.</summary>\n<remarks>\nExtrapolation is going into the unknown based on information we had in the past. Generally, you'll\nwant extrapolation to help fill in missing information during lag spikes.\nNone - Use no extrapolation.\nLimited - Use the settings for extrapolation limits.\nUnlimited - Allow extrapolation forever.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationMode = { "extrapolationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, extrapolationMode), Z_Construct_UEnum_SmoothSyncPlugin_ExtrapolationMode, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationMode_MetaData)) }; // 661832867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationTimeLimit_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/// <summary>Whether or not to have an extrapolation time limit.</summary>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Whether or not to have an extrapolation time limit.</summary>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationTimeLimit_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->useExtrapolationTimeLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationTimeLimit = { "useExtrapolationTimeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationTimeLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationTimeLimit_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/// <summary>How much time into the future a non-owned object is allowed to extrapolate.</summary>\n/// <remarks>\n/// Extrapolating too far tends to cause erratic and non-realistic movement, but a little bit of extrapolation is \n/// better than none because it keeps things working semi-right during latency spikes.\n///\n/// Measured in seconds.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>How much time into the future a non-owned object is allowed to extrapolate.</summary>\n<remarks>\nExtrapolating too far tends to cause erratic and non-realistic movement, but a little bit of extrapolation is\nbetter than none because it keeps things working semi-right during latency spikes.\n\nMeasured in seconds.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationTimeLimit = { "extrapolationTimeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, extrapolationTimeLimit), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationDistanceLimit_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/// <summary>Whether or not to have an extrapolation distance limit.</summary>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Whether or not to have an extrapolation distance limit.</summary>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationDistanceLimit_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->useExtrapolationDistanceLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationDistanceLimit = { "useExtrapolationDistanceLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationDistanceLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationDistanceLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationDistanceLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationDistanceLimit_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/// <summary>How much distance into the future a non-owned object is allowed to extrapolate.</summary>\n/// <remarks>\n/// Extrapolating too far tends to cause erratic and non-realistic movement, but a little bit of extrapolation is \n/// better than none because it keeps things working semi-right during latency spikes.\n/// \n/// Measured in distance units.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>How much distance into the future a non-owned object is allowed to extrapolate.</summary>\n<remarks>\nExtrapolating too far tends to cause erratic and non-realistic movement, but a little bit of extrapolation is\nbetter than none because it keeps things working semi-right during latency spikes.\n\nMeasured in distance units.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationDistanceLimit = { "extrapolationDistanceLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, extrapolationDistanceLimit), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationDistanceLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationDistanceLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_sendPositionThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>The position won't send unless one of its Vector values has changed this much.</summary>\n/// <remarks>\n/// Set to 0 to send the position of owned objects if it has changed since the last sent position.\n/// Will not send quicker than SendRate.\n///\n/// If greater than 0, a synced object's position is only sent if its vector position value is off from the last\n/// sent position by more than the threshold. \n///\n/// Measured in distance units.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>The position won't send unless one of its Vector values has changed this much.</summary>\n<remarks>\nSet to 0 to send the position of owned objects if it has changed since the last sent position.\nWill not send quicker than SendRate.\n\nIf greater than 0, a synced object's position is only sent if its vector position value is off from the last\nsent position by more than the threshold.\n\nMeasured in distance units.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_sendPositionThreshold = { "sendPositionThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, sendPositionThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendPositionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendPositionThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRotationThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>The rotation won't send unless one of its Vector values has changed this much.</summary>\n/// <remarks>\n/// Set to 0 to send the rotation of owned objects if it has changed since the last sent rotation.\n/// Will not send quicker than SendRate.\n///\n/// If greater than 0, a synced object's rotation is only sent if its euler value is off from the last sent rotation\n/// by more than the threshold.\n///\n/// Measured in degrees.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>The rotation won't send unless one of its Vector values has changed this much.</summary>\n<remarks>\nSet to 0 to send the rotation of owned objects if it has changed since the last sent rotation.\nWill not send quicker than SendRate.\n\nIf greater than 0, a synced object's rotation is only sent if its euler value is off from the last sent rotation\nby more than the threshold.\n\nMeasured in degrees.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRotationThreshold = { "sendRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, sendRotationThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_sendScaleThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>The scale won't send unless one of its Vector values it changed this much.</summary>\n/// <remarks>\n/// Set to 0 to send the scale of owned objects if it has changed since the last sent scale.\n/// Will not send quicker than SendRate.\n///\n/// If greater than 0, a synced object's scale is only sent if its scale is off from the last sent scale by more \n/// than the threshold. \n///\n/// Measured in distance units.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>The scale won't send unless one of its Vector values it changed this much.</summary>\n<remarks>\nSet to 0 to send the scale of owned objects if it has changed since the last sent scale.\nWill not send quicker than SendRate.\n\nIf greater than 0, a synced object's scale is only sent if its scale is off from the last sent scale by more\nthan the threshold.\n\nMeasured in distance units.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_sendScaleThreshold = { "sendScaleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, sendScaleThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendScaleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendScaleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_sendVelocityThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>The velocity won't send unless one of its Vector values changed this much.</summary>\n/// <remarks>\n/// Set to 0 to send the velocity of owned objects if it has changed since the last sent velocity.\n/// Will not send quicker than SendRate.\n///\n/// If greater than 0, a synced object's velocity is only sent if its velocity is off from the last sent velocity\n/// by more than the threshold. \n///\n/// Measured in velocity units.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>The velocity won't send unless one of its Vector values changed this much.</summary>\n<remarks>\nSet to 0 to send the velocity of owned objects if it has changed since the last sent velocity.\nWill not send quicker than SendRate.\n\nIf greater than 0, a synced object's velocity is only sent if its velocity is off from the last sent velocity\nby more than the threshold.\n\nMeasured in velocity units.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_sendVelocityThreshold = { "sendVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, sendVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_sendAngularVelocityThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>The angular velocity won't send unless one of its Vector values changed this much.</summary>\n/// <remarks>\n/// Set to 0 to send the angular velocity of owned objects if it has changed since the last sent angular velocity.\n/// Will not send quicker than SendRate.\n///\n/// If greater than 0, a synced object's angular velocity is only sent if its angular velocity is off from the last sent angular velocity\n/// by more than the threshold. \n///\n/// Measured in radians per second.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>The angular velocity won't send unless one of its Vector values changed this much.</summary>\n<remarks>\nSet to 0 to send the angular velocity of owned objects if it has changed since the last sent angular velocity.\nWill not send quicker than SendRate.\n\nIf greater than 0, a synced object's angular velocity is only sent if its angular velocity is off from the last sent angular velocity\nby more than the threshold.\n\nMeasured in radians per second.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_sendAngularVelocityThreshold = { "sendAngularVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, sendAngularVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendAngularVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendAngularVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedPositionThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>The position won't be set on non-owned objects unless it changed this much.</summary>\n/// <remarks>\n/// Set to 0 to always update the position of non-owned objects if it has changed, and to use one less distance check per frame if you also have positionSnapThreshold at 0.\n/// If greater than 0, a synced object's position is only updated if it is off from the target position by more than the threshold.\n///\n/// Usually keep this at 0 or really low, at higher numbers it's useful if you are extrapolating into the future and want to stop instantly \n/// and not have it backtrack to where it currently is on the owner.\n///\n/// Measured in distance units.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>The position won't be set on non-owned objects unless it changed this much.</summary>\n<remarks>\nSet to 0 to always update the position of non-owned objects if it has changed, and to use one less distance check per frame if you also have positionSnapThreshold at 0.\nIf greater than 0, a synced object's position is only updated if it is off from the target position by more than the threshold.\n\nUsually keep this at 0 or really low, at higher numbers it's useful if you are extrapolating into the future and want to stop instantly\nand not have it backtrack to where it currently is on the owner.\n\nMeasured in distance units.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedPositionThreshold = { "receivedPositionThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, receivedPositionThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedPositionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedPositionThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedRotationThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>The rotation won't be set on non-owned objects unless it changed this much.</summary>\n/// <remarks>\n/// Set to 0 to always update the rotation of non-owned objects if it has changed, and to use one less FQuat4f.AngularDistance() check per frame if you also have rotationSnapThreshold at 0.\n/// If greater than 0, a synced object's rotation is only updated if it is off from the target rotation by more than the threshold.\n///\n/// Usually keep this at 0 or really low, at higher numbers it's useful if you are extrapolating into the future and want to stop instantly and \n/// not have it backtrack to where it currently is on the owner.\n///\n/// Measured in degrees.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>The rotation won't be set on non-owned objects unless it changed this much.</summary>\n<remarks>\nSet to 0 to always update the rotation of non-owned objects if it has changed, and to use one less FQuat4f.AngularDistance() check per frame if you also have rotationSnapThreshold at 0.\nIf greater than 0, a synced object's rotation is only updated if it is off from the target rotation by more than the threshold.\n\nUsually keep this at 0 or really low, at higher numbers it's useful if you are extrapolating into the future and want to stop instantly and\nnot have it backtrack to where it currently is on the owner.\n\nMeasured in degrees.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedRotationThreshold = { "receivedRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, receivedRotationThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_positionSnapThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>If a synced object's position is more than positionSnapThreshold units from the target position, it will jump to the target position immediately instead of lerping.</summary>\n/// <remarks>\n/// Set to zero to not use at all and use one less distance check per frame if you also have receivedPositionThreshold at 0.\n///\n/// Measured in distance units.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>If a synced object's position is more than positionSnapThreshold units from the target position, it will jump to the target position immediately instead of lerping.</summary>\n<remarks>\nSet to zero to not use at all and use one less distance check per frame if you also have receivedPositionThreshold at 0.\n\nMeasured in distance units.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_positionSnapThreshold = { "positionSnapThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, positionSnapThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_positionSnapThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_positionSnapThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationSnapThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>If a synced object's rotation is more than rotationSnapThreshold from the target rotation, it will jump to the target rotation immediately instead of lerping.</summary>\n/// <remarks>\n/// Set to zero to not use at all and use one less FQuat4f.AnglularDistance() check per frame if you also have receivedRotationThreshold at 0.\n///\n/// Measured in degrees.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>If a synced object's rotation is more than rotationSnapThreshold from the target rotation, it will jump to the target rotation immediately instead of lerping.</summary>\n<remarks>\nSet to zero to not use at all and use one less FQuat4f.AnglularDistance() check per frame if you also have receivedRotationThreshold at 0.\n\nMeasured in degrees.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationSnapThreshold = { "rotationSnapThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, rotationSnapThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationSnapThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationSnapThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleSnapThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>If a synced object's scale is more than scaleSnapThreshold units from the target scale, it will jump to the target scale immediately instead of lerping.</summary>\n/// <remarks>\n/// Set to zero to not use at all and use one less distance check per frame.\n///\n/// Measured in distance units.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>If a synced object's scale is more than scaleSnapThreshold units from the target scale, it will jump to the target scale immediately instead of lerping.</summary>\n<remarks>\nSet to zero to not use at all and use one less distance check per frame.\n\nMeasured in distance units.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleSnapThreshold = { "scaleSnapThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, scaleSnapThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleSnapThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleSnapThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_timeSmoothing_MetaData[] = {
		{ "Category", "Important" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/// <summary>How much to smooth owner time.</summary>\n/// <remarks>\n/// This is how long, in seconds, it takes to adjust the estimated owner time offset to match the latest value from the owner.\n/// Larger values mean smoother movement, but more delay reacting to changes in owner time (usually caused by changing latency).\n/// Smaller values will keep things more accurate but may result in jittering / stuttering due to natural variations in latency.\n/// Set to zero to always use the latest owner time offset with no smoothing at all. \n/// A value of 0 is not recommended and will definitely result in at least a small amount of stuttering.\n/// Note that this option is not used when latency compensation is enabled. Use the options in Time Sync instead.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>How much to smooth owner time.</summary>\n<remarks>\nThis is how long, in seconds, it takes to adjust the estimated owner time offset to match the latest value from the owner.\nLarger values mean smoother movement, but more delay reacting to changes in owner time (usually caused by changing latency).\nSmaller values will keep things more accurate but may result in jittering / stuttering due to natural variations in latency.\nSet to zero to always use the latest owner time offset with no smoothing at all.\nA value of 0 is not recommended and will definitely result in at least a small amount of stuttering.\nNote that this option is not used when latency compensation is enabled. Use the options in Time Sync instead.\n</remarks>" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_timeSmoothing = { "timeSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, timeSmoothing), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_timeSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_timeSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_positionLerpSpeed_MetaData[] = {
		{ "Category", "Important" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/// <summary>How fast to lerp the position to the target SmoothState. 0 is never, 1 is instant.</summary>\n/// <remarks>\n/// Lower values mean smoother but maybe sluggish movement.\n/// Higher values mean more responsive but maybe jerky or stuttery movement.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>How fast to lerp the position to the target SmoothState. 0 is never, 1 is instant.</summary>\n<remarks>\nLower values mean smoother but maybe sluggish movement.\nHigher values mean more responsive but maybe jerky or stuttery movement.\n</remarks>" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_positionLerpSpeed = { "positionLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, positionLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_positionLerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_positionLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationLerpSpeed_MetaData[] = {
		{ "Category", "Important" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/// <summary>How fast to lerp the rotation to the target State. 0 is never, 1 is instant..</summary>\n/// <remarks>\n/// Lower values mean smoother but maybe sluggish movement.\n/// Higher values mean more responsive but maybe jerky or stuttery movement.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>How fast to lerp the rotation to the target State. 0 is never, 1 is instant..</summary>\n<remarks>\nLower values mean smoother but maybe sluggish movement.\nHigher values mean more responsive but maybe jerky or stuttery movement.\n</remarks>" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationLerpSpeed = { "rotationLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, rotationLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationLerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleLerpSpeed_MetaData[] = {
		{ "Category", "Important" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/// <summary>How fast to lerp the scale to the target State. 0 is never, 1 is instant.</summary>\n/// <remarks>\n/// Lower values mean smoother but maybe sluggish movement.\n/// Higher values mean more responsive but maybe jerky or stuttery movement.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>How fast to lerp the scale to the target State. 0 is never, 1 is instant.</summary>\n<remarks>\nLower values mean smoother but maybe sluggish movement.\nHigher values mean more responsive but maybe jerky or stuttery movement.\n</remarks>" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleLerpSpeed = { "scaleLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, scaleLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleLerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleLerpSpeed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_syncPosition_MetaData[] = {
		{ "Category", "SyncModes" },
		{ "Comment", "/// <summary>Position sync mode</summary>\n/// <remarks>\n/// Fine tune how position is synced. \n/// For objects that don't move, use SyncMode.NONE\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Position sync mode</summary>\n<remarks>\nFine tune how position is synced.\nFor objects that don't move, use SyncMode.NONE\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncPosition = { "syncPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, syncPosition), Z_Construct_UEnum_SmoothSyncPlugin_SyncMode, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncPosition_MetaData)) }; // 2089173319
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_syncRotation_MetaData[] = {
		{ "Category", "SyncModes" },
		{ "Comment", "/// <summary>Rotation sync mode</summary>\n/// <remarks>\n/// Fine tune how rotation is synced. \n/// For objects that don't rotate, use SyncMode.NONE\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Rotation sync mode</summary>\n<remarks>\nFine tune how rotation is synced.\nFor objects that don't rotate, use SyncMode.NONE\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncRotation = { "syncRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, syncRotation), Z_Construct_UEnum_SmoothSyncPlugin_SyncMode, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncRotation_MetaData)) }; // 2089173319
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_syncScale_MetaData[] = {
		{ "Category", "SyncModes" },
		{ "Comment", "/// <summary>Scale sync mode</summary>\n/// <remarks>\n/// Fine tune how scale is synced. \n/// For objects that don't scale, use SyncMode.NONE\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Scale sync mode</summary>\n<remarks>\nFine tune how scale is synced.\nFor objects that don't scale, use SyncMode.NONE\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncScale = { "syncScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, syncScale), Z_Construct_UEnum_SmoothSyncPlugin_SyncMode, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncScale_MetaData)) }; // 2089173319
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_syncVelocity_MetaData[] = {
		{ "Category", "SyncModes" },
		{ "Comment", "/// <summary>Velocity sync mode</summary>\n/// <remarks>\n/// Fine tune how velocity is synced.\n/// Syncs Primitive (if simulating physics), Movement, or CharacterMovement Components as well as allows for more accurate extrapolation.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Velocity sync mode</summary>\n<remarks>\nFine tune how velocity is synced.\nSyncs Primitive (if simulating physics), Movement, or CharacterMovement Components as well as allows for more accurate extrapolation.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncVelocity = { "syncVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, syncVelocity), Z_Construct_UEnum_SmoothSyncPlugin_SyncMode, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncVelocity_MetaData)) }; // 2089173319
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncAngularVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_syncAngularVelocity_MetaData[] = {
		{ "Category", "SyncModes" },
		{ "Comment", "/// <summary>Angular velocity sync mode</summary>\n/// <remarks>\n/// Fine tune how angular velocity is synced. \n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Angular velocity sync mode</summary>\n<remarks>\nFine tune how angular velocity is synced.\n</remarks>" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncAngularVelocity = { "syncAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, syncAngularVelocity), Z_Construct_UEnum_SmoothSyncPlugin_SyncMode, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncAngularVelocity_MetaData)) }; // 2089173319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_syncMovementMode_MetaData[] = {
		{ "Category", "SyncModes" },
		{ "Comment", "///\x09<summary>Sync Movement Mode (animations)</summary>\n/// <remarks>\n/// Syncs Unreal's Movement Mode (animations) for Characters.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Sync Movement Mode (animations)</summary>\n<remarks>\nSyncs Unreal's Movement Mode (animations) for Characters.\n</remarks>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_syncMovementMode_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->syncMovementMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncMovementMode = { "syncMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_syncMovementMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncMovementMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_isPositionCompressed_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/// <summary>Compress position floats when sending over the network.</summary>\n/// <remarks>\n/// Convert position floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Compress position floats when sending over the network.</summary>\n<remarks>\nConvert position floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n</remarks>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_isPositionCompressed_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->isPositionCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_isPositionCompressed = { "isPositionCompressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_isPositionCompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_isPositionCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_isPositionCompressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_isRotationCompressed_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/// <summary>Compress rotation floats when sending over the network.</summary>\n/// <remarks>\n/// Convert rotation floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Compress rotation floats when sending over the network.</summary>\n<remarks>\nConvert rotation floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n</remarks>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_isRotationCompressed_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->isRotationCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_isRotationCompressed = { "isRotationCompressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_isRotationCompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_isRotationCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_isRotationCompressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_isScaleCompressed_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/// <summary>Compress scale floats when sending over the network.</summary>\n/// <remarks>\n/// Convert scale floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Compress scale floats when sending over the network.</summary>\n<remarks>\nConvert scale floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n</remarks>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_isScaleCompressed_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->isScaleCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_isScaleCompressed = { "isScaleCompressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_isScaleCompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_isScaleCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_isScaleCompressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_isVelocityCompressed_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/// <summary>Compress velocity floats when sending over the network.</summary>\n/// <remarks>\n/// Convert velocity floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Compress velocity floats when sending over the network.</summary>\n<remarks>\nConvert velocity floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n</remarks>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_isVelocityCompressed_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->isVelocityCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_isVelocityCompressed = { "isVelocityCompressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_isVelocityCompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_isVelocityCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_isVelocityCompressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_isAngularVelocityCompressed_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/// <summary>Compress angular velocity floats when sending over the network.</summary>\n/// <remarks>\n/// Convert angular velocity floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Compress angular velocity floats when sending over the network.</summary>\n<remarks>\nConvert angular velocity floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.\n</remarks>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_isAngularVelocityCompressed_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->isAngularVelocityCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_isAngularVelocityCompressed = { "isAngularVelocityCompressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_isAngularVelocityCompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_isAngularVelocityCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_isAngularVelocityCompressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRate_MetaData[] = {
		{ "Category", "Important" },
		{ "Comment", "/// <summary>How many times per second to send network updates.</summary>\n/// <remarks>Keep in mind this can be limited by Unreal's Net Update Frequency.</remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>How many times per second to send network updates.</summary>\n<remarks>Keep in mind this can be limited by Unreal's Net Update Frequency.</remarks>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRate = { "sendRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, sendRate), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_isUsingOriginRebasing_MetaData[] = {
		{ "Category", "Important" },
		{ "Comment", "/// <summary>Whether or not to sync origin for Origin Rebasing.</summary>\n/// <remarks>You will need this only if your levels are very large. This requires an extra byte when syncing.</remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Whether or not to sync origin for Origin Rebasing.</summary>\n<remarks>You will need this only if your levels are very large. This requires an extra byte when syncing.</remarks>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_isUsingOriginRebasing_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->isUsingOriginRebasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_isUsingOriginRebasing = { "isUsingOriginRebasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_isUsingOriginRebasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_isUsingOriginRebasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_isUsingOriginRebasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_alwaysSendOrigin_MetaData[] = {
		{ "Category", "Important" },
		{ "Comment", "/// <summary>Send the origin with every update. Costs extra but fixes issues with network relevancy.</summary>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Send the origin with every update. Costs extra but fixes issues with network relevancy.</summary>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_alwaysSendOrigin_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->alwaysSendOrigin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_alwaysSendOrigin = { "alwaysSendOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_alwaysSendOrigin_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_alwaysSendOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_alwaysSendOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_syncOwnershipChange_MetaData[] = {
		{ "Category", "Important" },
		{ "Comment", "/// <summary>Sync changes in owernship.</summary>\n/// <remarks>\n/// Sends an extra byte with each network state that allows clients to handle ownership changes\n/// </remarks>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Sync changes in owernship.</summary>\n<remarks>\nSends an extra byte with each network state that allows clients to handle ownership changes\n</remarks>" },
	};
#endif
	void Z_Construct_UClass_USmoothSync_Statics::NewProp_syncOwnershipChange_SetBit(void* Obj)
	{
		((USmoothSync*)Obj)->syncOwnershipChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_syncOwnershipChange = { "syncOwnershipChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothSync), &Z_Construct_UClass_USmoothSync_Statics::NewProp_syncOwnershipChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncOwnershipChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_syncOwnershipChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_realComponentToSync_MetaData[] = {
		{ "Category", "Important" },
		{ "Comment", "/// <summary>Gets assigned to the real transform to sync. Use SetSceneComponentToSync() method to set it up. If\n/// this variable is not assigned, SmoothSync will sync the actor.</summary>\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Gets assigned to the real transform to sync. Use SetSceneComponentToSync() method to set it up. If\nthis variable is not assigned, SmoothSync will sync the actor.</summary>" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_realComponentToSync = { "realComponentToSync", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, realComponentToSync), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_realComponentToSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_realComponentToSync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationTime_MetaData[] = {
		{ "Category", "Important" },
		{ "Comment", "/// <summary>\n/// The time that the non-owner uses to playback the Transform of the owner. This is sent from the owner to non-owners.\n/// This is exposed so you can line up things like animations with the exact positioning. You could send over what animation you want in your own RPC along with \n/// UGameplayStatics::GetRealTimeSeconds(smoothSyncScript->GetOwner()->GetWorld()) and then have the animation happen when this variable has reached that time on the non-owners.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>\nThe time that the non-owner uses to playback the Transform of the owner. This is sent from the owner to non-owners.\nThis is exposed so you can line up things like animations with the exact positioning. You could send over what animation you want in your own RPC along with\nUGameplayStatics::GetRealTimeSeconds(smoothSyncScript->GetOwner()->GetWorld()) and then have the animation happen when this variable has reached that time on the non-owners.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationTime = { "interpolationTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, interpolationTime), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestPositionThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>Actor will come to positional rest if it stops moving by this amount. Used to smooth out stops and starts.</summary>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Actor will come to positional rest if it stops moving by this amount. Used to smooth out stops and starts.</summary>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestPositionThreshold = { "atRestPositionThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, atRestPositionThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestPositionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestPositionThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestRotationThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/// <summary>Actor will come to rotational rest if it stops rotating by this amount. Used to smooth out stops and starts.</summary>\n" },
		{ "ModuleRelativePath", "Public/SmoothSync.h" },
		{ "ToolTip", "<summary>Actor will come to rotational rest if it stops rotating by this amount. Used to smooth out stops and starts.</summary>" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestRotationThreshold = { "atRestRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothSync, atRestRotationThreshold), METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestRotationThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationBackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_useExtrapolationDistanceLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_extrapolationDistanceLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_sendPositionThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRotationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_sendScaleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_sendVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_sendAngularVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedPositionThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_receivedRotationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_positionSnapThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationSnapThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleSnapThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_timeSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_positionLerpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_rotationLerpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_scaleLerpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncPosition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncAngularVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncMovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_isPositionCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_isRotationCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_isScaleCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_isVelocityCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_isAngularVelocityCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_sendRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_isUsingOriginRebasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_alwaysSendOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_syncOwnershipChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_realComponentToSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_interpolationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestPositionThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothSync_Statics::NewProp_atRestRotationThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmoothSync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothSync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothSync_Statics::ClassParams = {
		&USmoothSync::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USmoothSync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USmoothSync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothSync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmoothSync()
	{
		if (!Z_Registration_Info_UClass_USmoothSync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothSync.OuterSingleton, Z_Construct_UClass_USmoothSync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmoothSync.OuterSingleton;
	}
	template<> SMOOTHSYNCPLUGIN_API UClass* StaticClass<USmoothSync>()
	{
		return USmoothSync::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothSync);
	USmoothSync::~USmoothSync() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_Statics::EnumInfo[] = {
		{ SyncMode_StaticEnum, TEXT("SyncMode"), &Z_Registration_Info_UEnum_SyncMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2089173319U) },
		{ ExtrapolationMode_StaticEnum, TEXT("ExtrapolationMode"), &Z_Registration_Info_UEnum_ExtrapolationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 661832867U) },
		{ RestState_StaticEnum, TEXT("RestState"), &Z_Registration_Info_UEnum_RestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2133405456U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmoothSync, USmoothSync::StaticClass, TEXT("USmoothSync"), &Z_Registration_Info_UClass_USmoothSync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothSync), 1327558050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_1212310216(TEXT("/Script/SmoothSyncPlugin"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SmoothSync_Source_SmoothSyncPlugin_Public_SmoothSync_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
