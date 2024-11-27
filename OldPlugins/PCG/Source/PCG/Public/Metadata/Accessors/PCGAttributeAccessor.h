// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IPCGAttributeAccessorTpl.h"

#include "Metadata/PCGMetadata.h"

template <typename T> class FPCGMetadataAttribute;


/**
* Templated accessor class for attributes. Will wrap around a typed attribute.
* Key supported: MetadataEntryKey and Points
*/
template <typename T>
class FPCGAttributeAccessor : public IPCGAttributeAccessorT<FPCGAttributeAccessor<T>>
{
public:
	using Type = T;
	using Super = IPCGAttributeAccessorT<FPCGAttributeAccessor<T>>;

	// Can't write if metadata is null
	FPCGAttributeAccessor(FPCGMetadataAttribute<T>* InAttribute, UPCGMetadata* InMetadata, bool bForceReadOnly = false)
		: Super(/*bInReadOnly=*/ InMetadata == nullptr || bForceReadOnly)
		, Attribute(InAttribute)
		, Metadata(InMetadata)
	{
		check(InAttribute);
	}

	FPCGAttributeAccessor(const FPCGMetadataAttribute<T>* InAttribute, const UPCGMetadata* InMetadata, bool bForceReadOnly = false)
		: Super(/*bInReadOnly=*/ true)
		, Attribute(const_cast<FPCGMetadataAttribute<T>*>(InAttribute))
		, Metadata(const_cast<UPCGMetadata*>(InMetadata))
	{
		check(InAttribute);
	}

	bool GetRangeImpl(TArrayView<T> OutValues, int32 Index, const IPCGAttributeAccessorKeys& Keys) const
	{
		TArray<const PCGMetadataEntryKey*, TInlineAllocator<256>> EntryKeyPtrs;
		EntryKeyPtrs.SetNumUninitialized(OutValues.Num());

		TArrayView<const PCGMetadataEntryKey*> EntryKeysView(EntryKeyPtrs);
		if (!Keys.GetKeys<PCGMetadataEntryKey>(Index, EntryKeysView))
		{
			return false;
		}

		TArray<PCGMetadataEntryKey, TInlineAllocator<256>> EntryKeys;
		EntryKeys.Reserve(EntryKeyPtrs.Num());
		Algo::Transform(EntryKeyPtrs, EntryKeys, [](const PCGMetadataEntryKey* KeyPtr) { return *KeyPtr; });

		Attribute->GetValuesFromItemKeys(TArrayView<PCGMetadataEntryKey>(EntryKeys), OutValues);

		return true;
	}

	bool SetRangeImpl(TArrayView<const T> InValues, int32 Index, IPCGAttributeAccessorKeys& Keys, EPCGAttributeAccessorFlags Flags)
	{
		if (EnumHasAnyFlags(Flags, EPCGAttributeAccessorFlags::AllowSetDefaultValue) && Keys.GetNum() == 1)
		{
			PCGMetadataEntryKey* EntryKey = nullptr;
			Keys.GetKey(EntryKey);

			if (EntryKey && *EntryKey == PCGInvalidEntryKey)
			{
				check(!InValues.IsEmpty())
				Attribute->SetDefaultValue(InValues[0]);
				return true;
			}
		}

		TArray<PCGMetadataEntryKey*, TInlineAllocator<512>> EntryKeys;
		EntryKeys.SetNumUninitialized(InValues.Num());
		TArrayView<PCGMetadataEntryKey*> EntryKeysView(EntryKeys);

		int32 Start = Index;

		if (!bWasPrepared || PCG::Private::MetadataTraits<T>::CompressData)
		{
			if (!Prepare(Keys, InValues.Num(), /*bCanReuseEntryKeys=*/EnumHasAnyFlags(Flags, EPCGAttributeAccessorFlags::AllowReuseMetadataEntryKey), Index, /*bPreallocateValues=*/false, &EntryKeysView, &Start))
			{
				return false;
			}

			{
				//TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAttributeAccessor::SetRangeImpl::SetValues);
				Attribute->SetValues(EntryKeys, InValues);
			}
		}
		else
		{
			//TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAttributeAccessor::SetRangeImpl::SetValues);
			Attribute->SetValues_TryLockless(EntryKeysView, InValues, Start);
		}

		return true;
	}

	virtual bool IsAttribute() const override { return true; }

	bool Prepare(IPCGAttributeAccessorKeys& Keys, int32 Count, const bool bCanReuseEntryKeys, int32 Index, bool bPreallocateValues, TArrayView<PCGMetadataEntryKey*>* OutEntryKeys = nullptr, int32* OutStartIndex = nullptr)
	{
		//TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAttributeAccessor::Prepare);

		check(!OutEntryKeys || OutEntryKeys->Num() == Count);

		TArray<PCGMetadataEntryKey*, TInlineAllocator<512>> EntryKeys;
		TArrayView<PCGMetadataEntryKey*> EntryKeysView;
		if (!OutEntryKeys)
		{
			EntryKeys.SetNumUninitialized(Count);
			EntryKeysView = TArrayView<PCGMetadataEntryKey*>(EntryKeys);
		}
		else
		{
			EntryKeysView = *OutEntryKeys;
		}

		if (!Keys.GetKeys<PCGMetadataEntryKey>(Index, EntryKeysView))
		{
			return false;
		}

		TArray<PCGMetadataEntryKey*, TInlineAllocator<512>> EntriesToSet;
		EntriesToSet.Reserve(Count);

		// Implementation note: this is a stripped down version of UPCGMetadata::InitializeOnSet
		for (int EntryIndex = 0; EntryIndex < EntryKeysView.Num(); ++EntryIndex)
		{
			PCGMetadataEntryKey& EntryKey = *EntryKeysView[EntryIndex];
			if (EntryKey == PCGInvalidEntryKey || (EntryKey < Metadata->GetItemKeyCountForParent() && !bCanReuseEntryKeys))
			{
				EntriesToSet.Add(&EntryKey);
			}
		}

		if (!EntriesToSet.IsEmpty())
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAttributeAccessor::Prepare::AddEntriesInPlace);
			Metadata->AddEntriesInPlace(EntriesToSet);
		}

		if (bPreallocateValues && ensure(!bWasPrepared))
		{
			const int32 StartIndex = Attribute->PreallocateValues(EntryKeysView, /*bLockless=*/false);
			if (OutStartIndex)
			{
				*OutStartIndex = StartIndex;
			}
		}

		return true;
	}

	virtual void Prepare(IPCGAttributeAccessorKeys& Keys, int32 Count, const bool bCanReuseEntryKeys) override
	{
		if (!ensure(!bWasPrepared))
		{
			return;
		}

		Attribute->Prepare(Count);
		bWasPrepared = Prepare(Keys, Count, bCanReuseEntryKeys, /*Index=*/0, /*bPreallocateValues=*/true);
	}

private:
	FPCGMetadataAttribute<T>* Attribute = nullptr;
	UPCGMetadata* Metadata = nullptr;
	bool bWasPrepared = false;
};
