// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSAsyncLoadGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSAsyncLoadGame() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncLoadGame();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncLoadOutputPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncLoadOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncLoadOutputPin)
{
	AsyncLoadOutputPin.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncLoadFailedPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncLoadFailedPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncLoadFailedPin)
{
	AsyncLoadFailedPin.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UEMSAsyncLoadGame::execFinishTaskThreadSafe)
	{
		P_GET_WEAKOBJECT(TWeakObjectPtr<UEMSAsyncLoadGame>,Z_Param_InTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSAsyncLoadGame::FinishTaskThreadSafe(Z_Param_InTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSAsyncLoadGame::execAutoLoadLevelActors)
	{
		P_GET_OBJECT(UEMSObject,Z_Param_EMSObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSAsyncLoadGame::AutoLoadLevelActors(Z_Param_EMSObject);
		P_NATIVE_END;
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
	void UEMSAsyncLoadGame::StaticRegisterNativesUEMSAsyncLoadGame()
	{
		UClass* Class = UEMSAsyncLoadGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadActors", &UEMSAsyncLoadGame::execAsyncLoadActors },
			{ "AutoLoadLevelActors", &UEMSAsyncLoadGame::execAutoLoadLevelActors },
			{ "FinishTaskThreadSafe", &UEMSAsyncLoadGame::execFinishTaskThreadSafe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics
	{
		struct EMSAsyncLoadGame_eventAsyncLoadActors_Parms
		{
			UObject* WorldContextObject;
			int32 Data;
			bool bFullReload;
			UEMSAsyncLoadGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_bFullReload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullReload;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncLoadGame_eventAsyncLoadActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/EasyMultiSave.ELoadTypeFlags" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncLoadGame_eventAsyncLoadActors_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload_SetBit(void* Obj)
	{
		((EMSAsyncLoadGame_eventAsyncLoadActors_Parms*)Obj)->bFullReload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload = { "bFullReload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSAsyncLoadGame_eventAsyncLoadActors_Parms), &Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncLoadGame_eventAsyncLoadActors_Parms, ReturnValue), Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Main function for Loading the Game. Use the Data checkboxes to define what you want to load.\n\x09*\n\x09* @param Data - Check here what data you want to load.\n\x09* @param bFullReload - If false, load only Actors that have not been loaded. Set to true if you want to reload all saved Actor Data.\n\x09*/" },
		{ "DisplayName", "Load Game Actors" },
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
		{ "ToolTip", "Main function for Loading the Game. Use the Data checkboxes to define what you want to load.\n\n@param Data - Check here what data you want to load.\n@param bFullReload - If false, load only Actors that have not been loaded. Set to true if you want to reload all saved Actor Data." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncLoadGame, nullptr, "AsyncLoadActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::EMSAsyncLoadGame_eventAsyncLoadActors_Parms), Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics
	{
		struct EMSAsyncLoadGame_eventAutoLoadLevelActors_Parms
		{
			UEMSObject* EMSObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMSObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::NewProp_EMSObject = { "EMSObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncLoadGame_eventAutoLoadLevelActors_Parms, EMSObject), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::NewProp_EMSObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncLoadGame, nullptr, "AutoLoadLevelActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::EMSAsyncLoadGame_eventAutoLoadLevelActors_Parms), Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics
	{
		struct EMSAsyncLoadGame_eventFinishTaskThreadSafe_Parms
		{
			TWeakObjectPtr<UEMSAsyncLoadGame> InTask;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTask_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::NewProp_InTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::NewProp_InTask = { "InTask", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncLoadGame_eventFinishTaskThreadSafe_Parms, InTask), Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::NewProp_InTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::NewProp_InTask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::NewProp_InTask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncLoadGame, nullptr, "FinishTaskThreadSafe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::EMSAsyncLoadGame_eventFinishTaskThreadSafe_Parms), Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSAsyncLoadGame);
	UClass* Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister()
	{
		return UEMSAsyncLoadGame::StaticClass();
	}
	struct Z_Construct_UClass_UEMSAsyncLoadGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSAsyncLoadGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSAsyncLoadGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors, "AsyncLoadActors" }, // 3196357892
		{ &Z_Construct_UFunction_UEMSAsyncLoadGame_AutoLoadLevelActors, "AutoLoadLevelActors" }, // 4189148580
		{ &Z_Construct_UFunction_UEMSAsyncLoadGame_FinishTaskThreadSafe, "FinishTaskThreadSafe" }, // 1706459417
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncLoadGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSAsyncLoadGame.h" },
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/*Executes when at least one load operation(Level or Player) completes.*/" },
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
		{ "ToolTip", "Executes when at least one load operation(Level or Player) completes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncLoadGame, OnCompleted), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted_MetaData)) }; // 1566150810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnFailed_MetaData[] = {
		{ "Comment", "/*Executes when all load operations have failed.*/" },
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
		{ "ToolTip", "Executes when all load operations have failed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncLoadGame, OnFailed), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnFailed_MetaData)) }; // 3353174459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncLoadGame, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_EMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_EMS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncLoadGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_EMS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSAsyncLoadGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncLoadGame>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSAsyncLoadGame()
	{
		if (!Z_Registration_Info_UClass_UEMSAsyncLoadGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncLoadGame.OuterSingleton, Z_Construct_UClass_UEMSAsyncLoadGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSAsyncLoadGame.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSAsyncLoadGame>()
	{
		return UEMSAsyncLoadGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSAsyncLoadGame);
	UEMSAsyncLoadGame::~UEMSAsyncLoadGame() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncLoadGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncLoadGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncLoadGame, UEMSAsyncLoadGame::StaticClass, TEXT("UEMSAsyncLoadGame"), &Z_Registration_Info_UClass_UEMSAsyncLoadGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncLoadGame), 1405092345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncLoadGame_h_1346728813(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncLoadGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncLoadGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
