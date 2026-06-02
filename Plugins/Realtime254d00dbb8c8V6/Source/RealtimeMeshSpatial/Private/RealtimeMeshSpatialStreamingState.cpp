// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshSpatialStreamingState.h"
#include "RealtimeMeshSpatialStreamingCellState.h"
#include "RealtimeMeshSpatialStreamingSubsystem.h"
#include "Spatial/RealtimeMeshSpatialValidChunkProvider.h"
#include "Algo/AllOf.h"
#include "Algo/AnyOf.h"
#include "Algo/RemoveIf.h"


DECLARE_CYCLE_STAT(TEXT("RealtimeMeshSpatial - GetWantedStreamingState"), STAT_RealtimeMesh_SpatialStateGetWantedStreamingState, STATGROUP_RealtimeMesh);
DECLARE_CYCLE_STAT(TEXT("RealtimeMeshSpatial - UpdateStreaming"), STAT_RealtimeMesh_SpatialStateUpdateStreaming, STATGROUP_RealtimeMesh);


/*const TSet<TTuple<ERealtimeMeshStreamingCellState, ERealtimeMeshStreamingCellState>> FRealtimeMeshStreamingCellTransitions::Transitions
{
	// Invalid -> Invalid is always fine
	MakeTuple(ERealtimeMeshStreamingCellState::Invalid, ERealtimeMeshStreamingCellState::Invalid),

	// Invalid is the starter state so we want to be able to move to loading
	MakeTuple(ERealtimeMeshStreamingCellState::Invalid, ERealtimeMeshStreamingCellState::Loading),

	// Loading can fail, so allow moving to invalid
	MakeTuple(ERealtimeMeshStreamingCellState::Loading, ERealtimeMeshStreamingCellState::Invalid),

	// Loading successful so now we're in a loaded state
	MakeTuple(ERealtimeMeshStreamingCellState::Loading, ERealtimeMeshStreamingCellState::Loaded),

	// Loaded can be activated or unloaded
	MakeTuple(ERealtimeMeshStreamingCellState::Loaded, ERealtimeMeshStreamingCellState::Active),
	MakeTuple(ERealtimeMeshStreamingCellState::Loaded, ERealtimeMeshStreamingCellState::Invalid),

	// Active can be deactivated, and then from loaded to invalid (as an unload)
	MakeTuple(ERealtimeMeshStreamingCellState::Active, ERealtimeMeshStreamingCellState::Loaded),
};*/


void URealtimeMeshSpatialStreamingManager::Initialize(const FRealtimeMeshSpatialStreamingStateInitParams& InitParams, bool bAutoStart)
{
	ChunkProviderWeak = InitParams.ChunkProvider;
	
	OnLoadCell = InitParams.OnLoadCell;
	OnUnloadCell = InitParams.OnUnloadCell;
	OnActivateCell = InitParams.OnActivateCell;
	OnDeactivateCell = InitParams.OnDeactivateCell;

	if (ChunkProviderWeak.IsValid() && OnLoadCell.IsBound() && OnUnloadCell.IsBound() && OnActivateCell.IsBound() && OnDeactivateCell.IsBound())
	{
		bInitialized = true;		
	}
	else
	{
		bInitialized = false;
	}

	if (bAutoStart)
	{
		Start();
	}
}

void URealtimeMeshSpatialStreamingManager::Start()
{
	if (bInitialized && !bIsRunning)
	{
		if (URealtimeMeshSpatialStreamingSubsystem* Subsystem = GetWorld()->GetSubsystem<URealtimeMeshSpatialStreamingSubsystem>())
		{
			Subsystem->RegisterManager(this);
			bIsRunning = true;
		}
	}
}

void URealtimeMeshSpatialStreamingManager::Stop()
{
	if (bInitialized && bIsRunning)
	{
		bIsRunning = false;

		if (GetWorld())
		{
			if (URealtimeMeshSpatialStreamingSubsystem* Subsystem = GetWorld()->GetSubsystem<URealtimeMeshSpatialStreamingSubsystem>())
			{
				Subsystem->UnregisterManager(this);
			}
		}

		for (auto It = State.CreateIterator(); It; ++It)
		{
			auto& CellState = It.Value();
			CellState.CancelPending();
			
			if (CellState.IsActive())
			{
				(void)OnDeactivateCell.ExecuteIfBound(It.Key());
				CellState.MarkInactive();
			}

			if (CellState.IsLoaded())
			{
				(void)OnUnloadCell.ExecuteIfBound(It.Key());
			}

			It.RemoveCurrent();
		}
	}	
}

void URealtimeMeshSpatialStreamingManager::Reset()
{
	Stop();
	
	check(State.IsEmpty());
	
	bInitialized = false;
	bIsRunning = false;
	
	ChunkProviderWeak = nullptr;
	OnLoadCell.Unbind();
	OnUnloadCell.Unbind();
	OnActivateCell.Unbind();
	OnDeactivateCell.Unbind();
}

void URealtimeMeshSpatialStreamingManager::BeginDestroy()
{
	Reset();
	
	UObject::BeginDestroy();
}

void URealtimeMeshSpatialStreamingManager::UpdateStreaming(const TArray<FRealtimeMeshSpatialStreamingSource>& Sources)
{
	SCOPE_CYCLE_COUNTER(STAT_RealtimeMesh_SpatialStateUpdateStreaming);
	TRACE_CPUPROFILER_EVENT_SCOPE(URealtimeMeshSpatialStreamingManager::UpdateStreaming)

	bHadStreamingChangesLastFrame = false;
	auto ChunkProvider = ChunkProviderWeak.Pin();
	
	// If we have a streaming policy, update the streaming.
	if (bInitialized && bIsRunning && ChunkProvider.IsValid())
	{
		TArray<FStreamingSourcesState> StreamingSources;

		
		uint32 MaxDesiredLOD = 0;

		for (auto It = Sources.CreateConstIterator(); It; ++It)
		{
			if (It->MaxVisibilityDistance > 0 && It->LODFalloff > 0 && It->LODVisibilityThreshold > 0)
			{
				auto& Source = StreamingSources.Emplace_GetRef();
				Source.Location = It->Location;
				// TODO: Make this a config option on the sources
				const float VisibleOffset = It->VisibleOffset;
				const float StreamingOffset = It->StreamingOffset;
				const double StreamingDistanceMultiplier = It->StreamingDistanceMultiplier;


				for (int32 CurrentLODIndex = 0; CurrentLODIndex < 32; ++CurrentLODIndex)
				{
					const double StreamingDistance = StreamingDistanceMultiplier * BaseChunkSize * FMath::Pow<double>(2, CurrentLODIndex + 1) * FMath::Pow<double>(1 / It->LODVisibilityThreshold, 1 / It->LODFalloff) + StreamingOffset;
					const double RenderingDistance = StreamingDistanceMultiplier * BaseChunkSize * FMath::Pow<double>(2, CurrentLODIndex + 1) * FMath::Pow<double>(1 / It->LODVisibilityThreshold, 1 / It->LODFalloff) + VisibleOffset;

					if (StreamingDistance < It->MaxVisibilityDistance)
					{
						Source.MaxStreamingDistances.Add(StreamingDistance * StreamingDistance);						
					}
					else
					{						
						Source.MaxStreamingDistances.Add(It->MaxVisibilityDistance * It->MaxVisibilityDistance);
					}
					
					if (RenderingDistance < It->MaxVisibilityDistance)
					{
						Source.MaxRenderingDistances.Add(RenderingDistance * RenderingDistance);						
					}
					else
					{						
						Source.MaxRenderingDistances.Add(It->MaxVisibilityDistance * It->MaxVisibilityDistance);
						break;
					}
				}

				// This max visible lod is the one below the max element so we subtract 2 from length
				MaxDesiredLOD = FMath::Max<uint32>(MaxDesiredLOD, Source.MaxStreamingDistances.Num() - 1);
			}

		}

		MaxDesiredLOD = FMath::Min<uint32>(MaxDesiredLOD, ChunkProvider->GetMaxLOD());
		

		TSet<FRealtimeMeshSpatialComponentLocation> StartingCells;

		// Create a starting list of all the overlapping cells at the lowest LOD
		const uint64 MaxLODChunkSize = BaseChunkSize << MaxDesiredLOD;

		const bool bIs3DGrid = ChunkProvider->ShouldUse3dStreaming();


		TFunction<bool(const FRealtimeMeshSpatialComponentLocation&)> IsCellValid = [&](const FRealtimeMeshSpatialComponentLocation& cell) -> bool
		{
			if (!bIs3DGrid && cell.Location.Z != 0)
			{
				return false;
			}

			return ChunkProvider->IsCellValid(cell);
		};
		

		// Create the starting set of cells at the max desired LOD
		for (auto It = StreamingSources.CreateConstIterator(); It; ++It)
		{
			const int32 LastLODToUse = FMath::Min<int32>(MaxDesiredLOD, It->MaxStreamingDistances.Num() - 1);
			const double BoundsExtents = FMath::Sqrt(It->MaxStreamingDistances[LastLODToUse]);
			const FVector3d BoundsMin = It->Location - BoundsExtents;
			const FVector3d BoundsMax = It->Location + BoundsExtents;
						
			// find min/max bounds of the sphere in cells
			FInt64Vector3 GridPosMin = FInt64Vector3(
				FMath::FloorToInt64(BoundsMin.X / MaxLODChunkSize),
				FMath::FloorToInt64(BoundsMin.Y / MaxLODChunkSize),
				FMath::FloorToInt64(BoundsMin.Z / MaxLODChunkSize));
			FInt64Vector3 GridPosMax = FInt64Vector3(
				FMath::CeilToInt64(BoundsMax.X / MaxLODChunkSize),
				FMath::CeilToInt64(BoundsMax.Y / MaxLODChunkSize),
				FMath::CeilToInt64(BoundsMax.Z / MaxLODChunkSize));


			for (int64 X = GridPosMin.X; X <= GridPosMax.X; ++X)
			for (int64 Y = GridPosMin.Y; Y <= GridPosMax.Y; ++Y)
			for (int64 Z = GridPosMin.Z; Z <= GridPosMax.Z; ++Z)
			{
				const FRealtimeMeshSpatialComponentLocation CellLocation(FInt64Vector(X, Y, Z), MaxDesiredLOD);
				if (IsCellValid(CellLocation))
				{
					StartingCells.Add(CellLocation);
				}
			}			
		}

		TFunction<FInt64Vector3(const FRealtimeMeshSpatialComponentLocation&)> CalculateCellPosition = [&](const FRealtimeMeshSpatialComponentLocation& CellLocation) -> FInt64Vector3
		{			
			const uint64 ChunkSize = BaseChunkSize << CellLocation.LOD;
			const uint64 HalfChunkSize = (BaseChunkSize >> 1) << CellLocation.LOD;
			
			return CellLocation.Location * FInt64Vector3(ChunkSize) + FInt64Vector3(HalfChunkSize);
		};

		TFunction<double(const FVector3d&, const FVector3d&)> CalculateCellDistance3D = [&](const FVector3d& PosA, const FVector3d& PosB) -> double
			{
				return FVector3d::DistSquared(PosA, PosB);
			};

		TFunction<double(const FVector3d&, const FVector3d&)> CalculateCellDistance2D = [&](const FVector3d& PosA, const FVector3d& PosB) -> double
			{
				return FVector3d::DistSquaredXY(PosA, PosB);
			};
		
		TFunctionRef<double(const FVector3d&, const FVector3d&)> CalculateCellDistanceSquared = bIs3DGrid? CalculateCellDistance3D : CalculateCellDistance2D;
		

		
		// Foreach cell, see if we should subdivide it

		TFunction<bool(const FRealtimeMeshSpatialComponentLocation&)> TraverseCellForStreaming = [&](const FRealtimeMeshSpatialComponentLocation& CurrentCell) -> bool
		{
			DECLARE_SCOPE_CYCLE_COUNTER(TEXT("RealtimeMeshSpatial - CalculateDesiredTree - Subdivide"), STAT_RealtimeMesh_SpatialStateCalculatedDesiredTreeSubdivide, STATGROUP_RealtimeMesh);

			check(IsCellValid(CurrentCell));

			// Find the existing state for this cell
			auto& CellState = State.FindOrAdd(CurrentCell);
			CellState.MarkStreamingValidThisFrame();

			if (!CellState.HasLoadBeenRequested())
			{
				CellState.MarkLoading();
				bHadStreamingChangesLastFrame = true;	
				NumLoadingCells += 1;

				auto LoadFuture = OnLoadCell.Execute(CurrentCell, CellState.GetCancelToken());
				
				RealtimeMesh::ContinueOnGameThread(MoveTemp(LoadFuture), [ThisWeak = TWeakObjectPtr<URealtimeMeshSpatialStreamingManager>(this), CurrentCell](TFuture<bool>&& MeshFuture)
				{
					//check(IsOnGameThread());
					if (URealtimeMeshSpatialStreamingManager* This = ThisWeak.Get())
					{
						if (auto* CellState = This->State.Find(CurrentCell))
						{
							if (!CellState->IsLoaded() && MeshFuture.Get())
							{
								CellState->MarkLoaded();
							}
							else
							{
								CellState->MarkInvalid();
							}
						}
						
						This->NumLoadingCells -= 1;
					}
				});
			}

			if (CurrentCell.LOD > 0)
			{
				const FInt64Vector3 CellPosition = CalculateCellPosition(CurrentCell);

				const bool bWithinNextLODDistance = Algo::AnyOf(StreamingSources, [&](const FStreamingSourcesState& Source)
				{
					const double CellDistSquared = CalculateCellDistanceSquared(FVector3d(CellPosition), Source.Location);
					return CellDistSquared < Source.MaxStreamingDistances[CurrentCell.LOD - 1];
				});

				if (bWithinNextLODDistance)
				{
					uint8 ChildValidStates = 0x0;
					uint8 ChildStreamingStates = 0x0;
					for (int32 ChildIndex = 0; ChildIndex < 8; ++ChildIndex)
					{
						FRealtimeMeshSpatialComponentLocation ChildCell;
						ChildCell.Location.X = CurrentCell.Location.X * 2 + (ChildIndex & 1);
						ChildCell.Location.Y = CurrentCell.Location.Y * 2 + ((ChildIndex >> 1) & 1);
						ChildCell.Location.Z = CurrentCell.Location.Z * 2 + ((ChildIndex >> 2) & 1);
						ChildCell.LOD = CurrentCell.LOD - 1;
				
						if (IsCellValid(ChildCell))
						{
							ChildValidStates |= (0x1 << ChildIndex);					
							ChildStreamingStates |=	(TraverseCellForStreaming(ChildCell)? (0x1 << ChildIndex) : 0x0);
						}
						else
						{
							UE_LOG(LogTemp, Warning, TEXT("Skipped"));
						}
					}

					CellState.SetChildStreamingStates(ChildStreamingStates);
					if (ChildValidStates == ChildStreamingStates)
					{
						CellState.MarkChildrenAsLoaded();
					}
				}
			}

			return CellState.IsLoaded();
		};		


		// Walk all the starting cells and update the state of the cells
		for (auto CellIt = StartingCells.CreateConstIterator(); CellIt; ++CellIt)
		{
			const FInt64Vector3 CellPosition = CalculateCellPosition(*CellIt);
			const bool bWithinRange = Algo::AnyOf(StreamingSources, [&](const FStreamingSourcesState& Source)
			{
				const double CellDistSquared = CalculateCellDistanceSquared(FVector3d(CellPosition), Source.Location);
				return CellDistSquared < Source.MaxStreamingDistances[CellIt->LOD];
			});

			if (bWithinRange)
			{
				(void)TraverseCellForStreaming(*CellIt);				
			}			
		}


		TFunction<void(const FRealtimeMeshSpatialComponentLocation&)> TraverseCellForRendering = [&](const FRealtimeMeshSpatialComponentLocation& CurrentCell)
		{
			check(IsCellValid(CurrentCell));

			// Find the existing state for this cell
			auto& CellState = State.FindChecked(CurrentCell);

			// Don't consider this cell for visibility if it isn't loaded or isn't currently valid for streaming
			if (!CellState.IsStreamingValidThisFrame() || !CellState.IsLoaded())
			{
				return;
			}

			const FInt64Vector3 CellPosition = CalculateCellPosition(CurrentCell);
			const bool bSatisfiesAllSources =
				CurrentCell.LOD == 0 ||
				Algo::AnyOf(StreamingSources, [&](const FStreamingSourcesState& Source)
				{
					const double CellDistSquared = CalculateCellDistanceSquared(FVector3d(CellPosition), Source.Location);
					return CellDistSquared > Source.MaxRenderingDistances[CurrentCell.LOD - 1];
				});

			if (bSatisfiesAllSources)
			{
				if (!CellState.IsActive())
				{
					CellState.MarkActive();
					bHadStreamingChangesLastFrame = true;
					OnActivateCell.Execute(CurrentCell);
				}
				CellState.MarkVisibilityValidThisFrame();
			}
			else
			{
				const uint8 ChildStates = CellState.GetChildStreamingStates();
				// propagate to children
				for (int32 ChildIndex = 0; ChildIndex < 8; ++ChildIndex)
				{
					if ((ChildStates >> ChildIndex) & 0x1)
					{
						FRealtimeMeshSpatialComponentLocation ChildCell;
						ChildCell.Location.X = CurrentCell.Location.X * 2 + (ChildIndex & 1);
						ChildCell.Location.Y = CurrentCell.Location.Y * 2 + ((ChildIndex >> 1) & 1);
						ChildCell.Location.Z = CurrentCell.Location.Z * 2 + ((ChildIndex >> 2) & 1);
						ChildCell.LOD = CurrentCell.LOD - 1;

						TraverseCellForRendering(ChildCell);
					}
				}				
			}			
		};	


		for (auto CellIt = StartingCells.CreateConstIterator(); CellIt; ++CellIt)
		{
			const FInt64Vector3 CellPosition = CalculateCellPosition(*CellIt);
			const bool bWithinRange = Algo::AnyOf(StreamingSources, [&](const FStreamingSourcesState& Source)
			{
				const double CellDistSquared = CalculateCellDistanceSquared(FVector3d(CellPosition), Source.Location);
				return CellDistSquared < Source.MaxStreamingDistances[CellIt->LOD];
			});

			if (bWithinRange)
			{
				TraverseCellForRendering(*CellIt);				
			}			
		}


		for (auto It = State.CreateIterator(); It; ++It)
		{
			auto& CellState = It.Value();
			
			if (!CellState.IsVisibilityValidThisFrame() && CellState.IsActive())
			{
				OnDeactivateCell.Execute(It.Key());
				CellState.MarkInactive();
				bHadStreamingChangesLastFrame = true;
			}

			if (!CellState.IsStreamingValidThisFrame() && CellState.IsLoaded())
			{
				CellState.CancelPending();
				OnUnloadCell.Execute(It.Key());
				bHadStreamingChangesLastFrame = true;
				It.RemoveCurrent();
			}
			else
			{
				CellState.ClearFrameStates();
			}
		}

		if (true)
		{
			static FColor LODColors[] =
			{
				FColor::Red,
				FColor::Blue,
				FColor::Green,
				FColor::Orange,
				FColor::Purple
			};


			for (auto It = State.CreateIterator(); It; ++It)
			{
				if (It->Value.IsActive())
				{
					auto CellPosition = CalculateCellPosition(It.Key());
					auto CellExtent = (BaseChunkSize >> 1) << It.Key().LOD;

					const auto GridTransform = ChunkProvider->GetGridTransform();
					
					::DrawDebugBox(GetWorld(), GridTransform.TransformPosition(FVector3d(CellPosition.X, CellPosition.Y, CellPosition.Z)),
						FVector3d(CellExtent) * GridTransform.GetScale3D(), GridTransform.GetRotation(), LODColors[It.Key().LOD], false,
						0.01, SDPG_World, 5.0 * FMath::Pow(2.0f, It.Key().LOD));
				}
			}
		}
	}
	else
	{
		Stop();
	}
}

FTransform URealtimeMeshSpatialStreamingManager::GetGridTransform() const
{
	auto ChunkProvider = ChunkProviderWeak.Pin();
	return ChunkProvider.IsValid()? ChunkProvider->GetGridTransform() : FTransform::Identity;	
}

