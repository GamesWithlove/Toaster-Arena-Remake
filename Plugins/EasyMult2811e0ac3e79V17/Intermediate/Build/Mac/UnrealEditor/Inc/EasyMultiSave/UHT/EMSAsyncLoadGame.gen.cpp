// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSAsyncLoadGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSAsyncLoadGame() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncLoadGame();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature();
EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAsyncLoadOutputPin ***************************************************
struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncLoadGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FAsyncLoadOutputPin constinit property declarations *******************
// ********** End Delegate FAsyncLoadOutputPin constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncLoadOutputPin__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncLoadOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncLoadOutputPin)
{
	AsyncLoadOutputPin.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncLoadOutputPin *****************************************************

// ********** Begin Delegate FAsyncLoadFailedPin ***************************************************
struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncLoadGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FAsyncLoadFailedPin constinit property declarations *******************
// ********** End Delegate FAsyncLoadFailedPin constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncLoadFailedPin__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncLoadFailedPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncLoadFailedPin)
{
	AsyncLoadFailedPin.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncLoadFailedPin *****************************************************

// ********** Begin Class UEMSAsyncLoadGame Function AsyncLoadActors *******************************
struct Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics
{
	struct EMSAsyncLoadGame_eventAsyncLoadActors_Parms
	{
		UObject* WorldContextObject;
		int32 Data;
		bool bFullReload;
		UEMSAsyncLoadGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Main function for Loading the Game. Use the Data checkboxes to define what you want to load.\n\x09*\n\x09* @param Data - Check here what data you want to load.\n\x09* @param bFullReload - If false, load only Actors that have not been loaded. Set to true if you want to reload all saved Actor Data.\n\x09*/" },
		{ "DisplayName", "Load Game Actors" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncLoadGame.h" },
		{ "ToolTip", "Main function for Loading the Game. Use the Data checkboxes to define what you want to load.\n\n@param Data - Check here what data you want to load.\n@param bFullReload - If false, load only Actors that have not been loaded. Set to true if you want to reload all saved Actor Data." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/EasyMultiSave.ESaveTypeFlags" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsyncLoadActors constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_bFullReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullReload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsyncLoadActors constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsyncLoadActors Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncLoadGame_eventAsyncLoadActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncLoadGame_eventAsyncLoadActors_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload_SetBit(void* Obj)
{
	((EMSAsyncLoadGame_eventAsyncLoadActors_Parms*)Obj)->bFullReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload = { "bFullReload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSAsyncLoadGame_eventAsyncLoadActors_Parms), &Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncLoadGame_eventAsyncLoadActors_Parms, ReturnValue), Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers) < 2048);
// ********** End Function AsyncLoadActors Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSAsyncLoadGame, nullptr, "AsyncLoadActors", 	Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::EMSAsyncLoadGame_eventAsyncLoadActors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::EMSAsyncLoadGame_eventAsyncLoadActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSAsyncLoadGame::execAsyncLoadActors)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_GET_UBOOL(Z_Param_bFullReload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEMSAsyncLoadGame**)Z_Param__Result=UEMSAsyncLoadGame::AsyncLoadActors(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_bFullReload);
	P_NATIVE_END;
}
// ********** End Class UEMSAsyncLoadGame Function AsyncLoadActors *********************************

// ********** Begin Class UEMSAsyncLoadGame Function AutoLoadLevelActors ***************************
struct Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics
{
	struct EMSAsyncLoadGame_eventAutoLoadLevelActors_Parms
	{
		UEMSObject* EMSObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncLoadGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AutoLoadLevelActors constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EMSObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AutoLoadLevelActors constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AutoLoadLevelActors Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::NewProp_EMSObject = { "EMSObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncLoadGame_eventAutoLoadLevelActors_Parms, EMSObject), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::NewProp_EMSObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::PropPointers) < 2048);
// ********** End Function AutoLoadLevelActors Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSAsyncLoadGame, nullptr, "AutoLoadLevelActors", 	Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::EMSAsyncLoadGame_eventAutoLoadLevelActors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::EMSAsyncLoadGame_eventAutoLoadLevelActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSAsyncLoadGame::execAutoLoadLevelActors)
{
	P_GET_OBJECT(UEMSObject,Z_Param_EMSObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSAsyncLoadGame::AutoLoadLevelActors(Z_Param_EMSObject);
	P_NATIVE_END;
}
// ********** End Class UEMSAsyncLoadGame Function AutoLoadLevelActors *****************************

// ********** Begin Class UEMSAsyncLoadGame ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEMSAsyncLoadGame;
UClass* UEMSAsyncLoadGame::GetPrivateStaticClass()
{
	using TClass = UEMSAsyncLoadGame;
	if (!Z_Registration_Info_UClass_UEMSAsyncLoadGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EMSAsyncLoadGame"),
			Z_Registration_Info_UClass_UEMSAsyncLoadGame.InnerSingleton,
			StaticRegisterNativesUEMSAsyncLoadGame,
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
	return Z_Registration_Info_UClass_UEMSAsyncLoadGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister()
{
	return UEMSAsyncLoadGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEMSAsyncLoadGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Async/Public/EMSAsyncLoadGame.h" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncLoadGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/*Executes when at least one load operation(Level or Player) completes.*/" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncLoadGame.h" },
		{ "ToolTip", "Executes when at least one load operation(Level or Player) completes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
		{ "Comment", "/*Executes when all load operations have failed.*/" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncLoadGame.h" },
		{ "ToolTip", "Executes when all load operations have failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncLoadGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEMSAsyncLoadGame constinit property declarations ************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EMS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEMSAsyncLoadGame constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AsyncLoadActors"), .Pointer = &UEMSAsyncLoadGame::execAsyncLoadActors },
		{ .NameUTF8 = UTF8TEXT("AutoLoadLevelActors"), .Pointer = &UEMSAsyncLoadGame::execAutoLoadLevelActors },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors, "AsyncLoadActors" }, // 3553792005
		{ &Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors, "AutoLoadLevelActors" }, // 966781135
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncLoadGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEMSAsyncLoadGame_Statics

// ********** Begin Class UEMSAsyncLoadGame Property Definitions ***********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncLoadGame, OnCompleted), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 1178584407
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncLoadGame, OnFailed), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailed_MetaData), NewProp_OnFailed_MetaData) }; // 1615872855
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncLoadGame, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EMS_MetaData), NewProp_EMS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncLoadGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_EMS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::PropPointers) < 2048);
// ********** End Class UEMSAsyncLoadGame Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UEMSAsyncLoadGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSAsyncLoadGame_Statics::ClassParams = {
	&UEMSAsyncLoadGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEMSAsyncLoadGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSAsyncLoadGame_Statics::Class_MetaDataParams)
};
void UEMSAsyncLoadGame::StaticRegisterNativesUEMSAsyncLoadGame()
{
	UClass* Class = UEMSAsyncLoadGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEMSAsyncLoadGame()
{
	if (!Z_Registration_Info_UClass_UEMSAsyncLoadGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncLoadGame.OuterSingleton, Z_Construct_UClass_UEMSAsyncLoadGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSAsyncLoadGame.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEMSAsyncLoadGame);
UEMSAsyncLoadGame::~UEMSAsyncLoadGame() {}
// ********** End Class UEMSAsyncLoadGame **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h__Script_EasyMultiSave_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncLoadGame, UEMSAsyncLoadGame::StaticClass, TEXT("UEMSAsyncLoadGame"), &Z_Registration_Info_UClass_UEMSAsyncLoadGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncLoadGame), 4112260268U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h__Script_EasyMultiSave_3422830776{
	TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h__Script_EasyMultiSave_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h__Script_EasyMultiSave_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
