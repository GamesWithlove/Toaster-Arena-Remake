// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamMusic/SteamMusic.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMusic() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UMusic();
	STEAMCORE_API UClass* Z_Construct_UClass_UMusic_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(UMusic::execGetVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_flVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_flVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execPlayNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execPlayPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayPrevious();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execGetPlaybackStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamAudioPlaybackStatus*)Z_Param__Result=P_THIS->GetPlaybackStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execBIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execBIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsEnabled();
		P_NATIVE_END;
	}
	void UMusic::StaticRegisterNativesUMusic()
	{
		UClass* Class = UMusic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BIsEnabled", &UMusic::execBIsEnabled },
			{ "BIsPlaying", &UMusic::execBIsPlaying },
			{ "GetPlaybackStatus", &UMusic::execGetPlaybackStatus },
			{ "GetVolume", &UMusic::execGetVolume },
			{ "Pause", &UMusic::execPause },
			{ "Play", &UMusic::execPlay },
			{ "PlayNext", &UMusic::execPlayNext },
			{ "PlayPrevious", &UMusic::execPlayPrevious },
			{ "SetVolume", &UMusic::execSetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMusic_BIsEnabled_Statics
	{
		struct Music_eventBIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Music_eventBIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Music_eventBIsEnabled_Parms), &Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Checks if Steam Music is enabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Checks if Steam Music is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_BIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "BIsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Music_eventBIsEnabled_Parms), Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_BIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_BIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_BIsPlaying_Statics
	{
		struct Music_eventBIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Music_eventBIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Music_eventBIsPlaying_Parms), &Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_BIsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "BIsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Music_eventBIsPlaying_Parms), Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_BIsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_BIsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics
	{
		struct Music_eventGetPlaybackStatus_Parms
		{
			ESteamAudioPlaybackStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Music_eventGetPlaybackStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus, METADATA_PARAMS(nullptr, 0) }; // 1532637896
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Gets the current status of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Gets the current status of the Steam Music player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "GetPlaybackStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Music_eventGetPlaybackStatus_Parms), Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_GetPlaybackStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_GetVolume_Statics
	{
		struct Music_eventGetVolume_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMusic_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Music_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_GetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_GetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Gets the current volume of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Gets the current volume of the Steam Music player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "GetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMusic_GetVolume_Statics::Music_eventGetVolume_Parms), Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_GetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_GetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_GetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Pause the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Pause the Steam Music player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_Play_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player resume playing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player resume playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_PlayNext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_PlayNext_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player skip to the next song.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player skip to the next song." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_PlayNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "PlayNext", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_PlayNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_PlayNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_PlayNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_PlayNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_PlayPrevious_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_PlayPrevious_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player play the previous song.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player play the previous song." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_PlayPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "PlayPrevious", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_PlayPrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_PlayPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_PlayPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_PlayPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_SetVolume_Statics
	{
		struct Music_eventSetVolume_Parms
		{
			float flVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_flVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMusic_SetVolume_Statics::NewProp_flVolume = { "flVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Music_eventSetVolume_Parms, flVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_SetVolume_Statics::NewProp_flVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Sets the volume of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Sets the volume of the Steam Music player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "SetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMusic_SetVolume_Statics::Music_eventSetVolume_Parms), Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMusic);
	UClass* Z_Construct_UClass_UMusic_NoRegister()
	{
		return UMusic::StaticClass();
	}
	struct Z_Construct_UClass_UMusic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackStatusHasChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlaybackStatusHasChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeHasChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VolumeHasChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMusic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMusic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMusic_BIsEnabled, "BIsEnabled" }, // 3851959150
		{ &Z_Construct_UFunction_UMusic_BIsPlaying, "BIsPlaying" }, // 310100422
		{ &Z_Construct_UFunction_UMusic_GetPlaybackStatus, "GetPlaybackStatus" }, // 3663576073
		{ &Z_Construct_UFunction_UMusic_GetVolume, "GetVolume" }, // 2954796713
		{ &Z_Construct_UFunction_UMusic_Pause, "Pause" }, // 837083804
		{ &Z_Construct_UFunction_UMusic_Play, "Play" }, // 4115240292
		{ &Z_Construct_UFunction_UMusic_PlayNext, "PlayNext" }, // 3634611685
		{ &Z_Construct_UFunction_UMusic_PlayPrevious, "PlayPrevious" }, // 3145392447
		{ &Z_Construct_UFunction_UMusic_SetVolume, "SetVolume" }, // 1277753097
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMusic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMusic/SteamMusic.h" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged_MetaData[] = {
		{ "Category", "SteamCore|Music|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged = { "PlaybackStatusHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMusic, PlaybackStatusHasChanged), Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged_MetaData)) }; // 3866797389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged_MetaData[] = {
		{ "Category", "SteamCore|Music|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged = { "VolumeHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMusic, VolumeHasChanged), Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged_MetaData)) }; // 3898352233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMusic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMusic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMusic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMusic_Statics::ClassParams = {
		&UMusic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMusic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMusic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMusic()
	{
		if (!Z_Registration_Info_UClass_UMusic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMusic.OuterSingleton, Z_Construct_UClass_UMusic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMusic.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UMusic>()
	{
		return UMusic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMusic);
	UMusic::~UMusic() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMusic, UMusic::StaticClass, TEXT("UMusic"), &Z_Registration_Info_UClass_UMusic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMusic), 1027410006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_1871496540(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
