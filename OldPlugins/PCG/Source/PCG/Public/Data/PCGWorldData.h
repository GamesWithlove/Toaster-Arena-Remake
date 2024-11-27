// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGVolumeData.h"
#include "PCGSurfaceData.h"
#include "Helpers/PCGWorldQueryHelpers.h"

#include "Engine/EngineTypes.h"

#include "PCGWorldData.generated.h"

class UPCGSpatialData;

class UWorld;
class UPCGMetadata;
class UPCGComponent;

UENUM()
enum class EPCGWorldQueryFilterByTag
{
	NoTagFilter,
	IncludeTagged,
	ExcludeTagged
};

UENUM()
enum class EPCGWorldQuerySelectLandscapeHits : uint8
{
	Exclude = 0 UMETA(ToolTip="Excludes hits from the landscape."),
	Include UMETA(ToolTip="Will report hits on the landscape."),
	Require UMETA(ToolTip="Will return only hits on the landscape.")
};

namespace PCGWorldRayHitConstants
{
	UE_DEPRECATED(5.5, "Please use 'PCGWorldQueryConstants::PhysicalMaterialReferenceAttribute' instead.")
	const FName PhysicalMaterialReferenceAttribute = PCGWorldQueryConstants::PhysicalMaterialReferenceAttribute;
}

USTRUCT(BlueprintType)
struct FPCGWorldCommonQueryParams
{
	GENERATED_BODY()

#if WITH_EDITOR
	void CommonPostLoad();
#endif

	/** If true, will ignore hits/overlaps on content created from PCG. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Filtering", meta = (PCG_Overridable))
	bool bIgnorePCGHits = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Filtering", meta = (PCG_Overridable))
	bool bIgnoreSelfHits = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Advanced", meta = (PCG_Overridable))
	TEnumAsByte<ECollisionChannel> CollisionChannel = ECC_WorldStatic;

	/** Queries against complex collision if enabled, performance warning */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Advanced", meta = (PCG_Overridable))
	bool bTraceComplex = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Filtering", meta = (PCG_Overridable))
	EPCGWorldQueryFilterByTag ActorTagFilter = EPCGWorldQueryFilterByTag::NoTagFilter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Filtering", meta = (PCG_Overridable, EditCondition = "ActorTagFilter != EPCGWorldQueryFilterByTag::NoTagFilter"))
	FString ActorTagsList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Filtering", meta = (PCG_Overridable, PCG_OverrideAliases="bIgnoreLandscapeHits"))
	EPCGWorldQuerySelectLandscapeHits SelectLandscapeHits = EPCGWorldQuerySelectLandscapeHits::Include;

#if WITH_EDITORONLY_DATA
	UPROPERTY(meta=(DeprecatedProperty, DeprecationMessage="IgnoreLandscapeHits has been deprecated in favor of SelectLandscapeHits"))
	bool bIgnoreLandscapeHits_DEPRECATED = false;
#endif

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	bool bGetReferenceToActorHit = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	bool bGetReferenceToPhysicalMaterial = false;

	// Not exposed, will be filled in when initializing this
	UPROPERTY()
	TSet<FName> ParsedActorTagsList;

protected:
	/** Sets up the data we need to efficiently perform the queries */
	void Initialize();
};

USTRUCT(BlueprintType)
struct FPCGWorldRaycastQueryParams : public FPCGWorldCommonQueryParams
{
	GENERATED_BODY()

	void Initialize();
	void PostSerialize(const FArchive& Ar);

	/** Ignore rays that hit backfaces. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Filtering", meta = (PCG_Overridable))
	uint8 bIgnoreBackfaceHits : 1 = false;

	/** Create an attribute for whether the raycast resulted in a hit. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	uint8 bGetImpact : 1 = false;

	/** Create an attribute for the impact location in world space. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	uint8 bGetImpactPoint : 1 = false;

	/** Create an attribute for the impact normal. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	uint8 bGetImpactNormal : 1 = false;

	/** Create an attribute for the reflection vector based on the ray incoming direction and the impact normal. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	uint8 bGetReflection : 1 = false;

	/** Create an attribute for the distance between the ray origin and the impact point. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	uint8 bGetDistance : 1 = false;

	/** Create an attribute for the impact point in the hit object's local space. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	uint8 bGetLocalImpactPoint : 1 = false;

	/** Create an attribute for the render material. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	uint8 bGetReferenceToRenderMaterial : 1 = false;

	/** Create an attribute for the static mesh. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	uint8 bGetReferenceToStaticMesh : 1 = false;

	/** Create an attribute for index of the hit face. Note: Will only work in complex traces. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable, EditCondition = "bTraceComplex"))
	uint8 bGetFaceIndex : 1 = false;

	/** Create an attribute for UV Coordinates of the surface hit. Note: Will only work in complex traces and must have 'Project Settings->Physics->Support UV From Hit Results' set to true. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable, EditCondition = "bTraceComplex"))
	uint8 bGetUVCoords : 1 = false;

	/** Create an attribute for the index of the element hit. Unique to the hit primitive. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable))
	uint8 bGetElementIndex : 1 = false;

	/** Will apply landscape layers and their values at the impact point. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable, EditCondition = "SelectLandscapeHits != EPCGWorldQuerySelectLandscapeHits::Exclude"))
	uint8 bApplyMetadataFromLandscape : 1 = false;

	/** The index of the render material when it is queried from the hit. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable, EditCondition = "bGetReferenceToRenderMaterial", EditConditionHides, DisplayAfter = "bGetReferenceToRenderMaterial"))
	int32 RenderMaterialIndex = 0;

	/** This UV Channel will be selected when retrieving UV Coordinates from a raycast query. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data|Attributes", meta = (PCG_Overridable, EditCondition = "bTraceComplex && bGetUVCoords", EditConditionHides, DisplayAfter = "bGetUVCoords"))
	int32 UVChannel = 0;
};

template<>
struct TStructOpsTypeTraits<FPCGWorldRaycastQueryParams> : public TStructOpsTypeTraitsBase2<FPCGWorldRaycastQueryParams>
{
	enum
	{
		WithPostSerialize = true,
	};
};

USTRUCT(BlueprintType)
struct FPCGWorldVolumetricQueryParams : public FPCGWorldCommonQueryParams
{
	GENERATED_BODY()

	void Initialize();
	void PostSerialize(const FArchive& Ar);

	/** Controls whether we are trying to find an overlap with physical objects (true) or to find empty spaces that do not contain anything (false) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Data, meta = (PCG_Overridable))
	bool bSearchForOverlap = true;
};

template<>
struct TStructOpsTypeTraits<FPCGWorldVolumetricQueryParams> : public TStructOpsTypeTraitsBase2<FPCGWorldVolumetricQueryParams>
{
	enum
	{
		WithPostSerialize = true,
	};
};

USTRUCT(BlueprintType)
struct FPCGWorldRayHitQueryParams : public FPCGWorldRaycastQueryParams
{
	GENERATED_BODY()

	void Initialize();
	void PostSerialize(const FArchive& Ar);

	/** Set ray parameters including origin, direction and length explicitly rather than deriving these from the generating actor bounds. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Data, meta = (DisplayName = "Set Ray Parameters", PCG_Overridable))
	bool bOverrideDefaultParams = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Data, meta = (PCG_Overridable, EditCondition = "bOverrideDefaultParams", EditConditionHides))
	FVector RayOrigin = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Data, meta = (PCG_Overridable, EditCondition = "bOverrideDefaultParams", EditConditionHides))
	FVector RayDirection = FVector(0.0, 0.0, -1.0);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Data, meta = (PCG_Overridable, EditCondition = "bOverrideDefaultParams", EditConditionHides))
	double RayLength = 1.0e+5; // 100m

	// TODO: see in FCollisionQueryParams if there are some flags we want to expose
	// examples: bReturnFaceIndex, bReturnPhysicalMaterial, some ignore patterns
};

template<>
struct TStructOpsTypeTraits<FPCGWorldRayHitQueryParams> : public TStructOpsTypeTraitsBase2<FPCGWorldRayHitQueryParams>
{
	enum
	{
		WithPostSerialize = true,
	};
};

/** Queries volume for presence of world collision or not. Can be used to voxelize environment. */
UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural))
class UPCGWorldVolumetricData : public UPCGVolumeData
{
	GENERATED_BODY()

public:
	PCG_API void Initialize(UWorld* InWorld, const FBox& InBounds = FBox(EForceInit::ForceInit));

	//~Begin UPCGSpatialData interface
	virtual bool IsBounded() const override { return !!Bounds.IsValid; }
	virtual bool SamplePoint(const FTransform& Transform, const FBox& Bounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const override;
	// TODO not sure what this would mean. Without a direction, this means perhaps finding closest point on any collision surface? Should we implement this disabled?
	//virtual bool ProjectPoint(const FTransform& InTransform, const FBox& InBounds, const FPCGProjectionParams& InParams, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const;
protected:
	virtual UPCGSpatialData* CopyInternal(FPCGContext* Context) const override;
	//~End UPCGSpatialData interface

public:
	//~Begin UPCGSpatialDataWithPointCache
	virtual bool SupportsBoundedPointData() const { return true; }
	virtual const UPCGPointData* CreatePointData(FPCGContext* Context) const override { return CreatePointData(Context, FBox(EForceInit::ForceInit)); }
	virtual const UPCGPointData* CreatePointData(FPCGContext* Context, const FBox& InBounds) const override;
	//~End UPCGSpatialDataWithPointCache

	UPROPERTY()
	TWeakObjectPtr<UWorld> World = nullptr;

	UPROPERTY()
	TWeakObjectPtr<UPCGComponent> OriginatingComponent = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Data, meta = (ShowOnlyInnerProperties))
	FPCGWorldVolumetricQueryParams QueryParams;
};

/** Executes collision queries against world collision. */
UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural))
class UPCGWorldRayHitData : public UPCGSurfaceData
{
	GENERATED_BODY()

public:
	PCG_API void Initialize(UWorld* InWorld, const FTransform& InTransform, const FBox& InBounds = FBox(EForceInit::ForceInit), const FBox& InLocalBounds = FBox(EForceInit::ForceInit));

	// ~Begin UPCGData interface
	virtual void AddToCrc(FArchiveCrc32& Ar, bool bFullDataCrc) const override;
	// ~End UPCGData interface

	//~Begin UPCGSpatialData interface
	virtual FBox GetBounds() const override { return Bounds; }
	virtual FBox GetStrictBounds() const override { return Bounds; }
	virtual bool IsBounded() const override { return !!Bounds.IsValid; }
	virtual bool SamplePoint(const FTransform& Transform, const FBox& Bounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const override;
	virtual bool HasNonTrivialTransform() const override { return true; }
	virtual FVector GetNormal() const override { return Transform.GetRotation().GetUpVector(); }
protected:
	virtual UPCGSpatialData* CopyInternal(FPCGContext* Context) const override;
	//~End UPCGSpatialData interface

public:
	// ~Begin UPCGSpatialDataWithPointCache interface
	virtual bool SupportsBoundedPointData() const { return true; }
	virtual const UPCGPointData* CreatePointData(FPCGContext* Context) const override { return CreatePointData(Context, FBox(EForceInit::ForceInit)); }
	virtual const UPCGPointData* CreatePointData(FPCGContext* Context, const FBox& InBounds) const override;
	// ~End UPCGSpatialDataWithPointCache interface

	UPROPERTY()
	TWeakObjectPtr<UWorld> World = nullptr;

	UPROPERTY()
	TWeakObjectPtr<UPCGComponent> OriginatingComponent = nullptr;

	UPROPERTY()
	FBox Bounds = FBox(EForceInit::ForceInit);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Data, meta = (ShowOnlyInnerProperties))
	FPCGWorldRayHitQueryParams QueryParams;
};
