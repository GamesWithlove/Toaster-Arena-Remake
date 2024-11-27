// Copyright Epic Games, Inc. All Rights Reserved.

#include "Utils/PCGLogErrors.h"

#define LOCTEXT_NAMESPACE "PCGLog"

namespace PCGLog::InputOutput
{
	namespace Format
	{
		const FText InvalidInputData = LOCTEXT("InvalidInputData", "Invalid input data.");

		const FTextFormat TypedInputNotFound = LOCTEXT("TypedInputNotFound", "Data of type {0} not found on pin '{1}'.");
		const FTextFormat FirstInputOnly = LOCTEXT("FirstInputOnly", "Multiple inputs found on single-input pin '{0}'. Only the first will be selected.");
		const FTextFormat InvalidCardinality = LOCTEXT("InvalidCardinality", "Invalid cardinality among pins '{0}' and '{1}'. They must match 1:1, N:1, or N:N.");
	}

	// Warnings
	void LogTypedDataNotFoundWarning(EPCGDataType DataType, const FName PinLabel, const FPCGContext* InContext)
	{
		const UEnum* PCGDataTypeEnum = StaticEnum<EPCGDataType>();
		const FText TypeText = PCGDataTypeEnum ? PCGDataTypeEnum->GetDisplayNameTextByValue(static_cast<int64>(DataType)) : LOCTEXT("UnknownDataType", "Unknown");
		LogWarningOnGraph(FText::Format(Format::TypedInputNotFound, FText::FromName(PinLabel), TypeText), InContext);
	}

	void LogFirstInputOnlyWarning(const FName PinLabel, const FPCGContext* InContext)
	{
		LogWarningOnGraph(FText::Format(Format::FirstInputOnly, FText::FromName(PinLabel)), InContext);
	}

	// Errors
	void LogInvalidInputDataError(const FPCGContext* InContext)
	{
		LogErrorOnGraph(Format::InvalidInputData, InContext);
	}

	void LogInvalidCardinalityError(const FName SourcePinLabel, const FName TargetPinLabel, const FPCGContext* InContext)
	{
		LogErrorOnGraph(FText::Format(Format::InvalidCardinality, FText::FromName(SourcePinLabel), FText::FromName(TargetPinLabel)), InContext);
	}
}

namespace PCGLog::Metadata
{
	namespace Format
	{
		const FTextFormat CreateAccessorFailure = LOCTEXT("CreateAccessorFailure", "Couldn't create accessor. Attribute '{0}' was not found.");
		const FTextFormat CreateAttributeFailure = LOCTEXT("CreateAttributeFailure", "Couldn't create attribute '{0}' of type '{1}'.");
		const FTextFormat GetAttributeFailure = LOCTEXT("GetAttributeFailure", "Couldn't retrieve attribute '{0}' value.");
		const FTextFormat GetTypedAttributeFailure = LOCTEXT("GetTypedAttributeFailure", "Couldn't retrieve attribute '{0}' value. Expected type: {1}, Actual Type: {2}.");
		const FTextFormat GetTypedAttributeFailureNoAccessor = LOCTEXT("GetTypedAttributeFailureNoAccessor", "Couldn't retrieve attribute '{0}' value of type: '{1}.");
		const FTextFormat IncomparableTypesFailure = LOCTEXT("IncomparableTypesFailure", "Attributes '{0}' and '{1}' are incomparable. Ensure they are either of the same or compatible types.");
	}

	void LogFailToCreateAccessorError(const FPCGAttributePropertySelector& Selector, const FPCGContext* InContext)
	{
		LogErrorOnGraph(FText::Format(Format::CreateAccessorFailure, Selector.GetDisplayText()), InContext);
	}

	void LogFailToGetAttributeError(const FText& AttributeName, const FPCGContext* InContext)
	{
		LogErrorOnGraph(FText::Format(Format::GetAttributeFailure, AttributeName), InContext);
	}

	void LogFailToGetAttributeError(FName AttributeName, const FPCGContext* InContext)
	{
		LogFailToGetAttributeError(FText::FromName(AttributeName), InContext);
	}

	void LogFailToGetAttributeError(const FPCGAttributePropertySelector& Selector, const FPCGContext* InContext)
	{
		LogErrorOnGraph(FText::Format(Format::GetAttributeFailure, Selector.GetDisplayText()), InContext);
	}

	void LogIncomparableAttributesError(const FPCGAttributePropertySelector& FirstSelector, const FPCGAttributePropertySelector& SecondSelector, const FPCGContext* InContext)
	{
		LogErrorOnGraph(FText::Format(Format::IncomparableTypesFailure, FirstSelector.GetDisplayText(), SecondSelector.GetDisplayText()), InContext);
	}
}

namespace PCGLog::Parsing
{
	namespace Format
	{
		const FText EmptyExpression = LOCTEXT("EmptyExpression", "Empty expression in parsed string.");

		const FTextFormat InvalidCharacter = LOCTEXT("InvalidCharacter", "Invalid character in parsed string: '{0}'.");
		const FTextFormat InvalidExpression = LOCTEXT("InvalidExpression", "Invalid expression in parsed string: '{0}'.");
	}

	// Warnings
	void LogEmptyExpressionWarning(const FPCGContext* InContext)
	{
		LogWarningOnGraph(Format::EmptyExpression, InContext);
	}

	// Errors
	void LogInvalidCharacterInParsedStringError(const FStringView& ParsedString, const FPCGContext* InContext)
	{
		LogErrorOnGraph(FText::Format(Format::InvalidCharacter, FText::FromStringView(ParsedString)), InContext);
	}

	void LogInvalidExpressionInParsedStringError(const FStringView& ParsedString, const FPCGContext* InContext)
	{
		LogErrorOnGraph(FText::Format(Format::InvalidExpression, FText::FromStringView(ParsedString)), InContext);
	}
}

#undef LOCTEXT_NAMESPACE
