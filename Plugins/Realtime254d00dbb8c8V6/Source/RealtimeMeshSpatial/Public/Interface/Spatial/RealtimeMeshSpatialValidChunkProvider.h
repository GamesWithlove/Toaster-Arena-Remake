// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreFwd.h"
#include "Ext/RealtimeMeshFactoryCommon.h"

struct FRealtimeMeshSpatialComponentLocation;

namespace RealtimeMesh
{
	DECLARE_DELEGATE_OneParam(FRealtimeMeshSpatialCellMeshChangedDelegate, const FRealtimeMeshSpatialComponentLocation&);
	
	class IRealtimeMeshSpatialStreamingStructureProvider
	{
	protected:
		FVector SourceShiftInLocalSpace;
		int32 MaxLOD;
		uint32 bShouldUse3dStreaming : 1;

	public:

		IRealtimeMeshSpatialStreamingStructureProvider()
			: SourceShiftInLocalSpace(0)
			, MaxLOD(0)
			, bShouldUse3dStreaming(false)
		{
			
		}
		virtual ~IRealtimeMeshSpatialStreamingStructureProvider() = default;
		
		int32 GetMaxLOD() const { return MaxLOD; }
		bool ShouldUse3dStreaming() const { return bShouldUse3dStreaming; }
		const FVector& GetSourceShiftInLocalSpace() const { return SourceShiftInLocalSpace; }
		
		virtual bool IsCellValid(const FRealtimeMeshSpatialComponentLocation& CellLocation) const = 0;
		virtual FTransform GetGridTransform() const = 0;
		
		//virtual int32 GetMaxLOD() const = 0;

		//virtual FBox3d GetCellBoundsForLOD(int32 LODIndex) const = 0;
		//virtual FVector3d GetCellOffsetForLOD(int32 LODIndex) const = 0;
		
		/*virtual FBox3d GetCellFinalBounds(const FRealtimeMeshSpatialComponentLocation& CellLocation) const
		{
			const FVector3d CellOffset = GetCellFinalLocation(CellLocation);
			return GetCellBoundsForLOD(CellLocation.LOD).ShiftBy(CellOffset);
		}
		virtual FVector3d GetCellFinalLocation(const FRealtimeMeshSpatialComponentLocation& CellLocation) const
		{
			return GetCellOffsetForLOD(CellLocation.LOD) * FVector3d(CellLocation.Location);
		}
		
		virtual void ClampBoundsToValidRegion(FInt64Vector& Min, FInt64Vector& Max, int32 LOD) const = 0;*/

		//virtual FRealtimeMeshSpatialCellMeshChangedDelegate& OnCellChanged() = 0;
	};

	class IRealtimeMeshSpatialStreamingFactoryStructureProvider : public IRealtimeMeshSpatialStreamingStructureProvider
	{
	public:
		virtual TSharedPtr<FRealtimeMeshFactoryInitializationParams> GetCellInitParams(const FRealtimeMeshSpatialComponentLocation& Cell) = 0;
	};
}
