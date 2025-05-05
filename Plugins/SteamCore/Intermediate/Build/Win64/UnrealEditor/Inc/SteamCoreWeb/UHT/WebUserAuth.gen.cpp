// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamUserAuth/WebUserAuth.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebUserAuth() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserAuth();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserAuth_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
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
	void UWebUserAuth::StaticRegisterNativesUWebUserAuth()
	{
		UClass* Class = UWebUserAuth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateUser", &UWebUserAuth::execAuthenticateUser },
			{ "AuthenticateUserTicket", &UWebUserAuth::execAuthenticateUserTicket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionKey_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EncryptedLoginKey_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EncryptedLoginKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SessionKey_Inner = { "SessionKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SessionKey = { "SessionKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, SessionKey), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_EncryptedLoginKey_Inner = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_EncryptedLoginKey = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, EncryptedLoginKey), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SessionKey_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_SessionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_EncryptedLoginKey_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_EncryptedLoginKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|UserAuth" },
		{ "Comment", "/**\n\x09* Authenticate User\n\x09*\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09Should be the users steamid, unencrypted.\n\x09* @param\x09SessionKey\x09\x09\x09\x09Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n\x09* @param\x09""EncryptedLoginKey\x09\x09Should be the users hashed loginkey, AES encrypted with the sessionkey.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuth.h" },
		{ "ToolTip", "Authenticate User\n\n@param        SteamId                                 Should be the users steamid, unencrypted.\n@param        SessionKey                              Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n@param        EncryptedLoginKey               Should be the users hashed loginkey, AES encrypted with the sessionkey." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserAuth, nullptr, "AuthenticateUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::WebUserAuth_eventAuthenticateUser_Parms), Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserAuth_AuthenticateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ticket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, Ticket), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_Ticket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|UserAuth" },
		{ "Comment", "/**\n\x09* Authenticate User Ticket\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppId\x09\x09The App ID to get the betas of.\n\x09* @param\x09Ticket\x09\x09""Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuth.h" },
		{ "ToolTip", "Authenticate User Ticket\n\n@param        Key                     Steamworks Web API publisher authentication key.\n@param        AppId           The App ID to get the betas of.\n@param        Ticket          Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserAuth, nullptr, "AuthenticateUserTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::WebUserAuth_eventAuthenticateUserTicket_Parms), Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebUserAuth);
	UClass* Z_Construct_UClass_UWebUserAuth_NoRegister()
	{
		return UWebUserAuth::StaticClass();
	}
	struct Z_Construct_UClass_UWebUserAuth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebUserAuth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebUserAuth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebUserAuth_AuthenticateUser, "AuthenticateUser" }, // 2541898417
		{ &Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket, "AuthenticateUserTicket" }, // 1521704656
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUserAuth/WebUserAuth.h" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebUserAuth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebUserAuth>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebUserAuth()
	{
		if (!Z_Registration_Info_UClass_UWebUserAuth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebUserAuth.OuterSingleton, Z_Construct_UClass_UWebUserAuth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebUserAuth.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebUserAuth>()
	{
		return UWebUserAuth::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebUserAuth);
	UWebUserAuth::~UWebUserAuth() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebUserAuth, UWebUserAuth::StaticClass, TEXT("UWebUserAuth"), &Z_Registration_Info_UClass_UWebUserAuth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebUserAuth), 556078847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_1894363528(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserAuth_WebUserAuth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
