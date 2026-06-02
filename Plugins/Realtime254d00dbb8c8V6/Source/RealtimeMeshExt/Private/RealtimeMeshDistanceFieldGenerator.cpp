// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshDistanceFieldGenerator.h"
#include "RealtimeMeshComponentModule.h"
#include "RealtimeMeshDynamicMeshAdapter.h"
#include "Core/RealtimeMeshFuture.h"
#include "RealtimeMeshRepresentationCommon.h"
#include "RealtimeMeshSimple.h"
#include "UDynamicMesh.h"
#include "DynamicMesh/DynamicMesh3.h"
#include "DynamicMesh/DynamicMeshAABBTree3.h"
#include "Mesh/RealtimeMeshBasicShapeTools.h"
#include "Mesh/RealtimeMeshBlueprintMeshBuilder.h"
#include "Mesh/RealtimeMeshDistanceField.h"
#include "Templates/SharedPointer.h"
#include "UObject/StrongObjectPtr.h"


using namespace UE::Geometry;
using namespace RealtimeMesh;

namespace RealtimeMesh::DistanceFieldGen
{
	static int32 ComputeLinearVoxelIndex(UE::Math::TIntVector3<int32> VoxelCoordinate, UE::Math::TIntVector3<int32> VolumeDimensions)
	{
		return (VoxelCoordinate.Z * VolumeDimensions.Y + VoxelCoordinate.Y) * VolumeDimensions.X + VoxelCoordinate.X;
	}

	struct FDistanceFieldGenerationTask
	{
		float LocalSpaceTraceDistance;
		FBox VolumeBounds;
		float LocalToVolumeScale;
		FVector2d DistanceFieldToVolumeScaleBias;
		UE::Math::TIntVector3<int32> BrickCoordinate;
		UE::Math::TIntVector3<int32> IndirectionSize;

	
		uint8 OutBrickMaxDistance;
		uint8 OutBrickMinDistance;
		TArray<uint8> OutDistanceFieldVolume;
	};


	template<typename MeshType>
	static void DoGen(FDistanceFieldGenerationTask& Task, const MeshType& Mesh, const TMeshAABBTree3<MeshType>& MeshBVH,
		const FRealtimeMeshDistanceFieldGeneratorOptions& Options, const TArray<FVector3f>& SampleDirections)
	{
		const FVector IndirectionVoxelSize = Task.VolumeBounds.GetSize() / FVector(Task.IndirectionSize);
		const FVector DistanceFieldVoxelSize = IndirectionVoxelSize / FVector(DistanceField::UniqueDataBrickSize);
		const FVector BrickMinPosition = Task.VolumeBounds.Min + FVector(Task.BrickCoordinate) * IndirectionVoxelSize;

		Task.OutDistanceFieldVolume.Empty(DistanceField::BrickSize * DistanceField::BrickSize * DistanceField::BrickSize);
		Task.OutDistanceFieldVolume.AddZeroed(DistanceField::BrickSize * DistanceField::BrickSize * DistanceField::BrickSize);

		for (int32 ZIndex = 0; ZIndex < DistanceField::BrickSize; ZIndex++)
		{
			for (int32 YIndex = 0; YIndex < DistanceField::BrickSize; YIndex++)
			{
				for (int32 XIndex = 0; XIndex < DistanceField::BrickSize; XIndex++)
				{
					const FVector VoxelPosition = FVector(XIndex, YIndex, ZIndex) * DistanceFieldVoxelSize + BrickMinPosition;
					const int32 Index = (ZIndex * DistanceField::BrickSize * DistanceField::BrickSize + YIndex * DistanceField::BrickSize + XIndex);

					float MinLocalSpaceDistance = Task.LocalSpaceTraceDistance;

					bool bTraceRays = true;

					if (Options.bUsePointQuery)
					{					
						double ClosestUnsignedDistanceSq = (Task.LocalSpaceTraceDistance * 2.0f) * (Task.LocalSpaceTraceDistance * 2.0f);
						FRealtimeMeshRepresentationCommon::FindClosestPointInMesh(MeshBVH, VoxelPosition, Task.LocalSpaceTraceDistance, ClosestUnsignedDistanceSq);
					
						const double ClosestDistance = FMath::Sqrt(ClosestUnsignedDistanceSq);
						bTraceRays = ClosestDistance <= Task.LocalSpaceTraceDistance;
						MinLocalSpaceDistance = FMath::Min(MinLocalSpaceDistance, ClosestDistance);
					}
				
					if (bTraceRays)
					{
						int32 Hit = 0;
						int32 HitBack = 0;

						for (int32 SampleIndex = 0; SampleIndex < SampleDirections.Num(); SampleIndex++)
						{
							const FVector UnitRayDirection = (FVector)SampleDirections[SampleIndex];
							const float PullbackEpsilon = 1.e-4f;
							// Pull back the starting position slightly to make sure we hit a triangle that VoxelPosition is exactly on.  
							// This happens a lot with boxes, since we trace from voxel corners.
							const FVector StartPosition = VoxelPosition - PullbackEpsilon * Task.LocalSpaceTraceDistance * UnitRayDirection;
							const FVector EndPosition = VoxelPosition + UnitRayDirection * Task.LocalSpaceTraceDistance;

							if (FMath::LineBoxIntersection(Task.VolumeBounds, VoxelPosition, EndPosition, UnitRayDirection))
							{							
								double ClosestUnsignedDistanceSq = Task.LocalSpaceTraceDistance;
								bool bHitBackSize = false;
								if (FRealtimeMeshRepresentationCommon::FindClosestRayIntersectionDistance(Mesh, MeshBVH, VoxelPosition, EndPosition, ClosestUnsignedDistanceSq, bHitBackSize))
								{
									Hit++;

									if (bHitBackSize)
									{
										HitBack++;
									}

									if (!Options.bUsePointQuery)
									{
										const float CurrentDistance = FMath::Sqrt(ClosestUnsignedDistanceSq); // EmbreeRay.ray.tfar * Task.LocalSpaceTraceDistance;

										if (CurrentDistance < MinLocalSpaceDistance)
										{
											MinLocalSpaceDistance = CurrentDistance;
										}
									}
								}
							}
						}

						// Consider this voxel 'inside' an object if we hit a significant number of backfaces
						if (Hit > 0 && HitBack > .25f * SampleDirections.Num())
						{
							MinLocalSpaceDistance *= -1;
						}
					}

					// Transform to the tracing shader's Volume space
					const float VolumeSpaceDistance = MinLocalSpaceDistance * Task.LocalToVolumeScale;
					// Transform to the Distance Field texture's space
					const float RescaledDistance = (VolumeSpaceDistance - Task.DistanceFieldToVolumeScaleBias.Y) / Task.DistanceFieldToVolumeScaleBias.X;
					check(DistanceField::DistanceFieldFormat == PF_G8);
					const uint8 QuantizedDistance = FMath::Clamp<int32>(FMath::FloorToInt(RescaledDistance * 255.0f + .5f), 0, 255);
					Task.OutDistanceFieldVolume[Index] = QuantizedDistance;
					Task.OutBrickMaxDistance = FMath::Max(Task.OutBrickMaxDistance, QuantizedDistance);
					Task.OutBrickMinDistance = FMath::Min(Task.OutBrickMinDistance, QuantizedDistance);
				}
			}
		}
	}

	template<typename MeshType>
	bool GenerateDistanceField(FRealtimeMeshDistanceField& OutDistanceField, const MeshType& Mesh, const TMeshAABBTree3<MeshType>& MeshBVH,
		const FRealtimeMeshDistanceFieldGeneratorOptions& Options)
	{
		// TODO: Should we check validity of the mesh/spatial structures

		if (Options.DistanceFieldResolutionScale <= 0.0f)
		{
			UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: ResolutionScale must be greater than 0"));
			OutDistanceField = FRealtimeMeshDistanceField();
			return false;
		}
	
		TArray<FVector3f> SampleDirections;
		{
			const int32 NumVoxelDistanceSamples = Options.bUsePointQuery ? 49 : 576;
			FRandomStream RandomStream(0);
			FRealtimeMeshRepresentationCommon::GenerateStratifiedUniformHemisphereSamples(NumVoxelDistanceSamples, RandomStream, SampleDirections);
			TArray<FVector3f> OtherHemisphereSamples;
			FRealtimeMeshRepresentationCommon::GenerateStratifiedUniformHemisphereSamples(NumVoxelDistanceSamples, RandomStream, OtherHemisphereSamples);

			for (int32 i = 0; i < OtherHemisphereSamples.Num(); i++)
			{
				FVector3f Sample = OtherHemisphereSamples[i];
				Sample.Z *= -1.0f;
				SampleDirections.Add(Sample);
			}
		}
	
		static const auto CVar = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.DistanceFields.MaxPerMeshResolution"));
		const int32 PerMeshMax = CVar->GetValueOnAnyThread();

		// Meshes with explicit artist-specified scale can go higher
		const int32 MaxNumBlocksOneDim = FMath::Min<int32>(FMath::DivideAndRoundNearest(Options.DistanceFieldResolutionScale <= 1 ? PerMeshMax / 2 : PerMeshMax,
			DistanceField::UniqueDataBrickSize), DistanceField::MaxIndirectionDimension - 1);

		static const auto CVarDensity = IConsoleManager::Get().FindTConsoleVariableDataFloat(TEXT("r.DistanceFields.DefaultVoxelDensity"));
		const float VoxelDensity = CVarDensity->GetValueOnAnyThread();

		const float NumVoxelsPerLocalSpaceUnit = VoxelDensity * Options.DistanceFieldResolutionScale;
		FBox LocalSpaceMeshBounds(MeshBVH.GetBoundingBox());
	
		// Make sure the mesh bounding box has positive extents to handle planes
		{
			FVector MeshBoundsCenter = LocalSpaceMeshBounds.GetCenter();
			FVector MeshBoundsExtent = FVector::Max(LocalSpaceMeshBounds.GetExtent(), FVector(1.0f, 1.0f, 1.0f));
			LocalSpaceMeshBounds.Min = MeshBoundsCenter - MeshBoundsExtent;
			LocalSpaceMeshBounds.Max = MeshBoundsCenter + MeshBoundsExtent;
		}
	
		// We sample on voxel corners and use central differencing for gradients, so a box mesh using two-sided materials whose vertices lie on LocalSpaceMeshBounds produces a zero gradient on intersection
		// Expand the mesh bounds by a fraction of a voxel to allow room for a pullback on the hit location for computing the gradient.
		// Only expand for two sided meshes as this adds significant Mesh SDF tracing cost
		if (Options.bGenerateAsIfTwoSided)
		{
			const FVector DesiredDimensions = FVector(LocalSpaceMeshBounds.GetSize() * FVector(NumVoxelsPerLocalSpaceUnit / (float)DistanceField::UniqueDataBrickSize));
			const UE::Math::TIntVector3<int32> Mip0IndirectionDimensions = UE::Math::TIntVector3<int32>(
				FMath::Clamp(FMath::RoundToInt(DesiredDimensions.X), 1, MaxNumBlocksOneDim),
				FMath::Clamp(FMath::RoundToInt(DesiredDimensions.Y), 1, MaxNumBlocksOneDim),
				FMath::Clamp(FMath::RoundToInt(DesiredDimensions.Z), 1, MaxNumBlocksOneDim));

			const float CentralDifferencingExpandInVoxels = .25f;
			const FVector TexelObjectSpaceSize = LocalSpaceMeshBounds.GetSize() / FVector(Mip0IndirectionDimensions * DistanceField::UniqueDataBrickSize - UE::Math::TIntVector3<int32>(2 * CentralDifferencingExpandInVoxels));
			LocalSpaceMeshBounds = LocalSpaceMeshBounds.ExpandBy(TexelObjectSpaceSize);
		}

		// The tracing shader uses a Volume space that is normalized by the maximum extent, to keep Volume space within [-1, 1], we must match that behavior when encoding
		const float LocalToVolumeScale = 1.0f / LocalSpaceMeshBounds.GetExtent().GetMax();

		const FVector DesiredDimensions = FVector(LocalSpaceMeshBounds.GetSize() * FVector(NumVoxelsPerLocalSpaceUnit / (float)DistanceField::UniqueDataBrickSize));
		const UE::Math::TIntVector3<int32> Mip0IndirectionDimensions = UE::Math::TIntVector3<int32>(
			FMath::Clamp(FMath::RoundToInt(DesiredDimensions.X), 1, MaxNumBlocksOneDim),
			FMath::Clamp(FMath::RoundToInt(DesiredDimensions.Y), 1, MaxNumBlocksOneDim),
			FMath::Clamp(FMath::RoundToInt(DesiredDimensions.Z), 1, MaxNumBlocksOneDim));

		TArray<uint8> StreamableMipData;
		auto OutVolumeData = FDistanceFieldVolumeData();
	
		for (int32 MipIndex = 0; MipIndex < DistanceField::NumMips; MipIndex++)
		{
			const UE::Math::TIntVector3<int32> IndirectionDimensions = UE::Math::TIntVector3<int32>(
				FMath::DivideAndRoundUp(Mip0IndirectionDimensions.X, 1 << MipIndex),
				FMath::DivideAndRoundUp(Mip0IndirectionDimensions.Y, 1 << MipIndex),
				FMath::DivideAndRoundUp(Mip0IndirectionDimensions.Z, 1 << MipIndex));

			// Expand to guarantee one voxel border for gradient reconstruction using bilinear filtering
			const FVector TexelObjectSpaceSize = LocalSpaceMeshBounds.GetSize() / FVector(IndirectionDimensions * DistanceField::UniqueDataBrickSize - UE::Math::TIntVector3<int32>(2 * DistanceField::MeshDistanceFieldObjectBorder));
			const FBox DistanceFieldVolumeBounds = LocalSpaceMeshBounds.ExpandBy(TexelObjectSpaceSize);

			const FVector IndirectionVoxelSize = DistanceFieldVolumeBounds.GetSize() / FVector(IndirectionDimensions);
			const float IndirectionVoxelRadius = IndirectionVoxelSize.Size();

			const FVector VolumeSpaceDistanceFieldVoxelSize = IndirectionVoxelSize * LocalToVolumeScale / FVector(DistanceField::UniqueDataBrickSize);
			const float MaxDistanceForEncoding = VolumeSpaceDistanceFieldVoxelSize.Size() * DistanceField::BandSizeInVoxels;
			const float LocalSpaceTraceDistance = MaxDistanceForEncoding / LocalToVolumeScale;
			const FVector2D DistanceFieldToVolumeScaleBias(2.0f * MaxDistanceForEncoding, -MaxDistanceForEncoding);

			TArray<FDistanceFieldGenerationTask> AsyncTasks;
			AsyncTasks.Reserve(IndirectionDimensions.X * IndirectionDimensions.Y * IndirectionDimensions.Z / 8);

			for (int32 ZIndex = 0; ZIndex < IndirectionDimensions.Z; ZIndex++)
			{
				for (int32 YIndex = 0; YIndex < IndirectionDimensions.Y; YIndex++)
				{
					for (int32 XIndex = 0; XIndex < IndirectionDimensions.X; XIndex++)
					{
						FDistanceFieldGenerationTask& NewTask = AsyncTasks.Emplace_GetRef();
						NewTask.LocalSpaceTraceDistance = LocalSpaceTraceDistance;
						NewTask.VolumeBounds = DistanceFieldVolumeBounds;
						NewTask.LocalToVolumeScale = LocalToVolumeScale;
						NewTask.DistanceFieldToVolumeScaleBias = DistanceFieldToVolumeScaleBias;
						NewTask.BrickCoordinate = UE::Math::TIntVector3<int32>(XIndex, YIndex, ZIndex);
						NewTask.IndirectionSize = IndirectionDimensions;
					}
				}
			}


			ParallelFor(TEXT("RealtimeMeshDistanceFieldGeneration.PF"), AsyncTasks.Num(), 64,
				[&AsyncTasks, &Mesh, &MeshBVH, &Options, &SampleDirections](int32 TaskIndex)
				{
					DoGen(AsyncTasks[TaskIndex], Mesh, MeshBVH, Options, SampleDirections);				
				}, (Options.bMultiThreadedGeneration? EParallelForFlags::BackgroundPriority | EParallelForFlags::Unbalanced : EParallelForFlags::ForceSingleThread));	

			FSparseDistanceFieldMip& OutMip = OutVolumeData.Mips[MipIndex];
			TArray<uint32> IndirectionTable;
			IndirectionTable.Empty(IndirectionDimensions.X * IndirectionDimensions.Y * IndirectionDimensions.Z);
			IndirectionTable.AddUninitialized(IndirectionDimensions.X * IndirectionDimensions.Y * IndirectionDimensions.Z);

			for (int32 i = 0; i < IndirectionTable.Num(); i++)
			{
				IndirectionTable[i] = DistanceField::InvalidBrickIndex;
			} 

			TArray<FDistanceFieldGenerationTask*> ValidBricks;
			ValidBricks.Empty(AsyncTasks.Num());

			for (int32 TaskIndex = 0; TaskIndex < AsyncTasks.Num(); TaskIndex++)
			{
				if (AsyncTasks[TaskIndex].OutBrickMinDistance < MAX_uint8 && AsyncTasks[TaskIndex].OutBrickMaxDistance > MIN_uint8)
				{
					ValidBricks.Add(&AsyncTasks[TaskIndex]);
				}
			}

			const uint32 NumBricks = ValidBricks.Num();

			const uint32 BrickSizeBytes = DistanceField::BrickSize * DistanceField::BrickSize * DistanceField::BrickSize * GPixelFormats[DistanceField::DistanceFieldFormat].BlockBytes;

			TArray<uint8> DistanceFieldBrickData;
			DistanceFieldBrickData.Empty(BrickSizeBytes * NumBricks);
			DistanceFieldBrickData.AddUninitialized(BrickSizeBytes * NumBricks);

			for (int32 BrickIndex = 0; BrickIndex < ValidBricks.Num(); BrickIndex++)
			{
				const FDistanceFieldGenerationTask& Brick = *ValidBricks[BrickIndex];
				const int32 IndirectionIndex = ComputeLinearVoxelIndex(Brick.BrickCoordinate, IndirectionDimensions);
				IndirectionTable[IndirectionIndex] = BrickIndex;

				check(BrickSizeBytes == Brick.OutDistanceFieldVolume.Num() * Brick.OutDistanceFieldVolume.GetTypeSize());
				FPlatformMemory::Memcpy(&DistanceFieldBrickData[BrickIndex * BrickSizeBytes], Brick.OutDistanceFieldVolume.GetData(),
					Brick.OutDistanceFieldVolume.Num() * Brick.OutDistanceFieldVolume.GetTypeSize());
			}

			const int32 IndirectionTableBytes = IndirectionTable.Num() * IndirectionTable.GetTypeSize();
			const int32 MipDataBytes = IndirectionTableBytes + DistanceFieldBrickData.Num();

			
			if (MipIndex == DistanceField::NumMips - 1)
			{
				OutVolumeData.AlwaysLoadedMip.Empty(MipDataBytes);
				OutVolumeData.AlwaysLoadedMip.AddUninitialized(MipDataBytes);

				FPlatformMemory::Memcpy(&OutVolumeData.AlwaysLoadedMip[0], IndirectionTable.GetData(), IndirectionTableBytes);

				if (DistanceFieldBrickData.Num() > 0)
				{
					FPlatformMemory::Memcpy(&OutVolumeData.AlwaysLoadedMip[IndirectionTableBytes], DistanceFieldBrickData.GetData(), DistanceFieldBrickData.Num());
				}				
			}
			else
			{
				
				OutMip.BulkOffset = StreamableMipData.Num();
				StreamableMipData.AddUninitialized(MipDataBytes);
				OutMip.BulkSize = StreamableMipData.Num() - OutMip.BulkOffset;
				// indirection format removed as it's apparently causing an Internal Compiler error at IntVector.h(560): Error C1001: Internal compiler error.
				//checkf(OutMip.BulkSize > 0, TEXT("BulkSize was 0 for RealtimeMeshDistanceField with %d%d%d indirection"), IndirectionDimensions.X, IndirectionDimensions.Y, IndirectionDimensions.Z);
				checkf(OutMip.BulkSize > 0, TEXT("BulkSize was 0 for RealtimeMeshDistanceField"));

				FPlatformMemory::Memcpy(&StreamableMipData[OutMip.BulkOffset], IndirectionTable.GetData(), IndirectionTableBytes);

				if (DistanceFieldBrickData.Num() > 0)
				{
					FPlatformMemory::Memcpy(&StreamableMipData[OutMip.BulkOffset + IndirectionTableBytes], DistanceFieldBrickData.GetData(), DistanceFieldBrickData.Num());
				}
				
			}
			

			OutMip.IndirectionDimensions = IndirectionDimensions;
	#if RMC_ENGINE_ABOVE_5_4
			OutMip.DistanceFieldToVolumeScaleBias = FVector2f(DistanceFieldToVolumeScaleBias);
	#else
			OutMip.DistanceFieldToVolumeScaleBias = DistanceFieldToVolumeScaleBias;
	#endif
			OutMip.NumDistanceFieldBricks = NumBricks;

			// Account for the border voxels we added
			const FVector VirtualUVMin = FVector(DistanceField::MeshDistanceFieldObjectBorder) / FVector(IndirectionDimensions * DistanceField::UniqueDataBrickSize);
			const FVector VirtualUVSize = FVector(IndirectionDimensions * DistanceField::UniqueDataBrickSize - UE::Math::TIntVector3<int32>(2 * DistanceField::MeshDistanceFieldObjectBorder)) / FVector(IndirectionDimensions * DistanceField::UniqueDataBrickSize);
	
			const FVector VolumePositionExtent = LocalSpaceMeshBounds.GetExtent() * LocalToVolumeScale;

			// [-VolumePositionExtent, VolumePositionExtent] -> [VirtualUVMin, VirtualUVMin + VirtualUVSize]
	#if RMC_ENGINE_ABOVE_5_4
			OutMip.VolumeToVirtualUVScale = FVector3f(VirtualUVSize) / (2 * FVector3f(VolumePositionExtent));
			OutMip.VolumeToVirtualUVAdd = FVector3f(VolumePositionExtent) * OutMip.VolumeToVirtualUVScale + FVector3f(VirtualUVMin);
	#else
			OutMip.VolumeToVirtualUVScale = VirtualUVSize / (2 * VolumePositionExtent);
			OutMip.VolumeToVirtualUVAdd = VolumePositionExtent * OutMip.VolumeToVirtualUVScale + VirtualUVMin;
	#endif

		}

		OutVolumeData.bMostlyTwoSided = Options.bGenerateAsIfTwoSided;
#if RMC_ENGINE_ABOVE_5_4
		OutVolumeData.LocalSpaceMeshBounds = FBox3f(LocalSpaceMeshBounds);
#else
		OutVolumeData.LocalSpaceMeshBounds = LocalSpaceMeshBounds;
#endif

		OutVolumeData.StreamableMips.Lock(LOCK_READ_WRITE);
		uint8* Ptr = (uint8*)OutVolumeData.StreamableMips.Realloc(StreamableMipData.Num());
		FMemory::Memcpy(Ptr, StreamableMipData.GetData(), StreamableMipData.Num());
		OutVolumeData.StreamableMips.Unlock();
		OutVolumeData.StreamableMips.SetBulkDataFlags(BULKDATA_Force_NOT_InlinePayload);

		/*const float BuildTime = (float)(FPlatformTime::Seconds() - StartTime);
		 
		if (BuildTime > 1.0f)
		{
			UE_LOG(LogMeshUtilities, Log, TEXT("Finished distance field build in %.1fs - %ux%ux%u sparse distance field, %.1fMb total, %.1fMb always loaded, %u%% occupied, %u triangles, %s"),
				BuildTime,
				Mip0IndirectionDimensions.X * DistanceField::UniqueDataBrickSize,
				Mip0IndirectionDimensions.Y * DistanceField::UniqueDataBrickSize,
				Mip0IndirectionDimensions.Z * DistanceField::UniqueDataBrickSize,
				(OutData.GetResourceSizeBytes() + OutData.StreamableMips.GetBulkDataSize()) / 1024.0f / 1024.0f,
				(OutData.AlwaysLoadedMip.GetAllocatedSize()) / 1024.0f / 1024.0f,
				FMath::RoundToInt(100.0f * OutData.Mips[0].NumDistanceFieldBricks / (float)(Mip0IndirectionDimensions.X * Mip0IndirectionDimensions.Y * Mip0IndirectionDimensions.Z)),
				EmbreeScene.NumIndices / 3,
				*MeshName);
		}
		*/
		OutDistanceField = FRealtimeMeshDistanceField(MoveTemp(OutVolumeData));
		return true;
	}
}


ERealtimeMeshOutcomePins URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForStreamSet(const FRealtimeMeshStreamSet& StreamSet,
	const FRealtimeMeshAABBTree3& StreamSetBVH, FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	const FRealtimeMeshDynamicMeshAdapter MeshAdapter(StreamSet);
	
	DistanceField = FRealtimeMeshDistanceField();
	return RealtimeMesh::DistanceFieldGen::GenerateDistanceField<FRealtimeMeshDynamicMeshAdapter>(DistanceField, MeshAdapter, StreamSetBVH, Options)
		? ERealtimeMeshOutcomePins::Success
		: ERealtimeMeshOutcomePins::Failure;
}

ERealtimeMeshOutcomePins URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForStreamSet(const FRealtimeMeshStreamSet& StreamSet,
	FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	const FRealtimeMeshDynamicMeshAdapter MeshAdapter(StreamSet);
	const TMeshAABBTree3 MeshBVH(&MeshAdapter, true);

	check(StreamSet.FindChecked(FRealtimeMeshStreams::Triangles).Num() == MeshAdapter.TriangleCount());
	
	return GenerateDistanceFieldForStreamSet(StreamSet, MeshBVH, DistanceField, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForStreamSet(URealtimeMeshStreamSet* StreamSet, FRealtimeMeshDistanceField& DistanceField,
	FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	if (StreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: StreamSet is null"));
		DistanceField = FRealtimeMeshDistanceField();
		return ERealtimeMeshOutcomePins::Failure;
	}
	
	return GenerateDistanceFieldForStreamSet(StreamSet->GetStreamSet(), DistanceField, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForRealtimeMesh(URealtimeMeshSimple* RealtimeMesh, FRealtimeMeshDistanceField& DistanceField,
	FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	DistanceField = FRealtimeMeshDistanceField();
	
	if (RealtimeMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: RealtimeMesh is null"));
		return ERealtimeMeshOutcomePins::Failure;
	}

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
	
	return GenerateDistanceFieldForStreamSet(Streams, DistanceField, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForDynamicMesh(const FDynamicMesh3& DynamicMesh,
	const FDynamicMeshAABBTree3& DynamicMeshBVH, FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	DistanceField = FRealtimeMeshDistanceField();
	return RealtimeMesh::DistanceFieldGen::GenerateDistanceField<FDynamicMesh3>(DistanceField, DynamicMesh, DynamicMeshBVH, Options)
		? ERealtimeMeshOutcomePins::Success
		: ERealtimeMeshOutcomePins::Failure;
}

ERealtimeMeshOutcomePins URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForDynamicMesh(const FDynamicMesh3& DynamicMesh,
	FRealtimeMeshDistanceField& DistanceField, FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	const TMeshAABBTree3 MeshBVH(&DynamicMesh, true);

	return GenerateDistanceFieldForDynamicMesh(DynamicMesh, MeshBVH, DistanceField, Options);
}

ERealtimeMeshOutcomePins URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForDynamicMesh(UDynamicMesh* DynamicMesh, FRealtimeMeshDistanceField& DistanceField,
	FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	if (DynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: DynamicMesh is null"));
		DistanceField = FRealtimeMeshDistanceField();
		return ERealtimeMeshOutcomePins::Failure;
	}

	DistanceField = FRealtimeMeshDistanceField();
	ERealtimeMeshOutcomePins Outcome = ERealtimeMeshOutcomePins::Failure;
	DynamicMesh->ProcessMesh([&](const FDynamicMesh3& Mesh)
	{
		Outcome = GenerateDistanceFieldForDynamicMesh(Mesh, DistanceField, Options);
	});
	return Outcome;
}


TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForStreamSetAsync(
	const RealtimeMesh::FRealtimeMeshStreamSet& StreamSet, FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	return DoOnAsyncThread([StreamSet = FRealtimeMeshStreamSet(StreamSet, false, { FRealtimeMeshStreams::Position, FRealtimeMeshStreams::Triangles }), Options]()
	{
		FRealtimeMeshDistanceField DistanceField;
		const ERealtimeMeshOutcomePins Outcome = GenerateDistanceFieldForStreamSet(StreamSet, DistanceField, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>(Outcome, DistanceField);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForStreamSetAsync(
	URealtimeMeshStreamSet* StreamSet, FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	if (StreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: StreamSet is null"));
		return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshDistanceField())).GetFuture();
	}
	
	return DoOnAsyncThread([StreamSet = FRealtimeMeshStreamSet(StreamSet->GetStreamSet(), false, { FRealtimeMeshStreams::Position, FRealtimeMeshStreams::Triangles }), Options]()
	{
		FRealtimeMeshDistanceField DistanceField;
		const ERealtimeMeshOutcomePins Outcome = GenerateDistanceFieldForStreamSet(StreamSet, DistanceField, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>(Outcome, DistanceField);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForRealtimeMeshAsync(
	URealtimeMeshSimple* RealtimeMesh, FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	if (RealtimeMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: RealtimeMesh is null"));
		return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshDistanceField())).GetFuture();
	}

	// We grab a strong object ptr to ensure the mesh is not deleted while we are working on it
	auto MeshPtr = MakeSharedObjectPtr(RealtimeMesh);
	
	return DoOnAsyncThread([MeshPtr, Options]()
	{
		FRealtimeMeshDistanceField DistanceField;
		const ERealtimeMeshOutcomePins Outcome = GenerateDistanceFieldForRealtimeMesh(MeshPtr.Get().Get(), DistanceField, Options);
		
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>(Outcome, DistanceField);
	});
}


TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForDynamicMeshAsync(
	const UE::Geometry::FDynamicMesh3& DynamicMesh, FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	return DoOnAsyncThread([DynamicMesh, Options]()
	{
		FRealtimeMeshDistanceField DistanceField;
		const ERealtimeMeshOutcomePins Outcome = GenerateDistanceFieldForDynamicMesh(DynamicMesh, DistanceField, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>(Outcome, DistanceField);
	});
}

TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>> URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForDynamicMeshAsync(UDynamicMesh* DynamicMesh,
	FRealtimeMeshDistanceFieldGeneratorOptions Options)
{
	if (DynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: DynamicMesh is null"));
		return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshDistanceField())).GetFuture();
	}
	
	FDynamicMesh3 MeshCopy;
	DynamicMesh->ProcessMesh([&MeshCopy](const FDynamicMesh3& Mesh)
	{
		MeshCopy = Mesh;
	});
	
	return DoOnAsyncThread([MeshCopy, Options]()
	{
		FRealtimeMeshDistanceField DistanceField;
		const ERealtimeMeshOutcomePins Outcome = GenerateDistanceFieldForDynamicMesh(MeshCopy, DistanceField, Options);
		return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>(Outcome, DistanceField);
	});
}

void URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForStreamSetAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, URealtimeMeshStreamSet* StreamSet,
	FRealtimeMeshDistanceFieldGeneratorOptions Options, ERealtimeMeshOutcomePins& Result, FRealtimeMeshDistanceField& DistanceField)
{
	SetupSimpleLatentAction<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>(WorldContextObject, LatentInfo,
		[&]()
		{
			if (StreamSet == nullptr)
			{
				UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: StreamSet is null"));
				return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshDistanceField())).GetFuture();
			}
			
			return DoOnAsyncThread([StreamSet = FRealtimeMeshStreamSet(StreamSet->GetStreamSet(), false, { FRealtimeMeshStreams::Position, FRealtimeMeshStreams::Triangles }), Options]()
			{
				FRealtimeMeshDistanceField DistanceField;
				const ERealtimeMeshOutcomePins Outcome = GenerateDistanceFieldForStreamSet(StreamSet, DistanceField, Options);
				return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>(Outcome, DistanceField);
			});
		}, [&Result, &DistanceField](TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>&& Future)
		{
			const TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField> ResultTuple = Future.Get();
			Result = ResultTuple.Get<0>();
			DistanceField = ResultTuple.Get<1>();
		});
}

void URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForRealtimeMeshAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, URealtimeMeshSimple* RealtimeMesh,
	FRealtimeMeshDistanceFieldGeneratorOptions Options, ERealtimeMeshOutcomePins& Result, FRealtimeMeshDistanceField& DistanceField)
{
	SetupSimpleLatentAction<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>(WorldContextObject, LatentInfo,
		[&]()
		{
			if (RealtimeMesh == nullptr)
			{
				UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: RealtimeMesh is null"));
				return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshDistanceField())).GetFuture();
			}

			// We grab a strong object ptr to ensure the mesh is not deleted while we are working on it
			auto MeshPtr = MakeSharedObjectPtr(RealtimeMesh);

			return DoOnAsyncThread([MeshPtr, Options]()
			{
				FRealtimeMeshDistanceField DistanceField;
				const ERealtimeMeshOutcomePins Outcome = GenerateDistanceFieldForRealtimeMesh(MeshPtr.Get().Get(), DistanceField, Options);
				return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>(Outcome, DistanceField);
			});
		}, [&Result, &DistanceField](TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>&& Future)
		{
			const TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField> ResultTuple = Future.Get();
			Result = ResultTuple.Get<0>();
			DistanceField = ResultTuple.Get<1>();
		});
}

void URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForDynamicMeshAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UDynamicMesh* DynamicMesh,
	FRealtimeMeshDistanceFieldGeneratorOptions Options, ERealtimeMeshOutcomePins& Result, FRealtimeMeshDistanceField& DistanceField)
{
	SetupSimpleLatentAction<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>(WorldContextObject, LatentInfo,
		[&]()
		{
			if (DynamicMesh == nullptr)
			{
				UE_LOG(LogRealtimeMesh, Warning, TEXT("URealtimeMeshDistanceFieldGeneration: Generation Failed: DynamicMesh is null"));
				return MakeFulfilledPromise<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>(MakeTuple(ERealtimeMeshOutcomePins::Failure, FRealtimeMeshDistanceField())).GetFuture();
			}

			FDynamicMesh3 MeshCopy;
			DynamicMesh->ProcessMesh([&MeshCopy](const FDynamicMesh3& Mesh)
			{
				MeshCopy = Mesh;
			});

			return DoOnAsyncThread([MeshCopy, Options]()
			{
				FRealtimeMeshDistanceField DistanceField;
				const ERealtimeMeshOutcomePins Outcome = GenerateDistanceFieldForDynamicMesh(MeshCopy, DistanceField, Options);
				return TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>(Outcome, DistanceField);
			});
		}, [&Result, &DistanceField](TFuture<TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField>>&& Future)
		{
			const TTuple<ERealtimeMeshOutcomePins, FRealtimeMeshDistanceField> ResultTuple = Future.Get();
			Result = ResultTuple.Get<0>();
			DistanceField = ResultTuple.Get<1>();
		});
}

