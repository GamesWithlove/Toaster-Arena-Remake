// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCommunity/WebSteamCommunity.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebSteamCommunity() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamCommunity();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamCommunity_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebSteamCommunity Function ReportAbuse **********************************
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamCommunity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Allows publishers to report users who are behaving badly on their community hub.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamIdActor\x09SteamID of user doing the reporting\n\x09* @param\x09SteamIdTarget\x09SteamID of the entity being accused of abuse\n\x09* @param\x09""AppId\x09\x09\x09""AppID to check for ownership\n\x09* @param\x09""AbuseType\x09\x09""Abuse type code (see EAbuseReportType enum)\n\x09* @param\x09""ContentType\x09\x09""Content type code (see ECommunityContentType enum)\n\x09* @param\x09""Description\x09\x09Narrative from user\n\x09* @param\x09Gid\x09\x09\x09\x09GID of related record (depends on content type)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamCommunity/WebSteamCommunity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows publishers to report users who are behaving badly on their community hub.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamIdActor    SteamID of user doing the reporting\n@param        SteamIdTarget   SteamID of the entity being accused of abuse\n@param        AppId                   AppID to check for ownership\n@param        AbuseType               Abuse type code (see EAbuseReportType enum)\n@param        ContentType             Content type code (see ECommunityContentType enum)\n@param        Description             Narrative from user\n@param        Gid                             GID of related record (depends on content type)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportAbuse constinit property declarations ***************************
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
// ********** End Function ReportAbuse constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportAbuse Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_SteamIdActor = { "SteamIdActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, SteamIdActor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_SteamIdTarget = { "SteamIdTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, SteamIdTarget), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_AbuseType = { "AbuseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, AbuseType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, ContentType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Gid = { "Gid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Gid), METADATA_PARAMS(0, nullptr) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::PropPointers) < 2048);
// ********** End Function ReportAbuse Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamCommunity, nullptr, "ReportAbuse", 	Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::WebSteamCommunity_eventReportAbuse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::WebSteamCommunity_eventReportAbuse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class UWebSteamCommunity Function ReportAbuse ************************************

// ********** Begin Class UWebSteamCommunity *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebSteamCommunity;
UClass* UWebSteamCommunity::GetPrivateStaticClass()
{
	using TClass = UWebSteamCommunity;
	if (!Z_Registration_Info_UClass_UWebSteamCommunity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebSteamCommunity"),
			Z_Registration_Info_UClass_UWebSteamCommunity.InnerSingleton,
			StaticRegisterNativesUWebSteamCommunity,
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
	return Z_Registration_Info_UClass_UWebSteamCommunity.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebSteamCommunity_NoRegister()
{
	return UWebSteamCommunity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebSteamCommunity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCommunity/WebSteamCommunity.h" },
		{ "ModuleRelativePath", "Public/SteamCommunity/WebSteamCommunity.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebSteamCommunity constinit property declarations ***********************
// ********** End Class UWebSteamCommunity constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ReportAbuse"), .Pointer = &UWebSteamCommunity::execReportAbuse },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse, "ReportAbuse" }, // 3588804719
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamCommunity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebSteamCommunity_Statics
UObject* (*const Z_Construct_UClass_UWebSteamCommunity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamCommunity_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamCommunity_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSteamCommunity_Statics::Class_MetaDataParams)
};
void UWebSteamCommunity::StaticRegisterNativesUWebSteamCommunity()
{
	UClass* Class = UWebSteamCommunity::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebSteamCommunity_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebSteamCommunity()
{
	if (!Z_Registration_Info_UClass_UWebSteamCommunity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSteamCommunity.OuterSingleton, Z_Construct_UClass_UWebSteamCommunity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSteamCommunity.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebSteamCommunity);
UWebSteamCommunity::~UWebSteamCommunity() {}
// ********** End Class UWebSteamCommunity *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebSteamCommunity, UWebSteamCommunity::StaticClass, TEXT("UWebSteamCommunity"), &Z_Registration_Info_UClass_UWebSteamCommunity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSteamCommunity), 427192088U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h__Script_SteamCoreWeb_2598889021{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunity_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
