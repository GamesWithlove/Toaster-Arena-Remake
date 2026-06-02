// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCommunity/WebSteamCommunityAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebSteamCommunityAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionReportAbuse Function ReportAbuseAsync ************
struct Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics
{
	struct SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamIdActor;
		FString SteamIdTarget;
		int32 AppId;
		int32 AbuseType;
		int32 ContentType;
		FString Description;
		FString Gid;
		USteamCoreWebAsyncActionReportAbuse* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Allows publishers to report users who are behaving badly on their community hub.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09SteamIdActor\x09SteamID of user doing the reporting\n\x09* @param\x09SteamIdTarget\x09SteamID of the entity being accused of abuse\n\x09* @param\x09""AppId\x09\x09\x09""AppID to check for ownership\n\x09* @param\x09""AbuseType\x09\x09""Abuse type code (see EAbuseReportType enum)\n\x09* @param\x09""ContentType\x09\x09""Content type code (see ECommunityContentType enum)\n\x09* @param\x09""Description\x09\x09Narrative from user\n\x09* @param\x09Gid\x09\x09\x09\x09GID of related record (depends on content type)\n\x09*/" },
#endif
		{ "DisplayName", "Report Abuse" },
		{ "ModuleRelativePath", "Public/SteamCommunity/WebSteamCommunityAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows publishers to report users who are behaving badly on their community hub.\n\n@param        Key                             Steamworks Web API publisher authentication key.\n@param        SteamIdActor    SteamID of user doing the reporting\n@param        SteamIdTarget   SteamID of the entity being accused of abuse\n@param        AppId                   AppID to check for ownership\n@param        AbuseType               Abuse type code (see EAbuseReportType enum)\n@param        ContentType             Content type code (see ECommunityContentType enum)\n@param        Description             Narrative from user\n@param        Gid                             GID of related record (depends on content type)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportAbuseAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIdActor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIdTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbuseType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Gid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportAbuseAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportAbuseAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_SteamIdActor = { "SteamIdActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, SteamIdActor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_SteamIdTarget = { "SteamIdTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, SteamIdTarget), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_AbuseType = { "AbuseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, AbuseType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, ContentType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_Gid = { "Gid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, Gid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_SteamIdActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_SteamIdTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_AbuseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_Gid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::PropPointers) < 2048);
// ********** End Function ReportAbuseAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse, nullptr, "ReportAbuseAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionReportAbuse::execReportAbuseAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
	*(USteamCoreWebAsyncActionReportAbuse**)Z_Param__Result=USteamCoreWebAsyncActionReportAbuse::ReportAbuseAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamIdActor,Z_Param_SteamIdTarget,Z_Param_AppId,Z_Param_AbuseType,Z_Param_ContentType,Z_Param_Description,Z_Param_Gid);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionReportAbuse Function ReportAbuseAsync **************

// ********** Begin Class USteamCoreWebAsyncActionReportAbuse **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportAbuse;
UClass* USteamCoreWebAsyncActionReportAbuse::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionReportAbuse;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportAbuse.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionReportAbuse"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportAbuse.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionReportAbuse,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportAbuse.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_NoRegister()
{
	return USteamCoreWebAsyncActionReportAbuse::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionReportAbuse\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamCommunity/WebSteamCommunityAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamCommunity/WebSteamCommunityAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionReportAbuse\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionReportAbuse constinit property declarations ******
// ********** End Class USteamCoreWebAsyncActionReportAbuse constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ReportAbuseAsync"), .Pointer = &USteamCoreWebAsyncActionReportAbuse::execReportAbuseAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync, "ReportAbuseAsync" }, // 3058288046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionReportAbuse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::ClassParams = {
	&USteamCoreWebAsyncActionReportAbuse::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionReportAbuse::StaticRegisterNativesUSteamCoreWebAsyncActionReportAbuse()
{
	UClass* Class = USteamCoreWebAsyncActionReportAbuse::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportAbuse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportAbuse.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportAbuse.OuterSingleton;
}
USteamCoreWebAsyncActionReportAbuse::USteamCoreWebAsyncActionReportAbuse() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionReportAbuse);
USteamCoreWebAsyncActionReportAbuse::~USteamCoreWebAsyncActionReportAbuse() {}
// ********** End Class USteamCoreWebAsyncActionReportAbuse ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunityAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse, USteamCoreWebAsyncActionReportAbuse::StaticClass, TEXT("USteamCoreWebAsyncActionReportAbuse"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportAbuse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionReportAbuse), 2824800764U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunityAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunityAsyncActions_h__Script_SteamCoreWeb_3936308014{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunityAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCommunity_WebSteamCommunityAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
