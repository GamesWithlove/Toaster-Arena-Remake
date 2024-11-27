// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/Metadata/PCGMetadataStringOpElement.h"

#include "Elements/Metadata/PCGMetadataElementCommon.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGMetadataStringOpElement)

namespace PCGMetadataStringOpConstants
{
	const FName ToFindLabel = TEXT("Search");
	const FName ToReplaceLabel = TEXT("Replace");
}

FName UPCGMetadataStringOpSettings::GetInputPinLabel(uint32 Index) const
{
	switch (Operation)
	{
	case EPCGMetadataStringOperation::Append:
		switch (Index)
		{
		case 0: return PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel;
		case 1: return PCGMetadataSettingsBaseConstants::DoubleInputSecondLabel;
		default: break;
		}

	case EPCGMetadataStringOperation::Replace:
		switch (Index)
		{
		case 0: return PCGPinConstants::DefaultInputLabel;
		case 1: return PCGMetadataStringOpConstants::ToFindLabel;
		case 2: return PCGMetadataStringOpConstants::ToReplaceLabel;
		default: break;
		}

	default: break;
	}
	
	return NAME_None;
}

uint32 UPCGMetadataStringOpSettings::GetOperandNum() const
{
	switch (Operation)
	{
	case EPCGMetadataStringOperation::Append:
		return 2;
	case EPCGMetadataStringOperation::Replace:
		return 3;
	default:
		return 0;
	}
}

bool UPCGMetadataStringOpSettings::IsSupportedInputType(uint16 TypeId, uint32 InputIndex, bool& bHasSpecialRequirement) const
{
	bHasSpecialRequirement = false;
	return true; // all types support ToString()
}

FPCGAttributePropertyInputSelector UPCGMetadataStringOpSettings::GetInputSource(uint32 Index) const
{
	switch (Index)
	{
	case 0: return InputSource1;
	case 1: return InputSource2;
	case 2: return InputSource3;
	default: return FPCGAttributePropertyInputSelector();
	}
}

FString UPCGMetadataStringOpSettings::GetAdditionalTitleInformation() const
{
	if (const UEnum* EnumPtr = StaticEnum<EPCGMetadataStringOperation>())
	{
		return FText::Format(NSLOCTEXT("PCGMetadataStringOpSettings", "StringOperation", "String: {0}"), EnumPtr->GetDisplayNameTextByValue(static_cast<int64>(Operation))).ToString();
	}
	else
	{
		return FString();
	}
}
 
#if WITH_EDITOR
FName UPCGMetadataStringOpSettings::GetDefaultNodeName() const
{
	return TEXT("AttributeStringOp");
}

FText UPCGMetadataStringOpSettings::GetDefaultNodeTitle() const
{
	return NSLOCTEXT("PCGMetadataStringOpSettings", "NodeTitle", "Attribute String Op");
}

TArray<FPCGPreConfiguredSettingsInfo> UPCGMetadataStringOpSettings::GetPreconfiguredInfo() const
{
	return PCGMetadataElementCommon::FillPreconfiguredSettingsInfoFromEnum<EPCGMetadataStringOperation>();
}
#endif // WITH_EDITOR

void UPCGMetadataStringOpSettings::ApplyPreconfiguredSettings(const FPCGPreConfiguredSettingsInfo& PreconfiguredInfo)
{
	if (const UEnum* EnumPtr = StaticEnum<EPCGMetadataStringOperation>())
	{
		if (EnumPtr->IsValidEnumValue(PreconfiguredInfo.PreconfiguredIndex))
		{
			Operation = EPCGMetadataStringOperation(PreconfiguredInfo.PreconfiguredIndex);
		}
	}
}

FPCGElementPtr UPCGMetadataStringOpSettings::CreateElement() const
{
	return MakeShared<FPCGMetadataStringOpElement>();
}

uint16 UPCGMetadataStringOpSettings::GetOutputType(uint16 InputTypeId) const
{
	return (uint16)EPCGMetadataTypes::String;
}

bool FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData& OperationData) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGMetadataStringOpElement::Execute);

	const UPCGMetadataStringOpSettings* Settings = CastChecked<UPCGMetadataStringOpSettings>(OperationData.Settings);

	if (Settings->Operation == EPCGMetadataStringOperation::Append)
	{
		return DoBinaryOp<FString, FString>(OperationData, [](const FString& Value1, const FString& Value2) -> FString { return Value1 + Value2; });
	}
	else if (Settings->Operation == EPCGMetadataStringOperation::Replace)
	{
		return DoTernaryOp<FString, FString, FString>(OperationData, [](const FString& InValue, const FString& InSearch, const FString& InReplace)
		{
			return InValue.Replace(*InSearch, *InReplace);
		});
	}
	else
	{
		ensure(false);
		return true;
	}
}