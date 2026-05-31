// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BroadcastService/WebBroadcastServiceAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebBroadcastServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionPostGameDataFrame Function PostGameDataFrameAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics
{
	struct SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		FString SteamID;
		FString BroadcastId;
		FString FrameData;
		USteamCoreWebAsyncActionPostGameDataFrame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Broadcast|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Provides access to Steam broadcasts.\n\x09*\x09\x09\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09\x09\n\x09* @param\x09SteamID\x09\x09\x09\n\x09* @param\x09""BroadcastId\x09\x09\n\x09* @param\x09""FrameData\x09\x09\n\x09*/" },
#endif
		{ "DisplayName", "Post Game Data Frame" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides access to Steam broadcasts.\n\n@param        Key                             Steamworks Web API publisher authentication key.\n@param        AppID\n@param        SteamID\n@param        BroadcastId\n@param        FrameData" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostGameDataFrameAsync constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcastId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostGameDataFrameAsync constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostGameDataFrameAsync Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, SteamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_BroadcastId = { "BroadcastId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, BroadcastId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, FrameData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_BroadcastId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_FrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers) < 2048);
// ********** End Function PostGameDataFrameAsync Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame, nullptr, "PostGameDataFrameAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionPostGameDataFrame::execPostGameDataFrameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
	P_GET_PROPERTY(FStrProperty,Z_Param_BroadcastId);
	P_GET_PROPERTY(FStrProperty,Z_Param_FrameData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionPostGameDataFrame**)Z_Param__Result=USteamCoreWebAsyncActionPostGameDataFrame::PostGameDataFrameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_BroadcastId,Z_Param_FrameData);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionPostGameDataFrame Function PostGameDataFrameAsync **

// ********** Begin Class USteamCoreWebAsyncActionPostGameDataFrame ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame;
UClass* USteamCoreWebAsyncActionPostGameDataFrame::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionPostGameDataFrame;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionPostGameDataFrame"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionPostGameDataFrame,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_NoRegister()
{
	return USteamCoreWebAsyncActionPostGameDataFrame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionPostGameDataFrame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "BroadcastService/WebBroadcastServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionPostGameDataFrame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionPostGameDataFrame constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionPostGameDataFrame constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PostGameDataFrameAsync"), .Pointer = &USteamCoreWebAsyncActionPostGameDataFrame::execPostGameDataFrameAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync, "PostGameDataFrameAsync" }, // 1987000086
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionPostGameDataFrame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::ClassParams = {
	&USteamCoreWebAsyncActionPostGameDataFrame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionPostGameDataFrame::StaticRegisterNativesUSteamCoreWebAsyncActionPostGameDataFrame()
{
	UClass* Class = USteamCoreWebAsyncActionPostGameDataFrame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame.OuterSingleton;
}
USteamCoreWebAsyncActionPostGameDataFrame::USteamCoreWebAsyncActionPostGameDataFrame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionPostGameDataFrame);
USteamCoreWebAsyncActionPostGameDataFrame::~USteamCoreWebAsyncActionPostGameDataFrame() {}
// ********** End Class USteamCoreWebAsyncActionPostGameDataFrame **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame, USteamCoreWebAsyncActionPostGameDataFrame::StaticClass, TEXT("USteamCoreWebAsyncActionPostGameDataFrame"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionPostGameDataFrame), 1490083029U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h__Script_SteamCoreWeb_1242283831{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
