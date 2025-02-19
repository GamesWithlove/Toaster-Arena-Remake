// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColorWheelHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorWheelHelper() {}
// Cross Module References
	COLORWHEELPLUGIN_API UClass* Z_Construct_UClass_UColorWheelHelper();
	COLORWHEELPLUGIN_API UClass* Z_Construct_UClass_UColorWheelHelper_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ColorWheelPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UColorWheelHelper::execGetColorUnderCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UColorWheelHelper::GetColorUnderCursor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorWheelHelper::execRandomColor)
	{
		P_GET_UBOOL(Z_Param_RandomAlpha);
		P_GET_UBOOL(Z_Param_TrueRandom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UColorWheelHelper::RandomColor(Z_Param_RandomAlpha,Z_Param_TrueRandom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorWheelHelper::execRandomLinearColor)
	{
		P_GET_UBOOL(Z_Param_RandomAlpha);
		P_GET_UBOOL(Z_Param_TrueRandom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UColorWheelHelper::RandomLinearColor(Z_Param_RandomAlpha,Z_Param_TrueRandom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorWheelHelper::execLinearColorToHex)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_UBOOL(Z_Param_IsSRGB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UColorWheelHelper::LinearColorToHex(Z_Param_Color,Z_Param_IsSRGB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorWheelHelper::execColorToHex)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UColorWheelHelper::ColorToHex(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorWheelHelper::execHexToLinearColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Hex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UColorWheelHelper::HexToLinearColor(Z_Param_Hex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorWheelHelper::execHexToColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Hex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UColorWheelHelper::HexToColor(Z_Param_Hex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorWheelHelper::execByteToHex)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Byte);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UColorWheelHelper::ByteToHex(Z_Param_Byte);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorWheelHelper::execHexToByte)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Hex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UColorWheelHelper::HexToByte(Z_Param_Hex);
		P_NATIVE_END;
	}
	void UColorWheelHelper::StaticRegisterNativesUColorWheelHelper()
	{
		UClass* Class = UColorWheelHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ByteToHex", &UColorWheelHelper::execByteToHex },
			{ "ColorToHex", &UColorWheelHelper::execColorToHex },
			{ "GetColorUnderCursor", &UColorWheelHelper::execGetColorUnderCursor },
			{ "HexToByte", &UColorWheelHelper::execHexToByte },
			{ "HexToColor", &UColorWheelHelper::execHexToColor },
			{ "HexToLinearColor", &UColorWheelHelper::execHexToLinearColor },
			{ "LinearColorToHex", &UColorWheelHelper::execLinearColorToHex },
			{ "RandomColor", &UColorWheelHelper::execRandomColor },
			{ "RandomLinearColor", &UColorWheelHelper::execRandomLinearColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics
	{
		struct ColorWheelHelper_eventByteToHex_Parms
		{
			uint8 Byte;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Byte;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::NewProp_Byte = { "Byte", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventByteToHex_Parms, Byte), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventByteToHex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::NewProp_Byte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel Helper|Conversion" },
		{ "Comment", "/**\n\x09*\x09""Converts a byte value to a Hexadecimal value represented as a string.\n\x09*\x09@param Byte\x09\x09\x09\x09The byte value\n\x09*\x09@return\x09\x09\x09\x09\x09The value as a hexadecimal represented in a string\n\x09*/" },
		{ "DisplayName", "Byte \xe2\x9e\x9c Hex" },
		{ "Keywords", "hex byte convert" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "Converts a byte value to a Hexadecimal value represented as a string.\n@param Byte                             The byte value\n@return                                 The value as a hexadecimal represented in a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWheelHelper, nullptr, "ByteToHex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::ColorWheelHelper_eventByteToHex_Parms), Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWheelHelper_ByteToHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWheelHelper_ByteToHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics
	{
		struct ColorWheelHelper_eventColorToHex_Parms
		{
			FColor Color;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventColorToHex_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventColorToHex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel Helper|Conversion" },
		{ "Comment", "/**\n\x09*\x09""Converts a FColor value to a FString value in Hexadecimal.\n\x09*\x09@param Color\x09\x09\x09The RGBA Color\n\x09*\x09@return\x09\x09\x09\x09\x09The Hex value as string\n\x09*/" },
		{ "DisplayName", "Color \xe2\x9e\x9c Hex" },
		{ "Keywords", "hex convert rgb" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "Converts a FColor value to a FString value in Hexadecimal.\n@param Color                    The RGBA Color\n@return                                 The Hex value as string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWheelHelper, nullptr, "ColorToHex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::ColorWheelHelper_eventColorToHex_Parms), Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWheelHelper_ColorToHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWheelHelper_ColorToHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics
	{
		struct ColorWheelHelper_eventGetColorUnderCursor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventGetColorUnderCursor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel Helper|Misc" },
		{ "Comment", "/**\n\x09* Returns the current color under which the cursor is currently residing.\n\x09* @return The current color under the cursor\n\x09*/" },
		{ "DisplayName", "Get Color under Cursor" },
		{ "Keywords", "get cursor color" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "Returns the current color under which the cursor is currently residing.\n@return The current color under the cursor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWheelHelper, nullptr, "GetColorUnderCursor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::ColorWheelHelper_eventGetColorUnderCursor_Parms), Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics
	{
		struct ColorWheelHelper_eventHexToByte_Parms
		{
			FString Hex;
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::NewProp_Hex = { "Hex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventHexToByte_Parms, Hex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventHexToByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::NewProp_Hex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel Helper|Conversion" },
		{ "Comment", "/**\n\x09*\x09""Converts a hexadecimal string value to a byte value.\n\x09*\x09@param Hex\x09\x09\x09\x09The Hexadecimal value\n\x09*\x09@return\x09\x09\x09\x09\x09The value as a byte\n\x09*/" },
		{ "DisplayName", "Hex \xe2\x9e\x9c Byte" },
		{ "Keywords", "hex byte convert" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "Converts a hexadecimal string value to a byte value.\n@param Hex                              The Hexadecimal value\n@return                                 The value as a byte" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWheelHelper, nullptr, "HexToByte", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::ColorWheelHelper_eventHexToByte_Parms), Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWheelHelper_HexToByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWheelHelper_HexToByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics
	{
		struct ColorWheelHelper_eventHexToColor_Parms
		{
			FString Hex;
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::NewProp_Hex = { "Hex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventHexToColor_Parms, Hex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventHexToColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::NewProp_Hex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel Helper|Conversion" },
		{ "Comment", "/**\n\x09*\x09""Converts a Hex from an FString value to a FColor value, needs to contain all channels so simply writing #FF won't\n\x09*\x09work!\n\x09*\x09@param Hex\x09\x09\x09\x09The Hexadecimal string value\n\x09*\x09@return\x09\x09\x09\x09\x09Returns the RGBA value of the Hexadecimal value\n\x09*/" },
		{ "DisplayName", "Hex \xe2\x9e\x9c Color" },
		{ "Keywords", "hex convert rgb" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "Converts a Hex from an FString value to a FColor value, needs to contain all channels so simply writing #FF won't\nwork!\n@param Hex                              The Hexadecimal string value\n@return                                 Returns the RGBA value of the Hexadecimal value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWheelHelper, nullptr, "HexToColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::ColorWheelHelper_eventHexToColor_Parms), Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWheelHelper_HexToColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWheelHelper_HexToColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics
	{
		struct ColorWheelHelper_eventHexToLinearColor_Parms
		{
			FString Hex;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::NewProp_Hex = { "Hex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventHexToLinearColor_Parms, Hex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventHexToLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::NewProp_Hex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel Helper|Conversion" },
		{ "Comment", "/**\n\x09*\x09""Converts a Hex from an FString value to a FLinearColor value, needs to contain all channels so simply writing #FF won't\n\x09*\x09work!\n\x09*\x09@param Hex\x09\x09\x09\x09The Hexadecimal string value\n\x09*\x09@return\x09\x09\x09\x09\x09Returns the linear color values of the Hexadecimal value\n\x09*/" },
		{ "DisplayName", "Hex \xe2\x9e\x9c LinearColor" },
		{ "Keywords", "hex convert rgb linear" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "Converts a Hex from an FString value to a FLinearColor value, needs to contain all channels so simply writing #FF won't\nwork!\n@param Hex                              The Hexadecimal string value\n@return                                 Returns the linear color values of the Hexadecimal value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWheelHelper, nullptr, "HexToLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::ColorWheelHelper_eventHexToLinearColor_Parms), Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics
	{
		struct ColorWheelHelper_eventLinearColorToHex_Parms
		{
			FLinearColor Color;
			bool IsSRGB;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSRGB_MetaData[];
#endif
		static void NewProp_IsSRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSRGB;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventLinearColorToHex_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_IsSRGB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_IsSRGB_SetBit(void* Obj)
	{
		((ColorWheelHelper_eventLinearColorToHex_Parms*)Obj)->IsSRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_IsSRGB = { "IsSRGB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ColorWheelHelper_eventLinearColorToHex_Parms), &Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_IsSRGB_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_IsSRGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_IsSRGB_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventLinearColorToHex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_IsSRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel Helper|Conversion" },
		{ "Comment", "/**\n\x09*\x09""Converts a FLinearColor value to a FString value in Hexadecimal.\n\x09*\x09@param Color\x09\x09\x09The linear color\n\x09*\x09@param IsSRGB\x09\x09\x09Is the linear color in SRGB?\n\x09*\x09@return\x09\x09\x09\x09\x09The Hex value as string\n\x09*/" },
		{ "DisplayName", "LinearColor \xe2\x9e\x9c Hex" },
		{ "Keywords", "hex convert rgb linear" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "Converts a FLinearColor value to a FString value in Hexadecimal.\n@param Color                    The linear color\n@param IsSRGB                   Is the linear color in SRGB?\n@return                                 The Hex value as string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWheelHelper, nullptr, "LinearColorToHex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::ColorWheelHelper_eventLinearColorToHex_Parms), Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics
	{
		struct ColorWheelHelper_eventRandomColor_Parms
		{
			bool RandomAlpha;
			bool TrueRandom;
			FColor ReturnValue;
		};
		static void NewProp_RandomAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomAlpha;
		static void NewProp_TrueRandom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TrueRandom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_RandomAlpha_SetBit(void* Obj)
	{
		((ColorWheelHelper_eventRandomColor_Parms*)Obj)->RandomAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_RandomAlpha = { "RandomAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ColorWheelHelper_eventRandomColor_Parms), &Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_RandomAlpha_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_TrueRandom_SetBit(void* Obj)
	{
		((ColorWheelHelper_eventRandomColor_Parms*)Obj)->TrueRandom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_TrueRandom = { "TrueRandom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ColorWheelHelper_eventRandomColor_Parms), &Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_TrueRandom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventRandomColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_RandomAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_TrueRandom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel Helper|Misc" },
		{ "Comment", "/**\n\x09* Returns a randomized color value\n\x09* @param RandomAlpha Randomize the Alpha value aswell ?\n\x09* @param TrueRandom Should each channel of the color be randomized ?\n\x09* @return A random color\n\x09*/" },
		{ "DisplayName", "Random Color" },
		{ "Keywords", "random color" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "Returns a randomized color value\n@param RandomAlpha Randomize the Alpha value aswell ?\n@param TrueRandom Should each channel of the color be randomized ?\n@return A random color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWheelHelper, nullptr, "RandomColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::ColorWheelHelper_eventRandomColor_Parms), Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWheelHelper_RandomColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWheelHelper_RandomColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics
	{
		struct ColorWheelHelper_eventRandomLinearColor_Parms
		{
			bool RandomAlpha;
			bool TrueRandom;
			FLinearColor ReturnValue;
		};
		static void NewProp_RandomAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomAlpha;
		static void NewProp_TrueRandom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TrueRandom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_RandomAlpha_SetBit(void* Obj)
	{
		((ColorWheelHelper_eventRandomLinearColor_Parms*)Obj)->RandomAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_RandomAlpha = { "RandomAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ColorWheelHelper_eventRandomLinearColor_Parms), &Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_RandomAlpha_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_TrueRandom_SetBit(void* Obj)
	{
		((ColorWheelHelper_eventRandomLinearColor_Parms*)Obj)->TrueRandom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_TrueRandom = { "TrueRandom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ColorWheelHelper_eventRandomLinearColor_Parms), &Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_TrueRandom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWheelHelper_eventRandomLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_RandomAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_TrueRandom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel Helper|Misc" },
		{ "Comment", "/**\n\x09 * Returns a randomized linear color value\n\x09 * @param RandomAlpha Randomize the Alpha value aswell ?\n\x09 * @param TrueRandom Should each channel of the color be randomized ?\n\x09 * @return A random linear color\n\x09 */" },
		{ "DisplayName", "Random Linear Color" },
		{ "Keywords", "random linear color" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "Returns a randomized linear color value\n@param RandomAlpha Randomize the Alpha value aswell ?\n@param TrueRandom Should each channel of the color be randomized ?\n@return A random linear color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWheelHelper, nullptr, "RandomLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::ColorWheelHelper_eventRandomLinearColor_Parms), Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorWheelHelper);
	UClass* Z_Construct_UClass_UColorWheelHelper_NoRegister()
	{
		return UColorWheelHelper::StaticClass();
	}
	struct Z_Construct_UClass_UColorWheelHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorWheelHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ColorWheelPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorWheelHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorWheelHelper_ByteToHex, "ByteToHex" }, // 2137898613
		{ &Z_Construct_UFunction_UColorWheelHelper_ColorToHex, "ColorToHex" }, // 3080737373
		{ &Z_Construct_UFunction_UColorWheelHelper_GetColorUnderCursor, "GetColorUnderCursor" }, // 838006935
		{ &Z_Construct_UFunction_UColorWheelHelper_HexToByte, "HexToByte" }, // 3717888242
		{ &Z_Construct_UFunction_UColorWheelHelper_HexToColor, "HexToColor" }, // 1726908355
		{ &Z_Construct_UFunction_UColorWheelHelper_HexToLinearColor, "HexToLinearColor" }, // 294498998
		{ &Z_Construct_UFunction_UColorWheelHelper_LinearColorToHex, "LinearColorToHex" }, // 4226354648
		{ &Z_Construct_UFunction_UColorWheelHelper_RandomColor, "RandomColor" }, // 2264732789
		{ &Z_Construct_UFunction_UColorWheelHelper_RandomLinearColor, "RandomLinearColor" }, // 1015859219
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorWheelHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Helper BP Library for various additional functions that someone might need, like hexadecimal conversion, random color, etc...\n */" },
		{ "IncludePath", "ColorWheelHelper.h" },
		{ "ModuleRelativePath", "Public/ColorWheelHelper.h" },
		{ "ToolTip", "A Helper BP Library for various additional functions that someone might need, like hexadecimal conversion, random color, etc..." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorWheelHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorWheelHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorWheelHelper_Statics::ClassParams = {
		&UColorWheelHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UColorWheelHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorWheelHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorWheelHelper()
	{
		if (!Z_Registration_Info_UClass_UColorWheelHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorWheelHelper.OuterSingleton, Z_Construct_UClass_UColorWheelHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UColorWheelHelper.OuterSingleton;
	}
	template<> COLORWHEELPLUGIN_API UClass* StaticClass<UColorWheelHelper>()
	{
		return UColorWheelHelper::StaticClass();
	}
	UColorWheelHelper::UColorWheelHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorWheelHelper);
	UColorWheelHelper::~UColorWheelHelper() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UColorWheelHelper, UColorWheelHelper::StaticClass, TEXT("UColorWheelHelper"), &Z_Registration_Info_UClass_UColorWheelHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorWheelHelper), 1869177085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_118074499(TEXT("/Script/ColorWheelPlugin"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
