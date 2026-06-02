// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshCardRepresentationGenerator.h"
#include "RealtimeMeshComponentModule.h"
#include "Core/RealtimeMeshFuture.h"
#include "RealtimeMeshRepresentationCommon.h"
#include "RealtimeMeshSimple.h"
#include "UDynamicMesh.h"
#include "Mesh/RealtimeMeshBasicShapeTools.h"
#include "Mesh/RealtimeMeshBlueprintMeshBuilder.h"
#include "Mesh/RealtimeMeshCardRepresentation.h"
#include "Spatial/FastWinding.h"
#include "Templates/SharedPointer.h"
#include "UObject/StrongObjectPtr.h"

using namespace UE::Geometry;
using namespace RealtimeMesh;



namespace MeshCardGen
{
	int32 constexpr NumAxisAlignedDirections = 6;
	int32 constexpr MaxCardsPerMesh = 32;
};

template<typename MeshType>
class FGenerateCardMeshContext
{
public:
	const FString& MeshName;
	const MeshType& Mesh;
	const UE::Geometry::TMeshAABBTree3<MeshType>& MeshBVH;
	FCardRepresentationData& OutData;
	bool bMostlyTwoSided;

	FGenerateCardMeshContext(const FString& InMeshName, const MeshType& InMesh,
		const UE::Geometry::TMeshAABBTree3<MeshType>& InMeshBVH, FCardRepresentationData& InOutData)
		: MeshName(InMeshName)
		, Mesh(InMesh)
		, MeshBVH(InMeshBVH)
		, OutData(InOutData)
		, bMostlyTwoSided(false)
	{}
};

struct FIntBox
{
	FIntBox()
		: Min(INT32_MAX)
		, Max(-INT32_MAX)
	{}

	FIntBox(const FIntVector& InMin, const FIntVector& InMax)
		: Min(InMin)
		, Max(InMax)
	{}

	void Init()
	{
		Min = FIntVector(INT32_MAX);
		Max = FIntVector(-INT32_MAX);
	}

	void Add(const FIntVector& Point)
	{
		Min = FIntVector(FMath::Min(Min.X, Point.X), FMath::Min(Min.Y, Point.Y), FMath::Min(Min.Z, Point.Z));
		Max = FIntVector(FMath::Max(Max.X, Point.X), FMath::Max(Max.Y, Point.Y), FMath::Max(Max.Z, Point.Z));
	}

	FIntVector2 GetFaceXY() const
	{
		return FIntVector2(Max.X + 1 - Min.X, Max.Y + 1 - Min.Y);
	}

	int32 GetFaceArea() const
	{
		return (Max.X + 1 - Min.X) * (Max.Y + 1 - Min.Y);
	}

	bool Contains(const FIntBox& Other) const
	{
		if (Other.Min.X >= Min.X && Other.Max.X <= Max.X
			&& Other.Min.Y >= Min.Y && Other.Max.Y <= Max.Y
			&& Other.Min.Z >= Min.Z && Other.Max.Z <= Max.Z)
		{
			return true;
		}

		return false;
	}

	FIntVector GetAxisDistanceFromBox(const FIntBox& Box)
	{
		const FIntVector CenterDelta2 = (Max - Min) - (Box.Max - Box.Min);
		const FIntVector ExtentSum2 = (Max + Min) + (Box.Max + Box.Min);

		FIntVector AxisDistance;
		AxisDistance.X = FMath::Max(FMath::Abs(CenterDelta2.X) - ExtentSum2.X, 0) / 2;
		AxisDistance.Y = FMath::Max(FMath::Abs(CenterDelta2.Y) - ExtentSum2.Y, 0) / 2;
		AxisDistance.Z = FMath::Max(FMath::Abs(CenterDelta2.Z) - ExtentSum2.Z, 0) / 2;
		return AxisDistance;
	}

	FIntVector GetAxisDistanceFromPoint(const FIntVector& Point)
	{
		FIntVector AxisDistance;
		AxisDistance.X = FMath::Max(FMath::Max(Min.X - Point.X, Point.X - Max.X), 0);
		AxisDistance.Y = FMath::Max(FMath::Max(Min.Y - Point.Y, Point.Y - Max.Y), 0);
		AxisDistance.Z = FMath::Max(FMath::Max(Min.Z - Point.Z, Point.Z - Max.Z), 0);
		return AxisDistance;
	}

	FIntVector Min;
	FIntVector Max;
};

typedef uint16 FSurfelIndex;
constexpr FSurfelIndex INVALID_SURFEL_INDEX = UINT16_MAX;

struct FSurfel
{
	FIntVector Coord;

	// Card's min near plane distance from this surfel
	int32 MinRayZ;

	// Percentage of rays which hit something in this cell
	float Coverage;

	// Coverage weighted by the visibility of this surfel from outside the mesh, decides how important is to cover this surfel
	float WeightedCoverage;
};

struct FSurfelScenePerDirection
{
	TArray<FSurfel> Surfels;
	FLumenCardBuildDebugData DebugData;

	void Init()
	{
		DebugData.Init();
		Surfels.Reset();
	}
};

struct FSurfelScene
{
	FSurfelScenePerDirection Directions[MeshCardGen::NumAxisAlignedDirections];
	int32 NumSurfels = 0;
};

struct FAxisAlignedDirectionBasis
{
	FMatrix44f LocalToWorldRotation;
	FVector3f LocalToWorldOffset;
	FIntVector VolumeSize;
	float VoxelSize;

	FVector3f TransformSurfel(FIntVector SurfelCoord) const
	{
		return LocalToWorldRotation.TransformPosition(FVector3f(SurfelCoord.X + 0.5f, SurfelCoord.Y + 0.5f, SurfelCoord.Z)) * VoxelSize + LocalToWorldOffset;
	}
};

struct FClusteringParams
{
	float VoxelSize = 0.0f;
	float MinClusterCoverage = 0.0f;
	float MinOuterClusterCoverage = 0.0f;
	float MinDensityPerCluster = 0.0f;
	int32 MaxLumenMeshCards = 0;
	bool bDebug = false;
	bool bSingleThreadedBuild = true;

	FAxisAlignedDirectionBasis ClusterBasis[MeshCardGen::NumAxisAlignedDirections];
};

FVector3f AxisAlignedDirectionIndexToNormal(int32 AxisAlignedDirectionIndex)
{
	const int32 AxisIndex = AxisAlignedDirectionIndex / 2;

	FVector3f Normal(0.0f, 0.0f, 0.0f);
	Normal[AxisIndex] = AxisAlignedDirectionIndex & 1 ? 1.0f : -1.0f;
	return Normal;
}

class FSurfelCluster
{
public:
	FIntBox Bounds;
	TArray<FSurfelIndex> SurfelIndices;

	int32 NearPlane = 0;
	float Coverage = 0.0f;

	// Coverage weighted by visibility
	float WeightedCoverage = 0.0f;

	// Best surfels to add to this cluster
	FSurfelIndex BestSurfelIndex = INVALID_SURFEL_INDEX;
	float BestSurfelDistance = FLT_MAX;

	void Init(int32 InNearPlane)
	{
		Bounds.Init();
		SurfelIndices.Reset();
		NearPlane = InNearPlane;
		Coverage = 0.0f;
		WeightedCoverage = 0.0f;
		BestSurfelIndex = INVALID_SURFEL_INDEX;
		BestSurfelDistance = FLT_MAX;
	}

	bool IsValid(const FClusteringParams& ClusteringParams) const
	{
		return WeightedCoverage >= (NearPlane == 0 ? ClusteringParams.MinOuterClusterCoverage : ClusteringParams.MinClusterCoverage)
			&& GetDensity() > ClusteringParams.MinDensityPerCluster;
	}

	float GetDensity() const
	{
		const float Density = Coverage / (float)Bounds.GetFaceArea();
		return Density;
	}

	void AddSurfel(const FSurfelScenePerDirection& SurfelScene, FSurfelIndex SurfelToAddIndex);
};

void FSurfelCluster::AddSurfel(const FSurfelScenePerDirection& SurfelScene, FSurfelIndex SurfelIndex)
{
	const FSurfel& Surfel = SurfelScene.Surfels[SurfelIndex];
	if (Surfel.Coord.Z >= NearPlane && Surfel.MinRayZ <= NearPlane)
	{
		SurfelIndices.Add(SurfelIndex);
		Bounds.Add(Surfel.Coord);
		Coverage += Surfel.Coverage;
		WeightedCoverage += Surfel.WeightedCoverage;

		// Check if all surfels are visible after add
		check(NearPlane <= Bounds.Min.Z);
	}
}

struct FSurfelSample
{
	FVector3f Position;
	FVector3f Normal;
	int32 MinRayZ;
	int32 CellZ;
};

struct FSurfelVisibility
{
	float Visibility;
	bool bValid;
};

// Trace rays over the hemisphere and discard surfels which mostly hit back faces
template<typename MeshType>
FSurfelVisibility ComputeSurfelVisibility(
	const FGenerateCardMeshContext<MeshType>& Context,
	const TArray<FSurfelSample>& SurfelSamples,
	uint32 SurfelSamplesOffset,
	uint32 SurfelSamplesNum,
	const TArray<FVector3f>& RayDirectionsOverHemisphere,
	FLumenCardBuildDebugData& DebugData)
{
	uint32 SurfelSampleIndex = 0;
	uint32 NumHits = 0;
	uint32 NumBackFaceHits = 0;
	const float SurfaceRayBias = 0.1f;
	float VisibilitySum = 0.0f;

	for (int32 RayIndex = 0; RayIndex < RayDirectionsOverHemisphere.Num(); ++RayIndex)
	{
		const FSurfelSample& SurfelSample = SurfelSamples[SurfelSampleIndex + SurfelSamplesOffset];
		const FMatrix44f SurfaceBasis = FRealtimeMeshRepresentationCommon::GetTangentBasisFrisvad(SurfelSample.Normal);
		const FVector3f RayOrigin = SurfelSample.Position;
		const FVector3f RayDirection = SurfaceBasis.TransformVector(RayDirectionsOverHemisphere[RayIndex]);

		IMeshSpatial::FQueryOptions QueryOptions;
		QueryOptions.MaxDistance = TNumericLimits<double>::Max();
		const FVector3d AdjustedRayOrigin = (FVector3d)RayOrigin + (FVector3d)UE::Geometry::Normalized(RayDirection) * SurfaceRayBias;					
		const FRay3d Ray((FVector3d)AdjustedRayOrigin, (FVector3d)RayDirection);
		const int32 HitTriangleId = Context.MeshBVH.FindNearestHitTriangle(Ray, QueryOptions);
				
		if (HitTriangleId != INDEX_NONE)
		{						
			++NumHits;
			if (FVector::DotProduct((FVector)RayDirection, Context.Mesh.GetTriNormal(HitTriangleId)) > 0.0f /*&& !EmbreeContext.IsHitTwoSided()*/)
			{
				++NumBackFaceHits;
			}
			else
			{
				VisibilitySum += 0.0f;
			}
		}
		else
		{
			VisibilitySum += 1.0f;
		}

#if 0
		FLumenCardBuildDebugData::FRay& SurfelRay = DebugData.SurfelRays.AddDefaulted_GetRef();
		SurfelRay.RayStart = RayOrigin;
		if (HitTriangleId != INDEX_NONE)
		{
			const UE::Geometry::FIntrRay3Triangle3d Intersection = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleIntersection(Context.Mesh, HitTriangleId, Ray);
			const float TFar = Intersection.RayParameter + SurfaceRayBias;
			SurfelRay.RayEnd = RayOrigin + RayDirection * (TFar < FLT_MAX ? TFar : 200.0f);
			SurfelRay.bHit = true;
		}
		else
		{
			SurfelRay.RayEnd = RayOrigin + RayDirection * TNumericLimits<float>::Max();
			SurfelRay.bHit = true;
		}
#endif

		SurfelSampleIndex = (SurfelSampleIndex + 1) % SurfelSamplesNum;
	}

	const bool bInsideGeometry =
		NumHits > 0.8f * RayDirectionsOverHemisphere.Num()
		&& NumBackFaceHits > 0.2f * RayDirectionsOverHemisphere.Num();

	FSurfelVisibility SurfelVisibility;
	SurfelVisibility.Visibility = VisibilitySum / RayDirectionsOverHemisphere.Num();
	SurfelVisibility.bValid = !bInsideGeometry;
	return SurfelVisibility;
}

/**
 * Voxelize mesh by casting multiple rays per cell
 */
template<typename MeshType>
void GenerateSurfelsForDirection(
	const FGenerateCardMeshContext<MeshType>& Context,
	const FAxisAlignedDirectionBasis& ClusterBasis,	
	const TArray<FVector3f>& RayDirectionsOverHemisphere,
	const FClusteringParams& ClusteringParams,
	FSurfelScenePerDirection& SurfelScenePerDirection)
{
	const float NormalWeightTreshold = MeshCardRepresentation::GetNormalTreshold();
	const FVector3f RayDirection = ClusterBasis.LocalToWorldRotation.GetScaledAxis(EAxis::Type::Z);

	const uint32 NumSurfelSamples = 32;
	const uint32 MinSurfelSamples = 1;

	TArray<FSurfelSample> SurfelSamples;
	TArray<uint32> NumSurfelSamplesPerCell;
	TArray<uint32> SurfelSamplesOffsetPerCell;

	for (int32 CoordY = 0; CoordY < ClusterBasis.VolumeSize.Y; ++CoordY)
	{
		for (int32 CoordX = 0; CoordX < ClusterBasis.VolumeSize.X; ++CoordX)
		{
			SurfelSamples.Reset();
			NumSurfelSamplesPerCell.SetNum(ClusterBasis.VolumeSize.Z);
			SurfelSamplesOffsetPerCell.SetNum(ClusterBasis.VolumeSize.Z);
			for (int32 CoordZ = 0; CoordZ < ClusterBasis.VolumeSize.Z; ++CoordZ)
			{
				NumSurfelSamplesPerCell[CoordZ] = 0;
				SurfelSamplesOffsetPerCell[CoordZ] = 0;
			}

			// Trace multiple rays per cell and mark cells which need to spawn a surfel
			for (uint32 SampleIndex = 0; SampleIndex < NumSurfelSamples; ++SampleIndex)
			{
				FVector3f Jitter;
				Jitter.X = (SampleIndex + 0.5f) / NumSurfelSamples;
				Jitter.Y = (double)ReverseBits(SampleIndex) / (double)0x100000000LL;

				FVector3f RayOrigin = ClusterBasis.LocalToWorldRotation.TransformPosition(FVector3f(CoordX + Jitter.X, CoordY + Jitter.Y, 0.0f)) * ClusteringParams.VoxelSize + ClusterBasis.LocalToWorldOffset;

				// Need to pullback to make sure that ray will start outside of geometry, as voxels may be smaller than mesh 
				// due to voxel size rounding or they may start exactly at edge of geometry
				const float NearPlaneOffset = 2.0f * ClusteringParams.VoxelSize;
				RayOrigin -= RayDirection * NearPlaneOffset;

				// Cell index where any geometry was last found
				int32 LastHitCoordZ = -2;
				int32 SkipTriangleId = INDEX_NONE;
				float RayTNear = 0.0f;

				while (LastHitCoordZ + 1 < ClusterBasis.VolumeSize.Z)
				{
					IMeshSpatial::FQueryOptions QueryOptions;
					QueryOptions.MaxDistance = TNumericLimits<double>::Max();
					QueryOptions.TriangleFilterF = [SkipTriangleId](int32 TriangleId) { return TriangleId != SkipTriangleId; };
					const FVector3d AdjustedRayOrigin = (FVector3d)RayOrigin + (FVector3d)UE::Geometry::Normalized(RayDirection) * RayTNear;					
					const FRay3d Ray(AdjustedRayOrigin, (FVector3d)RayDirection);
					const int32 HitTriangleId = Context.MeshBVH.FindNearestHitTriangle(Ray, QueryOptions);

					if (HitTriangleId != INDEX_NONE)
					{
						const FIntrRay3Triangle3d Intersection = TMeshQueries<MeshType>::TriangleIntersection(Context.Mesh, HitTriangleId, Ray);	
						
						const double RayTHitCombined = Intersection.RayParameter + RayTNear;
						const int32 HitCoordZ = FMath::Clamp((RayTHitCombined - NearPlaneOffset) / ClusteringParams.VoxelSize, 0, ClusterBasis.VolumeSize.Z - 1);

						FVector SurfaceNormal = Context.Mesh.GetTriNormal(HitTriangleId);
						float NdotD = FVector::DotProduct((FVector)-RayDirection, SurfaceNormal);						

						// Handle two sided hits
						if (NdotD < 0.0f &&  false /*EmbreeContext.IsHitTwoSided()*/)
						{
							NdotD = -NdotD;
							SurfaceNormal = -SurfaceNormal;
						}

						const bool bPassProjectionTest = NdotD >= NormalWeightTreshold;
						if (bPassProjectionTest && HitCoordZ >= 0 && HitCoordZ > LastHitCoordZ + 1 && HitCoordZ < ClusterBasis.VolumeSize.Z)
						{
							FSurfelSample& SurfelSample = SurfelSamples.AddDefaulted_GetRef();
							SurfelSample.Position = RayOrigin + RayDirection * RayTHitCombined;
							SurfelSample.Normal = (FVector3f)SurfaceNormal;
							SurfelSample.CellZ = HitCoordZ;
							SurfelSample.MinRayZ = 0;

							if (LastHitCoordZ >= 0)
							{
								SurfelSample.MinRayZ = FMath::Max(SurfelSample.MinRayZ, LastHitCoordZ + 1);
							}
						}

						// Move ray to the next intersection
						LastHitCoordZ = HitCoordZ;
						RayTNear = std::nextafter(FMath::Max(NearPlaneOffset + (LastHitCoordZ + 1) * ClusteringParams.VoxelSize, RayTHitCombined), std::numeric_limits<float>::infinity());
						SkipTriangleId = HitTriangleId;
					}
					else
					{
						break;
					}
				}
			}

			// Sort surfel candidates and compact arrays
			{
				struct FSortByZ
				{
					FORCEINLINE bool operator()(const FSurfelSample& A, const FSurfelSample& B) const
					{
						if (A.CellZ != B.CellZ)
						{
							return A.CellZ < B.CellZ;
						}

						return A.MinRayZ > B.MinRayZ;
					}
				};

				SurfelSamples.Sort(FSortByZ());

				for (int32 SampleIndex = 0; SampleIndex < SurfelSamples.Num(); ++SampleIndex)
				{
					const FSurfelSample& SurfelSample = SurfelSamples[SampleIndex];
					++NumSurfelSamplesPerCell[SurfelSample.CellZ];
				}

				for (int32 CoordZ = 1; CoordZ < ClusterBasis.VolumeSize.Z; ++CoordZ)
				{
					SurfelSamplesOffsetPerCell[CoordZ] = SurfelSamplesOffsetPerCell[CoordZ - 1] + NumSurfelSamplesPerCell[CoordZ - 1];
				}
			}

			// Convert surfel candidates into actual surfels
			for (int32 CoordZ = 0; CoordZ < ClusterBasis.VolumeSize.Z; ++CoordZ)
			{
				const int32 CellNumSurfelSamples = NumSurfelSamplesPerCell[CoordZ];
				const int32 CellSurfelSamplesOffset = SurfelSamplesOffsetPerCell[CoordZ];

				int32 SurfelSampleSpanBegin = 0;
				int32 SurfelSampleSpanSize = 0;

				bool bAnySurfelAdded = false;
				while (SurfelSampleSpanBegin + 1 < CellNumSurfelSamples)
				{
					// Find continuous spans of equal MinRayZ
					// Every such span will spawn one surfel
					SurfelSampleSpanSize = 0;
					for (int32 SampleIndex = SurfelSampleSpanBegin; SampleIndex < CellNumSurfelSamples; ++SampleIndex)
					{
						if (SurfelSamples[SampleIndex].MinRayZ == SurfelSamples[SurfelSampleSpanBegin].MinRayZ)
						{
							++SurfelSampleSpanSize;
						}
						else
						{
							break;
						}
					}

					if (SurfelSampleSpanSize >= MinSurfelSamples)
					{
						FSurfelVisibility SurfelVisibility = ComputeSurfelVisibility(
							Context,
							SurfelSamples,
							CellSurfelSamplesOffset + SurfelSampleSpanBegin,
							SurfelSampleSpanSize,
							RayDirectionsOverHemisphere,
							SurfelScenePerDirection.DebugData);

						const float Coverage = SurfelSampleSpanSize / float(NumSurfelSamples);

						if (SurfelVisibility.bValid)
						{
							const int32 MedianMinRayZ = SurfelSamples[CellSurfelSamplesOffset + SurfelSampleSpanBegin].MinRayZ;

							FSurfel& Surfel = SurfelScenePerDirection.Surfels.AddDefaulted_GetRef();
							Surfel.Coord = FIntVector(CoordX, CoordY, CoordZ);
							Surfel.MinRayZ = MedianMinRayZ;
							Surfel.Coverage = Coverage;
							Surfel.WeightedCoverage = Coverage * (SurfelVisibility.Visibility + 1.0f);
							check(Surfel.Coord.Z > Surfel.MinRayZ || Surfel.MinRayZ == 0);
						}

						if (ClusteringParams.bDebug)
						{
							FLumenCardBuildDebugData::FSurfel& DebugSurfel = SurfelScenePerDirection.DebugData.Surfels.AddDefaulted_GetRef();
							DebugSurfel.Position = ClusterBasis.TransformSurfel(FIntVector(CoordX, CoordY, CoordZ));
							DebugSurfel.Normal = -RayDirection;
							DebugSurfel.Coverage = Coverage;
							DebugSurfel.Visibility = SurfelVisibility.Visibility;
							DebugSurfel.SourceSurfelIndex = SurfelScenePerDirection.Surfels.Num() - 1;
							DebugSurfel.Type = SurfelVisibility.bValid ? FLumenCardBuildDebugData::ESurfelType::Valid : FLumenCardBuildDebugData::ESurfelType::Invalid;
							bAnySurfelAdded = true;
						}
					}

					SurfelSampleSpanBegin += SurfelSampleSpanSize;
				}

#define DEBUG_ADD_ALL_SURFELS 0
#if DEBUG_ADD_ALL_SURFELS
				if (ClusteringParams.bDebug && !bAnySurfelAdded)
				{
					FLumenCardBuildDebugData::FSurfel& DebugSurfel = SurfelScenePerDirection.DebugData.Surfels.AddDefaulted_GetRef();
					DebugSurfel.Position = ClusterBasis.TransformSurfel(FIntVector(CoordX, CoordY, CoordZ));
					DebugSurfel.Normal = -RayDirection;
					DebugSurfel.Coverage = 1.0f;
					DebugSurfel.Visibility = 1.0f;
					DebugSurfel.SourceSurfelIndex = SurfelScenePerDirection.Surfels.Num() - 1;
					DebugSurfel.Type = FLumenCardBuildDebugData::ESurfelType::Invalid;
				}
#endif
			}
		}
	}
}

void InitClusteringParams(FClusteringParams& ClusteringParams, const FBox& MeshCardsBounds, int32 MaxVoxels, int32 MaxLumenMeshCards, bool bSingleThreadedBuild)
{
	const float TargetVoxelSize = 10.0f;

	const FVector3f MeshCardsBoundsSize = 2.0f * (FVector3f)MeshCardsBounds.GetExtent();
	const float MaxMeshCardsBounds = MeshCardsBoundsSize.GetMax();

	// Target object space detail size
	const float MaxSizeInVoxels = FMath::Clamp(MaxMeshCardsBounds / TargetVoxelSize + 0.5f, 1, MaxVoxels);
	const float VoxelSize = FMath::Max(TargetVoxelSize, MaxMeshCardsBounds / MaxSizeInVoxels);

	FIntVector SizeInVoxels;
	SizeInVoxels.X = FMath::Clamp(FMath::RoundToFloat(MeshCardsBoundsSize.X / VoxelSize), 1, MaxVoxels);
	SizeInVoxels.Y = FMath::Clamp(FMath::RoundToFloat(MeshCardsBoundsSize.Y / VoxelSize), 1, MaxVoxels);
	SizeInVoxels.Z = FMath::Clamp(FMath::RoundToFloat(MeshCardsBoundsSize.Z / VoxelSize), 1, MaxVoxels);

	const FVector3f VoxelBoundsCenter = (FVector3f)MeshCardsBounds.GetCenter();
	const FVector3f VoxelBoundsExtent = FVector3f(SizeInVoxels) * VoxelSize * 0.5f;
	const FVector3f VoxelBoundsMin = VoxelBoundsCenter - VoxelBoundsExtent;
	const FVector3f VoxelBoundsMax = VoxelBoundsCenter + VoxelBoundsExtent;

	for (int32 AxisAlignedDirectionIndex = 0; AxisAlignedDirectionIndex < MeshCardGen::NumAxisAlignedDirections; ++AxisAlignedDirectionIndex)
	{
		FAxisAlignedDirectionBasis& ClusterBasis = ClusteringParams.ClusterBasis[AxisAlignedDirectionIndex];
		ClusterBasis.VoxelSize = VoxelSize;

		FVector3f XAxis = FVector3f(1.0f, 0.0f, 0.0f);
		FVector3f YAxis = FVector3f(0.0f, 1.0f, 0.0f);
		switch (AxisAlignedDirectionIndex / 2)
		{
		case 0:
			XAxis = FVector3f(0.0f, 1.0f, 0.0f);
			YAxis = FVector3f(0.0f, 0.0f, 1.0f);
			break;

		case 1:
			XAxis = FVector3f(1.0f, 0.0f, 0.0f);
			YAxis = FVector3f(0.0f, 0.0f, 1.0f);
			break;

		case 2:
			XAxis = FVector3f(1.0f, 0.0f, 0.0f);
			YAxis = FVector3f(0.0f, 1.0f, 0.0f);
			break;
		}

		FVector3f ZAxis = AxisAlignedDirectionIndexToNormal(AxisAlignedDirectionIndex);

		ClusterBasis.LocalToWorldRotation = FMatrix44f(XAxis, YAxis, -ZAxis, FVector3f::ZeroVector);

		ClusterBasis.LocalToWorldOffset = VoxelBoundsMin;
		if (AxisAlignedDirectionIndex & 1)
		{
			ClusterBasis.LocalToWorldOffset[AxisAlignedDirectionIndex / 2] = VoxelBoundsMax[AxisAlignedDirectionIndex / 2];
		}

		switch (AxisAlignedDirectionIndex / 2)
		{
		case 0:
			ClusterBasis.VolumeSize.X = SizeInVoxels.Y;
			ClusterBasis.VolumeSize.Y = SizeInVoxels.Z;
			ClusterBasis.VolumeSize.Z = SizeInVoxels.X;
			break;

		case 1:
			ClusterBasis.VolumeSize.X = SizeInVoxels.X;
			ClusterBasis.VolumeSize.Y = SizeInVoxels.Z;
			ClusterBasis.VolumeSize.Z = SizeInVoxels.Y;
			break;

		case 2:
			ClusterBasis.VolumeSize.X = SizeInVoxels.X;
			ClusterBasis.VolumeSize.Y = SizeInVoxels.Y;
			ClusterBasis.VolumeSize.Z = SizeInVoxels.Z;
			break;
		}
	}

	const float AverageFaceArea = 2.0f * (SizeInVoxels.X * SizeInVoxels.Y + SizeInVoxels.X * SizeInVoxels.Z + SizeInVoxels.Y * SizeInVoxels.Z) / 6.0f;

	ClusteringParams.VoxelSize = VoxelSize;
	ClusteringParams.MinDensityPerCluster = MeshCardRepresentation::GetMinDensity();
	ClusteringParams.MinDensityPerCluster = MeshCardRepresentation::GetMinDensity() / 3.0f;
	ClusteringParams.MinClusterCoverage = 15.0f;
	ClusteringParams.MinOuterClusterCoverage = FMath::Min(ClusteringParams.MinClusterCoverage, 0.5f * AverageFaceArea);
	ClusteringParams.MaxLumenMeshCards = MaxLumenMeshCards;
	ClusteringParams.bDebug = MeshCardRepresentation::IsDebugMode();
	ClusteringParams.bSingleThreadedBuild = bSingleThreadedBuild;
}

template<typename MeshType>
void InitSurfelScene(
	const FGenerateCardMeshContext<MeshType>& Context,
	const FBox& MeshCardsBounds,
	int32 MaxLumenMeshCards,
	bool bSingleThreadedBuild,
	FSurfelScene& SurfelScene,
	FClusteringParams& ClusteringParams)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(GenerateSurfels);

	const uint32 NumSourceVertices = Context.Mesh.VertexCount();
	const int32 NumSourceTriangles = Context.Mesh.TriangleCount();

	if (NumSourceTriangles == 0)
	{
		return;
	}

	// Generate random ray directions over a hemisphere
	constexpr uint32 NumRayDirectionsOverHemisphere = 32;
	TArray<FVector3f> RayDirectionsOverHemisphere;
	{
		FRandomStream RandomStream(0);
		FRealtimeMeshRepresentationCommon::GenerateStratifiedUniformHemisphereSamples(NumRayDirectionsOverHemisphere, RandomStream, RayDirectionsOverHemisphere);
	}

	const int32 DebugSurfelDirection = MeshCardRepresentation::GetDebugSurfelDirection();

	// Limit max number of surfels to prevent generation time from exploding, as dense two sided meshes can generate many more surfels than simple walls
	int32 TargetNumSufels = 10000;
	float MaxVoxels = 64;

	do
	{
		InitClusteringParams(ClusteringParams, MeshCardsBounds, MaxVoxels, MaxLumenMeshCards, bSingleThreadedBuild);

		ParallelFor(TEXT("InitSurfelScene.PF"), MeshCardGen::NumAxisAlignedDirections, 1,
			[&](int32 AxisAlignedDirectionIndex)
			{
				if (DebugSurfelDirection < 0 || DebugSurfelDirection == AxisAlignedDirectionIndex)
				{
					FSurfelScenePerDirection& SurfelScenePerDirection = SurfelScene.Directions[AxisAlignedDirectionIndex];
					SurfelScenePerDirection.Init();

					GenerateSurfelsForDirection(
						Context,
						ClusteringParams.ClusterBasis[AxisAlignedDirectionIndex],
						RayDirectionsOverHemisphere,
						ClusteringParams,
						SurfelScenePerDirection
					);
				}
			}, ClusteringParams.bSingleThreadedBuild ? EParallelForFlags::ForceSingleThread : EParallelForFlags::None);

		SurfelScene.NumSurfels = 0;
		for (const FSurfelScenePerDirection& SurfelScenePerDirection : SurfelScene.Directions)
		{
			SurfelScene.NumSurfels += SurfelScenePerDirection.Surfels.Num();
		}

		MaxVoxels = MaxVoxels / 2;
	} while (SurfelScene.NumSurfels > TargetNumSufels && MaxVoxels > 1);

	if (ClusteringParams.bDebug)
	{
		for (int32 AxisAlignedDirectionIndex = 0; AxisAlignedDirectionIndex < MeshCardGen::NumAxisAlignedDirections; ++AxisAlignedDirectionIndex)
		{
			FLumenCardBuildDebugData& MergedDebugData = Context.OutData.MeshCardsBuildData.DebugData;
			FLumenCardBuildDebugData& DirectionDebugData = SurfelScene.Directions[AxisAlignedDirectionIndex].DebugData;

			const int32 SurfelOffset = MergedDebugData.Surfels.Num();

			MergedDebugData.Surfels.Append(DirectionDebugData.Surfels);
			MergedDebugData.SurfelRays.Append(DirectionDebugData.SurfelRays);

			for (FSurfelIndex SurfelIndex = SurfelOffset; SurfelIndex < MergedDebugData.Surfels.Num(); ++SurfelIndex)
			{
				MergedDebugData.Surfels[SurfelIndex].SourceSurfelIndex += SurfelOffset;
			}
		}
	}
}

struct FMeshCardsPerDirection
{
	TArray<FSurfelCluster> Clusters;
};

struct FMeshCards
{
	FMeshCardsPerDirection Directions[MeshCardGen::NumAxisAlignedDirections];
	float WeightedSurfaceCoverage = 0.0f;
	float SurfaceArea = 0.0f;
	int32 NumSurfels = 0;
	int32 NumClusters = 0;
};

void UpdateMeshCardsCoverage(const FSurfelScene& SurfelScene, const FClusteringParams& ClusteringParams, FMeshCards& MeshCards)
{
	MeshCards.WeightedSurfaceCoverage = 0.0f;
	MeshCards.SurfaceArea = 0.0f;
	MeshCards.NumSurfels = 0;
	MeshCards.NumClusters = 0;

	for (int32 AxisAlignedDirectionIndex = 0; AxisAlignedDirectionIndex < MeshCardGen::NumAxisAlignedDirections; ++AxisAlignedDirectionIndex)
	{
		TArray<FSurfelCluster>& Clusters = MeshCards.Directions[AxisAlignedDirectionIndex].Clusters;
		const TArray<FSurfel>& Surfels = SurfelScene.Directions[AxisAlignedDirectionIndex].Surfels;

		for (FSurfelCluster& Cluster : Clusters)
		{
			MeshCards.WeightedSurfaceCoverage += Cluster.WeightedCoverage;
			MeshCards.SurfaceArea += Cluster.Bounds.GetFaceArea();
		}

		MeshCards.NumSurfels += Surfels.Num();
		MeshCards.NumClusters += Clusters.Num();
	}
}

/**
 * Assign surfels to a single cluster
 */
void BuildCluster(
	int32 NearPlane,
	const FSurfelScenePerDirection& SurfelScene,
	TBitArray<>& SurfelAssignedToAnyCluster,
	FSurfelCluster& Cluster)
{
	Cluster.Init(NearPlane);

	for (int32 SurfelIndex = 0; SurfelIndex < SurfelScene.Surfels.Num(); ++SurfelIndex)
	{
		if (!SurfelAssignedToAnyCluster[SurfelIndex])
		{
			Cluster.AddSurfel(SurfelScene, SurfelIndex);
		}
	}
}

/**
 * Add cluster to the cluster list
 */
void CommitCluster(TArray<FSurfelCluster>& Clusters, TBitArray<>& SurfelAssignedToAnyCluster, FSurfelCluster const& Cluster)
{
	for (int32 SurfelIndex : Cluster.SurfelIndices)
	{
		SurfelAssignedToAnyCluster[SurfelIndex] = true;
	}
	Clusters.Add(Cluster);
}

/**
 * Sort clusters by importance and limit number of clusters based on the set target
 */
void LimitClusters(const FClusteringParams& ClusteringParams, const FSurfelScene& SurfelScene, FMeshCards& MeshCards)
{
	int32 NumClusters = 0;

	for (int32 AxisAlignedDirectionIndex = 0; AxisAlignedDirectionIndex < MeshCardGen::NumAxisAlignedDirections; ++AxisAlignedDirectionIndex)
	{
		TArray<FSurfelCluster>& Clusters = MeshCards.Directions[AxisAlignedDirectionIndex].Clusters;
		const TArray<FSurfel>& Surfels = SurfelScene.Directions[AxisAlignedDirectionIndex].Surfels;

		struct FSortByClusterWeightedCoverage
		{
			FORCEINLINE bool operator()(const FSurfelCluster& A, const FSurfelCluster& B) const
			{
				return A.WeightedCoverage > B.WeightedCoverage;
			}
		};

		Clusters.Sort(FSortByClusterWeightedCoverage());
		NumClusters += Clusters.Num();
	}

	while (NumClusters > ClusteringParams.MaxLumenMeshCards)
	{
		float SmallestClusterWeightedCoverage = FLT_MAX;
		int32 SmallestClusterDirectionIndex = 0;

		for (int32 AxisAlignedDirectionIndex = 0; AxisAlignedDirectionIndex < MeshCardGen::NumAxisAlignedDirections; ++AxisAlignedDirectionIndex)
		{
			const TArray<FSurfelCluster>& Clusters = MeshCards.Directions[AxisAlignedDirectionIndex].Clusters;
			if (Clusters.Num() > 0)
			{
				const FSurfelCluster& Cluster = Clusters.Last();
				if (Cluster.WeightedCoverage < SmallestClusterWeightedCoverage)
				{
					SmallestClusterDirectionIndex = AxisAlignedDirectionIndex;
					SmallestClusterWeightedCoverage = Cluster.WeightedCoverage;
				}
			}
		}

		FMeshCardsPerDirection& MeshCardsPerDirection = MeshCards.Directions[SmallestClusterDirectionIndex];
		MeshCardsPerDirection.Clusters.Pop();
		--NumClusters;
	}
}

/**
 * Cover mesh using a set of clusters(cards)
 */
template<typename MeshType>
void BuildSurfelClusters(const FBox& MeshBounds, const FGenerateCardMeshContext<MeshType>& Context, const FSurfelScene& SurfelScene, const FClusteringParams& ClusteringParams, FMeshCards& MeshCards)
{
	TBitArray<> SurfelAssignedToAnyClusterArray[MeshCardGen::NumAxisAlignedDirections];
	for (int32 AxisAlignedDirectionIndex = 0; AxisAlignedDirectionIndex < MeshCardGen::NumAxisAlignedDirections; ++AxisAlignedDirectionIndex)
	{
		SurfelAssignedToAnyClusterArray[AxisAlignedDirectionIndex].Init(false, SurfelScene.Directions[AxisAlignedDirectionIndex].Surfels.Num());
	}

	ParallelFor(TEXT("BuildMeshCards.PF"), MeshCardGen::NumAxisAlignedDirections, 1,
		[&](int32 AxisAlignedDirectionIndex)
		{
			const FSurfelScenePerDirection& SurfelScenePerDirection = SurfelScene.Directions[AxisAlignedDirectionIndex];
			TArray<FSurfelCluster>& Clusters = MeshCards.Directions[AxisAlignedDirectionIndex].Clusters;
			TBitArray<>& SurfelAssignedToAnyCluster = SurfelAssignedToAnyClusterArray[AxisAlignedDirectionIndex];
			const FAxisAlignedDirectionBasis& ClusterBasis = ClusteringParams.ClusterBasis[AxisAlignedDirectionIndex];

			FSurfelCluster TempCluster;
			BuildCluster(/*NearPlane*/ 0, SurfelScenePerDirection, SurfelAssignedToAnyCluster, TempCluster);
			bool bCanAddCluster = TempCluster.IsValid(ClusteringParams);
			if (bCanAddCluster)
			{
				CommitCluster(Clusters, SurfelAssignedToAnyCluster, TempCluster);
				bCanAddCluster = true;
			}

			// Assume that two sided is foliage and revert to a simpler box projection
			if (!Context.bMostlyTwoSided)
			{
				FSurfelCluster BestCluster;

				while (bCanAddCluster)
				{
					BestCluster.Init(-1);

					for (int32 NearPlane = 1; NearPlane < ClusterBasis.VolumeSize.Z; ++NearPlane)
					{
						BuildCluster(NearPlane, SurfelScenePerDirection, SurfelAssignedToAnyCluster, TempCluster);

						if (TempCluster.IsValid(ClusteringParams) && TempCluster.WeightedCoverage > BestCluster.WeightedCoverage)
						{
							BestCluster = TempCluster;
						}
					}

					bCanAddCluster = BestCluster.IsValid(ClusteringParams);
					if (bCanAddCluster)
					{
						CommitCluster(Clusters, SurfelAssignedToAnyCluster, BestCluster);
					}
				}
			}

		}, ClusteringParams.bSingleThreadedBuild ? EParallelForFlags::ForceSingleThread : EParallelForFlags::None);

	LimitClusters(ClusteringParams, SurfelScene, MeshCards);
}

template<typename MeshType>
void SerializeLOD(
	const FGenerateCardMeshContext<MeshType>& Context,
	const FClusteringParams& ClusteringParams,
	const FSurfelScene& SurfelScene,
	FMeshCards const& MeshCards,
	const FBox& MeshCardsBounds,
	FMeshCardsBuildData& MeshCardsBuildData)
{
	int32 SourceSurfelOffset = 0;

	for (int32 AxisAlignedDirectionIndex = 0; AxisAlignedDirectionIndex < MeshCardGen::NumAxisAlignedDirections; ++AxisAlignedDirectionIndex)
	{
		const FAxisAlignedDirectionBasis& ClusterBasis = ClusteringParams.ClusterBasis[AxisAlignedDirectionIndex];
		const FSurfelScenePerDirection& SurfelScenePerDirection = SurfelScene.Directions[AxisAlignedDirectionIndex];
		const TArray<FSurfel>& Surfels = SurfelScenePerDirection.Surfels;
		const TArray<FSurfelCluster>& Clusters = MeshCards.Directions[AxisAlignedDirectionIndex].Clusters;

		TBitArray<> DebugSurfelInCluster;
		TBitArray<> DebugSurfelInAnyCluster(false, Surfels.Num());

		const FBox3f LocalMeshCardsBounds = FBox3f(MeshCardsBounds.ShiftBy((FVector)-ClusterBasis.LocalToWorldOffset).TransformBy(FMatrix(ClusterBasis.LocalToWorldRotation.GetTransposed())));

		for (const FSurfelCluster& Cluster : Clusters)
		{
			// Set card to cover voxels, with a 0.5 voxel margin for the near/far plane
			FVector3f ClusterBoundsMin = (FVector3f(Cluster.Bounds.Min) - FVector3f(0.0f, 0.0f, 0.5f)) * ClusteringParams.VoxelSize;
			FVector3f ClusterBoundsMax = (FVector3f(Cluster.Bounds.Max) + FVector3f(1.0f, 1.0f, 1.5f)) * ClusteringParams.VoxelSize;

			// Clamp to mesh bounds
			// Leave small margin for Z as LOD/displacement may move it outside of bounds
			static float MarginZ = 10.0f;
			ClusterBoundsMin.X = FMath::Max(ClusterBoundsMin.X, LocalMeshCardsBounds.Min.X);
			ClusterBoundsMin.Y = FMath::Max(ClusterBoundsMin.Y, LocalMeshCardsBounds.Min.Y);
			ClusterBoundsMin.Z = FMath::Max(ClusterBoundsMin.Z, LocalMeshCardsBounds.Min.Z - MarginZ);
			ClusterBoundsMax.X = FMath::Min(ClusterBoundsMax.X, LocalMeshCardsBounds.Max.X);
			ClusterBoundsMax.Y = FMath::Min(ClusterBoundsMax.Y, LocalMeshCardsBounds.Max.Y);
			ClusterBoundsMax.Z = FMath::Min(ClusterBoundsMax.Z, LocalMeshCardsBounds.Max.Z + MarginZ);

			const FVector3f ClusterBoundsOrigin = (ClusterBoundsMax + ClusterBoundsMin) * 0.5f;
			const FVector3f ClusterBoundsExtent = (ClusterBoundsMax - ClusterBoundsMin) * 0.5f;
			const FVector3f MeshClusterBoundsOrigin = ClusterBasis.LocalToWorldRotation.TransformPosition(ClusterBoundsOrigin) + ClusterBasis.LocalToWorldOffset;

			FLumenCardBuildData BuiltData;
			BuiltData.OBB.Origin = MeshClusterBoundsOrigin;
			BuiltData.OBB.Extent = ClusterBoundsExtent;
			BuiltData.OBB.AxisX = ClusterBasis.LocalToWorldRotation.GetScaledAxis(EAxis::X);
			BuiltData.OBB.AxisY = ClusterBasis.LocalToWorldRotation.GetScaledAxis(EAxis::Y);
			BuiltData.OBB.AxisZ = -ClusterBasis.LocalToWorldRotation.GetScaledAxis(EAxis::Z);
			BuiltData.AxisAlignedDirectionIndex = AxisAlignedDirectionIndex;
			MeshCardsBuildData.CardBuildData.Add(BuiltData);

			if (ClusteringParams.bDebug)
			{
				DebugSurfelInCluster.Reset();
				DebugSurfelInCluster.Add(false, Surfels.Num());

				FLumenCardBuildDebugData::FSurfelCluster& DebugCluster = MeshCardsBuildData.DebugData.Clusters.AddDefaulted_GetRef();
				DebugCluster.Surfels.Reserve(DebugCluster.Surfels.Num() + Surfels.Num());

				for (FSurfelIndex SurfelIndex : Cluster.SurfelIndices)
				{
					FLumenCardBuildDebugData::FSurfel DebugSurfel;
					DebugSurfel.Position = ClusterBasis.TransformSurfel(Surfels[SurfelIndex].Coord);
					DebugSurfel.Normal = AxisAlignedDirectionIndexToNormal(AxisAlignedDirectionIndex);
					DebugSurfel.SourceSurfelIndex = SourceSurfelOffset + SurfelIndex;
					DebugSurfel.Type = FLumenCardBuildDebugData::ESurfelType::Cluster;
					DebugCluster.Surfels.Add(DebugSurfel);

					const int32 SurfelMinRayZ = Surfels[SurfelIndex].MinRayZ;
					if (SurfelMinRayZ > 0)
					{
						FIntVector MinRayZCoord = Surfels[SurfelIndex].Coord;
						MinRayZCoord.Z = SurfelMinRayZ;

						FLumenCardBuildDebugData::FRay DebugRay;
						DebugRay.RayStart = DebugSurfel.Position;
						DebugRay.RayEnd = ClusterBasis.TransformSurfel(MinRayZCoord);
						DebugRay.bHit = false;
						DebugCluster.Rays.Add(DebugRay);
					}

					DebugSurfelInAnyCluster[SurfelIndex] = true;
					DebugSurfelInCluster[SurfelIndex] = true;
				}

				for (FSurfelIndex SurfelIndex = 0; SurfelIndex < Surfels.Num(); ++SurfelIndex)
				{
					if (!DebugSurfelInCluster[SurfelIndex])
					{
						FLumenCardBuildDebugData::FSurfel DebugSurfel;
						DebugSurfel.Position = ClusterBasis.TransformSurfel(Surfels[SurfelIndex].Coord);
						DebugSurfel.Normal = AxisAlignedDirectionIndexToNormal(AxisAlignedDirectionIndex);
						DebugSurfel.SourceSurfelIndex = SourceSurfelOffset + SurfelIndex;
						DebugSurfel.Type = DebugSurfelInAnyCluster[SurfelIndex] ? FLumenCardBuildDebugData::ESurfelType::Used : FLumenCardBuildDebugData::ESurfelType::Idle;
						DebugCluster.Surfels.Add(DebugSurfel);
					}
				}
			}
		}

		SourceSurfelOffset += Surfels.Num();
	}

	if (ClusteringParams.bDebug)
	{
		UE_LOG(LogRealtimeMeshInterface, Log, TEXT("CardGen Mesh:%s Surfels:%d Clusters:%d WeightedSurfaceCoverage:%f ClusterArea:%f"),
			*Context.MeshName,
			MeshCards.NumSurfels,
			MeshCards.NumClusters,
			MeshCards.WeightedSurfaceCoverage,
			MeshCards.SurfaceArea);
	}
}

template<typename MeshType>
bool GenerateCardRepresentation(FRealtimeMeshCardRepresentation& OutCardRepresentation, const MeshType& Mesh, const TMeshAABBTree3<MeshType>& MeshBVH,
	const FRealtimeMeshDistanceField* DistanceField, const FRealtimeMeshCardRepresentationGeneratorOptions& Options)
{
	if (Options.MaxLumenMeshCards <= 0)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: MaxLumenMeshCards is less than or equal to 0"));
		return false;
	}

	FCardRepresentationData CardRepresentation;
	FGenerateCardMeshContext Context(TEXT(""), Mesh, MeshBVH, CardRepresentation);
	
	// Note: must operate on the SDF bounds when available, because SDF generation can expand the mesh's bounds
	const FBox MeshBounds = (DistanceField != nullptr && DistanceField->IsValid() && DistanceField->GetBounds().IsValid)
		? FBox(DistanceField->GetBounds())
		: FBox(MeshBVH.GetBoundingBox());

	// Make sure BBox isn't empty and we can generate card representation for it. This handles e.g. infinitely thin planes.
	const FVector MeshCardsBoundsCenter = MeshBounds.GetCenter();
	const FVector MeshCardsBoundsExtent = FVector::Max(MeshBounds.GetExtent() + 1.0f, FVector(1.0f));
	const FBox MeshCardsBounds(MeshCardsBoundsCenter - MeshCardsBoundsExtent, MeshCardsBoundsCenter + MeshCardsBoundsExtent);

	// Prepare a list of surfels for cluster fitting
	FSurfelScene SurfelScene;
	FClusteringParams ClusteringParams;
	InitSurfelScene(Context, MeshCardsBounds, Options.MaxLumenMeshCards, !Options.bMultiThreadedGeneration, SurfelScene, ClusteringParams);

	FMeshCards MeshCards;
	BuildSurfelClusters(MeshBounds, Context, SurfelScene, ClusteringParams, MeshCards);

	CardRepresentation.MeshCardsBuildData.Bounds = MeshCardsBounds;
	CardRepresentation.MeshCardsBuildData.bMostlyTwoSided = Context.bMostlyTwoSided;
	CardRepresentation.MeshCardsBuildData.CardBuildData.Reset();

	SerializeLOD(Context, ClusteringParams, SurfelScene, MeshCards, MeshCardsBounds, CardRepresentation.MeshCardsBuildData);

	CardRepresentation.MeshCardsBuildData.DebugData.NumSurfels = 0;
	for (const FSurfelScenePerDirection& SurfelScenePerDirection : SurfelScene.Directions)
	{
		CardRepresentation.MeshCardsBuildData.DebugData.NumSurfels += SurfelScenePerDirection.Surfels.Num();
	}

	OutCardRepresentation = FRealtimeMeshCardRepresentation(MoveTemp(CardRepresentation));
	return true;	
}




ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSet(const FRealtimeMeshStreamSet& StreamSet, const FRealtimeMeshAABBTree3& StreamSetBVH,
	const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{	
	const FRealtimeMeshDynamicMeshAdapter MeshAdapter(StreamSet);
	
	return GenerateCardRepresentation(CardRepresentation, MeshAdapter, StreamSetBVH, &DistanceField, Options)
		? ERealtimeMeshOutcomePins::Success
		: ERealtimeMeshOutcomePins::Failure;
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSet(const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
	const RealtimeMesh::FRealtimeMeshAABBTree3& StreamSetBVH, FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	const FRealtimeMeshDynamicMeshAdapter MeshAdapter(StreamSet);
	
	return GenerateCardRepresentation(CardRepresentation, MeshAdapter, StreamSetBVH, nullptr, Options)
		? ERealtimeMeshOutcomePins::Success
		: ERealtimeMeshOutcomePins::Failure;
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSet(const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
                                                                                                          const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	const FRealtimeMeshDynamicMeshAdapter MeshAdapter(StreamSet);
	const TMeshAABBTree3 MeshBVH(&MeshAdapter, true);

	return GenerateCardRepresentationForStreamSet(StreamSet, MeshBVH, DistanceField, CardRepresentation, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSet(const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet,
	FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	const FRealtimeMeshDynamicMeshAdapter MeshAdapter(StreamSet);
	const TMeshAABBTree3 MeshBVH(&MeshAdapter, true);

	return GenerateCardRepresentationForStreamSet(StreamSet, MeshBVH, CardRepresentation, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSet(URealtimeMeshStreamSet* StreamSet,
                                                                                                          const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	if (StreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: StreamSet is null"));
		CardRepresentation = FRealtimeMeshCardRepresentation();
		return ERealtimeMeshOutcomePins::Failure;
	}

	return GenerateCardRepresentationForStreamSet(StreamSet->GetStreamSet(), DistanceField, CardRepresentation, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSet(URealtimeMeshStreamSet* StreamSet,
	FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	if (StreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: StreamSet is null"));
		CardRepresentation = FRealtimeMeshCardRepresentation();
		return ERealtimeMeshOutcomePins::Failure;
	}

	return GenerateCardRepresentationForStreamSet(StreamSet->GetStreamSet(), CardRepresentation, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForRealtimeMesh(URealtimeMeshSimple* RealtimeMesh,
                                                                                                             FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	CardRepresentation = FRealtimeMeshCardRepresentation();
	
	if (RealtimeMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: RealtimeMesh is null"));
		return ERealtimeMeshOutcomePins::Failure;
	}

	const FRealtimeMeshDistanceField& DistanceField = RealtimeMesh->GetDistanceField();
	FRealtimeMeshStreamSet Streams;

	{
		FRealtimeMeshAccessContext AccessContext(RealtimeMesh->GetMesh());
		for (const FRealtimeMeshSectionGroupKey& SectionGroupKey : RealtimeMesh->GetSectionGroups(FRealtimeMeshLODKey(0)))
		{
			// We only need position and triangles, we don't need the attributes
			if (const TSharedPtr<FRealtimeMeshSectionGroupSimple> SectionGroup = RealtimeMesh->GetSectionGroup(SectionGroupKey))
			{
				SectionGroup->ProcessMeshData(AccessContext, [&](const FRealtimeMeshStreamSet& GroupStreams)
				{
					if (Streams.IsEmpty())
					{
						Streams.CopyFrom(GroupStreams, false, { FRealtimeMeshStreams::Position, FRealtimeMeshStreams::Triangles });
					}
					else
					{
						URealtimeMeshBasicShapeTools::AppendMesh(Streams, GroupStreams, FTransform3f::Identity, true);
					}
				});
			}
		}
	}

	if (Streams.IsEmpty())
	{
		return ERealtimeMeshOutcomePins::Failure;
	}
	
	return GenerateCardRepresentationForStreamSet(Streams, DistanceField, CardRepresentation, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMesh(const UE::Geometry::FDynamicMesh3& DynamicMesh,
	const UE::Geometry::FDynamicMeshAABBTree3& DynamicMeshBVH, const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentation& CardRepresentation,
	FRealtimeMeshCardRepresentationGeneratorOptions Options)
{	
	return GenerateCardRepresentation(CardRepresentation, DynamicMesh, DynamicMeshBVH, &DistanceField, Options)
		? ERealtimeMeshOutcomePins::Success
		: ERealtimeMeshOutcomePins::Failure;
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMesh(const UE::Geometry::FDynamicMesh3& DynamicMesh,
	const UE::Geometry::FDynamicMeshAABBTree3& DynamicMeshBVH, FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	return GenerateCardRepresentation(CardRepresentation, DynamicMesh, DynamicMeshBVH, nullptr, Options)
		? ERealtimeMeshOutcomePins::Success
		: ERealtimeMeshOutcomePins::Failure;
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMesh(const UE::Geometry::FDynamicMesh3& DynamicMesh,
                                                                                                            const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	const TMeshAABBTree3 MeshBVH(&DynamicMesh, true);

	return GenerateCardRepresentationForDynamicMesh(DynamicMesh, MeshBVH, DistanceField, CardRepresentation, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMesh(const UE::Geometry::FDynamicMesh3& DynamicMesh,
	FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	const TMeshAABBTree3 MeshBVH(&DynamicMesh, true);

	return GenerateCardRepresentationForDynamicMesh(DynamicMesh, MeshBVH, CardRepresentation, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMesh(UDynamicMesh* DynamicMesh,
                                                                                                            const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	if (DynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: DynamicMesh is null"));
		CardRepresentation = FRealtimeMeshCardRepresentation();
		return ERealtimeMeshOutcomePins::Failure;
	}

	CardRepresentation = FRealtimeMeshCardRepresentation();
	ERealtimeMeshOutcomePins Outcome = ERealtimeMeshOutcomePins::Failure;
	DynamicMesh->ProcessMesh([&](const FDynamicMesh3& Mesh)
	{
		Outcome = GenerateCardRepresentationForDynamicMesh(Mesh, DistanceField, CardRepresentation, Options);
	});
	return Outcome;
}

ERealtimeMeshOutcomePins URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMesh(UDynamicMesh* DynamicMesh,
	FRealtimeMeshCardRepresentation& CardRepresentation, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	if (DynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: DynamicMesh is null"));
		CardRepresentation = FRealtimeMeshCardRepresentation();
		return ERealtimeMeshOutcomePins::Failure;
	}

	CardRepresentation = FRealtimeMeshCardRepresentation();
	ERealtimeMeshOutcomePins Outcome = ERealtimeMeshOutcomePins::Failure;
	DynamicMesh->ProcessMesh([&](const FDynamicMesh3& Mesh)
	{
		Outcome = GenerateCardRepresentationForDynamicMesh(Mesh, CardRepresentation, Options);
	});
	return Outcome;
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSetAsync(
	const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet, const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	return DoOnAsyncThread([StreamSet = FRealtimeMeshStreamSet(StreamSet), DistanceField, Options]()
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForStreamSet(StreamSet, DistanceField, CardRepresentation, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSetAsync(
	const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	return DoOnAsyncThread([StreamSet = FRealtimeMeshStreamSet(StreamSet), Options]()
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForStreamSet(StreamSet, CardRepresentation, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSetAsync(
	URealtimeMeshStreamSet* StreamSet, const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	if (StreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: StreamSet is null"));
		return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshCardRepresentation())).GetFuture();
	}
	
	return DoOnAsyncThread([StreamSet = FRealtimeMeshStreamSet(StreamSet->GetStreamSet()), DistanceField, Options]()
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForStreamSet(StreamSet, DistanceField, CardRepresentation, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSetAsync(
	URealtimeMeshStreamSet* StreamSet, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	if (StreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: StreamSet is null"));
		return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshCardRepresentation())).GetFuture();
	}
	
	return DoOnAsyncThread([StreamSet = FRealtimeMeshStreamSet(StreamSet->GetStreamSet()), Options]()
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForStreamSet(StreamSet, CardRepresentation, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForRealtimeMeshAsync(
	URealtimeMeshSimple* RealtimeMesh, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	if (RealtimeMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: RealtimeMesh is null"));
		return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshCardRepresentation())).GetFuture();
	}

	// We grab a strong object ptr to ensure the mesh is not deleted while we are working on it
	auto MeshPtr = MakeSharedObjectPtr(RealtimeMesh);
	
	return DoOnAsyncThread([MeshPtr, Options]()
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForRealtimeMesh(MeshPtr.Get().Get(), CardRepresentation, Options);
		
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMeshAsync(
	const UE::Geometry::FDynamicMesh3& DynamicMesh, const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	return DoOnAsyncThread([DynamicMesh, DistanceField, Options]()
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForDynamicMesh(DynamicMesh, DistanceField, CardRepresentation, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMeshAsync(
	const UE::Geometry::FDynamicMesh3& DynamicMesh, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	return DoOnAsyncThread([DynamicMesh, Options]()
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForDynamicMesh(DynamicMesh, CardRepresentation, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMeshAsync(
	UDynamicMesh* DynamicMesh, const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	if (DynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: DynamicMesh is null"));
		return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshCardRepresentation())).GetFuture();
	}
	
	FDynamicMesh3 MeshCopy;
	DynamicMesh->ProcessMesh([&MeshCopy](const FDynamicMesh3& Mesh)
	{
		MeshCopy = Mesh;
	});
	
	return DoOnAsyncThread([MeshCopy, DistanceField, Options]()
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForDynamicMesh(MeshCopy, DistanceField, CardRepresentation, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>> URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMeshAsync(
	UDynamicMesh* DynamicMesh, FRealtimeMeshCardRepresentationGeneratorOptions Options)
{
	if (DynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: DynamicMesh is null"));
		return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshCardRepresentation())).GetFuture();
	}
	
	FDynamicMesh3 MeshCopy;
	DynamicMesh->ProcessMesh([&MeshCopy](const FDynamicMesh3& Mesh)
	{
		MeshCopy = Mesh;
	});
	
	return DoOnAsyncThread([MeshCopy, Options]()
	{
		FRealtimeMeshCardRepresentation CardRepresentation;
		const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForDynamicMesh(MeshCopy, CardRepresentation, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
	});
}

void URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSetAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo,
                                                                                           URealtimeMeshStreamSet* StreamSet, const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentationGeneratorOptions Options, ERealtimeMeshOutcomePins& Result,
                                                                                           FRealtimeMeshCardRepresentation& CardRepresentation)
{
	SetupSimpleLatentAction<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(WorldContextObject, LatentInfo,
		[&]()
		{
			if (StreamSet == nullptr)
			{
				UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: StreamSet is null"));
				return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshCardRepresentation())).GetFuture();
			}
			
			return DoOnAsyncThread([StreamSet = FRealtimeMeshStreamSet(StreamSet->GetStreamSet()), DistanceField, Options]()
			{
				FRealtimeMeshCardRepresentation CardRepresentation;
				const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForStreamSet(StreamSet, DistanceField, CardRepresentation, Options);
				return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
			});
		}, [&Result, &CardRepresentation](TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>&& Future)
		{
			const TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation> ResultTuple = Future.Get();
			Result = ResultTuple.Get<0>();
			CardRepresentation = ResultTuple.Get<1>();
		});
}

void URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForRealtimeMeshAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo,
	URealtimeMeshSimple* RealtimeMesh, FRealtimeMeshCardRepresentationGeneratorOptions Options, ERealtimeMeshOutcomePins& Result, FRealtimeMeshCardRepresentation& CardRepresentation)
{
	SetupSimpleLatentAction<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(WorldContextObject, LatentInfo,
	[&]()
	{
		if (RealtimeMesh == nullptr)
		{
			UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: RealtimeMesh is null"));
			return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshCardRepresentation())).GetFuture();
		}

		// We grab a strong object ptr to ensure the mesh is not deleted while we are working on it
		auto MeshPtr = MakeSharedObjectPtr(RealtimeMesh);
		
		return DoOnAsyncThread([MeshPtr, Options]()
		{
			FRealtimeMeshCardRepresentation CardRepresentation;
			const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForRealtimeMesh(MeshPtr.Get().Get(), CardRepresentation, Options);
			return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
		});
	}, [&Result, &CardRepresentation](TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>&& Future)
	{
		const TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation> ResultTuple = Future.Get();
		Result = ResultTuple.Get<0>();
		CardRepresentation = ResultTuple.Get<1>();
	});
}

void URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMeshAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UDynamicMesh* DynamicMesh,
	const FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshCardRepresentationGeneratorOptions Options, ERealtimeMeshOutcomePins& Result,
	FRealtimeMeshCardRepresentation& CardRepresentation)
{
	SetupSimpleLatentAction<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(WorldContextObject, LatentInfo,
	[&]()
		{
			if (DynamicMesh == nullptr)
			{
				UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshCardRepresentationGenerator: Generation Failed: DynamicMesh is null"));
				return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshCardRepresentation())).GetFuture();
			}

			FDynamicMesh3 MeshCopy;
			DynamicMesh->ProcessMesh([&MeshCopy](const FDynamicMesh3& Mesh)
			{
				MeshCopy = Mesh;
			});

			return DoOnAsyncThread([MeshCopy, DistanceField, Options]()
			{
				FRealtimeMeshCardRepresentation CardRepresentation;
				const ERealtimeMeshOutcomePins Outcome = GenerateCardRepresentationForDynamicMesh(MeshCopy, DistanceField, CardRepresentation, Options);
				return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>(Outcome, CardRepresentation);
			});
		}, [&Result, &CardRepresentation](TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation>>&& Future)
		{
			const TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshCardRepresentation> ResultTuple = Future.Get();
			Result = ResultTuple.Get<0>();
			CardRepresentation = ResultTuple.Get<1>();
		});
}

