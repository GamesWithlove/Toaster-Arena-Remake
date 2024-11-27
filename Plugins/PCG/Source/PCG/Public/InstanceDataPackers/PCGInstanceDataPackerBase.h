// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGInstanceDataPackerBase.generated.h"

class FPCGMetadataAttributeBase;
class IPCGAttributeAccessor;
class IPCGAttributeAccessorKeys;
class UPCGMetadata;
class UPCGSpatialData;
struct FPCGContext;
struct FPCGMeshInstanceList;

USTRUCT(BlueprintType)
struct FPCGPackedCustomData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	int NumCustomDataFloats = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
    TArray<float> CustomData;
};

UCLASS(Abstract, BlueprintType, Blueprintable, ClassGroup = (Procedural))
class PCG_API UPCGInstanceDataPackerBase : public UObject 
{
	GENERATED_BODY()

public:
	/** Defines the strategy for (H)ISM custom float data packing */
	UFUNCTION(BlueprintNativeEvent, Category = InstancePacking)
	void PackInstances(FPCGContext& Context, const UPCGSpatialData* InSpatialData, const FPCGMeshInstanceList& InstanceList, FPCGPackedCustomData& OutPackedCustomData) const;

	virtual void PackInstances_Implementation(FPCGContext& Context, const UPCGSpatialData* InSpatialData, const FPCGMeshInstanceList& InstanceList, FPCGPackedCustomData& OutPackedCustomData) const;

	/** Interprets Metadata TypeId and increments OutPackedCustomData.NumCustomDataFloats appropriately. Returns false if the type could not be interpreted. */
	UFUNCTION(BlueprintCallable, Category = InstancePacking)
	bool AddTypeToPacking(int TypeId, FPCGPackedCustomData& OutPackedCustomData) const;

	/** Build a PackedCustomData by processing each attribute in order for each point in the InstanceList */
	UFUNCTION(BlueprintCallable, Category = InstancePacking) 
	void PackCustomDataFromAttributes(const FPCGMeshInstanceList& InstanceList, const UPCGMetadata* Metadata, const TArray<FName>& AttributeNames, FPCGPackedCustomData& OutPackedCustomData) const;

	/** Build a PackedCustomData by processing each attribute in order for each point in the InstanceList */
	void PackCustomDataFromAttributes(const FPCGMeshInstanceList& InstanceList, const TArray<const FPCGMetadataAttributeBase*>& Attributes, FPCGPackedCustomData& OutPackedCustomData) const;

	/** Build a PackedCustomData by processing each accessor in order for each point in the InstanceList */
	void PackCustomDataFromAccessors(const FPCGMeshInstanceList& InstanceList, TArray<TUniquePtr<const IPCGAttributeAccessor>> Accessors, TArray<TUniquePtr<const IPCGAttributeAccessorKeys>> AccessorKeys, FPCGPackedCustomData& OutPackedCustomData) const;

	/** If OutNames is not null, returns a list of all attributes that will be packed. Returns true if this list can be statically determined (prior to execution). */
	virtual bool GetAttributeNames(TArray<FName>* OutNames) { return false; }
};
