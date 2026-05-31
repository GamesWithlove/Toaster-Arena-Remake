// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUtils/SteamUtilsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamUtilsTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckFileSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGamepadTextInputDismissed();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIPCountry();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLowBatteryPower();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamShutdown();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamTextFilteringContext ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamTextFilteringContext;
static UEnum* ESteamTextFilteringContext_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamTextFilteringContext.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamTextFilteringContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamTextFilteringContext"));
	}
	return Z_Registration_Info_UEnum_ESteamTextFilteringContext.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamTextFilteringContext>()
{
	return ESteamTextFilteringContext_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "k_ETextFilteringContextChat.Comment", "// Game content, only legally required filtering is performed\n" },
		{ "k_ETextFilteringContextChat.Name", "ESteamTextFilteringContext::k_ETextFilteringContextChat" },
		{ "k_ETextFilteringContextChat.ToolTip", "Game content, only legally required filtering is performed" },
		{ "k_ETextFilteringContextGameContent.Comment", "// Unknown context\n" },
		{ "k_ETextFilteringContextGameContent.Name", "ESteamTextFilteringContext::k_ETextFilteringContextGameContent" },
		{ "k_ETextFilteringContextGameContent.ToolTip", "Unknown context" },
		{ "k_ETextFilteringContextName.Comment", "// Chat from another player\n" },
		{ "k_ETextFilteringContextName.Name", "ESteamTextFilteringContext::k_ETextFilteringContextName" },
		{ "k_ETextFilteringContextName.ToolTip", "Chat from another player" },
		{ "k_ETextFilteringContextUnknown.Name", "ESteamTextFilteringContext::k_ETextFilteringContextUnknown" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamTextFilteringContext::k_ETextFilteringContextUnknown", (int64)ESteamTextFilteringContext::k_ETextFilteringContextUnknown },
		{ "ESteamTextFilteringContext::k_ETextFilteringContextGameContent", (int64)ESteamTextFilteringContext::k_ETextFilteringContextGameContent },
		{ "ESteamTextFilteringContext::k_ETextFilteringContextChat", (int64)ESteamTextFilteringContext::k_ETextFilteringContextChat },
		{ "ESteamTextFilteringContext::k_ETextFilteringContextName", (int64)ESteamTextFilteringContext::k_ETextFilteringContextName },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamTextFilteringContext",
	"ESteamTextFilteringContext",
	Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext()
{
	if (!Z_Registration_Info_UEnum_ESteamTextFilteringContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamTextFilteringContext.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamTextFilteringContext.InnerSingleton;
}
// ********** End Enum ESteamTextFilteringContext **************************************************

// ********** Begin Enum ESteamCheckFileSignature **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCheckFileSignature;
static UEnum* ESteamCheckFileSignature_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCheckFileSignature.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCheckFileSignature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCheckFileSignature"));
	}
	return Z_Registration_Info_UEnum_ESteamCheckFileSignature.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCheckFileSignature>()
{
	return ESteamCheckFileSignature_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FileNotFound.Name", "ESteamCheckFileSignature::FileNotFound" },
		{ "InvalidSignature.Name", "ESteamCheckFileSignature::InvalidSignature" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "NoSignaturesFoundForThisApp.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisApp" },
		{ "NoSignaturesFoundForThisFile.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisFile" },
		{ "ValidSignature.Name", "ESteamCheckFileSignature::ValidSignature" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCheckFileSignature::InvalidSignature", (int64)ESteamCheckFileSignature::InvalidSignature },
		{ "ESteamCheckFileSignature::ValidSignature", (int64)ESteamCheckFileSignature::ValidSignature },
		{ "ESteamCheckFileSignature::FileNotFound", (int64)ESteamCheckFileSignature::FileNotFound },
		{ "ESteamCheckFileSignature::NoSignaturesFoundForThisApp", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisApp },
		{ "ESteamCheckFileSignature::NoSignaturesFoundForThisFile", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisFile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCheckFileSignature",
	"ESteamCheckFileSignature",
	Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature()
{
	if (!Z_Registration_Info_UEnum_ESteamCheckFileSignature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCheckFileSignature.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCheckFileSignature.InnerSingleton;
}
// ********** End Enum ESteamCheckFileSignature ****************************************************

// ********** Begin Enum ESteamGamepadTextInputLineMode ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode;
static UEnum* ESteamGamepadTextInputLineMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGamepadTextInputLineMode"));
	}
	return Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamGamepadTextInputLineMode>()
{
	return ESteamGamepadTextInputLineMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "MultipleLines.Name", "ESteamGamepadTextInputLineMode::MultipleLines" },
		{ "SingleLine.Name", "ESteamGamepadTextInputLineMode::SingleLine" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamGamepadTextInputLineMode::SingleLine", (int64)ESteamGamepadTextInputLineMode::SingleLine },
		{ "ESteamGamepadTextInputLineMode::MultipleLines", (int64)ESteamGamepadTextInputLineMode::MultipleLines },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamGamepadTextInputLineMode",
	"ESteamGamepadTextInputLineMode",
	Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode()
{
	if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.InnerSingleton;
}
// ********** End Enum ESteamGamepadTextInputLineMode **********************************************

// ********** Begin Enum ESteamGamepadTextInputMode ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGamepadTextInputMode;
static UEnum* ESteamGamepadTextInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGamepadTextInputMode"));
	}
	return Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamGamepadTextInputMode>()
{
	return ESteamGamepadTextInputMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "Normal.Name", "ESteamGamepadTextInputMode::Normal" },
		{ "Password.Name", "ESteamGamepadTextInputMode::Password" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamGamepadTextInputMode::Normal", (int64)ESteamGamepadTextInputMode::Normal },
		{ "ESteamGamepadTextInputMode::Password", (int64)ESteamGamepadTextInputMode::Password },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamGamepadTextInputMode",
	"ESteamGamepadTextInputMode",
	Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode()
{
	if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.InnerSingleton;
}
// ********** End Enum ESteamGamepadTextInputMode **************************************************

// ********** Begin Enum ESteamNotificationPosition ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamNotificationPosition;
static UEnum* ESteamNotificationPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamNotificationPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamNotificationPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamNotificationPosition, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamNotificationPosition"));
	}
	return Z_Registration_Info_UEnum_ESteamNotificationPosition.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamNotificationPosition>()
{
	return ESteamNotificationPosition_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomLeft.Name", "ESteamNotificationPosition::BottomLeft" },
		{ "BottomRight.Name", "ESteamNotificationPosition::BottomRight" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "TopLeft.Name", "ESteamNotificationPosition::TopLeft" },
		{ "TopRight.Name", "ESteamNotificationPosition::TopRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamNotificationPosition::TopLeft", (int64)ESteamNotificationPosition::TopLeft },
		{ "ESteamNotificationPosition::TopRight", (int64)ESteamNotificationPosition::TopRight },
		{ "ESteamNotificationPosition::BottomLeft", (int64)ESteamNotificationPosition::BottomLeft },
		{ "ESteamNotificationPosition::BottomRight", (int64)ESteamNotificationPosition::BottomRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamNotificationPosition",
	"ESteamNotificationPosition",
	Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition()
{
	if (!Z_Registration_Info_UEnum_ESteamNotificationPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamNotificationPosition.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamNotificationPosition.InnerSingleton;
}
// ********** End Enum ESteamNotificationPosition **************************************************

// ********** Begin Enum ESteamUniverse ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamUniverse;
static UEnum* ESteamUniverse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamUniverse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamUniverse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUniverse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUniverse"));
	}
	return Z_Registration_Info_UEnum_ESteamUniverse.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamUniverse>()
{
	return ESteamUniverse_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Beta.Name", "ESteamUniverse::Beta" },
		{ "BlueprintType", "true" },
		{ "Dev.Name", "ESteamUniverse::Dev" },
		{ "Internal.Name", "ESteamUniverse::Internal" },
		{ "Invalid.Name", "ESteamUniverse::Invalid" },
		{ "Max.Name", "ESteamUniverse::Max" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "Public.Name", "ESteamUniverse::Public" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamUniverse::Invalid", (int64)ESteamUniverse::Invalid },
		{ "ESteamUniverse::Public", (int64)ESteamUniverse::Public },
		{ "ESteamUniverse::Beta", (int64)ESteamUniverse::Beta },
		{ "ESteamUniverse::Internal", (int64)ESteamUniverse::Internal },
		{ "ESteamUniverse::Dev", (int64)ESteamUniverse::Dev },
		{ "ESteamUniverse::Max", (int64)ESteamUniverse::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamUniverse",
	"ESteamUniverse",
	Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse()
{
	if (!Z_Registration_Info_UEnum_ESteamUniverse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamUniverse.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamUniverse.InnerSingleton;
}
// ********** End Enum ESteamUniverse **************************************************************

// ********** Begin ScriptStruct FCheckFileSignature ***********************************************
struct Z_Construct_UScriptStruct_FCheckFileSignature_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCheckFileSignature); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCheckFileSignature); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCheckFileSignature constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckFileSignature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckFileSignature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCheckFileSignature constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckFileSignature>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCheckFileSignature_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCheckFileSignature;
class UScriptStruct* FCheckFileSignature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCheckFileSignature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCheckFileSignature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckFileSignature, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("CheckFileSignature"));
	}
	return Z_Registration_Info_UScriptStruct_FCheckFileSignature.OuterSingleton;
	}

// ********** Begin ScriptStruct FCheckFileSignature Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckFileSignature, CheckFileSignature), Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckFileSignature_MetaData), NewProp_CheckFileSignature_MetaData) }; // 3178635790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCheckFileSignature Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"CheckFileSignature",
	Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers),
	sizeof(FCheckFileSignature),
	alignof(FCheckFileSignature),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCheckFileSignature()
{
	if (!Z_Registration_Info_UScriptStruct_FCheckFileSignature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCheckFileSignature.InnerSingleton, Z_Construct_UScriptStruct_FCheckFileSignature_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCheckFileSignature.InnerSingleton);
}
// ********** End ScriptStruct FCheckFileSignature *************************************************

// ********** Begin ScriptStruct FGamepadTextInputDismissed ****************************************
struct Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGamepadTextInputDismissed); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGamepadTextInputDismissed); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubmitted_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmittedText_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGamepadTextInputDismissed constinit property declarations ********
	static void NewProp_bSubmitted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubmitted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubmittedText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGamepadTextInputDismissed constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamepadTextInputDismissed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGamepadTextInputDismissed;
class UScriptStruct* FGamepadTextInputDismissed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGamepadTextInputDismissed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGamepadTextInputDismissed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamepadTextInputDismissed, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GamepadTextInputDismissed"));
	}
	return Z_Registration_Info_UScriptStruct_FGamepadTextInputDismissed.OuterSingleton;
	}

// ********** Begin ScriptStruct FGamepadTextInputDismissed Property Definitions *******************
void Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit(void* Obj)
{
	((FGamepadTextInputDismissed*)Obj)->bSubmitted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted = { "bSubmitted", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGamepadTextInputDismissed), &Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubmitted_MetaData), NewProp_bSubmitted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText = { "SubmittedText", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGamepadTextInputDismissed, SubmittedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmittedText_MetaData), NewProp_SubmittedText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGamepadTextInputDismissed Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"GamepadTextInputDismissed",
	Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers),
	sizeof(FGamepadTextInputDismissed),
	alignof(FGamepadTextInputDismissed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGamepadTextInputDismissed()
{
	if (!Z_Registration_Info_UScriptStruct_FGamepadTextInputDismissed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGamepadTextInputDismissed.InnerSingleton, Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGamepadTextInputDismissed.InnerSingleton);
}
// ********** End ScriptStruct FGamepadTextInputDismissed ******************************************

// ********** Begin ScriptStruct FLowBatteryPower **************************************************
struct Z_Construct_UScriptStruct_FLowBatteryPower_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLowBatteryPower); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLowBatteryPower); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinutesBatteryLeft_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLowBatteryPower constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinutesBatteryLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLowBatteryPower constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowBatteryPower>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLowBatteryPower_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLowBatteryPower;
class UScriptStruct* FLowBatteryPower::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLowBatteryPower.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLowBatteryPower.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowBatteryPower, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LowBatteryPower"));
	}
	return Z_Registration_Info_UScriptStruct_FLowBatteryPower.OuterSingleton;
	}

// ********** Begin ScriptStruct FLowBatteryPower Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft = { "MinutesBatteryLeft", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowBatteryPower, MinutesBatteryLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinutesBatteryLeft_MetaData), NewProp_MinutesBatteryLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLowBatteryPower Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LowBatteryPower",
	Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers),
	sizeof(FLowBatteryPower),
	alignof(FLowBatteryPower),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLowBatteryPower()
{
	if (!Z_Registration_Info_UScriptStruct_FLowBatteryPower.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLowBatteryPower.InnerSingleton, Z_Construct_UScriptStruct_FLowBatteryPower_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLowBatteryPower.InnerSingleton);
}
// ********** End ScriptStruct FLowBatteryPower ****************************************************

// ********** Begin ScriptStruct FIPCountry ********************************************************
struct Z_Construct_UScriptStruct_FIPCountry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIPCountry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIPCountry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIPCountry constinit property declarations ************************
// ********** End ScriptStruct FIPCountry constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIPCountry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIPCountry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIPCountry;
class UScriptStruct* FIPCountry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIPCountry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIPCountry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIPCountry, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("IPCountry"));
	}
	return Z_Registration_Info_UScriptStruct_FIPCountry.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIPCountry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"IPCountry",
	nullptr,
	0,
	sizeof(FIPCountry),
	alignof(FIPCountry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIPCountry()
{
	if (!Z_Registration_Info_UScriptStruct_FIPCountry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIPCountry.InnerSingleton, Z_Construct_UScriptStruct_FIPCountry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIPCountry.InnerSingleton);
}
// ********** End ScriptStruct FIPCountry **********************************************************

// ********** Begin ScriptStruct FSteamShutdown ****************************************************
struct Z_Construct_UScriptStruct_FSteamShutdown_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamShutdown); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamShutdown); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamShutdown constinit property declarations ********************
// ********** End ScriptStruct FSteamShutdown constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamShutdown>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamShutdown_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamShutdown;
class UScriptStruct* FSteamShutdown::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamShutdown.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamShutdown.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamShutdown, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamShutdown"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamShutdown.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamShutdown_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamShutdown",
	nullptr,
	0,
	sizeof(FSteamShutdown),
	alignof(FSteamShutdown),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamShutdown()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamShutdown.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamShutdown.InnerSingleton, Z_Construct_UScriptStruct_FSteamShutdown_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamShutdown.InnerSingleton);
}
// ********** End ScriptStruct FSteamShutdown ******************************************************

// ********** Begin Delegate FOnCheckFileSignature *************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnCheckFileSignature_Parms
	{
		FCheckFileSignature Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCheckFileSignature constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCheckFileSignature constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCheckFileSignature Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnCheckFileSignature_Parms, Data), Z_Construct_UScriptStruct_FCheckFileSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1431007526
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnCheckFileSignature Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCheckFileSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::_Script_SteamCore_eventOnCheckFileSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::_Script_SteamCore_eventOnCheckFileSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCheckFileSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCheckFileSignature, FCheckFileSignature const& Data)
{
	struct _Script_SteamCore_eventOnCheckFileSignature_Parms
	{
		FCheckFileSignature Data;
	};
	_Script_SteamCore_eventOnCheckFileSignature_Parms Parms;
	Parms.Data=Data;
	OnCheckFileSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCheckFileSignature ***************************************************

// ********** Begin Delegate FOnGamepadTextInputDismissed ******************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnGamepadTextInputDismissed_Parms
	{
		FGamepadTextInputDismissed Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGamepadTextInputDismissed constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGamepadTextInputDismissed constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGamepadTextInputDismissed Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms, Data), Z_Construct_UScriptStruct_FGamepadTextInputDismissed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4225186938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGamepadTextInputDismissed Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGamepadTextInputDismissed__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGamepadTextInputDismissed_DelegateWrapper(const FMulticastScriptDelegate& OnGamepadTextInputDismissed, FGamepadTextInputDismissed const& Data)
{
	struct _Script_SteamCore_eventOnGamepadTextInputDismissed_Parms
	{
		FGamepadTextInputDismissed Data;
	};
	_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms Parms;
	Parms.Data=Data;
	OnGamepadTextInputDismissed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGamepadTextInputDismissed ********************************************

// ********** Begin Delegate FOnIPCountry **********************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnIPCountry_Parms
	{
		FIPCountry Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnIPCountry constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnIPCountry constinit property declarations ****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnIPCountry Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnIPCountry_Parms, Data), Z_Construct_UScriptStruct_FIPCountry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 203515998
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnIPCountry Property Definitions ***************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnIPCountry__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::_Script_SteamCore_eventOnIPCountry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::_Script_SteamCore_eventOnIPCountry_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnIPCountry_DelegateWrapper(const FMulticastScriptDelegate& OnIPCountry, FIPCountry const& Data)
{
	struct _Script_SteamCore_eventOnIPCountry_Parms
	{
		FIPCountry Data;
	};
	_Script_SteamCore_eventOnIPCountry_Parms Parms;
	Parms.Data=Data;
	OnIPCountry.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnIPCountry ************************************************************

// ********** Begin Delegate FOnLowBatteryPower ****************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnLowBatteryPower_Parms
	{
		FLowBatteryPower Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLowBatteryPower constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLowBatteryPower constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLowBatteryPower Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLowBatteryPower_Parms, Data), Z_Construct_UScriptStruct_FLowBatteryPower, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3944338200
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLowBatteryPower Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLowBatteryPower__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::_Script_SteamCore_eventOnLowBatteryPower_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::_Script_SteamCore_eventOnLowBatteryPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLowBatteryPower_DelegateWrapper(const FMulticastScriptDelegate& OnLowBatteryPower, FLowBatteryPower const& Data)
{
	struct _Script_SteamCore_eventOnLowBatteryPower_Parms
	{
		FLowBatteryPower Data;
	};
	_Script_SteamCore_eventOnLowBatteryPower_Parms Parms;
	Parms.Data=Data;
	OnLowBatteryPower.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLowBatteryPower ******************************************************

// ********** Begin Delegate FOnSteamShutdown ******************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnSteamShutdown_Parms
	{
		FSteamShutdown Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamShutdown constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamShutdown constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamShutdown Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamShutdown_Parms, Data), Z_Construct_UScriptStruct_FSteamShutdown, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3184905153
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamShutdown Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamShutdown__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamShutdown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamShutdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamShutdown_DelegateWrapper(const FMulticastScriptDelegate& OnSteamShutdown, FSteamShutdown const& Data)
{
	struct _Script_SteamCore_eventOnSteamShutdown_Parms
	{
		FSteamShutdown Data;
	};
	_Script_SteamCore_eventOnSteamShutdown_Parms Parms;
	Parms.Data=Data;
	OnSteamShutdown.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamShutdown ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamTextFilteringContext_StaticEnum, TEXT("ESteamTextFilteringContext"), &Z_Registration_Info_UEnum_ESteamTextFilteringContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3223881266U) },
		{ ESteamCheckFileSignature_StaticEnum, TEXT("ESteamCheckFileSignature"), &Z_Registration_Info_UEnum_ESteamCheckFileSignature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3178635790U) },
		{ ESteamGamepadTextInputLineMode_StaticEnum, TEXT("ESteamGamepadTextInputLineMode"), &Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 746156710U) },
		{ ESteamGamepadTextInputMode_StaticEnum, TEXT("ESteamGamepadTextInputMode"), &Z_Registration_Info_UEnum_ESteamGamepadTextInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1802994897U) },
		{ ESteamNotificationPosition_StaticEnum, TEXT("ESteamNotificationPosition"), &Z_Registration_Info_UEnum_ESteamNotificationPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4044384441U) },
		{ ESteamUniverse_StaticEnum, TEXT("ESteamUniverse"), &Z_Registration_Info_UEnum_ESteamUniverse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 194428985U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCheckFileSignature::StaticStruct, Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewStructOps, TEXT("CheckFileSignature"),&Z_Registration_Info_UScriptStruct_FCheckFileSignature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckFileSignature), 1431007526U) },
		{ FGamepadTextInputDismissed::StaticStruct, Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewStructOps, TEXT("GamepadTextInputDismissed"),&Z_Registration_Info_UScriptStruct_FGamepadTextInputDismissed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGamepadTextInputDismissed), 4225186938U) },
		{ FLowBatteryPower::StaticStruct, Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewStructOps, TEXT("LowBatteryPower"),&Z_Registration_Info_UScriptStruct_FLowBatteryPower, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLowBatteryPower), 3944338200U) },
		{ FIPCountry::StaticStruct, Z_Construct_UScriptStruct_FIPCountry_Statics::NewStructOps, TEXT("IPCountry"),&Z_Registration_Info_UScriptStruct_FIPCountry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIPCountry), 203515998U) },
		{ FSteamShutdown::StaticStruct, Z_Construct_UScriptStruct_FSteamShutdown_Statics::NewStructOps, TEXT("SteamShutdown"),&Z_Registration_Info_UScriptStruct_FSteamShutdown, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamShutdown), 3184905153U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h__Script_SteamCore_2292053099{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
