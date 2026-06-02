// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "conplugin/Public/Expandedpc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedpc() {}
// Cross Module References
	CONPLUGIN_API UClass* Z_Construct_UClass_AExpandedpc();
	CONPLUGIN_API UClass* Z_Construct_UClass_AExpandedpc_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_conplugin();
// End Cross Module References
	DEFINE_FUNCTION(AExpandedpc::execClientUpdateWorldTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClientTimestamp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerTimestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateWorldTime_Implementation(Z_Param_ClientTimestamp,Z_Param_ServerTimestamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExpandedpc::execServerRequestWorldTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClientTimestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestWorldTime_Implementation(Z_Param_ClientTimestamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExpandedpc::execGetServerWorldTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetServerWorldTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExpandedpc::execGetServerWorldTimeDelta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetServerWorldTimeDelta();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExpandedpc::execPawnLeavingGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PawnLeavingGame_Implementation();
		P_NATIVE_END;
	}
	struct Expandedpc_eventClientUpdateWorldTime_Parms
	{
		float ClientTimestamp;
		float ServerTimestamp;
	};
	struct Expandedpc_eventServerRequestWorldTime_Parms
	{
		float ClientTimestamp;
	};
	static FName NAME_AExpandedpc_ClientUpdateWorldTime = FName(TEXT("ClientUpdateWorldTime"));
	void AExpandedpc::ClientUpdateWorldTime(float ClientTimestamp, float ServerTimestamp)
	{
		Expandedpc_eventClientUpdateWorldTime_Parms Parms;
		Parms.ClientTimestamp=ClientTimestamp;
		Parms.ServerTimestamp=ServerTimestamp;
		ProcessEvent(FindFunctionChecked(NAME_AExpandedpc_ClientUpdateWorldTime),&Parms);
	}
	static FName NAME_AExpandedpc_PawnLeavingGame = FName(TEXT("PawnLeavingGame"));
	void AExpandedpc::PawnLeavingGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExpandedpc_PawnLeavingGame),NULL);
	}
	static FName NAME_AExpandedpc_ServerRequestWorldTime = FName(TEXT("ServerRequestWorldTime"));
	void AExpandedpc::ServerRequestWorldTime(float ClientTimestamp)
	{
		Expandedpc_eventServerRequestWorldTime_Parms Parms;
		Parms.ClientTimestamp=ClientTimestamp;
		ProcessEvent(FindFunctionChecked(NAME_AExpandedpc_ServerRequestWorldTime),&Parms);
	}
	void AExpandedpc::StaticRegisterNativesAExpandedpc()
	{
		UClass* Class = AExpandedpc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientUpdateWorldTime", &AExpandedpc::execClientUpdateWorldTime },
			{ "GetServerWorldTime", &AExpandedpc::execGetServerWorldTime },
			{ "GetServerWorldTimeDelta", &AExpandedpc::execGetServerWorldTimeDelta },
			{ "PawnLeavingGame", &AExpandedpc::execPawnLeavingGame },
			{ "ServerRequestWorldTime", &AExpandedpc::execServerRequestWorldTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientTimestamp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerTimestamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::NewProp_ClientTimestamp = { "ClientTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Expandedpc_eventClientUpdateWorldTime_Parms, ClientTimestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::NewProp_ServerTimestamp = { "ServerTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Expandedpc_eventClientUpdateWorldTime_Parms, ServerTimestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::NewProp_ClientTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::NewProp_ServerTimestamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "ClientUpdateWorldTime", nullptr, nullptr, sizeof(Expandedpc_eventClientUpdateWorldTime_Parms), Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics
	{
		struct Expandedpc_eventGetServerWorldTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Expandedpc_eventGetServerWorldTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "GetServerWorldTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::Expandedpc_eventGetServerWorldTime_Parms), Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExpandedpc_GetServerWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics
	{
		struct Expandedpc_eventGetServerWorldTimeDelta_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Expandedpc_eventGetServerWorldTimeDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "GetServerWorldTimeDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::Expandedpc_eventGetServerWorldTimeDelta_Parms), Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controller expanded" },
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "PawnLeavingGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExpandedpc_PawnLeavingGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientTimestamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::NewProp_ClientTimestamp = { "ClientTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Expandedpc_eventServerRequestWorldTime_Parms, ClientTimestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::NewProp_ClientTimestamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "ServerRequestWorldTime", nullptr, nullptr, sizeof(Expandedpc_eventServerRequestWorldTime_Parms), Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExpandedpc);
	UClass* Z_Construct_UClass_AExpandedpc_NoRegister()
	{
		return AExpandedpc::StaticClass();
	}
	struct Z_Construct_UClass_AExpandedpc_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyActorThenUnpossess_MetaData[];
#endif
		static void NewProp_DestroyActorThenUnpossess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyActorThenUnpossess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkClockUpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkClockUpdateFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExpandedpc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_conplugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExpandedpc_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime, "ClientUpdateWorldTime" }, // 1537169382
		{ &Z_Construct_UFunction_AExpandedpc_GetServerWorldTime, "GetServerWorldTime" }, // 1244755767
		{ &Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta, "GetServerWorldTimeDelta" }, // 3632228472
		{ &Z_Construct_UFunction_AExpandedpc_PawnLeavingGame, "PawnLeavingGame" }, // 3494330852
		{ &Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime, "ServerRequestWorldTime" }, // 2060245276
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExpandedpc_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Expandedpc.h" },
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess_MetaData[] = {
		{ "Category", "Controller expanded" },
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif
	void Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess_SetBit(void* Obj)
	{
		((AExpandedpc*)Obj)->DestroyActorThenUnpossess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess = { "DestroyActorThenUnpossess", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AExpandedpc), &Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess_SetBit, METADATA_PARAMS(Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExpandedpc_Statics::NewProp_NetworkClockUpdateFrequency_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Frequency that the client requests to adjust it's local clock. Set to zero to disable periodic updates. */" },
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
		{ "ToolTip", "Frequency that the client requests to adjust it's local clock. Set to zero to disable periodic updates." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExpandedpc_Statics::NewProp_NetworkClockUpdateFrequency = { "NetworkClockUpdateFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExpandedpc, NetworkClockUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_AExpandedpc_Statics::NewProp_NetworkClockUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExpandedpc_Statics::NewProp_NetworkClockUpdateFrequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExpandedpc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExpandedpc_Statics::NewProp_NetworkClockUpdateFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExpandedpc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExpandedpc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExpandedpc_Statics::ClassParams = {
		&AExpandedpc::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExpandedpc_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExpandedpc_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExpandedpc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExpandedpc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExpandedpc()
	{
		if (!Z_Registration_Info_UClass_AExpandedpc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExpandedpc.OuterSingleton, Z_Construct_UClass_AExpandedpc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExpandedpc.OuterSingleton;
	}
	template<> CONPLUGIN_API UClass* StaticClass<AExpandedpc>()
	{
		return AExpandedpc::StaticClass();
	}
	AExpandedpc::AExpandedpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExpandedpc);
	AExpandedpc::~AExpandedpc() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExpandedpc, AExpandedpc::StaticClass, TEXT("AExpandedpc"), &Z_Registration_Info_UClass_AExpandedpc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExpandedpc), 473688447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_3258458424(TEXT("/Script/conplugin"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
