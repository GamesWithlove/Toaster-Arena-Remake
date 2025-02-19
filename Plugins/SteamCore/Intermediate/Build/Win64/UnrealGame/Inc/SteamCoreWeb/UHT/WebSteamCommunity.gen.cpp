// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCommunity/WebSteamCommunity.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamCommunity() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamCommunity();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamCommunity_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamCommunity::execReportAbuse)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamIdActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamIdTarget);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AbuseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_ContentType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_GET_PROPERTY(FStrProperty,Z_Param_Gid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportAbuse(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamIdActor,Z_Param_SteamIdTarget,Z_Param_AppId,Z_Param_AbuseType,Z_Param_ContentType,Z_Param_Description,Z_Param_Gid);
		P_NATIVE_END;
	}
	void UWebSteamCommunity::StaticRegisterNativesUWebSteamCommunity()
	{
		UClass* Class = UWebSteamCommunity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportAbuse", &UWebSteamCommunity::execReportAbuse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics
	{
		struct WebSteamCommunity_eventReportAbuse_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamIdActor;
			FString SteamIdTarget;
			int32 AppId;
			int32 AbuseType;
			int32 ContentType;
			FString Description;
			FString Gid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIdActor;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIdTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbuseType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Gid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_SteamIdActor = { "SteamIdActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, SteamIdActor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_SteamIdTarget = { "SteamIdTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, SteamIdTarget), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_AbuseType = { "AbuseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, AbuseType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, ContentType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Description), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Gid = { "Gid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Gid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_SteamIdActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_SteamIdTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_AbuseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Gid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamCommunity" },
		{ "Comment", "/**\n\x09* Allows publishers to report users who are behaving badly on their community hub.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamIdActor\x09SteamID of user doing the reporting\n\x09* @param\x09SteamIdTarget\x09SteamID of the entity being accused of abuse\n\x09* @param\x09""AppId\x09\x09\x09""AppID to check for ownership\n\x09* @param\x09""AbuseType\x09\x09""Abuse type code (see EAbuseReportType enum)\n\x09* @param\x09""ContentType\x09\x09""Content type code (see ECommunityContentType enum)\n\x09* @param\x09""Description\x09\x09Narrative from user\n\x09* @param\x09Gid\x09\x09\x09\x09GID of related record (depends on content type)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCommunity/WebSteamCommunity.h" },
		{ "ToolTip", "Allows publishers to report users who are behaving badly on their community hub.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamIdActor    SteamID of user doing the reporting\n@param        SteamIdTarget   SteamID of the entity being accused of abuse\n@param        AppId                   AppID to check for ownership\n@param        AbuseType               Abuse type code (see EAbuseReportType enum)\n@param        ContentType             Content type code (see ECommunityContentType enum)\n@param        Description             Narrative from user\n@param        Gid                             GID of related record (depends on content type)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamCommunity, nullptr, "ReportAbuse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::WebSteamCommunity_eventReportAbuse_Parms), Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSteamCommunity);
	UClass* Z_Construct_UClass_UWebSteamCommunity_NoRegister()
	{
		return UWebSteamCommunity::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamCommunity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamCommunity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamCommunity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse, "ReportAbuse" }, // 2208284383
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamCommunity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCommunity/WebSteamCommunity.h" },
		{ "ModuleRelativePath", "Public/SteamCommunity/WebSteamCommunity.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamCommunity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamCommunity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamCommunity_Statics::ClassParams = {
		&UWebSteamCommunity::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamCommunity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamCommunity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamCommunity()
	{
		if (!Z_Registration_Info_UClass_UWebSteamCommunity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSteamCommunity.OuterSingleton, Z_Construct_UClass_UWebSteamCommunity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebSteamCommunity.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamCommunity>()
	{
		return UWebSteamCommunity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamCommunity);
	UWebSteamCommunity::~UWebSteamCommunity() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebSteamCommunity, UWebSteamCommunity::StaticClass, TEXT("UWebSteamCommunity"), &Z_Registration_Info_UClass_UWebSteamCommunity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSteamCommunity), 3063091404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h_1614512460(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
