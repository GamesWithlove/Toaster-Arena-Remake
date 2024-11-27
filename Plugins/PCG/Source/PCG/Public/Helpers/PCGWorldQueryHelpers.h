// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine/HitResult.h"
#include "Misc/Optional.h"

#include "PCGWorldQueryHelpers.generated.h"

class UPCGComponent;
class UPCGMetadata;
struct FHitResult;
struct FOverlapResult;
struct FPCGPoint;
struct FPCGWorldCommonQueryParams;
struct FPCGWorldRaycastQueryParams;
struct FPCGWorldVolumetricQueryParams;

UENUM()
enum class EPCGWorldRaycastMode : uint8
{
	Infinite UMETA(ToolTip = "Use the direction vector with 'infinite' magnitude."),
	ScaledVector UMETA(ToolTip = "Use the direction vector 'as-is' for casting the ray with its current magnitude."),
	NormalizedWithLength UMETA(ToolTip = "Normalize the direction vector and apply the length directly."),
	Segments UMETA(ToolTip = "User provided end points. Must match input points N:N, N:1, or 1:N.")
};

namespace PCGWorldQueryConstants
{
	const FName ImpactAttribute = TEXT("ImpactResult");
	const FName ImpactPointAttribute = TEXT("ImpactPoint");
	const FName ImpactNormalAttribute = TEXT("ImpactNormal");
	const FName ImpactReflectionAttribute = TEXT("ImpactReflection");
	const FName ImpactDistanceAttribute = TEXT("ImpactDistance");
	const FName LocalImpactPointAttribute = TEXT("ImpactLocalPoint");
	const FName PhysicalMaterialReferenceAttribute = TEXT("PhysicalMaterial");
	const FName RenderMaterialReferenceAttribute = TEXT("ImpactRenderMaterial");
	const FName StaticMeshReferenceAttribute = TEXT("ImpactStaticMesh");
	const FName ElementIndexAttribute = TEXT("ImpactElementIndex");
	const FName UVCoordAttribute = TEXT("ImpactUVCoords");
	const FName FaceIndexAttribute = TEXT("ImpactFaceIndex");
}

namespace PCGWorldQueryHelpers
{
	FTransform GetOrthonormalImpactTransform(const FHitResult& Hit);

	/** Returns false if a physics query doesn't meet the requirements of common query parameters. */
	bool FilterCommonQueryResults(
		const FPCGWorldCommonQueryParams* QueryParams,
		const UPrimitiveComponent* TriggeredComponent,
		const TWeakObjectPtr<UPCGComponent> OriginatingComponent);

	/** Filters through an array of hit results, testing them against raycast query parameters. Optional extra filter predicate. */
	TOptional<FHitResult> FilterRayHitResults(
		const FPCGWorldRaycastQueryParams* QueryParams,
		TWeakObjectPtr<UPCGComponent> OriginatingComponent,
		const TArray<FHitResult>& HitResults);

	/** Filters through an array of overlap results, testing them against raycast query parameters. Optional extra filter predicate. */
	TOptional<FOverlapResult> FilterOverlapResults(
		const FPCGWorldVolumetricQueryParams* QueryParams,
		TWeakObjectPtr<UPCGComponent> OriginatingComponent,
		const TArray<FOverlapResult>& OverlapResults);

	/** Creates hit result attributes based off query params. Can be called before ApplyRayHitMetadata. */
	bool CreateRayHitAttributes(const FPCGWorldRaycastQueryParams& QueryParams, UPCGMetadata* OutMetadata);

	/** Applies a 'miss' hit result to the metadata. To be called if the ray misses the target and the point should be kept. */
	bool ApplyRayMissMetadata(const FPCGWorldRaycastQueryParams& QueryParams, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata);

	/** Applies common world ray hit results to attributes. */
	bool ApplyRayHitMetadata(const FHitResult& HitResult,
		const FPCGWorldRaycastQueryParams& QueryParams,
		const FVector& RayDirection,
		FPCGPoint& OutPoint,
		UPCGMetadata* OutMetadata,
		TWeakObjectPtr<UWorld> World);
}