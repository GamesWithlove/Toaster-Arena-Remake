// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSAsyncSaveGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSAsyncSaveGame() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncSaveGame();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncSaveGame_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature();
EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAsyncSaveOutputPin ***************************************************
struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncSaveGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FAsyncSaveOutputPin constinit property declarations *******************
// ********** End Delegate FAsyncSaveOutputPin constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncSaveOutputPin__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncSaveOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncSaveOutputPin)
{
	AsyncSaveOutputPin.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncSaveOutputPin *****************************************************

// ********** Begin Delegate FAsyncSaveFailedPin ***************************************************
struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncSaveGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FAsyncSaveFailedPin constinit property declarations *******************
// ********** End Delegate FAsyncSaveFailedPin constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncSaveFailedPin__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncSaveFailedPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncSaveFailedPin)
{
	AsyncSaveFailedPin.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncSaveFailedPin *****************************************************

// ********** Begin Class UEMSAsyncSaveGame Function AsyncSaveActors *******************************
struct Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics
{
	struct EMSAsyncSaveGame_eventAsyncSaveActors_Parms
	{
		UObject* WorldContextObject;
		int32 Data;
		UEMSAsyncSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Main function for Saving the Game. Use the Data checkboxes to define what you want to save. \n\x09*\n\x09* @param Data - Check here what data you want to save. \n\x09*/" },
		{ "DisplayName", "Save Game Actors" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncSaveGame.h" },
		{ "ToolTip", "Main function for Saving the Game. Use the Data checkboxes to define what you want to save.\n\n@param Data - Check here what data you want to save." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/EasyMultiSave.ESaveTypeFlags" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsyncSaveActors constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsyncSaveActors constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsyncSaveActors Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncSaveGame_eventAsyncSaveActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncSaveGame_eventAsyncSaveActors_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncSaveGame_eventAsyncSaveActors_Parms, ReturnValue), Z_Construct_UClass_UEMSAsyncSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::PropPointers) < 2048);
// ********** End Function AsyncSaveActors Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSAsyncSaveGame, nullptr, "AsyncSaveActors", 	Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::EMSAsyncSaveGame_eventAsyncSaveActors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::EMSAsyncSaveGame_eventAsyncSaveActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSAsyncSaveGame::execAsyncSaveActors)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEMSAsyncSaveGame**)Z_Param__Result=UEMSAsyncSaveGame::AsyncSaveActors(Z_Param_WorldContextObject,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UEMSAsyncSaveGame Function AsyncSaveActors *********************************

// ********** Begin Class UEMSAsyncSaveGame Function AutoSaveLevelActors ***************************
struct Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics
{
	struct EMSAsyncSaveGame_eventAutoSaveLevelActors_Parms
	{
		UEMSObject* EMSObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncSaveGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AutoSaveLevelActors constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EMSObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AutoSaveLevelActors constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AutoSaveLevelActors Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::NewProp_EMSObject = { "EMSObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncSaveGame_eventAutoSaveLevelActors_Parms, EMSObject), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::NewProp_EMSObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::PropPointers) < 2048);
// ********** End Function AutoSaveLevelActors Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSAsyncSaveGame, nullptr, "AutoSaveLevelActors", 	Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::EMSAsyncSaveGame_eventAutoSaveLevelActors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::EMSAsyncSaveGame_eventAutoSaveLevelActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSAsyncSaveGame::execAutoSaveLevelActors)
{
	P_GET_OBJECT(UEMSObject,Z_Param_EMSObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSAsyncSaveGame::AutoSaveLevelActors(Z_Param_EMSObject);
	P_NATIVE_END;
}
// ********** End Class UEMSAsyncSaveGame Function AutoSaveLevelActors *****************************

// ********** Begin Class UEMSAsyncSaveGame ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEMSAsyncSaveGame;
UClass* UEMSAsyncSaveGame::GetPrivateStaticClass()
{
	using TClass = UEMSAsyncSaveGame;
	if (!Z_Registration_Info_UClass_UEMSAsyncSaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EMSAsyncSaveGame"),
			Z_Registration_Info_UClass_UEMSAsyncSaveGame.InnerSingleton,
			StaticRegisterNativesUEMSAsyncSaveGame,
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
	return Z_Registration_Info_UClass_UEMSAsyncSaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UEMSAsyncSaveGame_NoRegister()
{
	return UEMSAsyncSaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEMSAsyncSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Async/Public/EMSAsyncSaveGame.h" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/*Executes when at least one save operation(Level or Player) completes.*/" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncSaveGame.h" },
		{ "ToolTip", "Executes when at least one save operation(Level or Player) completes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
		{ "Comment", "/*Executes when all save operations have failed.*/" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncSaveGame.h" },
		{ "ToolTip", "Executes when all save operations have failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncSaveGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEMSAsyncSaveGame constinit property declarations ************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EMS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEMSAsyncSaveGame constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AsyncSaveActors"), .Pointer = &UEMSAsyncSaveGame::execAsyncSaveActors },
		{ .NameUTF8 = UTF8TEXT("AutoSaveLevelActors"), .Pointer = &UEMSAsyncSaveGame::execAutoSaveLevelActors },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors, "AsyncSaveActors" }, // 2459068959
		{ &Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors, "AutoSaveLevelActors" }, // 1343108274
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEMSAsyncSaveGame_Statics

// ********** Begin Class UEMSAsyncSaveGame Property Definitions ***********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncSaveGame, OnCompleted), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 597596956
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncSaveGame, OnFailed), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailed_MetaData), NewProp_OnFailed_MetaData) }; // 3850108780
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncSaveGame, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EMS_MetaData), NewProp_EMS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_EMS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::PropPointers) < 2048);
// ********** End Class UEMSAsyncSaveGame Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UEMSAsyncSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSAsyncSaveGame_Statics::ClassParams = {
	&UEMSAsyncSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEMSAsyncSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSAsyncSaveGame_Statics::Class_MetaDataParams)
};
void UEMSAsyncSaveGame::StaticRegisterNativesUEMSAsyncSaveGame()
{
	UClass* Class = UEMSAsyncSaveGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEMSAsyncSaveGame()
{
	if (!Z_Registration_Info_UClass_UEMSAsyncSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncSaveGame.OuterSingleton, Z_Construct_UClass_UEMSAsyncSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSAsyncSaveGame.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEMSAsyncSaveGame);
UEMSAsyncSaveGame::~UEMSAsyncSaveGame() {}
// ********** End Class UEMSAsyncSaveGame **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h__Script_EasyMultiSave_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncSaveGame, UEMSAsyncSaveGame::StaticClass, TEXT("UEMSAsyncSaveGame"), &Z_Registration_Info_UClass_UEMSAsyncSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncSaveGame), 1575136580U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h__Script_EasyMultiSave_1064213699{
	TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h__Script_EasyMultiSave_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h__Script_EasyMultiSave_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
