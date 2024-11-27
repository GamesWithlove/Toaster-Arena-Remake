// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGPoint.h"
#include "Data/PCGPointData.h"
#include "MeshSelectors/PCGISMDescriptor.h"
#include "Metadata/PCGMetadata.h"

#include "Engine/CollisionProfile.h"

#include "PCGMeshSelectorBase.generated.h"

class UPCGPointData;
class UPCGSpatialData;
class UStaticMesh;
struct FPCGContext;
struct FPCGStaticMeshSpawnerContext;

class UPCGStaticMeshSpawnerSettings;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPCGMeshInstanceList
{
	GENERATED_BODY()

	// Note: We need to explicitly disable warnings on these constructors/operators for clang to be happy with deprecated variables
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	explicit FPCGMeshInstanceList(const FPCGSoftISMComponentDescriptor& InDescriptor)
		: Descriptor(InDescriptor)
		, AttributePartitionIndex(INDEX_NONE)
	{}
	
	FPCGMeshInstanceList() = default;
	~FPCGMeshInstanceList() = default;
	FPCGMeshInstanceList(const FPCGMeshInstanceList&) = default;
	FPCGMeshInstanceList(FPCGMeshInstanceList&&) = default;
	FPCGMeshInstanceList& operator=(const FPCGMeshInstanceList&) = default;
	FPCGMeshInstanceList& operator=(FPCGMeshInstanceList&&) = default;
	PRAGMA_ENABLE_DEPRECATION_WARNINGS

	UPROPERTY(EditAnywhere, Category = Settings)
	FPCGSoftISMComponentDescriptor Descriptor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	TArray<FTransform> Instances;

	/** Tracks which partition the instance list belongs to. */
	int64 AttributePartitionIndex;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	TWeakObjectPtr<const UPCGPointData> PointData;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	TArray<int32> InstancesIndices;

#if WITH_EDITORONLY_DATA
	UE_DEPRECATED(5.5, "Use PointData + InstanceIndices instead.")
	UPROPERTY(meta = (DeprecatedProperty))
	TArray<int64> InstancesMetadataEntry;
#endif // WITH_EDITORONLY_DATA
};

UENUM()
enum class EPCGMeshSelectorMaterialOverrideMode : uint8
{
	NoOverride UMETA(Tooltip = "Does not apply any material overrides to the spawned mesh(es)"),
	StaticOverride UMETA(Tooltip = "Applies the material overrides provided in the Static Material Overrides array"),
	ByAttributeOverride UMETA(Tooltip = "Applies the materials overrides using the point data attribute(s) specified in the By Attribute Material Overrides array")
};

/** Struct used to efficiently gather overrides and cache them during instance packing */
struct PCG_API FPCGMeshMaterialOverrideHelper
{
	FPCGMeshMaterialOverrideHelper() = default;

	// Use this constructor when you have a 1:1 mapping between attributes or static overrides
	void Initialize(
		FPCGContext& InContext,
		bool bUseMaterialOverrideAttributes,
		const TArray<TSoftObjectPtr<UMaterialInterface>>& InStaticMaterialOverrides,
		const TArray<FName>& InMaterialOverrideAttributeNames,
		const UPCGMetadata* InMetadata);

	// Use this constructor when you have common attribute usage or separate static overrides
	void Initialize(
		FPCGContext& InContext,
		bool bInByAttributeOverride,
		const TArray<FName>& InMaterialOverrideAttributeNames,
		const UPCGMetadata* InMetadata);

	void Reset();

	bool IsInitialized() const { return bIsInitialized; }
	bool IsValid() const { return bIsValid; }
	bool OverridesMaterials() const { return bUseMaterialOverrideAttributes; }
	const TArray<TSoftObjectPtr<UMaterialInterface>>& GetMaterialOverrides(PCGMetadataEntryKey EntryKey);

private:
	// Cached data
	TArray<const FPCGMetadataAttributeBase*> MaterialAttributes;
	TArray<TMap<PCGMetadataValueKey, TSoftObjectPtr<UMaterialInterface>>> ValueKeyToOverrideMaterials;
	TArray<TSoftObjectPtr<UMaterialInterface>> WorkingMaterialOverrides;

	// Data needed to perform operations
	bool bIsInitialized = false;
	bool bIsValid = false;
	bool bUseMaterialOverrideAttributes = false;

	TArray<TSoftObjectPtr<UMaterialInterface>> StaticMaterialOverrides;
	TArray<FName> MaterialOverrideAttributeNames;
	const UPCGMetadata* Metadata = nullptr;

	void Initialize(FPCGContext& InContext);
};

UCLASS(Abstract, BlueprintType, ClassGroup = (Procedural))
class PCG_API UPCGMeshSelectorBase : public UObject 
{
	GENERATED_BODY()

public:
	virtual bool SelectInstances(
		FPCGStaticMeshSpawnerContext& Context,
		const UPCGStaticMeshSpawnerSettings* Settings,
		const UPCGPointData* InPointData,
		TArray<FPCGMeshInstanceList>& OutMeshInstances,
		UPCGPointData* OutPointData) const PURE_VIRTUAL(UPCGMeshSelectorBase::SelectInstances, return true;);
};
