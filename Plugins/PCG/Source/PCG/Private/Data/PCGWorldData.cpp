// Copyright Epic Games, Inc. All Rights Reserved.

#include "Data/PCGWorldData.h"

#include "PCGComponent.h"
#include "PCGSubsystem.h"
#include "Data/PCGPointData.h"
#include "Data/PCGSurfaceData.h"
#include "Data/PCGVolumeData.h"
#include "Elements/PCGSurfaceSampler.h"
#include "Elements/PCGVolumeSampler.h"
#include "Grid/PCGLandscapeCache.h"
#include "Helpers/PCGBlueprintHelpers.h"
#include "Helpers/PCGHelpers.h"
#include "Helpers/PCGWorldQueryHelpers.h"

#include "LandscapeProxy.h"
#include "Components/BrushComponent.h"
#include "Engine/OverlapResult.h"
#include "Engine/World.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGWorldData)

void FPCGWorldCommonQueryParams::Initialize()
{
	if (ActorTagFilter == EPCGWorldQueryFilterByTag::NoTagFilter)
	{
		ParsedActorTagsList.Reset();
	}
	else
	{
		TArray<FString> ParsedList = PCGHelpers::GetStringArrayFromCommaSeparatedList(ActorTagsList);
		ParsedActorTagsList.Reset();
		for (const FString& Tag : ParsedList)
		{
			ParsedActorTagsList.Add(FName(Tag));
		}
	}
}

void FPCGWorldVolumetricQueryParams::Initialize()
{
	FPCGWorldCommonQueryParams::Initialize();
}

void FPCGWorldRaycastQueryParams::Initialize()
{
	FPCGWorldCommonQueryParams::Initialize();
}

void FPCGWorldRayHitQueryParams::Initialize()
{
	FPCGWorldCommonQueryParams::Initialize();
}

#if WITH_EDITOR
void FPCGWorldCommonQueryParams::CommonPostLoad()
{
	if (bIgnoreLandscapeHits_DEPRECATED != false)
	{
		SelectLandscapeHits = EPCGWorldQuerySelectLandscapeHits::Exclude;
		bIgnoreLandscapeHits_DEPRECATED = false;
	}
}
#endif // WITH_EDITOR

void FPCGWorldRaycastQueryParams::PostSerialize(const FArchive& Ar)
{
#if WITH_EDITOR
	if (Ar.IsLoading() && Ar.IsPersistent() && !Ar.HasAnyPortFlags(PPF_Duplicate | PPF_DuplicateForPIE))
	{
		CommonPostLoad();
	}
#endif
}

void FPCGWorldVolumetricQueryParams::PostSerialize(const FArchive& Ar)
{
#if WITH_EDITOR
	if (Ar.IsLoading() && Ar.IsPersistent() && !Ar.HasAnyPortFlags(PPF_Duplicate | PPF_DuplicateForPIE))
	{
		CommonPostLoad();
	}
#endif
}

void FPCGWorldRayHitQueryParams::PostSerialize(const FArchive& Ar)
{
#if WITH_EDITOR
	if (Ar.IsLoading() && Ar.IsPersistent() && !Ar.HasAnyPortFlags(PPF_Duplicate | PPF_DuplicateForPIE))
	{
		CommonPostLoad();
	}
#endif
}

void UPCGWorldVolumetricData::Initialize(UWorld* InWorld, const FBox& InBounds)
{
	Super::Initialize(InBounds);
	World = InWorld;
	check(World.IsValid());
}

bool UPCGWorldVolumetricData::SamplePoint(const FTransform& InTransform, const FBox& InBounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const
{
	// This is a pure implementation.

	check(World.IsValid());

	FPCGMetadataAttribute<FSoftObjectPath>* ActorOverlappedAttribute = ((OutMetadata && QueryParams.bGetReferenceToActorHit) ? OutMetadata->GetMutableTypedAttribute<FSoftObjectPath>(PCGPointDataConstants::ActorReferenceAttribute) : nullptr);

	FCollisionObjectQueryParams ObjectQueryParams(QueryParams.CollisionChannel);
	FCollisionShape CollisionShape = FCollisionShape::MakeBox(InBounds.GetExtent() * InTransform.GetScale3D());
	FCollisionQueryParams Params; // TODO: apply properties from the settings when/if they exist
	Params.bTraceComplex = QueryParams.bTraceComplex;

	TArray<FOverlapResult> Overlaps;
	/*bool bOverlaps =*/ World->OverlapMultiByObjectType(Overlaps, InTransform.TransformPosition(InBounds.GetCenter()), InTransform.GetRotation(), ObjectQueryParams, CollisionShape, Params);

	TOptional<FOverlapResult> Overlap = PCGWorldQueryHelpers::FilterOverlapResults(&QueryParams, OriginatingComponent, Overlaps);

	// If searched for overlap and found one, or didn't search and didn't find one, set the point and return true. Otherwise, return false.
	if (Overlap.IsSet() == QueryParams.bSearchForOverlap)
	{
		OutPoint = FPCGPoint(InTransform, 1.0f, UPCGBlueprintHelpers::ComputeSeedFromPosition(InTransform.GetLocation()));
		OutPoint.SetLocalBounds(InBounds);

		if (Overlap.IsSet() && ActorOverlappedAttribute && Overlap.GetValue().GetActor())
		{
			OutMetadata->InitializeOnSet(OutPoint.MetadataEntry);
			ActorOverlappedAttribute->SetValue(OutPoint.MetadataEntry, FSoftObjectPath(Overlap.GetValue().GetActor()));
		}

		return true;
	}
	else
	{
		return false;
	}
}

const UPCGPointData* UPCGWorldVolumetricData::CreatePointData(FPCGContext* Context, const FBox& InBounds) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGWorldVolumetricData::CreatePointData);

	UPCGPointData* Data = FPCGContext::NewObject_AnyThread<UPCGPointData>(Context);
	Data->InitializeFromData(this);
	TArray<FPCGPoint>& Points = Data->GetMutablePoints();

	FBox EffectiveBounds = Bounds;
	if (InBounds.IsValid)
	{
		if (Bounds.IsValid)
		{
			EffectiveBounds = Bounds.Overlap(InBounds);
		}
		else
		{
			EffectiveBounds = InBounds;
		}
	}
	
	// Early out
	if (!EffectiveBounds.IsValid)
	{
		if (!Bounds.IsValid && !InBounds.IsValid)
		{
			UE_LOG(LogPCG, Error, TEXT("PCG World Volumetric Data cannot generate without sampling bounds. Consider using a Volume Sampler with the Unbounded option disabled."));
		}
		
		return Data;
	}

	PCGVolumeSampler::FVolumeSamplerParams SamplerParams;
	SamplerParams.VoxelSize = VoxelSize;
	SamplerParams.Bounds = EffectiveBounds;

	Data = PCGVolumeSampler::SampleVolume(Context, SamplerParams, this);
	UE_LOG(LogPCG, Verbose, TEXT("Volumetric world extracted %d points"), Data->GetPoints().Num());

	return Data;
}

UPCGSpatialData* UPCGWorldVolumetricData::CopyInternal(FPCGContext* Context) const
{
	UPCGWorldVolumetricData* NewVolumetricData = FPCGContext::NewObject_AnyThread<UPCGWorldVolumetricData>(Context);

	CopyBaseVolumeData(NewVolumetricData);

	NewVolumetricData->World = World;
	NewVolumetricData->OriginatingComponent = OriginatingComponent;
	NewVolumetricData->QueryParams = QueryParams;
	NewVolumetricData->QueryParams.Initialize();

	return NewVolumetricData;
}

/** World Ray Hit data implementation */
void UPCGWorldRayHitData::Initialize(UWorld* InWorld, const FTransform& InTransform, const FBox& InBounds, const FBox& InLocalBounds)
{
	World = InWorld;
	Transform = InTransform;
	Bounds = InBounds;
	LocalBounds = InLocalBounds;
	PCGWorldQueryHelpers::CreateRayHitAttributes(QueryParams, Metadata);
}

void UPCGWorldRayHitData::AddToCrc(FArchiveCrc32& Ar, bool bFullDataCrc) const
{
	Super::AddToCrc(Ar, bFullDataCrc);

	// This data does not have a bespoke CRC implementation so just use a global unique data CRC.
	AddUIDToCrc(Ar);
}

bool UPCGWorldRayHitData::SamplePoint(const FTransform& InTransform, const FBox& InBounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const
{
	// TODO: This seems to be a projection - along a direction. I suspect that UPCGWorldVolumetricData is the SamplePoint(), and this is the ProjectPoint() (in a direction)?
	check(World.IsValid());

	// Todo: consider prebuilding this
	FCollisionObjectQueryParams ObjectQueryParams(QueryParams.CollisionChannel);
	FCollisionQueryParams Params; // TODO: apply properties from the settings when/if they exist
	Params.bTraceComplex = QueryParams.bTraceComplex;
	Params.bReturnPhysicalMaterial = QueryParams.bGetReferenceToPhysicalMaterial;
	Params.bReturnFaceIndex = QueryParams.bGetFaceIndex || QueryParams.bGetUVCoords;

	FVector RayOrigin = InTransform.GetLocation() - ((InTransform.GetLocation() - QueryParams.RayOrigin) | QueryParams.RayDirection) * QueryParams.RayDirection;
	FVector RayEnd = RayOrigin + QueryParams.RayDirection * QueryParams.RayLength;

	TArray<FHitResult> Hits;
	if (World->LineTraceMultiByObjectType(Hits, RayOrigin, RayEnd, ObjectQueryParams, Params))
	{
		TOptional<FHitResult> HitResult = PCGWorldQueryHelpers::FilterRayHitResults(&QueryParams, OriginatingComponent, Hits);

		if (HitResult.IsSet())
		{
			const FHitResult& Hit = HitResult.GetValue();
			OutPoint = FPCGPoint(PCGWorldQueryHelpers::GetOrthonormalImpactTransform(Hit), 1.0f, UPCGBlueprintHelpers::ComputeSeedFromPosition(Hit.Location));
			PCGWorldQueryHelpers::ApplyRayHitMetadata(Hit, QueryParams, QueryParams.RayDirection, OutPoint, OutMetadata, World);
			return true;
		}
	}

	return false;
}

const UPCGPointData* UPCGWorldRayHitData::CreatePointData(FPCGContext* Context, const FBox& InBounds) const
{
	UPCGPointData* Data = FPCGContext::NewObject_AnyThread<UPCGPointData>(Context);
	Data->InitializeFromData(this);
	PCGWorldQueryHelpers::CreateRayHitAttributes(QueryParams, Metadata);

	FBox EffectiveBounds = Bounds;
	if (InBounds.IsValid)
	{
		if (Bounds.IsValid)
		{
			EffectiveBounds = Bounds.Overlap(InBounds);
		}
		else
		{
			EffectiveBounds = InBounds;
		}
	}

	// Early out
	if (!EffectiveBounds.IsValid)
	{
		if (!Bounds.IsValid && !InBounds.IsValid)
		{
			UE_LOG(LogPCG, Error, TEXT("PCG World Ray Hit Data cannot generate without sampling bounds. Consider using a Surface Sampler with the Unbounded option disabled."));
		}

		return Data;
	}

	// The default params will be fine in this case
	const PCGSurfaceSampler::FSurfaceSamplerParams Params;
	Data = PCGSurfaceSampler::SampleSurface(Context, /*InSurface=*/this, /*InBoundingShape=*/nullptr, EffectiveBounds, Params);

	return Data;
}

UPCGSpatialData* UPCGWorldRayHitData::CopyInternal(FPCGContext* Context) const
{
	UPCGWorldRayHitData* NewData = FPCGContext::NewObject_AnyThread<UPCGWorldRayHitData>(Context);

	CopyBaseSurfaceData(NewData);

	NewData->World = World;
	NewData->OriginatingComponent = OriginatingComponent;
	NewData->Bounds = Bounds;
	NewData->QueryParams = QueryParams;
	NewData->QueryParams.Initialize();

	return NewData;
}