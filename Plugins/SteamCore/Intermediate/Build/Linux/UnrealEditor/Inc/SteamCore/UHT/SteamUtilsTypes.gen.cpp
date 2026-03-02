// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUtils/SteamUtilsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUtilsTypes() {}
// Cross Module References
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
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamTextFilteringContext;
	static UEnum* ESteamTextFilteringContext_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamTextFilteringContext.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamTextFilteringContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamTextFilteringContext"));
		}
		return Z_Registration_Info_UEnum_ESteamTextFilteringContext.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamTextFilteringContext>()
	{
		return ESteamTextFilteringContext_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enumerators[] = {
		{ "ESteamTextFilteringContext::k_ETextFilteringContextUnknown", (int64)ESteamTextFilteringContext::k_ETextFilteringContextUnknown },
		{ "ESteamTextFilteringContext::k_ETextFilteringContextGameContent", (int64)ESteamTextFilteringContext::k_ETextFilteringContextGameContent },
		{ "ESteamTextFilteringContext::k_ETextFilteringContextChat", (int64)ESteamTextFilteringContext::k_ETextFilteringContextChat },
		{ "ESteamTextFilteringContext::k_ETextFilteringContextName", (int64)ESteamTextFilteringContext::k_ETextFilteringContextName },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
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
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamTextFilteringContext",
		"ESteamTextFilteringContext",
		Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext()
	{
		if (!Z_Registration_Info_UEnum_ESteamTextFilteringContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamTextFilteringContext.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamTextFilteringContext.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCheckFileSignature;
	static UEnum* ESteamCheckFileSignature_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCheckFileSignature.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCheckFileSignature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCheckFileSignature"));
		}
		return Z_Registration_Info_UEnum_ESteamCheckFileSignature.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCheckFileSignature>()
	{
		return ESteamCheckFileSignature_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enumerators[] = {
		{ "ESteamCheckFileSignature::InvalidSignature", (int64)ESteamCheckFileSignature::InvalidSignature },
		{ "ESteamCheckFileSignature::ValidSignature", (int64)ESteamCheckFileSignature::ValidSignature },
		{ "ESteamCheckFileSignature::FileNotFound", (int64)ESteamCheckFileSignature::FileNotFound },
		{ "ESteamCheckFileSignature::NoSignaturesFoundForThisApp", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisApp },
		{ "ESteamCheckFileSignature::NoSignaturesFoundForThisFile", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisFile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FileNotFound.Name", "ESteamCheckFileSignature::FileNotFound" },
		{ "InvalidSignature.Name", "ESteamCheckFileSignature::InvalidSignature" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "NoSignaturesFoundForThisApp.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisApp" },
		{ "NoSignaturesFoundForThisFile.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisFile" },
		{ "ValidSignature.Name", "ESteamCheckFileSignature::ValidSignature" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCheckFileSignature",
		"ESteamCheckFileSignature",
		Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature()
	{
		if (!Z_Registration_Info_UEnum_ESteamCheckFileSignature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCheckFileSignature.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCheckFileSignature.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode;
	static UEnum* ESteamGamepadTextInputLineMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGamepadTextInputLineMode"));
		}
		return Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamGamepadTextInputLineMode>()
	{
		return ESteamGamepadTextInputLineMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enumerators[] = {
		{ "ESteamGamepadTextInputLineMode::SingleLine", (int64)ESteamGamepadTextInputLineMode::SingleLine },
		{ "ESteamGamepadTextInputLineMode::MultipleLines", (int64)ESteamGamepadTextInputLineMode::MultipleLines },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "MultipleLines.Name", "ESteamGamepadTextInputLineMode::MultipleLines" },
		{ "SingleLine.Name", "ESteamGamepadTextInputLineMode::SingleLine" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamGamepadTextInputLineMode",
		"ESteamGamepadTextInputLineMode",
		Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode()
	{
		if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGamepadTextInputMode;
	static UEnum* ESteamGamepadTextInputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGamepadTextInputMode"));
		}
		return Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamGamepadTextInputMode>()
	{
		return ESteamGamepadTextInputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enumerators[] = {
		{ "ESteamGamepadTextInputMode::Normal", (int64)ESteamGamepadTextInputMode::Normal },
		{ "ESteamGamepadTextInputMode::Password", (int64)ESteamGamepadTextInputMode::Password },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "Normal.Name", "ESteamGamepadTextInputMode::Normal" },
		{ "Password.Name", "ESteamGamepadTextInputMode::Password" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamGamepadTextInputMode",
		"ESteamGamepadTextInputMode",
		Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode()
	{
		if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamNotificationPosition;
	static UEnum* ESteamNotificationPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamNotificationPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamNotificationPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamNotificationPosition, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamNotificationPosition"));
		}
		return Z_Registration_Info_UEnum_ESteamNotificationPosition.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamNotificationPosition>()
	{
		return ESteamNotificationPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enumerators[] = {
		{ "ESteamNotificationPosition::TopLeft", (int64)ESteamNotificationPosition::TopLeft },
		{ "ESteamNotificationPosition::TopRight", (int64)ESteamNotificationPosition::TopRight },
		{ "ESteamNotificationPosition::BottomLeft", (int64)ESteamNotificationPosition::BottomLeft },
		{ "ESteamNotificationPosition::BottomRight", (int64)ESteamNotificationPosition::BottomRight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomLeft.Name", "ESteamNotificationPosition::BottomLeft" },
		{ "BottomRight.Name", "ESteamNotificationPosition::BottomRight" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "TopLeft.Name", "ESteamNotificationPosition::TopLeft" },
		{ "TopRight.Name", "ESteamNotificationPosition::TopRight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamNotificationPosition",
		"ESteamNotificationPosition",
		Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition()
	{
		if (!Z_Registration_Info_UEnum_ESteamNotificationPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamNotificationPosition.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamNotificationPosition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamUniverse;
	static UEnum* ESteamUniverse_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamUniverse.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamUniverse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUniverse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUniverse"));
		}
		return Z_Registration_Info_UEnum_ESteamUniverse.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUniverse>()
	{
		return ESteamUniverse_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enumerators[] = {
		{ "ESteamUniverse::Invalid", (int64)ESteamUniverse::Invalid },
		{ "ESteamUniverse::Public", (int64)ESteamUniverse::Public },
		{ "ESteamUniverse::Beta", (int64)ESteamUniverse::Beta },
		{ "ESteamUniverse::Internal", (int64)ESteamUniverse::Internal },
		{ "ESteamUniverse::Dev", (int64)ESteamUniverse::Dev },
		{ "ESteamUniverse::Max", (int64)ESteamUniverse::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enum_MetaDataParams[] = {
		{ "Beta.Name", "ESteamUniverse::Beta" },
		{ "BlueprintType", "true" },
		{ "Dev.Name", "ESteamUniverse::Dev" },
		{ "Internal.Name", "ESteamUniverse::Internal" },
		{ "Invalid.Name", "ESteamUniverse::Invalid" },
		{ "Max.Name", "ESteamUniverse::Max" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "Public.Name", "ESteamUniverse::Public" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamUniverse",
		"ESteamUniverse",
		Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse()
	{
		if (!Z_Registration_Info_UEnum_ESteamUniverse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamUniverse.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamUniverse_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamUniverse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CheckFileSignature;
class UScriptStruct* FCheckFileSignature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CheckFileSignature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CheckFileSignature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckFileSignature, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("CheckFileSignature"));
	}
	return Z_Registration_Info_UScriptStruct_CheckFileSignature.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FCheckFileSignature>()
{
	return FCheckFileSignature::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCheckFileSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CheckFileSignature_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckFileSignature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckFileSignature>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckFileSignature, CheckFileSignature), Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_MetaData)) }; // 663212644
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"CheckFileSignature",
		sizeof(FCheckFileSignature),
		alignof(FCheckFileSignature),
		Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCheckFileSignature()
	{
		if (!Z_Registration_Info_UScriptStruct_CheckFileSignature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CheckFileSignature.InnerSingleton, Z_Construct_UScriptStruct_FCheckFileSignature_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CheckFileSignature.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed;
class UScriptStruct* FGamepadTextInputDismissed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamepadTextInputDismissed, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GamepadTextInputDismissed"));
	}
	return Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGamepadTextInputDismissed>()
{
	return FGamepadTextInputDismissed::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubmitted_MetaData[];
#endif
		static void NewProp_bSubmitted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubmitted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmittedText_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubmittedText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamepadTextInputDismissed>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit(void* Obj)
	{
		((FGamepadTextInputDismissed*)Obj)->bSubmitted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted = { "bSubmitted", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGamepadTextInputDismissed), &Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText = { "SubmittedText", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGamepadTextInputDismissed, SubmittedText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GamepadTextInputDismissed",
		sizeof(FGamepadTextInputDismissed),
		alignof(FGamepadTextInputDismissed),
		Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGamepadTextInputDismissed()
	{
		if (!Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.InnerSingleton, Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LowBatteryPower;
class UScriptStruct* FLowBatteryPower::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LowBatteryPower.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LowBatteryPower.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowBatteryPower, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LowBatteryPower"));
	}
	return Z_Registration_Info_UScriptStruct_LowBatteryPower.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLowBatteryPower>()
{
	return FLowBatteryPower::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLowBatteryPower_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinutesBatteryLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinutesBatteryLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowBatteryPower>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft = { "MinutesBatteryLeft", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLowBatteryPower, MinutesBatteryLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LowBatteryPower",
		sizeof(FLowBatteryPower),
		alignof(FLowBatteryPower),
		Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLowBatteryPower()
	{
		if (!Z_Registration_Info_UScriptStruct_LowBatteryPower.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LowBatteryPower.InnerSingleton, Z_Construct_UScriptStruct_FLowBatteryPower_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LowBatteryPower.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IPCountry;
class UScriptStruct* FIPCountry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IPCountry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IPCountry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIPCountry, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("IPCountry"));
	}
	return Z_Registration_Info_UScriptStruct_IPCountry.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FIPCountry>()
{
	return FIPCountry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIPCountry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIPCountry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIPCountry>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIPCountry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"IPCountry",
		sizeof(FIPCountry),
		alignof(FIPCountry),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIPCountry()
	{
		if (!Z_Registration_Info_UScriptStruct_IPCountry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IPCountry.InnerSingleton, Z_Construct_UScriptStruct_FIPCountry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IPCountry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamShutdown;
class UScriptStruct* FSteamShutdown::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamShutdown.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamShutdown.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamShutdown, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamShutdown"));
	}
	return Z_Registration_Info_UScriptStruct_SteamShutdown.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamShutdown>()
{
	return FSteamShutdown::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamShutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamShutdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamShutdown>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamShutdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamShutdown",
		sizeof(FSteamShutdown),
		alignof(FSteamShutdown),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamShutdown()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamShutdown.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamShutdown.InnerSingleton, Z_Construct_UScriptStruct_FSteamShutdown_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamShutdown.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnCheckFileSignature_Parms
		{
			FCheckFileSignature Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnCheckFileSignature_Parms, Data), Z_Construct_UScriptStruct_FCheckFileSignature, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 161060415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCheckFileSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::_Script_SteamCore_eventOnCheckFileSignature_Parms), Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGamepadTextInputDismissed_Parms
		{
			FGamepadTextInputDismissed Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms, Data), Z_Construct_UScriptStruct_FGamepadTextInputDismissed, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 4294602478
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGamepadTextInputDismissed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnIPCountry_Parms
		{
			FIPCountry Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnIPCountry_Parms, Data), Z_Construct_UScriptStruct_FIPCountry, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 651106501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnIPCountry__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::_Script_SteamCore_eventOnIPCountry_Parms), Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLowBatteryPower_Parms
		{
			FLowBatteryPower Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnLowBatteryPower_Parms, Data), Z_Construct_UScriptStruct_FLowBatteryPower, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1822769073
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLowBatteryPower__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::_Script_SteamCore_eventOnLowBatteryPower_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamShutdown_Parms
		{
			FSteamShutdown Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamShutdown_Parms, Data), Z_Construct_UScriptStruct_FSteamShutdown, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 828846027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamShutdown__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamShutdown_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::FuncParams);
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
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_Statics::EnumInfo[] = {
		{ ESteamTextFilteringContext_StaticEnum, TEXT("ESteamTextFilteringContext"), &Z_Registration_Info_UEnum_ESteamTextFilteringContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4174719602U) },
		{ ESteamCheckFileSignature_StaticEnum, TEXT("ESteamCheckFileSignature"), &Z_Registration_Info_UEnum_ESteamCheckFileSignature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 663212644U) },
		{ ESteamGamepadTextInputLineMode_StaticEnum, TEXT("ESteamGamepadTextInputLineMode"), &Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3679750875U) },
		{ ESteamGamepadTextInputMode_StaticEnum, TEXT("ESteamGamepadTextInputMode"), &Z_Registration_Info_UEnum_ESteamGamepadTextInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 168324082U) },
		{ ESteamNotificationPosition_StaticEnum, TEXT("ESteamNotificationPosition"), &Z_Registration_Info_UEnum_ESteamNotificationPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 196665349U) },
		{ ESteamUniverse_StaticEnum, TEXT("ESteamUniverse"), &Z_Registration_Info_UEnum_ESteamUniverse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1170435881U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_Statics::ScriptStructInfo[] = {
		{ FCheckFileSignature::StaticStruct, Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewStructOps, TEXT("CheckFileSignature"), &Z_Registration_Info_UScriptStruct_CheckFileSignature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckFileSignature), 161060415U) },
		{ FGamepadTextInputDismissed::StaticStruct, Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewStructOps, TEXT("GamepadTextInputDismissed"), &Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGamepadTextInputDismissed), 4294602478U) },
		{ FLowBatteryPower::StaticStruct, Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewStructOps, TEXT("LowBatteryPower"), &Z_Registration_Info_UScriptStruct_LowBatteryPower, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLowBatteryPower), 1822769073U) },
		{ FIPCountry::StaticStruct, Z_Construct_UScriptStruct_FIPCountry_Statics::NewStructOps, TEXT("IPCountry"), &Z_Registration_Info_UScriptStruct_IPCountry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIPCountry), 651106501U) },
		{ FSteamShutdown::StaticStruct, Z_Construct_UScriptStruct_FSteamShutdown_Statics::NewStructOps, TEXT("SteamShutdown"), &Z_Registration_Info_UScriptStruct_SteamShutdown, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamShutdown), 828846027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_73557759(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
