// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Spatial/FastWinding.h"

namespace RealtimeMesh
{
	struct FRealtimeMeshRepresentationCommon
	{
		static FVector3f UniformSampleHemisphere(FVector2D Uniforms)
		{
			Uniforms = Uniforms * 2.0f - 1.0f;

			if (Uniforms == FVector2D::ZeroVector)
			{
				return FVector3f::ZeroVector;
			}

			float R;
			float Theta;

			if (FMath::Abs(Uniforms.X) > FMath::Abs(Uniforms.Y))
			{
				R = Uniforms.X;
				Theta = (float)PI / 4 * (Uniforms.Y / Uniforms.X);
			}
			else
			{
				R = Uniforms.Y;
				Theta = (float)PI / 2 - (float)PI / 4 * (Uniforms.X / Uniforms.Y);
			}

			// concentric disk sample
			const float U = R * FMath::Cos(Theta);
			const float V = R * FMath::Sin(Theta);
			const float R2 = R * R;

			// map to hemisphere [P. Shirley, Kenneth Chiu; 1997; A Low Distortion Map Between Disk and Square]
			return FVector3f(U * FMath::Sqrt(2 - R2), V * FMath::Sqrt(2 - R2), 1.0f - R2);
		}

		static void GenerateStratifiedUniformHemisphereSamples(int32 NumSamples, FRandomStream& RandomStream, TArray<FVector3f>& Samples)
		{
			const int32 NumSamplesDim = FMath::TruncToInt(FMath::Sqrt((float)NumSamples));

			Samples.Empty(NumSamplesDim * NumSamplesDim);

			for (int32 IndexX = 0; IndexX < NumSamplesDim; IndexX++)
			{
				for (int32 IndexY = 0; IndexY < NumSamplesDim; IndexY++)
				{
					const float U1 = RandomStream.GetFraction();
					const float U2 = RandomStream.GetFraction();

					const float Fraction1 = (IndexX + U1) / (float)NumSamplesDim;
					const float Fraction2 = (IndexY + U2) / (float)NumSamplesDim;

					FVector3f Tmp = UniformSampleHemisphere(FVector2D(Fraction1, Fraction2));

					// Workaround issue with compiler optimization by using copy constructor here.
					Samples.Add(FVector3f(Tmp));
				}
			}
		}

		// [Frisvad 2012, "Building an Orthonormal Basis from a 3D Unit Vector Without Normalization"]
		static FMatrix44f GetTangentBasisFrisvad(FVector3f TangentZ)
		{
			FVector3f TangentX;
			FVector3f TangentY;

			if (TangentZ.Z < -0.9999999f)
			{
				TangentX = FVector3f(0, -1, 0);
				TangentY = FVector3f(-1, 0, 0);
			}
			else
			{
				float A = 1.0f / (1.0f + TangentZ.Z);
				float B = -TangentZ.X * TangentZ.Y * A;
				TangentX = FVector3f(1.0f - TangentZ.X * TangentZ.X * A, B, -TangentZ.X);
				TangentY = FVector3f(B, 1.0f - TangentZ.Y * TangentZ.Y * A, -TangentZ.Y);
			}

			FMatrix44f LocalBasis;
			LocalBasis.SetIdentity();
			LocalBasis.SetAxis(0, TangentX);
			LocalBasis.SetAxis(1, TangentY);
			LocalBasis.SetAxis(2, TangentZ);
			return LocalBasis;
		}

		template<typename MeshType>
		static bool FindClosestPointInMesh(const UE::Geometry::TMeshAABBTree3<MeshType>& MeshBVH, const FVector3d& QueryPoint, double MaxSearchDistance, double& OutDistanceToNearestSquared)
		{
			UE::Geometry::IMeshSpatial::FQueryOptions QueryOptions;
			QueryOptions.MaxDistance = MaxSearchDistance;

			if (MeshBVH.FindNearestTriangle(QueryPoint, OutDistanceToNearestSquared, QueryOptions) != INDEX_NONE)
			{
				// FDistPoint3Triangle3d Distance = TMeshQueries<FDynamicMesh3>::TriangleDistance(Mesh, NearestTID, QueryPoint);
				return true;
			}
			OutDistanceToNearestSquared = TNumericLimits<double>::Max();
			return false;
		}

		template<typename MeshType>
		static bool IsPointInside(const UE::Geometry::TFastWindingTree<MeshType>& MeshFWNTree, const FVector3d& QueryPoint)
		{
			return MeshFWNTree.IsInside(QueryPoint/*, Options.WindingIsoThreshold*/);
		}
		
		template<typename MeshType>
		static bool FindClosestRayIntersectionDistance(const MeshType& Mesh, const UE::Geometry::TMeshAABBTree3<MeshType>& MeshBVH, const FVector3d& RayOrigin, const FVector3d& RayEnd, double& OutIntersectionDistance, bool& bHitBackside)
		{
			UE::Geometry::IMeshSpatial::FQueryOptions QueryOptions;
			QueryOptions.MaxDistance = UE::Geometry::Distance(RayEnd, RayOrigin);
			const FVector3d RayDirection = UE::Geometry::Normalized(RayEnd - RayOrigin);
			const FRay3d Ray(RayOrigin, RayDirection);	
			const int32 HitTriangleId = MeshBVH.FindNearestHitTriangle(Ray, QueryOptions);
			if (HitTriangleId >= 0)
			{
				const UE::Geometry::FIntrRay3Triangle3d Intersection = UE::Geometry::TMeshQueries<MeshType>::TriangleIntersection(Mesh, HitTriangleId, Ray);
				const FVector3d HitPosition = Ray.PointAt(Intersection.RayParameter);
				OutIntersectionDistance = UE::Geometry::Distance(RayOrigin, HitPosition);
				const FVector HitNormal = Mesh.GetTriNormal(HitTriangleId);

				// TODO: Fix handling of two sided
				bHitBackside = FVector::DotProduct(RayDirection, HitNormal) > 0 ;/* && !EmbreeContext.IsHitTwoSided()*/
			
				return true;
			}
			OutIntersectionDistance = TNumericLimits<double>::Max();
			bHitBackside = false;
			return false;
		}
	};
}
