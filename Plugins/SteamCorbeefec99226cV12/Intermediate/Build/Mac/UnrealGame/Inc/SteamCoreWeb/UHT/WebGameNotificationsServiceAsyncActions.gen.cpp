// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebGameNotificationsServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionCreateSession Function CreateSessionAsync ********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics
{
	struct SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Context;
		FString Title;
		FString Users;
		FString SteamId;
		USteamCoreWebAsyncActionCreateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameNotificationsService|Async" },
		{ "Comment", "/**\n\x09* Creates a brand new async session with the players specified in the request.\n\x09*\n\x09* The unique session id returned in this API call should be stored with the game session state of the game, as it will be used to reference other calls in the Game Notifications API\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID of the session to update.\n\x09* @param\x09""Context\x09(int64)\x09\x09Game-specified Context value the game can use to associate the session with some object on their backend.\n\x09* @param\x09Title\x09\x09\x09\x09The Title of the session to be displayed within each user's list of sessions.\n\x09* @param\x09Users\x09\x09\x09\x09The initial state of all Users in the session.\n\x09* @param\x09SteamId\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session and all Users being added to the session must be friends with the user.\n\x09*/" },
		{ "DisplayName", "Create Session" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "Creates a brand new async session with the players specified in the request.\n\nThe unique session id returned in this API call should be stored with the game session state of the game, as it will be used to reference other calls in the Game Notifications API\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The App ID of the session to update.\n@param        Context (int64)         Game-specified Context value the game can use to associate the session with some object on their backend.\n@param        Title                           The Title of the session to be displayed within each user's list of sessions.\n@param        Users                           The initial state of all Users in the session.\n@param        SteamId                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session and all Users being added to the session must be friends with the user." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSessionAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Users;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSessionAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSessionAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms, Context), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms, Users), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::PropPointers) < 2048);
// ********** End Function CreateSessionAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession, nullptr, "CreateSessionAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::SteamCoreWebAsyncActionCreateSession_eventCreateSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionCreateSession::execCreateSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Users);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionCreateSession**)Z_Param__Result=USteamCoreWebAsyncActionCreateSession::CreateSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Context,Z_Param_Title,Z_Param_Users,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionCreateSession Function CreateSessionAsync **********

// ********** Begin Class USteamCoreWebAsyncActionCreateSession ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionCreateSession;
UClass* USteamCoreWebAsyncActionCreateSession::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionCreateSession;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCreateSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionCreateSession"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionCreateSession.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionCreateSession,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCreateSession.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_NoRegister()
{
	return USteamCoreWebAsyncActionCreateSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCreateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCreateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionCreateSession constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionCreateSession constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSessionAsync"), .Pointer = &USteamCoreWebAsyncActionCreateSession::execCreateSessionAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCreateSession_CreateSessionAsync, "CreateSessionAsync" }, // 2636074157
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCreateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_Statics::ClassParams = {
	&USteamCoreWebAsyncActionCreateSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionCreateSession::StaticRegisterNativesUSteamCoreWebAsyncActionCreateSession()
{
	UClass* Class = USteamCoreWebAsyncActionCreateSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCreateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCreateSession.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCreateSession.OuterSingleton;
}
USteamCoreWebAsyncActionCreateSession::USteamCoreWebAsyncActionCreateSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionCreateSession);
USteamCoreWebAsyncActionCreateSession::~USteamCoreWebAsyncActionCreateSession() {}
// ********** End Class USteamCoreWebAsyncActionCreateSession **************************************

// ********** Begin Class USteamCoreWebAsyncActionUpdateSession Function UpdateSessionAsync ********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics
{
	struct SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SessionId;
		int32 AppId;
		FString Title;
		FString Users;
		FString SteamId;
		USteamCoreWebAsyncActionUpdateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameNotificationsService|Async" },
		{ "Comment", "/**\n\x09* Update a game session whenever the state of the game changes.\n\x09*\n\x09* Be sure to update the state of each user accordingly, as what is sent here will be reflected in user notifications for all Users in the game.\n\x09* Any Users that were in the session that are not specified will be removed from the session, and any newly specified Users will be added to the session.\n\x09* You must send the complete state of the session -- all previous state will be replaced by the newly specified state.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SessionId (int64)\x09The sessionid to update.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID of the session to update.\n\x09* @param\x09Title\x09\x09\x09\x09(Optional) The new Title of the session. If not specified, the Title will not be changed.\n\x09* @param\x09Users\x09\x09\x09\x09(Optional) A list of Users whose state will be updated to reflect the given state. If the Users are not already in the session, they will be added to it.\n\x09* @param\x09SteamId\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session.\n\x09*/" },
		{ "DisplayName", "Update Session" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "Update a game session whenever the state of the game changes.\n\nBe sure to update the state of each user accordingly, as what is sent here will be reflected in user notifications for all Users in the game.\nAny Users that were in the session that are not specified will be removed from the session, and any newly specified Users will be added to the session.\nYou must send the complete state of the session -- all previous state will be replaced by the newly specified state.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SessionId (int64)       The sessionid to update.\n@param        AppId                           The App ID of the session to update.\n@param        Title                           (Optional) The new Title of the session. If not specified, the Title will not be changed.\n@param        Users                           (Optional) A list of Users whose state will be updated to reflect the given state. If the Users are not already in the session, they will be added to it.\n@param        SteamId                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSessionAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Users;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateSessionAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateSessionAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, Users), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::PropPointers) < 2048);
// ********** End Function UpdateSessionAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession, nullptr, "UpdateSessionAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::SteamCoreWebAsyncActionUpdateSession_eventUpdateSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionUpdateSession::execUpdateSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Users);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionUpdateSession**)Z_Param__Result=USteamCoreWebAsyncActionUpdateSession::UpdateSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SessionId,Z_Param_AppId,Z_Param_Title,Z_Param_Users,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionUpdateSession Function UpdateSessionAsync **********

// ********** Begin Class USteamCoreWebAsyncActionUpdateSession ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionUpdateSession;
UClass* USteamCoreWebAsyncActionUpdateSession::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionUpdateSession;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionUpdateSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionUpdateSession"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionUpdateSession.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionUpdateSession,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionUpdateSession.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_NoRegister()
{
	return USteamCoreWebAsyncActionUpdateSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionUpdateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionUpdateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionUpdateSession constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionUpdateSession constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdateSessionAsync"), .Pointer = &USteamCoreWebAsyncActionUpdateSession::execUpdateSessionAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync, "UpdateSessionAsync" }, // 1284242567
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionUpdateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_Statics::ClassParams = {
	&USteamCoreWebAsyncActionUpdateSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionUpdateSession::StaticRegisterNativesUSteamCoreWebAsyncActionUpdateSession()
{
	UClass* Class = USteamCoreWebAsyncActionUpdateSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionUpdateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionUpdateSession.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionUpdateSession.OuterSingleton;
}
USteamCoreWebAsyncActionUpdateSession::USteamCoreWebAsyncActionUpdateSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionUpdateSession);
USteamCoreWebAsyncActionUpdateSession::~USteamCoreWebAsyncActionUpdateSession() {}
// ********** End Class USteamCoreWebAsyncActionUpdateSession **************************************

// ********** Begin Class USteamCoreWebAsyncActionEnumerateSessionsForApp Function EnumerateSessionsForAppAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics
{
	struct SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		bool bIncludeAllUserMessages;
		bool bIncludeAuthUserMessage;
		FString Language;
		USteamCoreWebAsyncActionEnumerateSessionsForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameNotificationsService|Async" },
		{ "Comment", "/**\n\x09* This returns a list of sessions that a Steam ID is part of.\n\x09*\n\x09* The optional bools will return further details about each session if set.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09\x09The sessionid to request details for. Optional. If not specified, all the user's sessions will be returned.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09\x09The user whose sessions are to be enumerated.\n\x09* @param\x09""bIncludeAllUserMessages\x09\x09(Optional) Set whether the message for all Users should be included. Defaults to false.\n\x09* @param\x09""bIncludeAuthUserMessage\x09\x09(Optional) Set whether the message for the authenticated user should be included. Defaults to false.\n\x09* @param\x09Language\x09\x09\x09\x09\x09(Optional) Language to localize the text in.\n\x09*/" },
		{ "DisplayName", "Enumerate Sessions for App" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "This returns a list of sessions that a Steam ID is part of.\n\nThe optional bools will return further details about each session if set.\n\n@param        Key                                                     Steamworks Web API publisher authentication Key.\n@param        AppId                                           The sessionid to request details for. Optional. If not specified, all the user's sessions will be returned.\n@param        SteamId                                         The user whose sessions are to be enumerated.\n@param        bIncludeAllUserMessages         (Optional) Set whether the message for all Users should be included. Defaults to false.\n@param        bIncludeAuthUserMessage         (Optional) Set whether the message for the authenticated user should be included. Defaults to false.\n@param        Language                                        (Optional) Language to localize the text in." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnumerateSessionsForAppAsync constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bIncludeAllUserMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAllUserMessages;
	static void NewProp_bIncludeAuthUserMessage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAuthUserMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnumerateSessionsForAppAsync constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnumerateSessionsForAppAsync Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms*)Obj)->bIncludeAllUserMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages = { "bIncludeAllUserMessages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms*)Obj)->bIncludeAuthUserMessage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage = { "bIncludeAuthUserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers) < 2048);
// ********** End Function EnumerateSessionsForAppAsync Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp, nullptr, "EnumerateSessionsForAppAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::SteamCoreWebAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionEnumerateSessionsForApp::execEnumerateSessionsForAppAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bIncludeAllUserMessages);
	P_GET_UBOOL(Z_Param_bIncludeAuthUserMessage);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionEnumerateSessionsForApp**)Z_Param__Result=USteamCoreWebAsyncActionEnumerateSessionsForApp::EnumerateSessionsForAppAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_bIncludeAllUserMessages,Z_Param_bIncludeAuthUserMessage,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionEnumerateSessionsForApp Function EnumerateSessionsForAppAsync 

// ********** Begin Class USteamCoreWebAsyncActionEnumerateSessionsForApp **************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp;
UClass* USteamCoreWebAsyncActionEnumerateSessionsForApp::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionEnumerateSessionsForApp;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionEnumerateSessionsForApp"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionEnumerateSessionsForApp,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_NoRegister()
{
	return USteamCoreWebAsyncActionEnumerateSessionsForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionEnumerateSessionsForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionEnumerateSessionsForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionEnumerateSessionsForApp constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionEnumerateSessionsForApp constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnumerateSessionsForAppAsync"), .Pointer = &USteamCoreWebAsyncActionEnumerateSessionsForApp::execEnumerateSessionsForAppAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync, "EnumerateSessionsForAppAsync" }, // 18112090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEnumerateSessionsForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::ClassParams = {
	&USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticRegisterNativesUSteamCoreWebAsyncActionEnumerateSessionsForApp()
{
	UClass* Class = USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp.OuterSingleton;
}
USteamCoreWebAsyncActionEnumerateSessionsForApp::USteamCoreWebAsyncActionEnumerateSessionsForApp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionEnumerateSessionsForApp);
USteamCoreWebAsyncActionEnumerateSessionsForApp::~USteamCoreWebAsyncActionEnumerateSessionsForApp() {}
// ********** End Class USteamCoreWebAsyncActionEnumerateSessionsForApp ****************************

// ********** Begin Class USteamCoreWebAsyncActionGetSessionDetailsForApp Function GetSessionDetailsForAppAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics
{
	struct SteamCoreWebAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString sessions;
		int32 AppId;
		FString Language;
		USteamCoreWebAsyncActionGetSessionDetailsForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameNotificationsService|Async" },
		{ "Comment", "/**\n\x09* Returns details about specific session(s).\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09sessions\x09\x09\x09The session(s) to receive the details for\n\x09* @param\x09""AppId\x09\x09\x09\x09The appid for the sessions.\n\x09* @param\x09Language\x09\x09\x09Language to localize the text in.\n\x09*/" },
		{ "DisplayName", "Get Session Details for App" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "Returns details about specific session(s).\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        sessions                        The session(s) to receive the details for\n@param        AppId                           The appid for the sessions.\n@param        Language                        Language to localize the text in." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSessionDetailsForAppAsync constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_sessions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSessionDetailsForAppAsync constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSessionDetailsForAppAsync Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_sessions = { "sessions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, sessions), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_sessions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::PropPointers) < 2048);
// ********** End Function GetSessionDetailsForAppAsync Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp, nullptr, "GetSessionDetailsForAppAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::SteamCoreWebAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::SteamCoreWebAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetSessionDetailsForApp::execGetSessionDetailsForAppAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_sessions);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionGetSessionDetailsForApp**)Z_Param__Result=USteamCoreWebAsyncActionGetSessionDetailsForApp::GetSessionDetailsForAppAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_sessions,Z_Param_AppId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetSessionDetailsForApp Function GetSessionDetailsForAppAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetSessionDetailsForApp **************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp;
UClass* USteamCoreWebAsyncActionGetSessionDetailsForApp::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetSessionDetailsForApp;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetSessionDetailsForApp"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetSessionDetailsForApp,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_NoRegister()
{
	return USteamCoreWebAsyncActionGetSessionDetailsForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetSessionDetailsForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetSessionDetailsForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetSessionDetailsForApp constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetSessionDetailsForApp constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSessionDetailsForAppAsync"), .Pointer = &USteamCoreWebAsyncActionGetSessionDetailsForApp::execGetSessionDetailsForAppAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync, "GetSessionDetailsForAppAsync" }, // 366209896
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetSessionDetailsForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetSessionDetailsForApp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetSessionDetailsForApp::StaticRegisterNativesUSteamCoreWebAsyncActionGetSessionDetailsForApp()
{
	UClass* Class = USteamCoreWebAsyncActionGetSessionDetailsForApp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp.OuterSingleton;
}
USteamCoreWebAsyncActionGetSessionDetailsForApp::USteamCoreWebAsyncActionGetSessionDetailsForApp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetSessionDetailsForApp);
USteamCoreWebAsyncActionGetSessionDetailsForApp::~USteamCoreWebAsyncActionGetSessionDetailsForApp() {}
// ********** End Class USteamCoreWebAsyncActionGetSessionDetailsForApp ****************************

// ********** Begin Class USteamCoreWebAsyncActionRequestNotifications Function RequestNotificationsAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics
{
	struct SteamCoreWebAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		USteamCoreWebAsyncActionRequestNotifications* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameNotificationsService|Async" },
		{ "Comment", "/**\n\x09* Requests that a user receive game notifications for an app.\n\x09*\n\x09* Whenever a user starts a game that requires game notifications, the server must make a RequestNotifications call for the signed in user.\n\x09* This will register your game to use offline notifications with the user by asking the user to opt into game notifications for your specific game.\n\x09* Make this call, at most, once per game launch. Subsequent calls will not ask the user to opt in if the user has decided to opt out.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID to request notifications for.\n\x09* @param\x09""AppId\x09\x09\x09The App ID to request notifications for.\n\x09*/" },
		{ "DisplayName", "Request Notifications" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "Requests that a user receive game notifications for an app.\n\nWhenever a user starts a game that requires game notifications, the server must make a RequestNotifications call for the signed in user.\nThis will register your game to use offline notifications with the user by asking the user to opt into game notifications for your specific game.\nMake this call, at most, once per game launch. Subsequent calls will not ask the user to opt in if the user has decided to opt out.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The Steam ID to request notifications for.\n@param        AppId                   The App ID to request notifications for." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestNotificationsAsync constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestNotificationsAsync constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestNotificationsAsync Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestNotificationsAsync Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications, nullptr, "RequestNotificationsAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::SteamCoreWebAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::SteamCoreWebAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionRequestNotifications::execRequestNotificationsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionRequestNotifications**)Z_Param__Result=USteamCoreWebAsyncActionRequestNotifications::RequestNotificationsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionRequestNotifications Function RequestNotificationsAsync 

// ********** Begin Class USteamCoreWebAsyncActionRequestNotifications *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestNotifications;
UClass* USteamCoreWebAsyncActionRequestNotifications::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionRequestNotifications;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestNotifications.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionRequestNotifications"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestNotifications.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionRequestNotifications,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestNotifications.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_NoRegister()
{
	return USteamCoreWebAsyncActionRequestNotifications::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRequestNotifications\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRequestNotifications\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionRequestNotifications constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionRequestNotifications constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestNotificationsAsync"), .Pointer = &USteamCoreWebAsyncActionRequestNotifications::execRequestNotificationsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync, "RequestNotificationsAsync" }, // 4215956281
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRequestNotifications>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_Statics::ClassParams = {
	&USteamCoreWebAsyncActionRequestNotifications::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionRequestNotifications::StaticRegisterNativesUSteamCoreWebAsyncActionRequestNotifications()
{
	UClass* Class = USteamCoreWebAsyncActionRequestNotifications::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestNotifications.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestNotifications.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestNotifications.OuterSingleton;
}
USteamCoreWebAsyncActionRequestNotifications::USteamCoreWebAsyncActionRequestNotifications() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionRequestNotifications);
USteamCoreWebAsyncActionRequestNotifications::~USteamCoreWebAsyncActionRequestNotifications() {}
// ********** End Class USteamCoreWebAsyncActionRequestNotifications *******************************

// ********** Begin Class USteamCoreWebAsyncActionDeleteSession Function DeleteSessionAsync ********
struct Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics
{
	struct SteamCoreWebAsyncActionDeleteSession_eventDeleteSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SessionId;
		int32 AppId;
		FString SteamId;
		USteamCoreWebAsyncActionDeleteSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameNotificationsService|Async" },
		{ "Comment", "/**\n\x09* Delete an active async game session. This will remove all notifications to any user that is part of the game session.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SessionId (int64)\x09The sessionid to delete.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID of the session to delete.\n\x09* @param\x09SteamId\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session.\n\x09*/" },
		{ "DisplayName", "Delete Session" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "Delete an active async game session. This will remove all notifications to any user that is part of the game session.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SessionId (int64)       The sessionid to delete.\n@param        AppId                           The App ID of the session to delete.\n@param        SteamId                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteSessionAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteSessionAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteSessionAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::PropPointers) < 2048);
// ********** End Function DeleteSessionAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession, nullptr, "DeleteSessionAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::SteamCoreWebAsyncActionDeleteSession_eventDeleteSessionAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::SteamCoreWebAsyncActionDeleteSession_eventDeleteSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionDeleteSession::execDeleteSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionDeleteSession**)Z_Param__Result=USteamCoreWebAsyncActionDeleteSession::DeleteSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SessionId,Z_Param_AppId,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionDeleteSession Function DeleteSessionAsync **********

// ********** Begin Class USteamCoreWebAsyncActionDeleteSession ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSession;
UClass* USteamCoreWebAsyncActionDeleteSession::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionDeleteSession;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionDeleteSession"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSession.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionDeleteSession,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSession.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_NoRegister()
{
	return USteamCoreWebAsyncActionDeleteSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionDeleteSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionDeleteSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionDeleteSession constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionDeleteSession constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeleteSessionAsync"), .Pointer = &USteamCoreWebAsyncActionDeleteSession::execDeleteSessionAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync, "DeleteSessionAsync" }, // 1567458871
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionDeleteSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_Statics::ClassParams = {
	&USteamCoreWebAsyncActionDeleteSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionDeleteSession::StaticRegisterNativesUSteamCoreWebAsyncActionDeleteSession()
{
	UClass* Class = USteamCoreWebAsyncActionDeleteSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSession.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSession.OuterSingleton;
}
USteamCoreWebAsyncActionDeleteSession::USteamCoreWebAsyncActionDeleteSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionDeleteSession);
USteamCoreWebAsyncActionDeleteSession::~USteamCoreWebAsyncActionDeleteSession() {}
// ********** End Class USteamCoreWebAsyncActionDeleteSession **************************************

// ********** Begin Class USteamCoreWebAsyncActionDeleteSessionBatch Function DeleteSessionBatchAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics
{
	struct SteamCoreWebAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SessionId;
		int32 AppId;
		USteamCoreWebAsyncActionDeleteSessionBatch* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|GameNotificationsService|Async" },
		{ "Comment", "/**\n\x09* Deletes a batch of async game sessions\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SessionId (int64)\x09The sessionid to delete.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID of the session to delete.\n\x09*/" },
		{ "DisplayName", "Delete Session Batch" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "Deletes a batch of async game sessions\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SessionId (int64)       The sessionid to delete.\n@param        AppId                           The App ID of the session to delete." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteSessionBatchAsync constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteSessionBatchAsync constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteSessionBatchAsync Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::PropPointers) < 2048);
// ********** End Function DeleteSessionBatchAsync Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch, nullptr, "DeleteSessionBatchAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::SteamCoreWebAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::SteamCoreWebAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionDeleteSessionBatch::execDeleteSessionBatchAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionDeleteSessionBatch**)Z_Param__Result=USteamCoreWebAsyncActionDeleteSessionBatch::DeleteSessionBatchAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SessionId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionDeleteSessionBatch Function DeleteSessionBatchAsync 

// ********** Begin Class USteamCoreWebAsyncActionDeleteSessionBatch *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSessionBatch;
UClass* USteamCoreWebAsyncActionDeleteSessionBatch::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionDeleteSessionBatch;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSessionBatch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionDeleteSessionBatch"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSessionBatch.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionDeleteSessionBatch,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSessionBatch.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_NoRegister()
{
	return USteamCoreWebAsyncActionDeleteSessionBatch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionDeleteSessionBatch\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionDeleteSessionBatch\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionDeleteSessionBatch constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionDeleteSessionBatch constinit property declarations *
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeleteSessionBatchAsync"), .Pointer = &USteamCoreWebAsyncActionDeleteSessionBatch::execDeleteSessionBatchAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync, "DeleteSessionBatchAsync" }, // 2582788636
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionDeleteSessionBatch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_Statics::ClassParams = {
	&USteamCoreWebAsyncActionDeleteSessionBatch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionDeleteSessionBatch::StaticRegisterNativesUSteamCoreWebAsyncActionDeleteSessionBatch()
{
	UClass* Class = USteamCoreWebAsyncActionDeleteSessionBatch::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSessionBatch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSessionBatch.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSessionBatch.OuterSingleton;
}
USteamCoreWebAsyncActionDeleteSessionBatch::USteamCoreWebAsyncActionDeleteSessionBatch() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionDeleteSessionBatch);
USteamCoreWebAsyncActionDeleteSessionBatch::~USteamCoreWebAsyncActionDeleteSessionBatch() {}
// ********** End Class USteamCoreWebAsyncActionDeleteSessionBatch *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsServiceAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCreateSession, USteamCoreWebAsyncActionCreateSession::StaticClass, TEXT("USteamCoreWebAsyncActionCreateSession"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCreateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCreateSession), 1801088804U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionUpdateSession, USteamCoreWebAsyncActionUpdateSession::StaticClass, TEXT("USteamCoreWebAsyncActionUpdateSession"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionUpdateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionUpdateSession), 2335212297U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp, USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass, TEXT("USteamCoreWebAsyncActionEnumerateSessionsForApp"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionEnumerateSessionsForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionEnumerateSessionsForApp), 2287534052U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp, USteamCoreWebAsyncActionGetSessionDetailsForApp::StaticClass, TEXT("USteamCoreWebAsyncActionGetSessionDetailsForApp"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetSessionDetailsForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetSessionDetailsForApp), 1349834670U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRequestNotifications, USteamCoreWebAsyncActionRequestNotifications::StaticClass, TEXT("USteamCoreWebAsyncActionRequestNotifications"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestNotifications, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRequestNotifications), 596849021U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSession, USteamCoreWebAsyncActionDeleteSession::StaticClass, TEXT("USteamCoreWebAsyncActionDeleteSession"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionDeleteSession), 306915829U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionDeleteSessionBatch, USteamCoreWebAsyncActionDeleteSessionBatch::StaticClass, TEXT("USteamCoreWebAsyncActionDeleteSessionBatch"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeleteSessionBatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionDeleteSessionBatch), 1480243967U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsServiceAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsServiceAsyncActions_h__Script_SteamCoreWeb_435185949{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
