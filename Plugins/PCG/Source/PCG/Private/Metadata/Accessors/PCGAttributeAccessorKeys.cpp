// Copyright Epic Games, Inc. All Rights Reserved.

#include "Metadata/Accessors/PCGAttributeAccessorKeys.h"
#include "Metadata/PCGMetadata.h"
#include "Metadata/PCGMetadataAttribute.h"

#include "PCGPoint.h"

//////////////////////////////////////////////////////////////////// 
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(const FPCGMetadataAttributeBase* Attribute)
	: FPCGAttributeAccessorKeysEntries(Attribute->GetMetadata())
{
	// Deprecated
}

FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(PCGMetadataEntryKey EntryKey)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/ false)
{
	ExtractedEntries.Add(EntryKey);
	Entries = TArrayView<PCGMetadataEntryKey>(ExtractedEntries);
}

FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(const UPCGMetadata* Metadata, bool bAddDefaultValueIfEmpty)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/ true)
{
	InitializeFromMetadata(Metadata, bAddDefaultValueIfEmpty);
	Entries = TArrayView<PCGMetadataEntryKey>(ExtractedEntries);
}

FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(UPCGMetadata* Metadata, bool bAddDefaultValueIfEmpty)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/ false)
{
	InitializeFromMetadata(Metadata, bAddDefaultValueIfEmpty);

	Entries = TArrayView<PCGMetadataEntryKey>(ExtractedEntries);
}

FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(const TArrayView<PCGMetadataEntryKey>& InEntries)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/false)
	, Entries(InEntries)
{

}

FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(const TArrayView<const PCGMetadataEntryKey>& InEntries)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/true)
	, Entries(const_cast<PCGMetadataEntryKey*>(InEntries.GetData()), InEntries.Num())
{

}

void FPCGAttributeAccessorKeysEntries::InitializeFromMetadata(const UPCGMetadata* Metadata, bool bAddDefaultValueIfEmpty)
{
	if (!Metadata)
	{
		return;
	}

	check(ExtractedEntries.IsEmpty());

	const PCGMetadataEntryKey ItemKeyLowerBound = Metadata->GetItemKeyCountForParent();
	const PCGMetadataEntryKey ItemKeyUpperBound = Metadata->GetItemCountForChild();
	const int64 Count = ItemKeyUpperBound - ItemKeyLowerBound;

	if (Count > 0)
	{
		ExtractedEntries.Reserve(Count);

		for (PCGMetadataEntryKey Entry = ItemKeyLowerBound; Entry < ItemKeyUpperBound; ++Entry)
		{
			ExtractedEntries.Add(Entry);
		}
	}

	if (ExtractedEntries.IsEmpty() && bAddDefaultValueIfEmpty)
	{
		ExtractedEntries.Add(PCGInvalidEntryKey);
	}
}

bool FPCGAttributeAccessorKeysEntries::GetMetadataEntryKeys(int32 InStart, TArrayView<PCGMetadataEntryKey*> OutEntryKeys)
{
	return PCGAttributeAccessorKeys::GetKeys(Entries, InStart, OutEntryKeys, [](PCGMetadataEntryKey& Key) -> PCGMetadataEntryKey* { return &Key; });
}

bool FPCGAttributeAccessorKeysEntries::GetMetadataEntryKeys(int32 InStart, TArrayView<const PCGMetadataEntryKey*> OutEntryKeys) const
{
	return PCGAttributeAccessorKeys::GetKeys(Entries, InStart, OutEntryKeys, [](const PCGMetadataEntryKey& Key) -> const PCGMetadataEntryKey* { return &Key; });
}

////////////////////////////////////////////////////////////////////

FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints(const TArrayView<FPCGPoint>& InPoints)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/ false)
	, Points(InPoints)
{}

FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints(const TArrayView<const FPCGPoint>& InPoints)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/ true)
	, Points(const_cast<FPCGPoint*>(InPoints.GetData()), InPoints.Num())
{}

FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints(FPCGPoint& InPoint)
	: FPCGAttributeAccessorKeysPoints(TArrayView<FPCGPoint>(&InPoint, 1))
{}

FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints(const FPCGPoint& InPoint)
	: FPCGAttributeAccessorKeysPoints(TArrayView<const FPCGPoint>(&InPoint, 1))
{}

bool FPCGAttributeAccessorKeysPoints::GetPointKeys(int32 InStart, TArrayView<FPCGPoint*> OutPoints)
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutPoints, [](FPCGPoint& Point) -> FPCGPoint* { return &Point; });
}

bool FPCGAttributeAccessorKeysPoints::GetPointKeys(int32 InStart, TArrayView<const FPCGPoint*> OutPoints) const
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutPoints, [](const FPCGPoint& Point) -> const FPCGPoint* { return &Point; });
}

bool FPCGAttributeAccessorKeysPoints::GetGenericObjectKeys(int32 InStart, TArrayView<void*> OutObjects)
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutObjects, [](FPCGPoint& Point) -> void* { return &Point; });
}

bool FPCGAttributeAccessorKeysPoints::GetGenericObjectKeys(int32 InStart, TArrayView<const void*> OutObjects) const
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutObjects, [](const FPCGPoint& Point) -> const void* { return &Point; });
}

bool FPCGAttributeAccessorKeysPoints::GetMetadataEntryKeys(int32 InStart, TArrayView<PCGMetadataEntryKey*> OutEntryKeys)
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutEntryKeys, [](FPCGPoint& Point) -> PCGMetadataEntryKey* { return &(Point.MetadataEntry); });
}

bool FPCGAttributeAccessorKeysPoints::GetMetadataEntryKeys(int32 InStart, TArrayView<const PCGMetadataEntryKey*> OutEntryKeys) const
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutEntryKeys, [](const FPCGPoint& Point) -> const PCGMetadataEntryKey* { return &(Point.MetadataEntry); });
}

////////////////////////////////////////////////////////////////////

FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset(const TArrayView<FPCGPoint>& InPoints, const TArrayView<const int32>& InPointIndices)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/ false)
{
	check(InPoints.Num() == InPointIndices.Num());
	Points.Reserve(InPointIndices.Num());
	Algo::Transform(InPointIndices, Points, [&InPoints](const int32 Index) -> FPCGPoint* { return &InPoints[Index]; });
}

FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset(const TArrayView<const FPCGPoint>& InPoints, const TArrayView<const int32>& InPointIndices)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/ true)
{
	Points.Reserve(InPointIndices.Num());
	Algo::Transform(InPointIndices, Points, [&InPoints](const int32 Index) -> FPCGPoint* { return const_cast<FPCGPoint*>(&InPoints[Index]); });
}

FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset(TArray<FPCGPoint*> InPointPtrs)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/ false)
	, Points(std::move(InPointPtrs))
{}

FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset(TArray<const FPCGPoint*> InPointPtrs)
	: IPCGAttributeAccessorKeys(/*bInReadOnly=*/ true)
	, Points(std::move(*reinterpret_cast<TArray<FPCGPoint*>*>(&InPointPtrs)))
{}

bool FPCGAttributeAccessorKeysPointsSubset::GetPointKeys(int32 InStart, TArrayView<FPCGPoint*> OutPoints)
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutPoints, [](FPCGPoint* Point) -> FPCGPoint* { return Point; });
}

bool FPCGAttributeAccessorKeysPointsSubset::GetPointKeys(int32 InStart, TArrayView<const FPCGPoint*> OutPoints) const
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutPoints, [](const FPCGPoint* Point) -> const FPCGPoint* { return Point; });
}

bool FPCGAttributeAccessorKeysPointsSubset::GetGenericObjectKeys(int32 InStart, TArrayView<void*> OutObjects)
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutObjects, [](FPCGPoint* Point) -> void* { return Point; });
}

bool FPCGAttributeAccessorKeysPointsSubset::GetGenericObjectKeys(int32 InStart, TArrayView<const void*> OutObjects) const
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutObjects, [](const FPCGPoint* Point) -> const void* { return Point; });
}

bool FPCGAttributeAccessorKeysPointsSubset::GetMetadataEntryKeys(int32 InStart, TArrayView<PCGMetadataEntryKey*> OutEntryKeys)
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutEntryKeys, [](FPCGPoint* Point) -> PCGMetadataEntryKey* { return &(Point->MetadataEntry); });
}

bool FPCGAttributeAccessorKeysPointsSubset::GetMetadataEntryKeys(int32 InStart, TArrayView<const PCGMetadataEntryKey*> OutEntryKeys) const
{
	return PCGAttributeAccessorKeys::GetKeys(Points, InStart, OutEntryKeys, [](const FPCGPoint* Point) -> const PCGMetadataEntryKey* { return &(Point->MetadataEntry); });
}