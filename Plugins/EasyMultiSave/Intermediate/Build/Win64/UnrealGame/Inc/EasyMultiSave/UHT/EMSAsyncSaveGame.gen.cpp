// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSAsyncSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSAsyncSaveGame() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncSaveGame();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncSaveGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ENextStepType();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncSaveOutputPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncSaveOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncSaveOutputPin)
{
	AsyncSaveOutputPin.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncSaveFailedPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncSaveFailedPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncSaveFailedPin)
{
	AsyncSaveFailedPin.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENextStepType;
	static UEnum* ENextStepType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENextStepType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENextStepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ENextStepType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ENextStepType"));
		}
		return Z_Registration_Info_UEnum_ENextStepType.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ENextStepType>()
	{
		return ENextStepType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enumerators[] = {
		{ "ENextStepType::SaveLevel", (int64)ENextStepType::SaveLevel },
		{ "ENextStepType::FinishSave", (int64)ENextStepType::FinishSave },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enum_MetaDataParams[] = {
		{ "FinishSave.Name", "ENextStepType::FinishSave" },
		{ "ModuleRelativePath", "Public/EMSAsyncSaveGame.h" },
		{ "SaveLevel.Name", "ENextStepType::SaveLevel" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		"ENextStepType",
		"ENextStepType",
		Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyMultiSave_ENextStepType()
	{
		if (!Z_Registration_Info_UEnum_ENextStepType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENextStepType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENextStepType.InnerSingleton;
	}
	DEFINE_FUNCTION(UEMSAsyncSaveGame::execAutoSaveLevelActors)
	{
		P_GET_OBJECT(UEMSObject,Z_Param_EMSObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSAsyncSaveGame::AutoSaveLevelActors(Z_Param_EMSObject);
		P_NATIVE_END;
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
	void UEMSAsyncSaveGame::StaticRegisterNativesUEMSAsyncSaveGame()
	{
		UClass* Class = UEMSAsyncSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncSaveActors", &UEMSAsyncSaveGame::execAsyncSaveActors },
			{ "AutoSaveLevelActors", &UEMSAsyncSaveGame::execAutoSaveLevelActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics
	{
		struct EMSAsyncSaveGame_eventAsyncSaveActors_Parms
		{
			UObject* WorldContextObject;
			int32 Data;
			UEMSAsyncSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncSaveGame_eventAsyncSaveActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_Data_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/EasyMultiSave.ESaveTypeFlags" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncSaveGame_eventAsyncSaveActors_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncSaveGame_eventAsyncSaveActors_Parms, ReturnValue), Z_Construct_UClass_UEMSAsyncSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Main function for Saving the Game. Use the Data checkboxes to define what you want to save. \n\x09*\n\x09* @param Data - Check here what data you want to save. \n\x09*/" },
		{ "DisplayName", "Save Game Actors" },
		{ "ModuleRelativePath", "Public/EMSAsyncSaveGame.h" },
		{ "ToolTip", "Main function for Saving the Game. Use the Data checkboxes to define what you want to save.\n\n@param Data - Check here what data you want to save." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncSaveGame, nullptr, "AsyncSaveActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::EMSAsyncSaveGame_eventAsyncSaveActors_Parms), Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics
	{
		struct EMSAsyncSaveGame_eventAutoSaveLevelActors_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::NewProp_EMSObject = { "EMSObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncSaveGame_eventAutoSaveLevelActors_Parms, EMSObject), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::NewProp_EMSObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncSaveGame, nullptr, "AutoSaveLevelActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::EMSAsyncSaveGame_eventAutoSaveLevelActors_Parms), Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSAsyncSaveGame);
	UClass* Z_Construct_UClass_UEMSAsyncSaveGame_NoRegister()
	{
		return UEMSAsyncSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UEMSAsyncSaveGame_Statics
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
	UObject* (*const Z_Construct_UClass_UEMSAsyncSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSAsyncSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncSaveGame_AsyncSaveActors, "AsyncSaveActors" }, // 1932651734
		{ &Z_Construct_UFunction_UEMSAsyncSaveGame_AutoSaveLevelActors, "AutoSaveLevelActors" }, // 1369361112
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSAsyncSaveGame.h" },
		{ "ModuleRelativePath", "Public/EMSAsyncSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/*Executes when at least one save operation(Level or Player) completes.*/" },
		{ "ModuleRelativePath", "Public/EMSAsyncSaveGame.h" },
		{ "ToolTip", "Executes when at least one save operation(Level or Player) completes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncSaveGame, OnCompleted), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnCompleted_MetaData)) }; // 3305350641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnFailed_MetaData[] = {
		{ "Comment", "/*Executes when all save operations have failed.*/" },
		{ "ModuleRelativePath", "Public/EMSAsyncSaveGame.h" },
		{ "ToolTip", "Executes when all save operations have failed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncSaveGame, OnFailed), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnFailed_MetaData)) }; // 1324112608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncSaveGame, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_EMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_EMS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_OnFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncSaveGame_Statics::NewProp_EMS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSAsyncSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncSaveGame>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSAsyncSaveGame()
	{
		if (!Z_Registration_Info_UClass_UEMSAsyncSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncSaveGame.OuterSingleton, Z_Construct_UClass_UEMSAsyncSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSAsyncSaveGame.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSAsyncSaveGame>()
	{
		return UEMSAsyncSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSAsyncSaveGame);
	UEMSAsyncSaveGame::~UEMSAsyncSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncSaveGame_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncSaveGame_h_Statics::EnumInfo[] = {
		{ ENextStepType_StaticEnum, TEXT("ENextStepType"), &Z_Registration_Info_UEnum_ENextStepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2370317184U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncSaveGame, UEMSAsyncSaveGame::StaticClass, TEXT("UEMSAsyncSaveGame"), &Z_Registration_Info_UClass_UEMSAsyncSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncSaveGame), 526775755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncSaveGame_h_3920017303(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncSaveGame_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncSaveGame_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
