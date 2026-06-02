// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSObject.h"
#include "EMSData.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSObject() {}

// ********** Begin Cross Module References ********************************************************
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObjectBase();
EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature();
EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorByteKey();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FGameObjectSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelScriptSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiLevelStreamingData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStackArchive();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEmsLoadPlayerComplete ************************************************
struct Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics
{
	struct _Script_EasyMultiSave_eventEmsLoadPlayerComplete_Parms
	{
		const APlayerController* LoadedPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FEmsLoadPlayerComplete constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FEmsLoadPlayerComplete constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FEmsLoadPlayerComplete Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::NewProp_LoadedPlayer = { "LoadedPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EasyMultiSave_eventEmsLoadPlayerComplete_Parms, LoadedPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedPlayer_MetaData), NewProp_LoadedPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::NewProp_LoadedPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FEmsLoadPlayerComplete Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "EmsLoadPlayerComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::_Script_EasyMultiSave_eventEmsLoadPlayerComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::_Script_EasyMultiSave_eventEmsLoadPlayerComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEmsLoadPlayerComplete_DelegateWrapper(const FMulticastScriptDelegate& EmsLoadPlayerComplete, const APlayerController* LoadedPlayer)
{
	struct _Script_EasyMultiSave_eventEmsLoadPlayerComplete_Parms
	{
		const APlayerController* LoadedPlayer;
	};
	_Script_EasyMultiSave_eventEmsLoadPlayerComplete_Parms Parms;
	Parms.LoadedPlayer=LoadedPlayer;
	EmsLoadPlayerComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEmsLoadPlayerComplete **************************************************

// ********** Begin Delegate FEmsLoadLevelComplete *************************************************
struct Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics
{
	struct _Script_EasyMultiSave_eventEmsLoadLevelComplete_Parms
	{
		TArray<TSoftObjectPtr<AActor>> LoadedActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FEmsLoadLevelComplete constinit property declarations *****************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LoadedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FEmsLoadLevelComplete constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FEmsLoadLevelComplete Property Definitions ****************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::NewProp_LoadedActors_Inner = { "LoadedActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::NewProp_LoadedActors = { "LoadedActors", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EasyMultiSave_eventEmsLoadLevelComplete_Parms, LoadedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedActors_MetaData), NewProp_LoadedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::NewProp_LoadedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::NewProp_LoadedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FEmsLoadLevelComplete Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "EmsLoadLevelComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::_Script_EasyMultiSave_eventEmsLoadLevelComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::_Script_EasyMultiSave_eventEmsLoadLevelComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEmsLoadLevelComplete_DelegateWrapper(const FMulticastScriptDelegate& EmsLoadLevelComplete, TArray<TSoftObjectPtr<AActor>> const& LoadedActors)
{
	struct _Script_EasyMultiSave_eventEmsLoadLevelComplete_Parms
	{
		TArray<TSoftObjectPtr<AActor>> LoadedActors;
	};
	_Script_EasyMultiSave_eventEmsLoadLevelComplete_Parms Parms;
	Parms.LoadedActors=LoadedActors;
	EmsLoadLevelComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEmsLoadLevelComplete ***************************************************

// ********** Begin Class UEMSObject ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEMSObject;
UClass* UEMSObject::GetPrivateStaticClass()
{
	using TClass = UEMSObject;
	if (!Z_Registration_Info_UClass_UEMSObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EMSObject"),
			Z_Registration_Info_UClass_UEMSObject.InnerSingleton,
			StaticRegisterNativesUEMSObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEMSObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UEMSObject_NoRegister()
{
	return UEMSObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEMSObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Easy Multi Save" },
		{ "IncludePath", "System/Public/EMSObject.h" },
		{ "Keywords", "Save, EMS, EasyMultiSave, EasySave" },
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerLoaded_MetaData[] = {
		{ "Category", "Easy Multi Save | Delegates" },
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelLoaded_MetaData[] = {
		{ "Category", "Easy Multi Save | Delegates" },
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPartitionLoaded_MetaData[] = {
		{ "Category", "Easy Multi Save | Delegates" },
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorList_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorMap_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelArchiveList_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiLevelStreamData_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedActors_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedActorsPruned_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedScripts_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedGameMode_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedGameState_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingActors_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedActors_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealLoadedActors_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawObjectLevelActors_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStackData_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedPlayer_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEMSObject constinit property declarations *******************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartitionLoaded;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActorList_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActorList;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActorMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActorMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelArchiveList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelArchiveList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiLevelStreamData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedActorsPruned_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedActorsPruned;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedScripts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedScripts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedGameMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedGameState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_StreamingActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestroyedActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DestroyedActors;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RealLoadedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RealLoadedActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawObjectLevelActors_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawObjectLevelActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RawObjectLevelActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStackData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEMSObject constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEMSObject_Statics

// ********** Begin Class UEMSObject Property Definitions ******************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_OnPlayerLoaded = { "OnPlayerLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, OnPlayerLoaded), Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadPlayerComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerLoaded_MetaData), NewProp_OnPlayerLoaded_MetaData) }; // 1481544866
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_OnLevelLoaded = { "OnLevelLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, OnLevelLoaded), Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelLoaded_MetaData), NewProp_OnLevelLoaded_MetaData) }; // 1353297324
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_OnPartitionLoaded = { "OnPartitionLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, OnPartitionLoaded), Z_Construct_UDelegateFunction_EasyMultiSave_EmsLoadLevelComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPartitionLoaded_MetaData), NewProp_OnPartitionLoaded_MetaData) }; // 1353297324
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList_ElementProp = { "ActorList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList = { "ActorList", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, ActorList), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorList_MetaData), NewProp_ActorList_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorMap_ValueProp = { "ActorMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorMap_Key_KeyProp = { "ActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorByteKey, METADATA_PARAMS(0, nullptr) }; // 768632040
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorMap = { "ActorMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, ActorMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorMap_MetaData), NewProp_ActorMap_MetaData) }; // 768632040
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_LevelArchiveList_Inner = { "LevelArchiveList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelArchive, METADATA_PARAMS(0, nullptr) }; // 1515603252
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_LevelArchiveList = { "LevelArchiveList", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, LevelArchiveList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelArchiveList_MetaData), NewProp_LevelArchiveList_MetaData) }; // 1515603252
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_MultiLevelStreamData = { "MultiLevelStreamData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, MultiLevelStreamData), Z_Construct_UScriptStruct_FMultiLevelStreamingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiLevelStreamData_MetaData), NewProp_MultiLevelStreamData_MetaData) }; // 4054962974
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedActors_Inner = { "SavedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorSaveData, METADATA_PARAMS(0, nullptr) }; // 711273474
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedActors = { "SavedActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, SavedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedActors_MetaData), NewProp_SavedActors_MetaData) }; // 711273474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedActorsPruned_Inner = { "SavedActorsPruned", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorSaveData, METADATA_PARAMS(0, nullptr) }; // 711273474
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedActorsPruned = { "SavedActorsPruned", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, SavedActorsPruned), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedActorsPruned_MetaData), NewProp_SavedActorsPruned_MetaData) }; // 711273474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedScripts_Inner = { "SavedScripts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelScriptSaveData, METADATA_PARAMS(0, nullptr) }; // 3332215324
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedScripts = { "SavedScripts", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, SavedScripts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedScripts_MetaData), NewProp_SavedScripts_MetaData) }; // 3332215324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedGameMode = { "SavedGameMode", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, SavedGameMode), Z_Construct_UScriptStruct_FGameObjectSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedGameMode_MetaData), NewProp_SavedGameMode_MetaData) }; // 1393915627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedGameState = { "SavedGameState", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, SavedGameState), Z_Construct_UScriptStruct_FGameObjectSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedGameState_MetaData), NewProp_SavedGameState_MetaData) }; // 1393915627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_StreamingActors_ElementProp = { "StreamingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorSaveData, METADATA_PARAMS(0, nullptr) }; // 711273474
static_assert(TModels_V<CGetTypeHashable, FActorSaveData>, "The structure 'FActorSaveData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_StreamingActors = { "StreamingActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, StreamingActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingActors_MetaData), NewProp_StreamingActors_MetaData) }; // 711273474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_DestroyedActors_ElementProp = { "DestroyedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorSaveData, METADATA_PARAMS(0, nullptr) }; // 711273474
static_assert(TModels_V<CGetTypeHashable, FActorSaveData>, "The structure 'FActorSaveData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_DestroyedActors = { "DestroyedActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, DestroyedActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedActors_MetaData), NewProp_DestroyedActors_MetaData) }; // 711273474
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_RealLoadedActors_Inner = { "RealLoadedActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_RealLoadedActors = { "RealLoadedActors", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, RealLoadedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealLoadedActors_MetaData), NewProp_RealLoadedActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_RawObjectLevelActors_ValueProp = { "RawObjectLevelActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActorSaveData, METADATA_PARAMS(0, nullptr) }; // 711273474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_RawObjectLevelActors_Key_KeyProp = { "RawObjectLevelActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorByteKey, METADATA_PARAMS(0, nullptr) }; // 768632040
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_RawObjectLevelActors = { "RawObjectLevelActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, RawObjectLevelActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawObjectLevelActors_MetaData), NewProp_RawObjectLevelActors_MetaData) }; // 768632040 711273474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_PlayerStackData = { "PlayerStackData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, PlayerStackData), Z_Construct_UScriptStruct_FPlayerStackArchive, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStackData_MetaData), NewProp_PlayerStackData_MetaData) }; // 2969074776
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedPlayer = { "SavedPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObject, SavedPlayer), Z_Construct_UScriptStruct_FPlayerArchive, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedPlayer_MetaData), NewProp_SavedPlayer_MetaData) }; // 4038125825
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_OnPlayerLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_OnLevelLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_OnPartitionLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_LevelArchiveList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_LevelArchiveList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_MultiLevelStreamData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedActorsPruned_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedActorsPruned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedScripts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedScripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_StreamingActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_StreamingActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_DestroyedActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_DestroyedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_RealLoadedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_RealLoadedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_RawObjectLevelActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_RawObjectLevelActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_RawObjectLevelActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_PlayerStackData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_SavedPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::PropPointers) < 2048);
// ********** End Class UEMSObject Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_UEMSObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEMSObjectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSObject_Statics::ClassParams = {
	&UEMSObject::StaticClass,
	"EmsUser",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEMSObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::PropPointers),
	0,
	0x409000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSObject_Statics::Class_MetaDataParams)
};
void UEMSObject::StaticRegisterNativesUEMSObject()
{
}
UClass* Z_Construct_UClass_UEMSObject()
{
	if (!Z_Registration_Info_UClass_UEMSObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSObject.OuterSingleton, Z_Construct_UClass_UEMSObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEMSObject);
UEMSObject::~UEMSObject() {}
// ********** End Class UEMSObject *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h__Script_EasyMultiSave_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSObject, UEMSObject::StaticClass, TEXT("UEMSObject"), &Z_Registration_Info_UClass_UEMSObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSObject), 1356061470U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h__Script_EasyMultiSave_2608004097{
	TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h__Script_EasyMultiSave_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h__Script_EasyMultiSave_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
