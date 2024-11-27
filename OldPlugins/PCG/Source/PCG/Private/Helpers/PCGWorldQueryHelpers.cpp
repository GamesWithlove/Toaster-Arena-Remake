// Copyright Epic Games, Inc. All Rights Reserved.

#include "Helpers/PCGWorldQueryHelpers.h"

#include "PCGComponent.h"
#include "PCGSubsystem.h"
#include "Data/PCGPointData.h"
#include "Data/PCGWorldData.h"
#include "Grid/PCGLandscapeCache.h"
#include "Helpers/PCGHelpers.h"

#include "LandscapeProxy.h"
#include "Components/BrushComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/HitResult.h"
#include "Engine/OverlapResult.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialInterface.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "PhysicsEngine/BodySetup.h"
#include "PhysicsEngine/PhysicsSettings.h"
#include "UObject/SoftObjectPath.h"

namespace PCGWorldQueryHelpers
{
	FTransform GetOrthonormalImpactTransform(const FHitResult& Hit)
	{
		// Implementation note: this uses the same orthonormalization process as the landscape cache
		ensure(Hit.ImpactNormal.IsNormalized());
		const FVector ArbitraryVector = (FMath::Abs(Hit.ImpactNormal.Y) < (1.f - UE_KINDA_SMALL_NUMBER) ? FVector::YAxisVector : FVector::ZAxisVector);
		const FVector XAxis = (ArbitraryVector ^ Hit.ImpactNormal).GetSafeNormal();
		const FVector YAxis = (Hit.ImpactNormal ^ XAxis);

		return FTransform(XAxis, YAxis, Hit.ImpactNormal, Hit.ImpactPoint);
	}

	bool FilterCommonQueryResults(
		const FPCGWorldCommonQueryParams* QueryParams,
		const UPrimitiveComponent* TriggeredComponent,
		const TWeakObjectPtr<UPCGComponent> OriginatingComponent)
	{
		check(QueryParams && TriggeredComponent);

		// Skip invisible walls / triggers / volumes
		if (TriggeredComponent->IsA<UBrushComponent>())
		{
			return false;
		}

		// Skip "No collision" type actors
		if (!TriggeredComponent->IsQueryCollisionEnabled() || TriggeredComponent->GetCollisionResponseToChannel(QueryParams->CollisionChannel) != ECR_Block)
		{
			return false;
		}

		// Skip to-be-cleaned-up PCG-created objects
		if (TriggeredComponent->ComponentHasTag(PCGHelpers::MarkedForCleanupPCGTag) || (TriggeredComponent->GetOwner() && TriggeredComponent->GetOwner()->ActorHasTag(PCGHelpers::MarkedForCleanupPCGTag)))
		{
			return false;
		}

		// Optionally skip all PCG created objects
		if (QueryParams->bIgnorePCGHits && (TriggeredComponent->ComponentHasTag(PCGHelpers::DefaultPCGTag) || (TriggeredComponent->GetOwner() && TriggeredComponent->GetOwner()->ActorHasTag(PCGHelpers::DefaultPCGActorTag))))
		{
			return false;
		}

		// Skip self-generated PCG objects optionally
		if (QueryParams->bIgnoreSelfHits && OriginatingComponent.IsValid() && TriggeredComponent->ComponentTags.Contains(OriginatingComponent->GetFName()))
		{
			return false;
		}

		// Additional filter as provided in the QueryParams base class
		if (QueryParams->ActorTagFilter != EPCGWorldQueryFilterByTag::NoTagFilter)
		{
			if (AActor* Actor = TriggeredComponent->GetOwner())
			{
				bool bFoundMatch = false;
				for (const FName& Tag : Actor->Tags)
				{
					if (QueryParams->ParsedActorTagsList.Contains(Tag))
					{
						bFoundMatch = true;
						break;
					}
				}

				if (bFoundMatch != (QueryParams->ActorTagFilter == EPCGWorldQueryFilterByTag::IncludeTagged))
				{
					return false;
				}
			}
			else if (QueryParams->ActorTagFilter == EPCGWorldQueryFilterByTag::IncludeTagged)
			{
				return false;
			}
		}

		// Landscape or not, include it if this is true
		if (QueryParams->SelectLandscapeHits == EPCGWorldQuerySelectLandscapeHits::Include)
		{
			return true;
		}

		bool bTriggeredOnLandscape = TriggeredComponent->GetOwner() && TriggeredComponent->GetOwner()->IsA<ALandscapeProxy>();

		// If excluding, skip. If requiring, and it's not a landscape, skip.
		if ((bTriggeredOnLandscape && QueryParams->SelectLandscapeHits == EPCGWorldQuerySelectLandscapeHits::Exclude) ||
			(!bTriggeredOnLandscape && QueryParams->SelectLandscapeHits == EPCGWorldQuerySelectLandscapeHits::Require))
		{
			return false;
		}

		return true;
	}

	TOptional<FHitResult> FilterRayHitResults(
		const FPCGWorldRaycastQueryParams* QueryParams,
		const TWeakObjectPtr<UPCGComponent> OriginatingComponent,
		const TArray<FHitResult>& HitResults)
	{
		check(QueryParams);

		for (const FHitResult& Hit : HitResults)
		{
			const UPrimitiveComponent* HitComponent = Hit.GetComponent();

			if (!FilterCommonQueryResults(QueryParams, HitComponent, OriginatingComponent))
			{
				continue;
			}

			// Optionally skip backface hits
			if (QueryParams->bIgnoreBackfaceHits)
			{
				// If it's a landscape, we cull if the normal is negative in Z direction (landscape normal is always the +Z axis). If not, then we cull if the impact normal and the ray are headed in the same direction
				if (Hit.bStartPenetrating || (Hit.GetActor() && Hit.GetActor()->IsA<ALandscapeProxy>() && Hit.ImpactNormal.Z < 0) || (Hit.TraceEnd - Hit.TraceStart).Dot(Hit.ImpactNormal) > 0)
				{
					continue;
				}
			}

			return Hit;
		}

		return {};
	}

	TOptional<FOverlapResult> FilterOverlapResults(
		const FPCGWorldVolumetricQueryParams* QueryParams,
		const TWeakObjectPtr<UPCGComponent> OriginatingComponent,
		const TArray<FOverlapResult>& OverlapResults)
	{
		check(QueryParams);

		for (const FOverlapResult& Overlap : OverlapResults)
		{
			const UPrimitiveComponent* OverlappedComponent = Overlap.GetComponent();

			if (!FilterCommonQueryResults(QueryParams, OverlappedComponent, OriginatingComponent))
			{
				continue;
			}

			return Overlap;
		}

		return {};
	}

	bool CreateRayHitAttributes(const FPCGWorldRaycastQueryParams& QueryParams, UPCGMetadata* OutMetadata)
	{
		auto CreateAttribute = [OutMetadata]<typename Type>(FName AttributeName, bool bShouldCreate, const Type& DefaultValue) -> bool
		{
			return !bShouldCreate || OutMetadata->FindOrCreateAttribute<Type>(AttributeName, DefaultValue, /*bAllowsInterpolation=*/true, /*bOverrideParent=*/false, /*bOverwriteIfTypeMismatch=*/true);
		};

		bool bResult = true;
		// Default T/F Impact to true, as most cases misses will be ignored completely
		bResult &= CreateAttribute(PCGWorldQueryConstants::ImpactAttribute, QueryParams.bGetImpact, true);
		bResult &= CreateAttribute(PCGWorldQueryConstants::ImpactPointAttribute, QueryParams.bGetImpactPoint, FVector::ZeroVector);
		bResult &= CreateAttribute(PCGWorldQueryConstants::ImpactNormalAttribute, QueryParams.bGetImpactNormal, FVector::ZeroVector);
		bResult &= CreateAttribute(PCGWorldQueryConstants::ImpactReflectionAttribute, QueryParams.bGetReflection, FVector::ZeroVector);
		bResult &= CreateAttribute(PCGWorldQueryConstants::ImpactDistanceAttribute, QueryParams.bGetDistance, 0.0);
		bResult &= CreateAttribute(PCGWorldQueryConstants::LocalImpactPointAttribute, QueryParams.bGetLocalImpactPoint, FVector::ZeroVector);
		bResult &= CreateAttribute(PCGPointDataConstants::ActorReferenceAttribute, QueryParams.bGetReferenceToActorHit, FSoftObjectPath());
		bResult &= CreateAttribute(PCGWorldQueryConstants::PhysicalMaterialReferenceAttribute, QueryParams.bGetReferenceToPhysicalMaterial, FSoftObjectPath());
		bResult &= CreateAttribute(PCGWorldQueryConstants::RenderMaterialReferenceAttribute, QueryParams.bGetReferenceToRenderMaterial, FSoftObjectPath());
		bResult &= CreateAttribute(PCGWorldQueryConstants::StaticMeshReferenceAttribute, QueryParams.bGetReferenceToStaticMesh, FSoftObjectPath());
		bResult &= CreateAttribute(PCGWorldQueryConstants::ElementIndexAttribute, QueryParams.bGetElementIndex, int32{0});
		bResult &= CreateAttribute(PCGWorldQueryConstants::UVCoordAttribute, QueryParams.bTraceComplex && QueryParams.bGetUVCoords, FVector2D::ZeroVector);
		bResult &= CreateAttribute(PCGWorldQueryConstants::FaceIndexAttribute, QueryParams.bTraceComplex && QueryParams.bGetFaceIndex, int32{0});

		return bResult;
	}

	bool ApplyRayMissMetadata(const FPCGWorldRaycastQueryParams& QueryParams, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata)
	{
		if (!QueryParams.bGetImpact)
		{
			return true;
		}

		if (!OutMetadata)
		{
			return false;
		}

		if (FPCGMetadataAttribute<bool>* Attribute = OutMetadata->FindOrCreateAttribute<bool>(PCGWorldQueryConstants::ImpactAttribute, true, /*bAllowsInterpolation=*/true, /*bOverrideParent=*/false, /*bOverwriteIfTypeMismatch=*/true))
		{
			OutMetadata->InitializeOnSet(OutPoint.MetadataEntry);
			Attribute->SetValue(OutPoint.MetadataEntry, false);
			return true;
		}

		return false;
	}

	// TODO: Add an option to create and apply ranges
	bool ApplyRayHitMetadata(
		const FHitResult& HitResult,
		const FPCGWorldRaycastQueryParams& QueryParams,
		const FVector& RayDirection,
		FPCGPoint& OutPoint,
		UPCGMetadata* OutMetadata,
		TWeakObjectPtr<UWorld> World)
	{
		if (!OutMetadata)
		{
			return false;
		}

		auto ApplyAttribute = [&OutPoint, OutMetadata]<typename Type>(FName AttributeName, const Type& Value, bool bShouldApply = true)
		{
			if (!bShouldApply)
			{
				return true;
			}

			if (FPCGMetadataAttribute<Type>* Attribute = OutMetadata->GetMutableTypedAttribute<Type>(AttributeName))
			{
				OutMetadata->InitializeOnSet(OutPoint.MetadataEntry);
				Attribute->SetValue(OutPoint.MetadataEntry, Value);
				return true;
			}

			return false;
		};

		const FHitResult& Hit = HitResult;

		FVector ReflectionVector = FVector::ZeroVector;
		if (QueryParams.bGetReflection)
		{
			ReflectionVector = RayDirection - 2.0 * (FVector(Hit.ImpactNormal) | RayDirection) * FVector(Hit.ImpactNormal);
			ReflectionVector.Normalize();
		}

		bool bResult = true;
		// Note: The T/F Impact attribute is true by default, so no need to set it directly.
		bResult &= ApplyAttribute(PCGWorldQueryConstants::ImpactPointAttribute, FVector(Hit.ImpactPoint), QueryParams.bGetImpactPoint);
		bResult &= ApplyAttribute(PCGWorldQueryConstants::ImpactNormalAttribute, FVector(Hit.ImpactNormal), QueryParams.bGetImpactNormal);
		bResult &= ApplyAttribute(PCGWorldQueryConstants::ImpactReflectionAttribute, ReflectionVector, QueryParams.bGetReflection);
		bResult &= ApplyAttribute(PCGWorldQueryConstants::ImpactDistanceAttribute, (Hit.ImpactPoint - Hit.TraceStart).Length(), QueryParams.bGetDistance);
		bResult &= ApplyAttribute(PCGPointDataConstants::ActorReferenceAttribute, FSoftObjectPath(Hit.GetActor()), QueryParams.bGetReferenceToActorHit);
		bResult &= ApplyAttribute(PCGWorldQueryConstants::PhysicalMaterialReferenceAttribute, FSoftObjectPath(Hit.PhysMaterial.Get()), QueryParams.bGetReferenceToPhysicalMaterial);
		bResult &= ApplyAttribute(PCGWorldQueryConstants::ElementIndexAttribute, static_cast<int32>(Hit.ElementIndex), QueryParams.bGetElementIndex);

		if (ALandscapeProxy* Landscape = Cast<ALandscapeProxy>(Hit.GetActor()))
		{
			if (const UMaterialInterface* RenderMaterial = Landscape->GetLandscapeMaterial())
			{
				bResult &= ApplyAttribute(PCGWorldQueryConstants::RenderMaterialReferenceAttribute, FSoftObjectPath(RenderMaterial), QueryParams.bGetReferenceToRenderMaterial);
			}

			if (QueryParams.bApplyMetadataFromLandscape && World.IsValid() && World->GetSubsystem<UPCGSubsystem>())
			{
				if (UPCGLandscapeCache* LandscapeCache = World->GetSubsystem<UPCGSubsystem>()->GetLandscapeCache())
				{
					// TODO: This is not ideal, but we won't have the Landscape until execution and the LandscapeCache intends on requiring it
					const TArray<FName> Layers = LandscapeCache->GetLayerNames(Landscape);
					for (const FName& Layer : Layers)
					{
						// Use Threadsafe version for on the fly attribute creation.
						OutMetadata->FindOrCreateAttribute<float>(Layer, float());
					}

					LandscapeCache->SampleMetadataOnPoint(Landscape, OutPoint, OutMetadata);
				}
			}
		}
		else if (UPrimitiveComponent* HitComponent = Hit.GetComponent())
		{
			if (QueryParams.bGetReferenceToRenderMaterial)
			{
				const UMaterialInterface* RenderMaterial = HitComponent->GetMaterial(QueryParams.RenderMaterialIndex);
				bResult &= RenderMaterial && ApplyAttribute(PCGWorldQueryConstants::RenderMaterialReferenceAttribute, FSoftObjectPath(RenderMaterial));
			}

			if (QueryParams.bGetLocalImpactPoint)
			{
				const FVector LocalHitLocation = HitComponent->GetComponentToWorld().InverseTransformPosition(Hit.ImpactPoint);
				bResult &= ApplyAttribute(PCGWorldQueryConstants::LocalImpactPointAttribute, LocalHitLocation);
			}

			if (const UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(HitComponent))
			{
				if (UStaticMesh* StaticMesh = StaticMeshComponent->GetStaticMesh())
				{
					bResult &= ApplyAttribute(PCGWorldQueryConstants::StaticMeshReferenceAttribute, FSoftObjectPath(StaticMesh), QueryParams.bGetReferenceToStaticMesh);
				}

				// Implementation note: FaceIndex will return -1 if complex queries are disabled
				bResult &= ApplyAttribute(PCGWorldQueryConstants::FaceIndexAttribute, Hit.FaceIndex, QueryParams.bTraceComplex && QueryParams.bGetFaceIndex);

				if (QueryParams.bTraceComplex && QueryParams.bGetUVCoords && UPhysicsSettings::Get()->bSupportUVFromHitResults)
				{
					FVector2D UVCoords;
					if (UGameplayStatics::FindCollisionUV(Hit, QueryParams.UVChannel, UVCoords))
					{
						bResult &= ApplyAttribute(PCGWorldQueryConstants::UVCoordAttribute, UVCoords);
					}
				}
			}
		}

		return bResult;
	}
}