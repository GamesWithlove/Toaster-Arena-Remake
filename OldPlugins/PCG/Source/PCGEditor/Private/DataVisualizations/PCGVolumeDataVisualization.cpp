// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataVisualizations/PCGVolumeDataVisualization.h"

#include "Data/PCGCollisionShapeData.h"
#include "Data/PCGCollisionWrapperData.h"
#include "Data/PCGPrimitiveData.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGVolumeData.h"
#include "Elements/PCGVolumeSampler.h"

#include "PCGEditorSettings.h"

const UPCGPointData* IPCGPrimitiveDataVisualization::CollapseToDebugPointData(FPCGContext* Context, const UPCGData* Data) const
{
	const UPCGSpatialData* SpatialData = Cast<UPCGSpatialData>(Data);
	
	if (!SpatialData)
	{
		return nullptr;
	}
	
	// Have special cases for primitive data that would potentially generate too many points if they were collapsed with default sizes.
	// We'll change the size of the extents of the points to make sure we can't get much higher than our upper bound.
	if (SpatialData->IsA<UPCGVolumeData>() || SpatialData->IsA<UPCGPrimitiveData>() || SpatialData->IsA<UPCGCollisionShapeData>() || SpatialData->IsA<UPCGCollisionWrapperData>())
	{
		const int32 NumPointsUpperBound = FMath::Max(1, GetDefault<UPCGEditorSettings>()->TargetNumPointsForDebug);
		
		const FBox Bounds = SpatialData->GetBounds();
		const double BoundsVolume = Bounds.GetVolume();
		// Pow of 1/3 is the cubic root.
		const double VoxelSize = FMath::Max(1.0, FMath::Pow(BoundsVolume / NumPointsUpperBound, 1.0 / 3.0));
		
		PCGVolumeSampler::FVolumeSamplerParams SamplerParams;
		SamplerParams.VoxelSize = FVector(VoxelSize, VoxelSize, VoxelSize);
		SamplerParams.Bounds = Bounds;

		return PCGVolumeSampler::SampleVolume(Context, SamplerParams, SpatialData);
	}
	else
	{
		return nullptr;
	}
}
