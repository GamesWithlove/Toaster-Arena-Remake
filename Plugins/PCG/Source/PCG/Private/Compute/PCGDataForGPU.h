// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGCommon.h"
#include "PCGData.h"

#include "PCGDataForGPU.generated.h"

class UPCGDataBinding;
class UPCGMetadata;
class UPCGPin;
class UPCGSettings;
enum class EPCGMetadataTypes : uint8;

enum class EPCGUnpackDataCollectionResult
{
	Success,
	DataMismatch,
	NoData
};

UENUM()
enum class EPCGKernelAttributeType : uint8
{
	None = 0 UMETA(Hidden),
	Bool,
	Int,
	Float,
	Float2,
	Float3,
	Float4,
	Rotator,
	Quat,
	Transform,
	StringKey,
	Name,

	Invalid = std::numeric_limits<uint8>::max() UMETA(Hidden),
};

USTRUCT()
struct FPCGKernelAttributeKey
{
	GENERATED_BODY()

	FPCGKernelAttributeKey() = default;

	explicit FPCGKernelAttributeKey(FName InName, EPCGKernelAttributeType InType)
		: Name(InName)
		, Type(InType)
	{}

	UPROPERTY(EditAnywhere, Category = "Settings")
	FName Name = NAME_None;

	UPROPERTY(EditAnywhere, Category = "Settings")
	EPCGKernelAttributeType Type = EPCGKernelAttributeType::Float;

	bool operator==(const FPCGKernelAttributeKey& Other) const;
	friend uint32 GetTypeHash(const FPCGKernelAttributeKey& In);
};

USTRUCT()
struct FPCGKernelAttributeIDAndType
{
	GENERATED_BODY()

	FPCGKernelAttributeIDAndType() = default;

	explicit FPCGKernelAttributeIDAndType(int32 InId, EPCGKernelAttributeType InType)
		: Id(InId)
		, Type(InType)
	{}

	UPROPERTY()
	int32 Id = INDEX_NONE;

	UPROPERTY()
	EPCGKernelAttributeType Type = EPCGKernelAttributeType::Invalid;
};

struct FPCGKernelAttributeDesc
{
	explicit FPCGKernelAttributeDesc(int32 InIndex, EPCGKernelAttributeType InType, FName InName)
		: Index(InIndex)
		, Type(InType)
		, Name(InName)
	{
	}

	explicit FPCGKernelAttributeDesc(int32 InIndex, EPCGKernelAttributeType InType, FName InName, TArray<int32>&& InUniqueStringKeys)
		: Index(InIndex)
		, Type(InType)
		, Name(InName)
		, UniqueStringKeys(MoveTemp(InUniqueStringKeys))
	{
	}

	// Attribute Id
	int32 Index = INDEX_NONE;

	EPCGKernelAttributeType Type = EPCGKernelAttributeType::Float;
	FName Name = NAME_None;

	/* All possible string keys arriving on this attribute (string keys are indices into the string table in the data binding). */
	TArray<int32> UniqueStringKeys;

	bool operator==(const FPCGKernelAttributeDesc& Other) const;
};

struct FPCGDataDesc
{
	FPCGDataDesc(EPCGDataType InType, int32 InElementCount);
	FPCGDataDesc(const UPCGData* InData, const TMap<FName, FPCGKernelAttributeIDAndType>& InGlobalAttributeLookupTable, const TArray<FString>& InStringTable);

	uint64 ComputePackedSize() const;

	EPCGDataType Type = EPCGDataType::Point;
	TArray<FPCGKernelAttributeDesc> AttributeDescs;
	int32 ElementCount = 0;

private:
	void InitializeAttributeDescs(const UPCGData* InData, const TMap<FName, FPCGKernelAttributeIDAndType>& InGlobalAttributeLookupTable, const TArray<FString>& InStringTable);
};

struct FPCGDataCollectionDesc
{
	static FPCGDataCollectionDesc BuildFromInputDataCollectionAndInputPinLabel(
		const FPCGDataCollection& InDataCollection,
		FName InputPinLabel,
		const TMap<FName, FPCGKernelAttributeIDAndType>& InAttributeLookupTable,
		const TArray<FString>& InStringTable);

	/** Computes the size (in bytes) of the header portion of the packed data collection buffer. */
	uint32 ComputePackedHeaderSizeBytes() const;

	/** Computes the size (in bytes) of the data collection after packing. */
	uint64 ComputePackedSizeBytes() const;

	void WriteHeader(TArray<uint32>& OutPackedDataCollectionHeader) const;

	/** Pack a data collection into the GPU data format. DataDescs defines which attributes are packed. */
	void PackDataCollection(const FPCGDataCollection& InDataCollection, FName InPin, const TArray<FString>& InStringTable, TArray<uint32>& OutPackedDataCollection) const;

	/** Unpack a buffer of 8-bit uints to a data collection. */
	EPCGUnpackDataCollectionResult UnpackDataCollection(const TArray<uint8>& InPackedData, FName InPin, const TArray<FString>& InStringTable, FPCGDataCollection& OutDataCollection) const;

	/** Compute total number of processing elements of the given type. */
	uint32 ComputeDataElementCount(EPCGDataType InDataType) const;

	/** Aggregate another data description. */
	void Combine(const FPCGDataCollectionDesc& Other);

	TArray<FPCGDataDesc> DataDescs;
};

USTRUCT()
struct FPCGDataForGPU
{
	GENERATED_BODY()

	// All the node input pins that have edges that cross from CPU to GPU.
	UPROPERTY()
	TSet<TSoftObjectPtr<const UPCGPin>> InputPins;

	UPROPERTY()
	TMap<TSoftObjectPtr<const UPCGPin>, FName> InputPinLabelAliases;

	// Since the compute graph is collapsed to a single element, all data crossing from CPU to GPU is in a single collection.
	UPROPERTY()
	FPCGDataCollection InputDataCollection;
};

namespace PCGDataForGPUHelpers
{
	/** Returns GPU type that will be used to represent the given metadata type. */
	EPCGKernelAttributeType GetAttributeTypeFromMetadataType(EPCGMetadataTypes MetadataType);

	/** Compute how attributes can be packed to custom floats. */
	void ComputeCustomFloatPacking(
		TArray<FName>& InAttributeNames,
		const UPCGDataBinding* InBinding,
		const FPCGDataCollectionDesc& InDataCollectionDescription,
		uint32& OutCustomFloatCount,
		TArray<FUint32Vector4>& OutAttributeIdOffsetStrides);

	/** Compute a description of all data arriving on InputPin. */
	FPCGDataCollectionDesc ComputeInputPinDataDesc(const UPCGSettings* Settings, const FName& InputPinLabel, const UPCGDataBinding* Binding);
	FPCGDataCollectionDesc ComputeInputPinDataDesc(const UPCGPin* InputPin, const UPCGDataBinding* Binding);
}
