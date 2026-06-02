// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserAuth/WebUserAuth.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebUserAuth() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserAuth();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserAuth_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebUserAuth Function AuthenticateUser ***********************************
struct Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics
{
	struct WebUserAuth_eventAuthenticateUser_Parms
	{
		FScriptDelegate Callback;
		FString SteamId;
		TArray<uint8> SessionKey;
		TArray<uint8> EncryptedLoginKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|UserAuth" },
		{ "Comment", "/**\n\x09* Authenticate User\n\x09*\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09Should be the users steamid, unencrypted.\n\x09* @param\x09SessionKey\x09\x09\x09\x09Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n\x09* @param\x09""EncryptedLoginKey\x09\x09Should be the users hashed loginkey, AES encrypted with the sessionkey.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuth.h" },
		{ "ToolTip", "Authenticate User\n\n@param        SteamId                                 Should be the users steamid, unencrypted.\n@param        SessionKey                              Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n@param        EncryptedLoginKey               Should be the users hashed loginkey, AES encrypted with the sessionkey." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AuthenticateUser constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionKey_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncryptedLoginKey_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncryptedLoginKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AuthenticateUser constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AuthenticateUser Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SessionKey_Inner = { "SessionKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SessionKey = { "SessionKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, SessionKey), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_EncryptedLoginKey_Inner = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_EncryptedLoginKey = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, EncryptedLoginKey), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SessionKey_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SessionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_EncryptedLoginKey_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_EncryptedLoginKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers) < 2048);
// ********** End Function AuthenticateUser Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebUserAuth, nullptr, "AuthenticateUser", 	Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::WebUserAuth_eventAuthenticateUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::WebUserAuth_eventAuthenticateUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebUserAuth_AuthenticateUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebUserAuth::execAuthenticateUser)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(uint8,Z_Param_SessionKey);
	P_GET_TARRAY(uint8,Z_Param_EncryptedLoginKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AuthenticateUser(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_SteamId,Z_Param_SessionKey,Z_Param_EncryptedLoginKey);
	P_NATIVE_END;
}
// ********** End Class UWebUserAuth Function AuthenticateUser *************************************

// ********** Begin Class UWebUserAuth Function AuthenticateUserTicket *****************************
struct Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics
{
	struct WebUserAuth_eventAuthenticateUserTicket_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString Ticket;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|UserAuth" },
		{ "Comment", "/**\n\x09* Authenticate User Ticket\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppId\x09\x09The App ID to get the betas of.\n\x09* @param\x09Ticket\x09\x09""Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuth.h" },
		{ "ToolTip", "Authenticate User Ticket\n\n@param        Key                     Steamworks Web API publisher authentication key.\n@param        AppId           The App ID to get the betas of.\n@param        Ticket          Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AuthenticateUserTicket constinit property declarations ****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AuthenticateUserTicket constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AuthenticateUserTicket Property Definitions ***************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, Ticket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Ticket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers) < 2048);
// ********** End Function AuthenticateUserTicket Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebUserAuth, nullptr, "AuthenticateUserTicket", 	Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::WebUserAuth_eventAuthenticateUserTicket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::WebUserAuth_eventAuthenticateUserTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebUserAuth::execAuthenticateUserTicket)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ticket);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AuthenticateUserTicket(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_Ticket);
	P_NATIVE_END;
}
// ********** End Class UWebUserAuth Function AuthenticateUserTicket *******************************

// ********** Begin Class UWebUserAuth *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebUserAuth;
UClass* UWebUserAuth::GetPrivateStaticClass()
{
	using TClass = UWebUserAuth;
	if (!Z_Registration_Info_UClass_UWebUserAuth.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebUserAuth"),
			Z_Registration_Info_UClass_UWebUserAuth.InnerSingleton,
			StaticRegisterNativesUWebUserAuth,
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
	return Z_Registration_Info_UClass_UWebUserAuth.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebUserAuth_NoRegister()
{
	return UWebUserAuth::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebUserAuth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUserAuth/WebUserAuth.h" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuth.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebUserAuth constinit property declarations *****************************
// ********** End Class UWebUserAuth constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AuthenticateUser"), .Pointer = &UWebUserAuth::execAuthenticateUser },
		{ .NameUTF8 = UTF8TEXT("AuthenticateUserTicket"), .Pointer = &UWebUserAuth::execAuthenticateUserTicket },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebUserAuth_AuthenticateUser, "AuthenticateUser" }, // 952648378
		{ &Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket, "AuthenticateUserTicket" }, // 104873059
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebUserAuth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebUserAuth_Statics
UObject* (*const Z_Construct_UClass_UWebUserAuth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebUserAuth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebUserAuth_Statics::ClassParams = {
	&UWebUserAuth::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams)
};
void UWebUserAuth::StaticRegisterNativesUWebUserAuth()
{
	UClass* Class = UWebUserAuth::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebUserAuth_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebUserAuth()
{
	if (!Z_Registration_Info_UClass_UWebUserAuth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebUserAuth.OuterSingleton, Z_Construct_UClass_UWebUserAuth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebUserAuth.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebUserAuth);
UWebUserAuth::~UWebUserAuth() {}
// ********** End Class UWebUserAuth ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebUserAuth, UWebUserAuth::StaticClass, TEXT("UWebUserAuth"), &Z_Registration_Info_UClass_UWebUserAuth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebUserAuth), 2270292223U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h__Script_SteamCoreWeb_2327300993{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
