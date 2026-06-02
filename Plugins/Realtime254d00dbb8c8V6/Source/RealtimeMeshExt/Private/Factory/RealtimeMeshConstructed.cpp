// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "Factory/RealtimeMeshConstructed.h"
#include "RenderProxy/RealtimeMeshProxyCommandBatch.h"
#include "Data/RealtimeMeshLOD.h"
#include "Data/RealtimeMeshUpdateBuilder.h"
#include "Factory/RealtimeMeshFactory.h"
#include "Mesh/RealtimeMeshAlgo.h"

namespace RealtimeMesh
{
	/*void FRealtimeMeshFactory::Initialize(const TSharedRef<IRealtimeMeshFactoryProvider>& InRootProvider)
	{
		if (RootProvider)
		{
			RootProvider->Shutdown();
			RootProvider.Reset();
		}
			
		RootProvider = InRootProvider;
		RootProvider->Initialize(this->AsShared());
	}

	TSharedRef<FRealtimeMeshFactory> FRealtimeMeshFactory::CreateRealtimeMeshFactory(TSharedRef<IRealtimeMeshFactoryProvider> RootProvider)
	{
		auto NewFactory = MakeShared<FRealtimeMeshFactory>();
		NewFactory->Initialize(RootProvider);
		return NewFactory;
	}

	URealtimeMeshConstructed* FRealtimeMeshFactory::CreateRealtimeMesh(UObject* Outer) const
	{
		//URealtimeMeshConstructed* NewMesh = NewObject<URealtimeMeshConstructed>(Outer);
		//NewMesh->GetMeshData()->InitializeFromFactory(this->AsShared(), true);

		return nullptr;		
	}

	URealtimeMeshComponent* FRealtimeMeshFactory::CreateRealtimeMesh(AActor* Actor) const
	{


		return nullptr;

		
	}*/

	
	FRealtimeMeshRef FRealtimeMeshSharedResourcesConstructed::CreateRealtimeMesh() const
	{
		return MakeShared<FRealtimeMeshConstructed>(ConstCastSharedRef<FRealtimeMeshSharedResources>(this->AsShared()));
	}

	void FRealtimeMeshConstructed::Reset(FRealtimeMeshUpdateContext& UpdateContext, bool bRemoveRenderProxy)
	{
		if (Factory)
		{
			Factory->DestroyRealtimeMesh(MeshID);
			Factory = nullptr;
			MeshID = FRealtimeMeshID::Invalid();
		}
		FRealtimeMesh::Reset(UpdateContext, bRemoveRenderProxy);
	}

	void FRealtimeMeshConstructed::ApplyStructure(FRealtimeMeshUpdateContext& UpdateContext, const FRealtimeMeshStructure& Structure)
	{
		TFixedLODArray<FRealtimeMeshLODConfig> NewLODConfigs;
		for (const auto& LOD : Structure.LODs)
		{
			NewLODConfigs.Add(LOD.Config);
		}

		InitializeLODs(UpdateContext, NewLODConfigs);

		for (auto It = Structure.LODs.CreateConstIterator(); It; ++It)
		{
			auto LODData = GetLOD(UpdateContext, It.GetIndex());
			check(LODData.IsValid());

			for (const auto& SectionGroup : It->SectionGroups)
			{
				LODData->CreateOrUpdateSectionGroup(UpdateContext, SectionGroup, FRealtimeMeshSectionGroupConfig());
			}
		}
	}

	FRealtimeMeshStructure FRealtimeMeshConstructed::GetStructure(const FRealtimeMeshLockContext& LockContext) const
	{
		FRealtimeMeshStructure Structure;
		Structure.Config = Config;
		
		Structure.LODs.SetNum(LODs.Num());
		for (int32 LODIndex = 0; LODIndex < LODs.Num(); ++LODIndex)
		{
			auto LODData = GetLOD(LockContext, LODIndex);
			check(LODData.IsValid());

			Structure.LODs[LODIndex].Config = LODData->GetConfig(LockContext);

			auto SectionGroups = LODData->GetSectionGroupKeys(LockContext);
			Structure.LODs[LODIndex].SectionGroups = MoveTemp(SectionGroups);			
		}

		return Structure;
	}

	void FRealtimeMeshConstructed::ApplySectionGroupUpdate(FRealtimeMeshUpdateContext& UpdateContext, const FRealtimeMeshSectionGroupKey& SectionGroupKey, FRealtimeMeshSectionGroupData&& NewGroupData)
	{
		auto SectionGroup = GetSectionGroup(UpdateContext, SectionGroupKey);
		if (!SectionGroup.IsValid())
		{
			return;
		}

		FRealtimeMeshStreamSet Streams = MoveTemp(NewGroupData.Streams);
		TMap<FRealtimeMeshSectionKey, FRealtimeMeshSectionConfig> NewSections = MoveTemp(NewGroupData.SectionConfigs);
		TMap<FRealtimeMeshSectionKey, FRealtimeMeshStreamRange> NewSectionRanges = MoveTemp(NewGroupData.SectionRanges);
		TArray<UMaterialInterface*> NewMats = MoveTemp(NewGroupData.Materials);

		// Extract the polygroup info
		if (NewGroupData.bAutoCreatePolygroupSections)
		{
			if (auto Result = RealtimeMeshAlgo::GetStreamRangesFromPolyGroups(Streams))
			{
				for (const auto& PolyGroup : Result.GetValue())
				{
					FRealtimeMeshSectionKey SectionKey = FRealtimeMeshSectionKey::CreateForPolyGroup(SectionGroupKey, PolyGroup.Key);
					NewSections.FindOrAdd(SectionKey);
					NewSectionRanges.FindOrAdd(SectionKey, PolyGroup.Value);
				}
			}
			else
			{
				FRealtimeMeshSectionKey SectionKey = FRealtimeMeshSectionKey::CreateForPolyGroup(SectionGroupKey, 0);
				NewSections.FindOrAdd(SectionKey);

				const int32 VertexCount = Streams.Contains(FRealtimeMeshStreams::Position)? Streams.FindChecked(FRealtimeMeshStreams::Position).Num() : 0;
				const int32 TriangleCount = Streams.Contains(FRealtimeMeshStreams::Triangles)? Streams.FindChecked(FRealtimeMeshStreams::Triangles).Num() : 0;
				FRealtimeMeshStreamRange NewRange;
				NewRange.Vertices = FInt32Range(0, VertexCount);
				NewRange.Indices = FInt32Range(0, TriangleCount * 3);

				NewSectionRanges.FindOrAdd(SectionKey, NewRange);
			}
		}
			
		if (NewGroupData.bReplaceAllExistingStreams)
		{
			SectionGroup->SetAllStreams(UpdateContext, MoveTemp(Streams));
		}
		else
		{
			Streams.ForEach([&](FRealtimeMeshStream& Stream)
			{
				SectionGroup->CreateOrUpdateStream(UpdateContext, MoveTemp(Stream));
			});
		}

		for (const auto& NewSection : NewSections)
		{
			if (auto Section = GetSection(UpdateContext, NewSection.Key))
			{
				Section->UpdateConfig(UpdateContext, NewSection.Value);
			}
			else
			{
				SectionGroup->CreateOrUpdateSection(UpdateContext, NewSection.Key, NewSection.Value, FRealtimeMeshStreamRange());				
			}		
		}

		for (const auto& NewStreamRange : NewSectionRanges)
		{
			if (auto Section = SectionGroup->GetSection(UpdateContext, NewStreamRange.Key))
			{
				Section->UpdateStreamRange(UpdateContext, NewStreamRange.Value);
			}
		}

		if (NewGroupData.bReplaceAllExistingSections)
		{
			auto ExistingSections = SectionGroup->GetSectionKeys(UpdateContext);

			for (const auto& SectionKey : ExistingSections)
			{
				if (!NewSections.Contains(SectionKey))
				{
					SectionGroup->RemoveSection(UpdateContext, SectionKey);
				}
			}
		}

		// TODO: handle this  by updating in place so multiple section groups can work
		for (int32 Index = 0; Index < NewMats.Num(); ++Index)
		{
			SetupMaterialSlot(UpdateContext, Index, NAME_None, NewMats[Index]);
		}
	}

	void FRealtimeMeshConstructed::SetBounds(FRealtimeMeshUpdateContext& UpdateContext, const FBoxSphereBounds3f& NewBounds)
	{
		Bounds.SetUserSetBounds(NewBounds);
		//SharedResources->BroadcastMeshBoundsChanged();	
	}

}



URealtimeMeshConstructed::URealtimeMeshConstructed(const FObjectInitializer& ObjectInitializer)
	: URealtimeMesh(ObjectInitializer)
{
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		Initialize(MakeShared<RealtimeMesh::FRealtimeMeshSharedResourcesConstructed>());
	}
}

void URealtimeMeshConstructed::BeginDestroy()
{
	//GetMeshAs<RealtimeMesh::FRealtimeMeshConstructed>()->Reset();
	
	Super::BeginDestroy();
}

TFuture<bool> URealtimeMeshConstructed::MarkDirty(const RealtimeMesh::FRealtimeMeshDirtyFlags& DirtyFlags, const RealtimeMesh::FRealtimeMeshCancellationToken& CancellationToken)
{
	return GetMeshAs<RealtimeMesh::FRealtimeMeshConstructed>()->MarkDirty(DirtyFlags, CancellationToken);
}
