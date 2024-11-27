// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGFilterByAttribute.h"

#include "PCGContext.h"
#include "PCGData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGHelpers.h"
#include "Metadata/PCGMetadata.h"
#include "Metadata/Accessors/IPCGAttributeAccessor.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"

#include "Algo/AnyOf.h"

#define LOCTEXT_NAMESPACE "PCGFilterByAttributeElement"

#if WITH_EDITOR
FText UPCGFilterByAttributeSettings::GetDefaultNodeTitle() const
{
	return LOCTEXT("NodeTitle", "Filter Data By Attribute");
}
#endif // WITH_EDITOR

FString UPCGFilterByAttributeSettings::GetAdditionalTitleInformation() const
{
#if WITH_EDITOR
	if (IsPropertyOverriddenByPin(GET_MEMBER_NAME_CHECKED(UPCGFilterByAttributeSettings, Attribute)))
	{
		return FString();
	}
	else
#endif
	{
		return Attribute.ToString();
	}
}

FPCGElementPtr UPCGFilterByAttributeSettings::CreateElement() const
{
	return MakeShared<FPCGFilterByAttributeElement>();
}

bool FPCGFilterByAttributeElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGFilterByAttributeElement::Execute);
	check(Context);

	const UPCGFilterByAttributeSettings* Settings = Context->GetInputSettings<UPCGFilterByAttributeSettings>();
	check(Settings);

	TArray<FString> Attributes = PCGHelpers::GetStringArrayFromCommaSeparatedList(Settings->Attribute.ToString());

	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel);
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	TArray<FName> DataAttributes;
	TArray<EPCGMetadataTypes> DataAttributeTypes;
	TArray<FString> DataAttributeStrings;

	for (const FPCGTaggedData& Input : Inputs)
	{
		FPCGTaggedData& Output = Outputs.Add_GetRef(Input);
		Output.Pin = PCGPinConstants::DefaultOutFilterLabel;

		if (!Input.Data || !Input.Data->ConstMetadata())
		{
			continue;
		}

		// All attributes from the list must have a match in order to put the data in the In Filter pin.
		const UPCGMetadata* Metadata = Input.Data->ConstMetadata();

		DataAttributes.Reset();
		DataAttributeTypes.Reset();
		DataAttributeStrings.Reset();

		if (Settings->Operator != EPCGStringMatchingOperator::Equal)
		{
			// Gather all attributes & properties based on data type
			Metadata->GetAttributes(DataAttributes, DataAttributeTypes);
			Algo::Transform(DataAttributes, DataAttributeStrings, [](const FName& InAttribute) { return InAttribute.ToString(); });

			if (!Settings->bIgnoreProperties)
			{
				if (Cast<UPCGPointData>(Input.Data))
				{
					if (const UEnum* PointProperties = StaticEnum<EPCGPointProperties>())
					{
						DataAttributeStrings.Reserve(DataAttributeStrings.Num() + PointProperties->NumEnums());
						for (int32 EnumIndex = 0; EnumIndex < PointProperties->NumEnums(); ++EnumIndex)
						{
							DataAttributeStrings.Add(FString(TEXT("$")) + PointProperties->GetNameStringByIndex(EnumIndex));
						}
					}
				}

				if (const UEnum* ExtraProperties = StaticEnum<EPCGExtraProperties>())
				{
					DataAttributeStrings.Reserve(DataAttributeStrings.Num() + ExtraProperties->NumEnums());
					for (int32 EnumIndex = 0; EnumIndex < ExtraProperties->NumEnums(); ++EnumIndex)
					{
						DataAttributeStrings.Add(FString(TEXT("$")) + ExtraProperties->GetNameStringByIndex(EnumIndex));
					}
				}
			}
		}

		bool bInFilter = true;

		for (const FString& Attribute : Attributes)
		{
			FPCGAttributePropertySelector Selector;
			Selector.Update(Attribute);

			// In the case of the equal test, we can test directly if the selector would yield something valid
			if (Settings->Operator == EPCGStringMatchingOperator::Equal)
			{
				TUniquePtr<const IPCGAttributeAccessor> Accessor = PCGAttributeAccessorHelpers::CreateConstAccessor(Input.Data, Selector, /*bQuiet=*/true);
				if (!Accessor || !Accessor.IsValid())
				{
					bInFilter = false;
					break;
				}
			}
			else
			{
				// Otherwise, it's going to be a bit more complex -
				// First, reconstruct the main property/attribute name from the selector, because it might have removed the $ character.
				const FString AttributeWithNoAccessor = Selector.GetAttributePropertyString(/*bAddQualifier=*/true);
				const FString AttributeAccessors = Selector.GetAttributePropertyAccessorsString(/*bAddLeadingSeparator=*/true);
				
				// Try to find a valid match of AttributeWithNoAccessor against the DataAttributeStrings.
				bool bFoundValidMatch = false;
				for (const FString& DataAttribute : DataAttributeStrings)
				{
					if ((Settings->Operator == EPCGStringMatchingOperator::Substring && !DataAttribute.Contains(AttributeWithNoAccessor)) ||
						(Settings->Operator == EPCGStringMatchingOperator::Matches && !DataAttribute.MatchesWildcard(AttributeWithNoAccessor)))
					{
						continue;
					}

					// We have a valid name-based match, now check if the full attribute can be used as a valid extractor.
					FPCGAttributePropertySelector DataSelector;
					DataSelector.Update(DataAttribute + AttributeAccessors);

					TUniquePtr<const IPCGAttributeAccessor> Accessor = PCGAttributeAccessorHelpers::CreateConstAccessor(Input.Data, DataSelector, /*bQuiet=*/true);
					if (Accessor && Accessor.IsValid())
					{
						bFoundValidMatch = true;
						break;
					}
				}

				if (!bFoundValidMatch)
				{
					bInFilter = false;
					break;
				}
			}
		}

		if (bInFilter)
		{
			Output.Pin = PCGPinConstants::DefaultInFilterLabel;
		}
	}

	return true;
}

#undef LOCTEXT_NAMESPACE