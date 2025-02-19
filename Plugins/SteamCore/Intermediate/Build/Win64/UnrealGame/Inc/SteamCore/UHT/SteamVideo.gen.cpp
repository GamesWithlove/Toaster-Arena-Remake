// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamVideo/SteamVideo.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVideo() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UClass* Z_Construct_UClass_UVideo();
	STEAMCORE_API UClass* Z_Construct_UClass_UVideo_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(UVideo::execIsBroadcasting)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumViewers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVideo::IsBroadcasting(Z_Param_Out_NumViewers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideo::execGetVideoURL)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVideo::GetVideoURL(Z_Param_VideoAppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideo::execGetOPFStringForApp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVideo::GetOPFStringForApp(Z_Param_VideoAppID,Z_Param_Out_OutBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideo::execGetOPFSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVideo::GetOPFSettings(Z_Param_VideoAppID);
		P_NATIVE_END;
	}
	void UVideo::StaticRegisterNativesUVideo()
	{
		UClass* Class = UVideo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOPFSettings", &UVideo::execGetOPFSettings },
			{ "GetOPFStringForApp", &UVideo::execGetOPFStringForApp },
			{ "GetVideoURL", &UVideo::execGetVideoURL },
			{ "IsBroadcasting", &UVideo::execIsBroadcasting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVideo_GetOPFSettings_Statics
	{
		struct Video_eventGetOPFSettings_Parms
		{
			int32 VideoAppID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Video_eventGetOPFSettings_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::NewProp_VideoAppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Video" },
		{ "Comment", "/**\n\x09* Get the OPF details for 360 video playback\n\x09* \n\x09* To retrieve the 360 OPF (open projection format) data to playback a 360 video, start by making a call to this, then the callback will indicate whether the request was successful. If it was successful, the actual OPF JSON data can be retrieved with a call to GetOPFStringForApp.\n\x09*\n\x09* @param\x09VideoAppID\x09\x09The video app ID to get the OPF details of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
		{ "ToolTip", "Get the OPF details for 360 video playback\n\nTo retrieve the 360 OPF (open projection format) data to playback a 360 video, start by making a call to this, then the callback will indicate whether the request was successful. If it was successful, the actual OPF JSON data can be retrieved with a call to GetOPFStringForApp.\n\n@param        VideoAppID              The video app ID to get the OPF details of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "GetOPFSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Video_eventGetOPFSettings_Parms), Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_GetOPFSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics
	{
		struct Video_eventGetOPFStringForApp_Parms
		{
			int32 VideoAppID;
			FString OutBuffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Video_eventGetOPFStringForApp_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Video_eventGetOPFStringForApp_Parms, OutBuffer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Video_eventGetOPFStringForApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Video_eventGetOPFStringForApp_Parms), &Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_VideoAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_OutBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Video" },
		{ "Comment", "/**\n\x09* Gets the OPF string for the specified video App ID.\n\x09*\n\x09* Once the callback for GetOPFSettingsResult_t has been raised and the EResult indicates success, then calling this will return back the actual OPF data in a JSON format. \n\x09* The size of the OPF string varies, but at this time 48,000 bytes should be sufficient to contain the full string. If it is not, pnBufferSize will be set to the size required. In that case, make a second call with the correct buffer size.\n\x09* NOTE: The data returned in a successful call to GetOPFStringForApp() can only be retrieved once. If you need to retrieve it multiple times, a call to GetOPFSettings will need to be made each time.\n\x09*\n\x09* param\x09\x09VideoAppID\x09\x09The video app ID to get the OPF string for.\n\x09* param\x09\x09OutBuffer\x09\x09\x09Returns the OPF string by writing it to this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
		{ "ToolTip", "Gets the OPF string for the specified video App ID.\n\nOnce the callback for GetOPFSettingsResult_t has been raised and the EResult indicates success, then calling this will return back the actual OPF data in a JSON format.\nThe size of the OPF string varies, but at this time 48,000 bytes should be sufficient to contain the full string. If it is not, pnBufferSize will be set to the size required. In that case, make a second call with the correct buffer size.\nNOTE: The data returned in a successful call to GetOPFStringForApp() can only be retrieved once. If you need to retrieve it multiple times, a call to GetOPFSettings will need to be made each time.\n\nparam         VideoAppID              The video app ID to get the OPF string for.\nparam         OutBuffer                       Returns the OPF string by writing it to this buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "GetOPFStringForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Video_eventGetOPFStringForApp_Parms), Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_GetOPFStringForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideo_GetVideoURL_Statics
	{
		struct Video_eventGetVideoURL_Parms
		{
			int32 VideoAppID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_GetVideoURL_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Video_eventGetVideoURL_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_GetVideoURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetVideoURL_Statics::NewProp_VideoAppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Video" },
		{ "Comment", "/**\n\x09* Asynchronously gets the URL suitable for streaming the video associated with the specified video app ID.\n\x09*\n\x09* param\x09\x09videoAppID\x09The video app ID to receive the video stream for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
		{ "ToolTip", "Asynchronously gets the URL suitable for streaming the video associated with the specified video app ID.\n\nparam         videoAppID      The video app ID to receive the video stream for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_GetVideoURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "GetVideoURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Video_eventGetVideoURL_Parms), Z_Construct_UFunction_UVideo_GetVideoURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_GetVideoURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideo_GetVideoURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideo_IsBroadcasting_Statics
	{
		struct Video_eventIsBroadcasting_Parms
		{
			int32 NumViewers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumViewers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_NumViewers = { "NumViewers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Video_eventIsBroadcasting_Parms, NumViewers), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Video_eventIsBroadcasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Video_eventIsBroadcasting_Parms), &Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_NumViewers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Video" },
		{ "Comment", "/**\n\x09* Checks if the user is currently live broadcasting and gets the number of users. \n\x09*\n\x09* param\x09\x09numViewers\x09\x09Returns the number of viewers currently watching the live broadcast.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
		{ "ToolTip", "Checks if the user is currently live broadcasting and gets the number of users.\n\nparam         numViewers              Returns the number of viewers currently watching the live broadcast." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "IsBroadcasting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Video_eventIsBroadcasting_Parms), Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_IsBroadcasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVideo);
	UClass* Z_Construct_UClass_UVideo_NoRegister()
	{
		return UVideo::StaticClass();
	}
	struct Z_Construct_UClass_UVideo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetOPFSettingsResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetOPFSettingsResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetVideoURLResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetVideoURLResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVideo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVideo_GetOPFSettings, "GetOPFSettings" }, // 302521382
		{ &Z_Construct_UFunction_UVideo_GetOPFStringForApp, "GetOPFStringForApp" }, // 2992288578
		{ &Z_Construct_UFunction_UVideo_GetVideoURL, "GetVideoURL" }, // 260939191
		{ &Z_Construct_UFunction_UVideo_IsBroadcasting, "IsBroadcasting" }, // 4236597165
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamVideo/SteamVideo.h" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult_MetaData[] = {
		{ "Category", "SteamCore|Video|Delegates" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult = { "GetOPFSettingsResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVideo, GetOPFSettingsResult), Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult_MetaData)) }; // 2886924707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult_MetaData[] = {
		{ "Category", "SteamCore|Video|Delegates" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult = { "GetVideoURLResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVideo, GetVideoURLResult), Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult_MetaData)) }; // 1852602115
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVideo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVideo_Statics::ClassParams = {
		&UVideo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVideo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVideo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVideo()
	{
		if (!Z_Registration_Info_UClass_UVideo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVideo.OuterSingleton, Z_Construct_UClass_UVideo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVideo.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UVideo>()
	{
		return UVideo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideo);
	UVideo::~UVideo() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVideo, UVideo::StaticClass, TEXT("UVideo"), &Z_Registration_Info_UClass_UVideo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVideo), 1643296647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideo_h_1174531060(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
