// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Expandedpc.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExpandedpc() {}

// ********** Begin Cross Module References ********************************************************
CONPLUGIN_API UClass* Z_Construct_UClass_AExpandedpc();
CONPLUGIN_API UClass* Z_Construct_UClass_AExpandedpc_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_conplugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExpandedpc Function ClientUpdateWorldTime *******************************
struct Expandedpc_eventClientUpdateWorldTime_Parms
{
	float ClientTimestamp;
	float ServerTimestamp;
};
static FName NAME_AExpandedpc_ClientUpdateWorldTime = FName(TEXT("ClientUpdateWorldTime"));
void AExpandedpc::ClientUpdateWorldTime(float ClientTimestamp, float ServerTimestamp)
{
	Expandedpc_eventClientUpdateWorldTime_Parms Parms;
	Parms.ClientTimestamp=ClientTimestamp;
	Parms.ServerTimestamp=ServerTimestamp;
	UFunction* Func = FindFunctionChecked(NAME_AExpandedpc_ClientUpdateWorldTime);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClientUpdateWorldTime constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientTimestamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerTimestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClientUpdateWorldTime constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClientUpdateWorldTime Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::NewProp_ClientTimestamp = { "ClientTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Expandedpc_eventClientUpdateWorldTime_Parms, ClientTimestamp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::NewProp_ServerTimestamp = { "ServerTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Expandedpc_eventClientUpdateWorldTime_Parms, ServerTimestamp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::NewProp_ClientTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::NewProp_ServerTimestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::PropPointers) < 2048);
// ********** End Function ClientUpdateWorldTime Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "ClientUpdateWorldTime", 	Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::PropPointers), 
sizeof(Expandedpc_eventClientUpdateWorldTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Expandedpc_eventClientUpdateWorldTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExpandedpc::execClientUpdateWorldTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClientTimestamp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ServerTimestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientUpdateWorldTime_Implementation(Z_Param_ClientTimestamp,Z_Param_ServerTimestamp);
	P_NATIVE_END;
}
// ********** End Class AExpandedpc Function ClientUpdateWorldTime *********************************

// ********** Begin Class AExpandedpc Function GetServerWorldTime **********************************
struct Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics
{
	struct Expandedpc_eventGetServerWorldTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerWorldTime constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerWorldTime constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerWorldTime Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Expandedpc_eventGetServerWorldTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::PropPointers) < 2048);
// ********** End Function GetServerWorldTime Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "GetServerWorldTime", 	Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::Expandedpc_eventGetServerWorldTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::Expandedpc_eventGetServerWorldTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExpandedpc_GetServerWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_GetServerWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExpandedpc::execGetServerWorldTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetServerWorldTime();
	P_NATIVE_END;
}
// ********** End Class AExpandedpc Function GetServerWorldTime ************************************

// ********** Begin Class AExpandedpc Function GetServerWorldTimeDelta *****************************
struct Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics
{
	struct Expandedpc_eventGetServerWorldTimeDelta_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerWorldTimeDelta constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerWorldTimeDelta constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerWorldTimeDelta Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Expandedpc_eventGetServerWorldTimeDelta_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::PropPointers) < 2048);
// ********** End Function GetServerWorldTimeDelta Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "GetServerWorldTimeDelta", 	Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::Expandedpc_eventGetServerWorldTimeDelta_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::Expandedpc_eventGetServerWorldTimeDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExpandedpc::execGetServerWorldTimeDelta)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetServerWorldTimeDelta();
	P_NATIVE_END;
}
// ********** End Class AExpandedpc Function GetServerWorldTimeDelta *******************************

// ********** Begin Class AExpandedpc Function PawnLeavingGame *************************************
static FName NAME_AExpandedpc_PawnLeavingGame = FName(TEXT("PawnLeavingGame"));
void AExpandedpc::PawnLeavingGame()
{
	UFunction* Func = FindFunctionChecked(NAME_AExpandedpc_PawnLeavingGame);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		PawnLeavingGame_Implementation();
	}
}
struct Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controller expanded" },
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PawnLeavingGame constinit property declarations ***********************
// ********** End Function PawnLeavingGame constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "PawnLeavingGame", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AExpandedpc_PawnLeavingGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_PawnLeavingGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExpandedpc::execPawnLeavingGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PawnLeavingGame_Implementation();
	P_NATIVE_END;
}
// ********** End Class AExpandedpc Function PawnLeavingGame ***************************************

// ********** Begin Class AExpandedpc Function ServerRequestWorldTime ******************************
struct Expandedpc_eventServerRequestWorldTime_Parms
{
	float ClientTimestamp;
};
static FName NAME_AExpandedpc_ServerRequestWorldTime = FName(TEXT("ServerRequestWorldTime"));
void AExpandedpc::ServerRequestWorldTime(float ClientTimestamp)
{
	Expandedpc_eventServerRequestWorldTime_Parms Parms;
	Parms.ClientTimestamp=ClientTimestamp;
	UFunction* Func = FindFunctionChecked(NAME_AExpandedpc_ServerRequestWorldTime);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestWorldTime constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientTimestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequestWorldTime constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequestWorldTime Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::NewProp_ClientTimestamp = { "ClientTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Expandedpc_eventServerRequestWorldTime_Parms, ClientTimestamp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::NewProp_ClientTimestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::PropPointers) < 2048);
// ********** End Function ServerRequestWorldTime Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExpandedpc, nullptr, "ServerRequestWorldTime", 	Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::PropPointers), 
sizeof(Expandedpc_eventServerRequestWorldTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Expandedpc_eventServerRequestWorldTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExpandedpc::execServerRequestWorldTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClientTimestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestWorldTime_Implementation(Z_Param_ClientTimestamp);
	P_NATIVE_END;
}
// ********** End Class AExpandedpc Function ServerRequestWorldTime ********************************

// ********** Begin Class AExpandedpc **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExpandedpc;
UClass* AExpandedpc::GetPrivateStaticClass()
{
	using TClass = AExpandedpc;
	if (!Z_Registration_Info_UClass_AExpandedpc.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Expandedpc"),
			Z_Registration_Info_UClass_AExpandedpc.InnerSingleton,
			StaticRegisterNativesAExpandedpc,
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
	return Z_Registration_Info_UClass_AExpandedpc.InnerSingleton;
}
UClass* Z_Construct_UClass_AExpandedpc_NoRegister()
{
	return AExpandedpc::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExpandedpc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Expandedpc.h" },
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyActorThenUnpossess_MetaData[] = {
		{ "Category", "Controller expanded" },
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkClockUpdateFrequency_MetaData[] = {
		{ "Category", "GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Frequency that the client requests to adjust it's local clock. Set to zero to disable periodic updates. */" },
#endif
		{ "ModuleRelativePath", "Public/Expandedpc.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frequency that the client requests to adjust it's local clock. Set to zero to disable periodic updates." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AExpandedpc constinit property declarations ******************************
	static void NewProp_DestroyActorThenUnpossess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyActorThenUnpossess;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkClockUpdateFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AExpandedpc constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClientUpdateWorldTime"), .Pointer = &AExpandedpc::execClientUpdateWorldTime },
		{ .NameUTF8 = UTF8TEXT("GetServerWorldTime"), .Pointer = &AExpandedpc::execGetServerWorldTime },
		{ .NameUTF8 = UTF8TEXT("GetServerWorldTimeDelta"), .Pointer = &AExpandedpc::execGetServerWorldTimeDelta },
		{ .NameUTF8 = UTF8TEXT("PawnLeavingGame"), .Pointer = &AExpandedpc::execPawnLeavingGame },
		{ .NameUTF8 = UTF8TEXT("ServerRequestWorldTime"), .Pointer = &AExpandedpc::execServerRequestWorldTime },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AExpandedpc_ClientUpdateWorldTime, "ClientUpdateWorldTime" }, // 1369277690
		{ &Z_Construct_UFunction_AExpandedpc_GetServerWorldTime, "GetServerWorldTime" }, // 1048845261
		{ &Z_Construct_UFunction_AExpandedpc_GetServerWorldTimeDelta, "GetServerWorldTimeDelta" }, // 1963338550
		{ &Z_Construct_UFunction_AExpandedpc_PawnLeavingGame, "PawnLeavingGame" }, // 266971719
		{ &Z_Construct_UFunction_AExpandedpc_ServerRequestWorldTime, "ServerRequestWorldTime" }, // 2862236877
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExpandedpc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExpandedpc_Statics

// ********** Begin Class AExpandedpc Property Definitions *****************************************
void Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess_SetBit(void* Obj)
{
	((AExpandedpc*)Obj)->DestroyActorThenUnpossess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess = { "DestroyActorThenUnpossess", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AExpandedpc), &Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyActorThenUnpossess_MetaData), NewProp_DestroyActorThenUnpossess_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExpandedpc_Statics::NewProp_NetworkClockUpdateFrequency = { "NetworkClockUpdateFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExpandedpc, NetworkClockUpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkClockUpdateFrequency_MetaData), NewProp_NetworkClockUpdateFrequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExpandedpc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExpandedpc_Statics::NewProp_DestroyActorThenUnpossess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExpandedpc_Statics::NewProp_NetworkClockUpdateFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExpandedpc_Statics::PropPointers) < 2048);
// ********** End Class AExpandedpc Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_AExpandedpc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_conplugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExpandedpc_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExpandedpc_Statics::Class_MetaDataParams), Z_Construct_UClass_AExpandedpc_Statics::Class_MetaDataParams)
};
void AExpandedpc::StaticRegisterNativesAExpandedpc()
{
	UClass* Class = AExpandedpc::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AExpandedpc_Statics::Funcs));
}
UClass* Z_Construct_UClass_AExpandedpc()
{
	if (!Z_Registration_Info_UClass_AExpandedpc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExpandedpc.OuterSingleton, Z_Construct_UClass_AExpandedpc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExpandedpc.OuterSingleton;
}
AExpandedpc::AExpandedpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExpandedpc);
AExpandedpc::~AExpandedpc() {}
// ********** End Class AExpandedpc ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h__Script_conplugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExpandedpc, AExpandedpc::StaticClass, TEXT("AExpandedpc"), &Z_Registration_Info_UClass_AExpandedpc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExpandedpc), 1539389548U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h__Script_conplugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h__Script_conplugin_1516004291{
	TEXT("/Script/conplugin"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h__Script_conplugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h__Script_conplugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
