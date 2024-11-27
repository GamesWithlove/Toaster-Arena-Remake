// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGParamData.h"
#include "PCGContext.h"

#include "Elements/PCGExecuteBlueprint.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Metadata/Accessors/IPCGAttributeAccessor.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"
#include "Metadata/Accessors/PCGAttributeAccessorKeys.h"

#include "Serialization/ArchiveCrc32.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGParamData)

UPCGParamData::UPCGParamData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Metadata = ObjectInitializer.CreateDefaultSubobject<UPCGMetadata>(this, TEXT("Metadata"));
}

void UPCGParamData::AddToCrc(FArchiveCrc32& Ar, bool bFullDataCrc) const
{
	Super::AddToCrc(Ar, bFullDataCrc);

	uint32 UniqueTypeID = StaticClass()->GetDefaultObject()->GetUniqueID();
	Ar << UniqueTypeID;

	if (Metadata)
	{
		Metadata->AddToCrc(Ar, bFullDataCrc);
	}
}

int64 UPCGParamData::FindMetadataKey(const FName& InName) const
{
	if (const PCGMetadataEntryKey* FoundKey = NameMap.Find(InName))
	{
		return *FoundKey;
	}
	else
	{
		return PCGInvalidEntryKey;
	}
}

int64 UPCGParamData::FindOrAddMetadataKey(const FName& InName)
{
	if (const PCGMetadataEntryKey* FoundKey = NameMap.Find(InName))
	{
		return *FoundKey;
	}
	else
	{
		check(Metadata);
		PCGMetadataEntryKey NewKey = Metadata->AddEntry();
		NameMap.Add(InName, NewKey);
		return NewKey;
	}
}

UPCGParamData* UPCGParamData::K2_FilterParamsByName(const FName& InName) const
{
	return FilterParamsByName(UPCGBlueprintElement::ResolveContext(), InName);
}

UPCGParamData* UPCGParamData::FilterParamsByName(FPCGContext* Context, const FName& InName) const
{
	PCGMetadataEntryKey EntryKey = FindMetadataKey(InName);
	UPCGParamData* NewParams = FilterParamsByKey(Context, EntryKey);

	if (EntryKey != PCGInvalidEntryKey)
	{
		// NOTE: this relies on the fact that there will be only one entry
		NewParams->NameMap.Add(InName, 0);
	}

	return NewParams;
}

UPCGParamData* UPCGParamData::K2_FilterParamsByKey(int64 InKey) const
{
	return FilterParamsByKey(UPCGBlueprintElement::ResolveContext(), InKey);
}

UPCGParamData* UPCGParamData::FilterParamsByKey(FPCGContext* Context, int64 InKey) const
{
	UPCGParamData* NewParams = FPCGContext::NewObject_AnyThread<UPCGParamData>(Context);

	// Here instead of parenting the metadata, we will create a copy
	// so that the only entry in the metadata (if any) will have the 0 key.
	check(NewParams && NewParams->Metadata);

	NewParams->Metadata->AddAttributes(Metadata);

	if (InKey != PCGInvalidEntryKey)
	{
		PCGMetadataEntryKey OutKey = PCGInvalidEntryKey;
		NewParams->Metadata->SetAttributes(InKey, Metadata, OutKey);
	}

	return NewParams;
}

bool UPCGParamData::HasCachedLastSelector() const
{
	return bHasCachedLastSelector || (Metadata && Metadata->GetAttributeCount() > 0);
}

FPCGAttributePropertyInputSelector UPCGParamData::GetCachedLastSelector() const
{
	if (bHasCachedLastSelector)
	{
		return CachedLastSelector;
	}

	FPCGAttributePropertyInputSelector TempSelector{};

	// If we have attribute and no last selector, create a cached last selector on the latest attribute, to catch "CreateAttribute" calls that didn't use accessors.
	if (Metadata && Metadata->GetAttributeCount() > 0)
	{
		TempSelector.SetAttributeName(Metadata->GetLatestAttributeNameOrNone());
	}

	return TempSelector;
}

void UPCGParamData::SetLastSelector(const FPCGAttributePropertySelector& InSelector)
{
	// Check that it is not a not Attribute selector or Last/Source selector
	if (InSelector.GetSelection() != EPCGAttributePropertySelection::Attribute 
		|| InSelector.GetAttributeName() == PCGMetadataAttributeConstants::LastAttributeName
		|| InSelector.GetAttributeName() == PCGMetadataAttributeConstants::LastCreatedAttributeName
		|| InSelector.GetAttributeName() == PCGMetadataAttributeConstants::SourceAttributeName
		|| InSelector.GetAttributeName() == PCGMetadataAttributeConstants::SourceNameAttributeName)
	{
		return;
	}

	bHasCachedLastSelector = true;
	CachedLastSelector.ImportFromOtherSelector(InSelector);
}

UPCGParamData* UPCGParamData::DuplicateData(FPCGContext* Context, bool bInitializeMetadata) const
{
	UPCGParamData* NewParamData = FPCGContext::NewObject_AnyThread<UPCGParamData>(Context);
	if (bInitializeMetadata)
	{
		check(NewParamData && NewParamData->Metadata);
		NewParamData->Metadata->InitializeAsCopy(Metadata);
	}

	return NewParamData;
}