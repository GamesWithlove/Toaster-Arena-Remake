// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplayPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReplayPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_AReplayPlayerController();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_AReplayPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AReplayPlayerController Function OnGoToTime ******************************
struct ReplayPlayerController_eventOnGoToTime_Parms
{
	float currentTime;
};
static FName NAME_AReplayPlayerController_OnGoToTime = FName(TEXT("OnGoToTime"));
void AReplayPlayerController::OnGoToTime(float currentTime)
{
	ReplayPlayerController_eventOnGoToTime_Parms Parms;
	Parms.currentTime=currentTime;
	UFunction* Func = FindFunctionChecked(NAME_AReplayPlayerController_OnGoToTime);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnGoToTime constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnGoToTime constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnGoToTime Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayPlayerController_eventOnGoToTime_Parms, currentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::NewProp_currentTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::PropPointers) < 2048);
// ********** End Function OnGoToTime Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReplayPlayerController, nullptr, "OnGoToTime", 	Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::PropPointers), 
sizeof(ReplayPlayerController_eventOnGoToTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ReplayPlayerController_eventOnGoToTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AReplayPlayerController_OnGoToTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplayPlayerController_OnGoToTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AReplayPlayerController Function OnGoToTime ********************************

// ********** Begin Class AReplayPlayerController Function OnSpectateActor *************************
struct ReplayPlayerController_eventOnSpectateActor_Parms
{
	AActor* Actor;
};
static FName NAME_AReplayPlayerController_OnSpectateActor = FName(TEXT("OnSpectateActor"));
void AReplayPlayerController::OnSpectateActor(AActor* Actor)
{
	ReplayPlayerController_eventOnSpectateActor_Parms Parms;
	Parms.Actor=Actor;
	UFunction* Func = FindFunctionChecked(NAME_AReplayPlayerController_OnSpectateActor);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnSpectateActor constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnSpectateActor constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnSpectateActor Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayPlayerController_eventOnSpectateActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::PropPointers) < 2048);
// ********** End Function OnSpectateActor Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReplayPlayerController, nullptr, "OnSpectateActor", 	Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::PropPointers), 
sizeof(ReplayPlayerController_eventOnSpectateActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ReplayPlayerController_eventOnSpectateActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AReplayPlayerController Function OnSpectateActor ***************************

// ********** Begin Class AReplayPlayerController Function OnStopSpectateActor *********************
static FName NAME_AReplayPlayerController_OnStopSpectateActor = FName(TEXT("OnStopSpectateActor"));
void AReplayPlayerController::OnStopSpectateActor()
{
	UFunction* Func = FindFunctionChecked(NAME_AReplayPlayerController_OnStopSpectateActor);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AReplayPlayerController_OnStopSpectateActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStopSpectateActor constinit property declarations *******************
// ********** End Function OnStopSpectateActor constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplayPlayerController_OnStopSpectateActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReplayPlayerController, nullptr, "OnStopSpectateActor", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnStopSpectateActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReplayPlayerController_OnStopSpectateActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AReplayPlayerController_OnStopSpectateActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplayPlayerController_OnStopSpectateActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AReplayPlayerController Function OnStopSpectateActor ***********************

// ********** Begin Class AReplayPlayerController Function OnTogglePause ***************************
struct ReplayPlayerController_eventOnTogglePause_Parms
{
	bool PauseState;
};
static FName NAME_AReplayPlayerController_OnTogglePause = FName(TEXT("OnTogglePause"));
void AReplayPlayerController::OnTogglePause(bool PauseState)
{
	ReplayPlayerController_eventOnTogglePause_Parms Parms;
	Parms.PauseState=PauseState ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AReplayPlayerController_OnTogglePause);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  true means paused\n\x09 * @param PauseState \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReplayPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "true means paused\n@param PauseState" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnTogglePause constinit property declarations *************************
	static void NewProp_PauseState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PauseState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnTogglePause constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnTogglePause Property Definitions ************************************
void Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::NewProp_PauseState_SetBit(void* Obj)
{
	((ReplayPlayerController_eventOnTogglePause_Parms*)Obj)->PauseState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::NewProp_PauseState = { "PauseState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplayPlayerController_eventOnTogglePause_Parms), &Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::NewProp_PauseState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::NewProp_PauseState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::PropPointers) < 2048);
// ********** End Function OnTogglePause Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReplayPlayerController, nullptr, "OnTogglePause", 	Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::PropPointers), 
sizeof(ReplayPlayerController_eventOnTogglePause_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ReplayPlayerController_eventOnTogglePause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AReplayPlayerController_OnTogglePause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplayPlayerController_OnTogglePause_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AReplayPlayerController Function OnTogglePause *****************************

// ********** Begin Class AReplayPlayerController **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AReplayPlayerController;
UClass* AReplayPlayerController::GetPrivateStaticClass()
{
	using TClass = AReplayPlayerController;
	if (!Z_Registration_Info_UClass_AReplayPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ReplayPlayerController"),
			Z_Registration_Info_UClass_AReplayPlayerController.InnerSingleton,
			StaticRegisterNativesAReplayPlayerController,
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
	return Z_Registration_Info_UClass_AReplayPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AReplayPlayerController_NoRegister()
{
	return AReplayPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AReplayPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ReplayPlayerController.h" },
		{ "ModuleRelativePath", "Public/ReplayPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AReplayPlayerController constinit property declarations ******************
// ********** End Class AReplayPlayerController constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AReplayPlayerController_OnGoToTime, "OnGoToTime" }, // 3236695261
		{ &Z_Construct_UFunction_AReplayPlayerController_OnSpectateActor, "OnSpectateActor" }, // 4240772141
		{ &Z_Construct_UFunction_AReplayPlayerController_OnStopSpectateActor, "OnStopSpectateActor" }, // 3743683277
		{ &Z_Construct_UFunction_AReplayPlayerController_OnTogglePause, "OnTogglePause" }, // 3689935106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplayPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AReplayPlayerController_Statics
UObject* (*const Z_Construct_UClass_AReplayPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReplayPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AReplayPlayerController_Statics::ClassParams = {
	&AReplayPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AReplayPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AReplayPlayerController_Statics::Class_MetaDataParams)
};
void AReplayPlayerController::StaticRegisterNativesAReplayPlayerController()
{
}
UClass* Z_Construct_UClass_AReplayPlayerController()
{
	if (!Z_Registration_Info_UClass_AReplayPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReplayPlayerController.OuterSingleton, Z_Construct_UClass_AReplayPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AReplayPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AReplayPlayerController);
AReplayPlayerController::~AReplayPlayerController() {}
// ********** End Class AReplayPlayerController ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AReplayPlayerController, AReplayPlayerController::StaticClass, TEXT("AReplayPlayerController"), &Z_Registration_Info_UClass_AReplayPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReplayPlayerController), 769309017U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h__Script_ReplaySystem_1397515805{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
