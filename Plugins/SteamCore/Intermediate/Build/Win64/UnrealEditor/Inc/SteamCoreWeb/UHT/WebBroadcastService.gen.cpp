// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/BroadcastService/WebBroadcastService.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBroadcastService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebBroadcastService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebBroadcastService_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebBroadcastService::execPostGameDataFrame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_BroadcastId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FrameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostGameDataFrame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_BroadcastId,Z_Param_FrameData);
		P_NATIVE_END;
	}
	void UWebBroadcastService::StaticRegisterNativesUWebBroadcastService()
	{
		UClass* Class = UWebBroadcastService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostGameDataFrame", &UWebBroadcastService::execPostGameDataFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics
	{
		struct WebBroadcastService_eventPostGameDataFrame_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString BroadcastId;
			FString FrameData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcastId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FrameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, SteamID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_BroadcastId = { "BroadcastId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, BroadcastId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, FrameData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_BroadcastId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_FrameData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Gets all of the beta branches for the specified application.\n\x09*\n\x09* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09The App ID to get the betas of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastService.h" },
		{ "ToolTip", "Gets all of the beta branches for the specified application.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication key.\n@param        AppID           The App ID to get the betas of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBroadcastService, nullptr, "PostGameDataFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::WebBroadcastService_eventPostGameDataFrame_Parms), Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebBroadcastService);
	UClass* Z_Construct_UClass_UWebBroadcastService_NoRegister()
	{
		return UWebBroadcastService::StaticClass();
	}
	struct Z_Construct_UClass_UWebBroadcastService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBroadcastService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebBroadcastService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame, "PostGameDataFrame" }, // 810808621
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BroadcastService/WebBroadcastService.h" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBroadcastService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBroadcastService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebBroadcastService_Statics::ClassParams = {
		&UWebBroadcastService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebBroadcastService()
	{
		if (!Z_Registration_Info_UClass_UWebBroadcastService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebBroadcastService.OuterSingleton, Z_Construct_UClass_UWebBroadcastService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebBroadcastService.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebBroadcastService>()
	{
		return UWebBroadcastService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBroadcastService);
	UWebBroadcastService::~UWebBroadcastService() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebBroadcastService, UWebBroadcastService::StaticClass, TEXT("UWebBroadcastService"), &Z_Registration_Info_UClass_UWebBroadcastService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebBroadcastService), 3753665924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h_1214797859(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
