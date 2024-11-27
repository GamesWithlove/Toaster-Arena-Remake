// Copyright Epic Games, Inc. All Rights Reserved.

#include "Helpers/PCGTagHelpers.h"
#include "Metadata/PCGMetadataAttributeTpl.h"

namespace PCG
{
namespace Private
{
	FParseTagResult::FParseTagResult(const FString& InTag)
	{
		*this = ParseTag(InTag);
	}

	FParseTagResult::FParseTagResult(FName InTag)
	{
		*this = ParseTag(InTag);
	}

	FParseTagResult ParseTag(const FString& InTag)
	{
		FParseTagResult Result;

		int32 DividerPosition = INDEX_NONE;
		if (InTag.FindChar(':', DividerPosition))
		{
			FString LeftSide = InTag.Left(DividerPosition);
			FString RightSide = InTag.RightChop(DividerPosition + 1);

			if (LeftSide.IsEmpty())
			{
				// Tag doesn't have an attribute - ignore
			}
			else if (RightSide.IsEmpty())
			{
				// Tag doesn't have a value, ignore the right hand side
				Result.Attribute = MoveTemp(LeftSide);
			}
			else
			{
				if (RightSide.IsNumeric())
				{
					Result.NumericValue = FCString::Atod(*RightSide);
				}

				Result.Attribute = MoveTemp(LeftSide);
				Result.Value = MoveTemp(RightSide);
			}
		}
		else
		{
			Result.Attribute = InTag;
		}

		// Finally, sanitize the attribute name if needed
		FString OriginalAttribute = Result.Attribute;
		if (FPCGMetadataAttributeBase::SanitizeName(Result.Attribute))
		{
			Result.OriginalAttribute = MoveTemp(OriginalAttribute);
		}

		return Result;
	}

	FParseTagResult ParseTag(FName InTag)
	{
		return ParseTag(InTag.ToString());
	}

	bool CreateAttributeFromTag(const FString& InTag, UPCGMetadata* InMetadata, FParseTagResult* OutResult)
	{
		FParseTagResult TagData(InTag);
		const bool bCreateSuccess = CreateAttributeFromTag(TagData, InMetadata);

		if (OutResult)
		{
			*OutResult = MoveTemp(TagData);
		}

		return bCreateSuccess;
	}

	bool CreateAttributeFromTag(const FParseTagResult& InTagData, UPCGMetadata* InMetadata)
	{
		return SetAttributeFromTag(InTagData, InMetadata, PCGInvalidEntryKey, /*bCanCreateAttribute=*/true);
	}

	bool SetAttributeFromTag(const FString& InTag, UPCGMetadata* InMetadata, PCGMetadataEntryKey InEntryKey, bool bInCanCreateAttribute, FParseTagResult* OutResult)
	{
		FParseTagResult TagData = ParseTag(InTag);
		const bool bSetSuccess = SetAttributeFromTag(TagData, InMetadata, InEntryKey, bInCanCreateAttribute);

		if (OutResult)
		{
			*OutResult = MoveTemp(TagData);
		}

		return bSetSuccess;
	}

	bool SetAttributeFromTag(const FParseTagResult& TagData, UPCGMetadata* InMetadata, PCGMetadataEntryKey InEntryKey, bool bInCanCreateAttribute)
	{
		check(InMetadata);

		if (TagData.IsValid())
		{
			FName AttributeName(TagData.Attribute);

			auto GetAttribute = [InMetadata, bInCanCreateAttribute, &AttributeName](auto DefaultValue)
			{
				using AttributeType = decltype(DefaultValue);
				if (bInCanCreateAttribute)
				{
					return InMetadata->FindOrCreateAttribute<AttributeType>(AttributeName, DefaultValue, /*bAllowsInterpolation=*/false, /*bOverrideParent=*/false, /*bOverwriteIfTypeMismatch=*/true);
				}
				else
				{
					return InMetadata->GetMutableTypedAttribute<AttributeType>(AttributeName);
				}
			};

			if (TagData.HasNumericValue())
			{
				FPCGMetadataAttribute<double>* Attribute = GetAttribute(0.0);
				if (Attribute && InEntryKey != PCGInvalidEntryKey)
				{
					Attribute->SetValue(InEntryKey, TagData.NumericValue.GetValue());
				}
			}
			else if (TagData.HasValue())
			{
				FPCGMetadataAttribute<FString>* Attribute = GetAttribute(FString());
				if (Attribute && InEntryKey != PCGInvalidEntryKey)
				{
					Attribute->SetValue(InEntryKey, TagData.Value.GetValue());
				}
			}
			else
			{
				FPCGMetadataAttribute<bool>* Attribute = GetAttribute(false);
				if (Attribute && InEntryKey != PCGInvalidEntryKey)
				{
					Attribute->SetValue(InEntryKey, true);
				}
			}

			return true;
		}
		
		return false;
	}
}
}