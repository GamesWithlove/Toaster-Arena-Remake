// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMusic/SteamMusic.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamMusic() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UMusic();
STEAMCORE_API UClass* Z_Construct_UClass_UMusic_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMusic Function BIsEnabled ***********************************************
struct Z_Construct_UFunction_UMusic_BIsEnabled_Statics
{
	struct Music_eventBIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Checks if Steam Music is enabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Checks if Steam Music is enabled." },
	};
#endif // WITH_METADATA

// ********** Begin Function BIsEnabled constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsEnabled constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsEnabled Property Definitions ***************************************
void Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Music_eventBIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Music_eventBIsEnabled_Parms), &Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers) < 2048);
// ********** End Function BIsEnabled Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_BIsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "BIsEnabled", 	Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Music_eventBIsEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Music_eventBIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMusic_BIsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_BIsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMusic::execBIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsEnabled();
	P_NATIVE_END;
}
// ********** End Class UMusic Function BIsEnabled *************************************************

// ********** Begin Class UMusic Function BIsPlaying ***********************************************
struct Z_Construct_UFunction_UMusic_BIsPlaying_Statics
{
	struct Music_eventBIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused." },
	};
#endif // WITH_METADATA

// ********** Begin Function BIsPlaying constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsPlaying constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsPlaying Property Definitions ***************************************
void Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Music_eventBIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Music_eventBIsPlaying_Parms), &Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers) < 2048);
// ********** End Function BIsPlaying Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_BIsPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "BIsPlaying", 	Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Music_eventBIsPlaying_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Music_eventBIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMusic_BIsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_BIsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMusic::execBIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsPlaying();
	P_NATIVE_END;
}
// ********** End Class UMusic Function BIsPlaying *************************************************

// ********** Begin Class UMusic Function GetPlaybackStatus ****************************************
struct Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics
{
	struct Music_eventGetPlaybackStatus_Parms
	{
		ESteamAudioPlaybackStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Gets the current status of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Gets the current status of the Steam Music player." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlaybackStatus constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlaybackStatus constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlaybackStatus Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Music_eventGetPlaybackStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus, METADATA_PARAMS(0, nullptr) }; // 3203083699
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers) < 2048);
// ********** End Function GetPlaybackStatus Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "GetPlaybackStatus", 	Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Music_eventGetPlaybackStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Music_eventGetPlaybackStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMusic_GetPlaybackStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMusic::execGetPlaybackStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamAudioPlaybackStatus*)Z_Param__Result=P_THIS->GetPlaybackStatus();
	P_NATIVE_END;
}
// ********** End Class UMusic Function GetPlaybackStatus ******************************************

// ********** Begin Class UMusic Function GetVolume ************************************************
struct Z_Construct_UFunction_UMusic_GetVolume_Statics
{
	struct Music_eventGetVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Gets the current volume of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Gets the current volume of the Steam Music player." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVolume constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVolume constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVolume Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMusic_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Music_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_GetVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers) < 2048);
// ********** End Function GetVolume Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_GetVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "GetVolume", 	Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMusic_GetVolume_Statics::Music_eventGetVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMusic_GetVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMusic_GetVolume_Statics::Music_eventGetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMusic_GetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_GetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMusic::execGetVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVolume();
	P_NATIVE_END;
}
// ********** End Class UMusic Function GetVolume **************************************************

// ********** Begin Class UMusic Function Pause ****************************************************
struct Z_Construct_UFunction_UMusic_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Pause the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Pause the Steam Music player." },
	};
#endif // WITH_METADATA

// ********** Begin Function Pause constinit property declarations *********************************
// ********** End Function Pause constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_Pause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "Pause", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMusic_Pause_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMusic_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMusic::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class UMusic Function Pause ******************************************************

// ********** Begin Class UMusic Function Play *****************************************************
struct Z_Construct_UFunction_UMusic_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player resume playing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player resume playing." },
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "Play", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMusic_Play_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMusic_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMusic::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UMusic Function Play *******************************************************

// ********** Begin Class UMusic Function PlayNext *************************************************
struct Z_Construct_UFunction_UMusic_PlayNext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player skip to the next song.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player skip to the next song." },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayNext constinit property declarations ******************************
// ********** End Function PlayNext constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_PlayNext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "PlayNext", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_PlayNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMusic_PlayNext_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMusic_PlayNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_PlayNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMusic::execPlayNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayNext();
	P_NATIVE_END;
}
// ********** End Class UMusic Function PlayNext ***************************************************

// ********** Begin Class UMusic Function PlayPrevious *********************************************
struct Z_Construct_UFunction_UMusic_PlayPrevious_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player play the previous song.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player play the previous song." },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayPrevious constinit property declarations **************************
// ********** End Function PlayPrevious constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_PlayPrevious_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "PlayPrevious", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_PlayPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMusic_PlayPrevious_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMusic_PlayPrevious()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_PlayPrevious_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMusic::execPlayPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayPrevious();
	P_NATIVE_END;
}
// ********** End Class UMusic Function PlayPrevious ***********************************************

// ********** Begin Class UMusic Function SetVolume ************************************************
struct Z_Construct_UFunction_UMusic_SetVolume_Statics
{
	struct Music_eventSetVolume_Parms
	{
		float flVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Sets the volume of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Sets the volume of the Steam Music player." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVolume constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_flVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVolume constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVolume Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMusic_SetVolume_Statics::NewProp_flVolume = { "flVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Music_eventSetVolume_Parms, flVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_SetVolume_Statics::NewProp_flVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers) < 2048);
// ********** End Function SetVolume Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_SetVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "SetVolume", 	Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMusic_SetVolume_Statics::Music_eventSetVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMusic_SetVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMusic_SetVolume_Statics::Music_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMusic_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMusic_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMusic::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_flVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolume(Z_Param_flVolume);
	P_NATIVE_END;
}
// ********** End Class UMusic Function SetVolume **************************************************

// ********** Begin Class UMusic *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMusic;
UClass* UMusic::GetPrivateStaticClass()
{
	using TClass = UMusic;
	if (!Z_Registration_Info_UClass_UMusic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Music"),
			Z_Registration_Info_UClass_UMusic.InnerSingleton,
			StaticRegisterNativesUMusic,
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
	return Z_Registration_Info_UClass_UMusic.InnerSingleton;
}
UClass* Z_Construct_UClass_UMusic_NoRegister()
{
	return UMusic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMusic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMusic/SteamMusic.h" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackStatusHasChanged_MetaData[] = {
		{ "Category", "SteamCore|Music|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeHasChanged_MetaData[] = {
		{ "Category", "SteamCore|Music|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMusic constinit property declarations ***********************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlaybackStatusHasChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VolumeHasChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMusic constinit property declarations *************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BIsEnabled"), .Pointer = &UMusic::execBIsEnabled },
		{ .NameUTF8 = UTF8TEXT("BIsPlaying"), .Pointer = &UMusic::execBIsPlaying },
		{ .NameUTF8 = UTF8TEXT("GetPlaybackStatus"), .Pointer = &UMusic::execGetPlaybackStatus },
		{ .NameUTF8 = UTF8TEXT("GetVolume"), .Pointer = &UMusic::execGetVolume },
		{ .NameUTF8 = UTF8TEXT("Pause"), .Pointer = &UMusic::execPause },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &UMusic::execPlay },
		{ .NameUTF8 = UTF8TEXT("PlayNext"), .Pointer = &UMusic::execPlayNext },
		{ .NameUTF8 = UTF8TEXT("PlayPrevious"), .Pointer = &UMusic::execPlayPrevious },
		{ .NameUTF8 = UTF8TEXT("SetVolume"), .Pointer = &UMusic::execSetVolume },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMusic_BIsEnabled, "BIsEnabled" }, // 473120566
		{ &Z_Construct_UFunction_UMusic_BIsPlaying, "BIsPlaying" }, // 3930731572
		{ &Z_Construct_UFunction_UMusic_GetPlaybackStatus, "GetPlaybackStatus" }, // 2238627098
		{ &Z_Construct_UFunction_UMusic_GetVolume, "GetVolume" }, // 3837964516
		{ &Z_Construct_UFunction_UMusic_Pause, "Pause" }, // 1151272636
		{ &Z_Construct_UFunction_UMusic_Play, "Play" }, // 2734814594
		{ &Z_Construct_UFunction_UMusic_PlayNext, "PlayNext" }, // 3101318373
		{ &Z_Construct_UFunction_UMusic_PlayPrevious, "PlayPrevious" }, // 1506397117
		{ &Z_Construct_UFunction_UMusic_SetVolume, "SetVolume" }, // 3604557790
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMusic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMusic_Statics

// ********** Begin Class UMusic Property Definitions **********************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged = { "PlaybackStatusHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMusic, PlaybackStatusHasChanged), Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackStatusHasChanged_MetaData), NewProp_PlaybackStatusHasChanged_MetaData) }; // 534582554
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged = { "VolumeHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMusic, VolumeHasChanged), Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeHasChanged_MetaData), NewProp_VolumeHasChanged_MetaData) }; // 3377046423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMusic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::PropPointers) < 2048);
// ********** End Class UMusic Property Definitions ************************************************
UObject* (*const Z_Construct_UClass_UMusic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::Class_MetaDataParams), Z_Construct_UClass_UMusic_Statics::Class_MetaDataParams)
};
void UMusic::StaticRegisterNativesUMusic()
{
	UClass* Class = UMusic::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMusic_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMusic()
{
	if (!Z_Registration_Info_UClass_UMusic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMusic.OuterSingleton, Z_Construct_UClass_UMusic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMusic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMusic);
UMusic::~UMusic() {}
// ********** End Class UMusic *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMusic, UMusic::StaticClass, TEXT("UMusic"), &Z_Registration_Info_UClass_UMusic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMusic), 1073734807U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h__Script_SteamCore_433985159{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
