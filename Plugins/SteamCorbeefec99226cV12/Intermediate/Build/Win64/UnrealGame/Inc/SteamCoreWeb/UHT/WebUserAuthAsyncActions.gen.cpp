// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserAuth/WebUserAuthAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebUserAuthAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionAuthenticateUser Function AuthenticateUserAsync **
struct Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics
{
	struct SteamCoreWebAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms
	{
		UObject* WorldContextObject;
		FString SteamId;
		TArray<uint8> SessionKey;
		TArray<uint8> EncryptedLoginKey;
		USteamCoreWebAsyncActionAuthenticateUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Authenticate User\n\x09*\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09Should be the users steamid, unencrypted.\n\x09* @param\x09SessionKey\x09\x09\x09\x09Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n\x09* @param\x09""EncryptedLoginKey\x09\x09Should be the users hashed loginkey, AES encrypted with the sessionkey.\n\x09*/" },
		{ "DisplayName", "Authenticate User" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuthAsyncActions.h" },
		{ "ToolTip", "Authenticate User\n\n@param        SteamId                                 Should be the users steamid, unencrypted.\n@param        SessionKey                              Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n@param        EncryptedLoginKey               Should be the users hashed loginkey, AES encrypted with the sessionkey." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function AuthenticateUserAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionKey_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncryptedLoginKey_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncryptedLoginKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AuthenticateUserAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AuthenticateUserAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SessionKey_Inner = { "SessionKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SessionKey = { "SessionKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, SessionKey), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_EncryptedLoginKey_Inner = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_EncryptedLoginKey = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, EncryptedLoginKey), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SessionKey_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SessionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_EncryptedLoginKey_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_EncryptedLoginKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::PropPointers) < 2048);
// ********** End Function AuthenticateUserAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser, nullptr, "AuthenticateUserAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::SteamCoreWebAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::SteamCoreWebAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionAuthenticateUser::execAuthenticateUserAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(uint8,Z_Param_SessionKey);
	P_GET_TARRAY(uint8,Z_Param_EncryptedLoginKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionAuthenticateUser**)Z_Param__Result=USteamCoreWebAsyncActionAuthenticateUser::AuthenticateUserAsync(Z_Param_WorldContextObject,Z_Param_SteamId,Z_Param_SessionKey,Z_Param_EncryptedLoginKey);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionAuthenticateUser Function AuthenticateUserAsync ****

// ********** Begin Class USteamCoreWebAsyncActionAuthenticateUser *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUser;
UClass* USteamCoreWebAsyncActionAuthenticateUser::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionAuthenticateUser;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionAuthenticateUser"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUser.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionAuthenticateUser,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUser.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_NoRegister()
{
	return USteamCoreWebAsyncActionAuthenticateUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionAuthenticateUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserAuth/WebUserAuthAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuthAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionAuthenticateUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionAuthenticateUser constinit property declarations *
// ********** End Class USteamCoreWebAsyncActionAuthenticateUser constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AuthenticateUserAsync"), .Pointer = &USteamCoreWebAsyncActionAuthenticateUser::execAuthenticateUserAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync, "AuthenticateUserAsync" }, // 2196026646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionAuthenticateUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_Statics::ClassParams = {
	&USteamCoreWebAsyncActionAuthenticateUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionAuthenticateUser::StaticRegisterNativesUSteamCoreWebAsyncActionAuthenticateUser()
{
	UClass* Class = USteamCoreWebAsyncActionAuthenticateUser::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUser.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUser.OuterSingleton;
}
USteamCoreWebAsyncActionAuthenticateUser::USteamCoreWebAsyncActionAuthenticateUser() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionAuthenticateUser);
USteamCoreWebAsyncActionAuthenticateUser::~USteamCoreWebAsyncActionAuthenticateUser() {}
// ********** End Class USteamCoreWebAsyncActionAuthenticateUser ***********************************

// ********** Begin Class USteamCoreWebAsyncActionAuthenticateUserTicket Function AuthenticateUserTicketAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics
{
	struct SteamCoreWebAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Ticket;
		USteamCoreWebAsyncActionAuthenticateUserTicket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Authenticate User Ticket\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppId\x09\x09The App ID to get the betas of.\n\x09* @param\x09Ticket\x09\x09""Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter.\n\x09*/" },
		{ "DisplayName", "Authenticate User Ticket" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuthAsyncActions.h" },
		{ "ToolTip", "Authenticate User Ticket\n\n@param        Key                     Steamworks Web API publisher authentication key.\n@param        AppId           The App ID to get the betas of.\n@param        Ticket          Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function AuthenticateUserTicketAsync constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AuthenticateUserTicketAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AuthenticateUserTicketAsync Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, Ticket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::PropPointers) < 2048);
// ********** End Function AuthenticateUserTicketAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket, nullptr, "AuthenticateUserTicketAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::SteamCoreWebAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::SteamCoreWebAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionAuthenticateUserTicket::execAuthenticateUserTicketAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ticket);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionAuthenticateUserTicket**)Z_Param__Result=USteamCoreWebAsyncActionAuthenticateUserTicket::AuthenticateUserTicketAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Ticket);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionAuthenticateUserTicket Function AuthenticateUserTicketAsync 

// ********** Begin Class USteamCoreWebAsyncActionAuthenticateUserTicket ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket;
UClass* USteamCoreWebAsyncActionAuthenticateUserTicket::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionAuthenticateUserTicket;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionAuthenticateUserTicket"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionAuthenticateUserTicket,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_NoRegister()
{
	return USteamCoreWebAsyncActionAuthenticateUserTicket::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionAuthenticateUserTicket\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserAuth/WebUserAuthAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuthAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionAuthenticateUserTicket\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionAuthenticateUserTicket constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionAuthenticateUserTicket constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AuthenticateUserTicketAsync"), .Pointer = &USteamCoreWebAsyncActionAuthenticateUserTicket::execAuthenticateUserTicketAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync, "AuthenticateUserTicketAsync" }, // 463274675
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionAuthenticateUserTicket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_Statics::ClassParams = {
	&USteamCoreWebAsyncActionAuthenticateUserTicket::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionAuthenticateUserTicket::StaticRegisterNativesUSteamCoreWebAsyncActionAuthenticateUserTicket()
{
	UClass* Class = USteamCoreWebAsyncActionAuthenticateUserTicket::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket.OuterSingleton;
}
USteamCoreWebAsyncActionAuthenticateUserTicket::USteamCoreWebAsyncActionAuthenticateUserTicket() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionAuthenticateUserTicket);
USteamCoreWebAsyncActionAuthenticateUserTicket::~USteamCoreWebAsyncActionAuthenticateUserTicket() {}
// ********** End Class USteamCoreWebAsyncActionAuthenticateUserTicket *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuthAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUser, USteamCoreWebAsyncActionAuthenticateUser::StaticClass, TEXT("USteamCoreWebAsyncActionAuthenticateUser"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionAuthenticateUser), 436153873U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket, USteamCoreWebAsyncActionAuthenticateUserTicket::StaticClass, TEXT("USteamCoreWebAsyncActionAuthenticateUserTicket"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionAuthenticateUserTicket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionAuthenticateUserTicket), 2007039935U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuthAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuthAsyncActions_h__Script_SteamCoreWeb_2450171750{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuthAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuthAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
