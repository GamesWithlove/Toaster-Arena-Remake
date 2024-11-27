// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGCommon.h"
#include "Metadata/PCGMetadata.h"

namespace PCG
{
namespace Private
{
	struct PCG_API FParseTagResult
	{
		FParseTagResult() = default;
		explicit FParseTagResult(const FString& InTag);
		explicit FParseTagResult(FName InTag);

		bool IsValid() const { return !Attribute.IsEmpty(); }
		bool HasBeenSanitized() const { return OriginalAttribute.IsSet(); }
		bool HasValue() const { return Value.IsSet(); }
		bool HasNumericValue() const { return NumericValue.IsSet(); }
		const FString& GetOriginalAttribute() const { return HasBeenSanitized() ? OriginalAttribute.GetValue() : Attribute; }

		FString Attribute;
		TOptional<FString> OriginalAttribute;
		TOptional<FString> Value;
		TOptional<double> NumericValue;
	};

	// Builds the tag result structure from the provided tag.
	PCG_API FParseTagResult ParseTag(const FString& InTag);
	PCG_API FParseTagResult ParseTag(FName InTag);

	// Parses a tag and creates the corresponding attribute on the provided metadata. If the name is invalid or the predicate rejects it, will return false.
	PCG_API bool CreateAttributeFromTag(const FString& InTag, UPCGMetadata* InMetadata, FParseTagResult* OutResult = nullptr);
	PCG_API bool CreateAttributeFromTag(const FParseTagResult& InTagData, UPCGMetadata* InMetadata);

	// Parses a tag, optionally creates the corresponding attribute on the provided metadata and sets the value. If the name is invalid or the predicate rejects it, will return false.
	PCG_API bool SetAttributeFromTag(const FString& InTag, UPCGMetadata* InMetadata, PCGMetadataEntryKey InKey, bool bInCanCreateAttribute, FParseTagResult* OutResult = nullptr);
	PCG_API bool SetAttributeFromTag(const FParseTagResult& InTagData, UPCGMetadata* InMetadata, PCGMetadataEntryKey InKey, bool bInCanCreateAttribute);
}
}