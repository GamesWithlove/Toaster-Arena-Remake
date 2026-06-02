// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "Factory/RealtimeMeshProviderPlane.h"
#include "Core/RealtimeMeshBuilder.h"
#include "Core/RealtimeMeshSectionGroupConfig.h"


namespace RealtimeMesh
{
	const FRealtimeMeshSectionGroupKey FRealtimeMeshProviderPlane::MainSectionGroup = FRealtimeMeshSectionGroupKey::Create(0, "MainGroup");
	const FRealtimeMeshSectionKey FRealtimeMeshProviderPlane::MainSection = FRealtimeMeshSectionKey::CreateForPolyGroup(MainSectionGroup, 0);
	
	FRealtimeMeshProviderPlane::FRealtimeMeshProviderPlane(const FIntVector2& InGridSize, const FVector2f& InUVScale, bool bInWantsSkirt)
		: GridSize(InGridSize)
		, UVScale(InUVScale)
		, bWantsSkirt(bInWantsSkirt)
	{
	}

	FRealtimeMeshProviderPlane::~FRealtimeMeshProviderPlane()
	{
	}



	

	TFuture<FRealtimeMeshInitializationResult> FRealtimeMeshProviderPlane::InitializeNewRealtimeMesh(const FRealtimeMeshID& MeshId,
		const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams, FRealtimeMeshCancellationToken CancellationToken)
	{
		FRealtimeMeshInitializationResult Result;
		Result.ComponentName = InitParams->GetBaseName() + "|PlaneMesh";

		const FRealtimeMeshProviderPlaneParams& Params = InitParams->Get<FRealtimeMeshProviderPlaneParams>();
		
		FScopeLock Lock(&Mutex);

		auto& State = MeshStates.Add(MeshId);
		State.CellLocation = Params.CellLocation;
		State.LOD = Params.LOD;
		State.Size = Params.CellSize * FMath::Pow(2.0f, State.LOD);
		State.MaxHeight = Params.CellHeight;
					
		Result.bIsValid = true;

		return MakeFulfilledPromise<FRealtimeMeshInitializationResult>(Result).GetFuture();
	}

	TFuture<FRealtimeMeshStructure> FRealtimeMeshProviderPlane::GetRealtimeMeshStructure(const FRealtimeMeshID& MeshId,
		const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken)
	{
		FRealtimeMeshStructure Structure;
		Structure.LODs.SetNum(1);
		auto& LOD0 = Structure.LODs[0];
		LOD0.SectionGroups.Add(MainSectionGroup);

		return MakeFulfilledPromise<FRealtimeMeshStructure>(Structure).GetFuture();
	}

	
	TFuture<TSharedRef<FRealtimeMeshSectionGroupData>> FRealtimeMeshProviderPlane::GetRealtimeMeshSectionGroup(const FRealtimeMeshID& MeshId,
		const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, const FRealtimeMeshSectionGroupKey& SectionGroupKey, FRealtimeMeshCancellationToken CancellationToken)
	{		
		TSharedRef<FRealtimeMeshSectionGroupData> SectionGroupData = MakeShared<FRealtimeMeshSectionGroupData>();
		SectionGroupData->DrawType = ERealtimeMeshSectionDrawType::Static;
		SectionGroupData->bReplaceAllExistingStreams = true;
		SectionGroupData->bAutoCreatePolygroupSections = true;

		SectionGroupData->SectionConfigs.Add(MainSection, FRealtimeMeshSectionConfig());

		TRealtimeMeshBuilderLocal Builder(SectionGroupData->Streams);
		Builder.EnableColors();
		Builder.EnableTangents();
		Builder.EnablePolyGroups();
		Builder.EnableTexCoords();

		FState State;
		{
			FScopeLock Lock(&Mutex);
			State = MeshStates.FindChecked(MeshId);
		}

		const FVector2d WorldPosStart = FVector2d(State.CellLocation.X, State.CellLocation.Y) * FVector2d(State.Size);
		const FVector2d WorldPosEnd = WorldPosStart + FVector2d(State.Size);

		const FVector2d SampleStep = FVector2d(State.Size) / FVector2d(GridSize.X, GridSize.Y);

		
		const FVector2d UVPosStart = WorldPosStart * FVector2d(UVScale) * 0.01;
		const FVector2d UVPosEnd = WorldPosEnd * FVector2d(UVScale) * 0.01;

		const FVector2d UVRange = UVPosEnd - UVPosStart;
		const FVector2f UVOffset = FVector2f(FMath::Frac(UVPosStart.X), FMath::Frac(UVPosStart.Y));
		const FVector2f UVStepSize = FVector2f(UVRange) / FVector2f(GridSize.X, GridSize.Y);


		const auto SampleHeight = [](const FVector2d& Pos) -> float
		{
			return (FMath::Sin(Pos.X) * FMath::Cos(Pos.Y) * 0.5f) + 0.5f;
		};
		
		const FVector2f GridSpacing = State.Size / FVector2f(GridSize.X, GridSize.Y);
		for (int32 Y = 0; Y <= GridSize.Y; Y++)
		{
			for (int32 X = 0; X <= GridSize.X; X++)
			{				
				const FVector2d CellSamplePos = (WorldPosStart + SampleStep * FVector2d(X, Y)) * FVector2d(0.005f, 0.01f);

				const float Height = SampleHeight(CellSamplePos) * 256.0f;

				FVector3f Normal;
				float E = 0.001f;
				Normal.X = SampleHeight(CellSamplePos-FVector2d(E, 0)) - SampleHeight(CellSamplePos+FVector2d(E, 0));
				Normal.Y = SampleHeight(CellSamplePos-FVector2d(0, E)) - SampleHeight(CellSamplePos+FVector2d(0, E));
				Normal.Z = 2.0*E;
				Normal.Normalize();

				FVector3f Binormal = FVector3f(0, 1, 0);
				FVector3f Tangent = FVector3f(-1, 0, 0);				

				Builder.AddVertex(FVector3f(X * GridSpacing.X, Y * GridSpacing.Y, Height))
					.SetTexCoord(UVOffset + FVector2f(X, Y) * UVStepSize)
					.SetTangents(Tangent, Binormal, Normal);
			}
		}

		for (int32 Y = 0; Y < GridSize.Y; Y++)
		{
			for (int32 X = 0; X < GridSize.X; X++)
			{
				const int32 BaseIndex = X + ((GridSize.X + 1) * Y);
				const int32 BaseIndexNextRow = BaseIndex + GridSize.X + 1;
				Builder.AddTriangle(BaseIndex, BaseIndexNextRow + 1, BaseIndex + 1);
				Builder.AddTriangle(BaseIndex, BaseIndexNextRow, BaseIndexNextRow + 1);
			}
		}
		return MakeFulfilledPromise<TSharedRef<FRealtimeMeshSectionGroupData>>(SectionGroupData).GetFuture();		
	}

	TFuture<FBoxSphereBounds3f> FRealtimeMeshProviderPlane::CalculateBounds(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken)
	{
		FState State;
		{
			FScopeLock Lock(&Mutex);
			State = MeshStates.FindChecked(MeshId);
		}
		const FVector3f Extent = FVector3f(State.Size.X, State.Size.Y, State.MaxHeight);
		const FBoxSphereBounds3f Bounds(FBox3f(FVector3f::ZeroVector, Extent));
		return MakeFulfilledPromise<FBoxSphereBounds3f>(Bounds).GetFuture();
	}

	TFuture<TSharedRef<FRealtimeMeshCollisionInfo>> FRealtimeMeshProviderPlane::GetCollisionData(const FRealtimeMeshID& MeshId,
		const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken)
	{
		return FRealtimeMeshFactoryProvider::GetCollisionData(MeshId, PreUpdateResult, CancellationToken);
	}

	TFuture<bool> FRealtimeMeshProviderPlane::DestroyRealtimeMesh(const FRealtimeMeshID& MeshId)
	{
		FScopeLock Lock(&Mutex);
		MeshStates.Remove(MeshId);

		return MakeFulfilledPromise<bool>(true).GetFuture();
	}
}
