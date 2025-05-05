// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/BroadcastService/WebBroadcastServiceAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBroadcastServiceAsyncActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
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
	void USteamCoreWebAsyncActionPostGameDataFrame::StaticRegisterNativesUSteamCoreWebAsyncActionPostGameDataFrame()
	{
		UClass* Class = USteamCoreWebAsyncActionPostGameDataFrame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostGameDataFrameAsync", &USteamCoreWebAsyncActionPostGameDataFrame::execPostGameDataFrameAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcastId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FrameData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, SteamID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_BroadcastId = { "BroadcastId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, BroadcastId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, FrameData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_BroadcastId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_FrameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Broadcast|Async" },
		{ "Comment", "/**\n\x09* Provides access to Steam broadcasts.\n\x09*\x09\x09\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09\x09\n\x09* @param\x09SteamID\x09\x09\x09\n\x09* @param\x09""BroadcastId\x09\x09\n\x09* @param\x09""FrameData\x09\x09\n\x09*/" },
		{ "DisplayName", "Post Game Data Frame" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastServiceAsyncActions.h" },
		{ "ToolTip", "Provides access to Steam broadcasts.\n\n@param        Key                             Steamworks Web API publisher authentication key.\n@param        AppID\n@param        SteamID\n@param        BroadcastId\n@param        FrameData" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame, nullptr, "PostGameDataFrameAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::SteamCoreWebAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionPostGameDataFrame);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_NoRegister()
	{
		return USteamCoreWebAsyncActionPostGameDataFrame::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync, "PostGameDataFrameAsync" }, // 1435360552
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionPostGameDataFrame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "BroadcastService/WebBroadcastServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionPostGameDataFrame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionPostGameDataFrame>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionPostGameDataFrame>()
	{
		return USteamCoreWebAsyncActionPostGameDataFrame::StaticClass();
	}
	USteamCoreWebAsyncActionPostGameDataFrame::USteamCoreWebAsyncActionPostGameDataFrame() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionPostGameDataFrame);
	USteamCoreWebAsyncActionPostGameDataFrame::~USteamCoreWebAsyncActionPostGameDataFrame() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionPostGameDataFrame, USteamCoreWebAsyncActionPostGameDataFrame::StaticClass, TEXT("USteamCoreWebAsyncActionPostGameDataFrame"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionPostGameDataFrame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionPostGameDataFrame), 3911311124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h_596257366(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastServiceAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
