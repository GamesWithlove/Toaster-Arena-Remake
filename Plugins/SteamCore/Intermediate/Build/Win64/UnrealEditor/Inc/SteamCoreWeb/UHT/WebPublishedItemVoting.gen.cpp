// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PublishedItemVoting/WebPublishedItemVoting.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemVoting() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedItemVoting();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebPublishedItemVoting::execUserVoteSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UserVoteSummary(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_PublishedFileIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedItemVoting::execItemVoteSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemVoteSummary(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
		P_NATIVE_END;
	}
	void UWebPublishedItemVoting::StaticRegisterNativesUWebPublishedItemVoting()
	{
		UClass* Class = UWebPublishedItemVoting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemVoteSummary", &UWebPublishedItemVoting::execItemVoteSummary },
			{ "UserVoteSummary", &UWebPublishedItemVoting::execUserVoteSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics
	{
		struct WebPublishedItemVoting_eventItemVoteSummary_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			int32 AppId;
			TArray<FString> PublishedFileIds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PublishedFileIDd" },
		{ "Category", "SteamCoreWeb|PublishedItemVoting" },
		{ "Comment", "/**\n\x09* Item Vote Summary\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09* @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are requdred\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVoting.h" },
		{ "ToolTip", "Item Vote Summary\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 Steam ID of user\n@param        AppId                                   AppId of product\n@param        PublishedFileIds                The Published File ID who's vote details are requdred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedItemVoting, nullptr, "ItemVoteSummary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::WebPublishedItemVoting_eventItemVoteSummary_Parms), Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics
	{
		struct WebPublishedItemVoting_eventUserVoteSummary_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			TArray<FString> PublishedFileIds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PublishedFileIDd" },
		{ "Category", "SteamCoreWeb|PublishedItemVoting" },
		{ "Comment", "/**\n\x09* Item Vote Summary\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09* @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are requdred\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVoting.h" },
		{ "ToolTip", "Item Vote Summary\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 Steam ID of user\n@param        PublishedFileIds                The Published File ID who's vote details are requdred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedItemVoting, nullptr, "UserVoteSummary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::WebPublishedItemVoting_eventUserVoteSummary_Parms), Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebPublishedItemVoting);
	UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister()
	{
		return UWebPublishedItemVoting::StaticClass();
	}
	struct Z_Construct_UClass_UWebPublishedItemVoting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebPublishedItemVoting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebPublishedItemVoting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary, "ItemVoteSummary" }, // 2139374800
		{ &Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary, "UserVoteSummary" }, // 2398594652
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PublishedItemVoting/WebPublishedItemVoting.h" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVoting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebPublishedItemVoting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPublishedItemVoting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebPublishedItemVoting_Statics::ClassParams = {
		&UWebPublishedItemVoting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebPublishedItemVoting()
	{
		if (!Z_Registration_Info_UClass_UWebPublishedItemVoting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebPublishedItemVoting.OuterSingleton, Z_Construct_UClass_UWebPublishedItemVoting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebPublishedItemVoting.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebPublishedItemVoting>()
	{
		return UWebPublishedItemVoting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPublishedItemVoting);
	UWebPublishedItemVoting::~UWebPublishedItemVoting() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVoting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVoting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebPublishedItemVoting, UWebPublishedItemVoting::StaticClass, TEXT("UWebPublishedItemVoting"), &Z_Registration_Info_UClass_UWebPublishedItemVoting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebPublishedItemVoting), 3925772331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVoting_h_3076160216(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVoting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PublishedItemVoting_WebPublishedItemVoting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
