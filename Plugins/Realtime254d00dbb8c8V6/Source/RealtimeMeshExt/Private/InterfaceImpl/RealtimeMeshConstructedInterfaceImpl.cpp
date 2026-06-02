// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshComponent.h"
#include "Factory/RealtimeMeshConstructed.h"
#include "Core/RealtimeMeshInterface.h"
#include "Ext/RealtimeMeshConstructedInterface.h"
#include "RenderProxy/RealtimeMeshProxyCommandBatch.h"
#include "Core/RealtimeMeshModularFeatures.h"
#include "Data/RealtimeMeshUpdateBuilder.h"

namespace RealtimeMesh
{

	class FRealtimeMeshConstructedImpl_v0 : public IRealtimeMeshConstructed_v0
	{
		TSharedRef<FRealtimeMeshConstructed> Mesh;
	public:
		FRealtimeMeshConstructedImpl_v0(const TSharedRef<FRealtimeMeshConstructed>& InMesh)
			: Mesh(InMesh)
		{ }

		virtual TFuture<ERealtimeMeshProxyUpdateStatus> Reset(bool bShouldRecreate) override
		{
			FRealtimeMeshUpdateContext UpdateContext(Mesh);
			Mesh->Reset(UpdateContext, bShouldRecreate);
			return UpdateContext.Commit();
		}
	};


	
	struct FRealtimeMeshConstructedInterfaceImpl_v0 : public IRealtimeMeshConstructedInterface_v0
	{
	private:
		mutable TMap<TSharedPtr<FRealtimeMeshConstructed>, TWeakPtr<FRealtimeMeshConstructedImpl_v0>> MeshMap;

		void CleanupDanglingReferences() const
		{
			for (auto It = MeshMap.CreateIterator(); It; ++It)
			{
				if (!It.Value().IsValid())
				{
					It.RemoveCurrent();
				}
			}
		}
	public:
		virtual TSharedRef<IRealtimeMeshConstructed_v0> InitializeMesh(UMeshComponent* MeshComponent) const override
		{
			URealtimeMeshComponent* RealtimeMeshComp = CastChecked<URealtimeMeshComponent>(MeshComponent);
			const URealtimeMeshConstructed* MeshConstructed = RealtimeMeshComp->InitializeRealtimeMesh<URealtimeMeshConstructed>();
			const TSharedRef<FRealtimeMeshConstructed> MeshData = MeshConstructed->GetMeshAs<FRealtimeMeshConstructed>();
			TSharedRef<FRealtimeMeshConstructedImpl_v0> MeshInterface = MakeShared<FRealtimeMeshConstructedImpl_v0>(MeshData);
			MeshMap.Add(MeshData.ToSharedPtr(), MeshInterface);		
			return MeshInterface;
		}

		virtual TSharedRef<IRealtimeMeshConstructed_v0> GetMesh(UMeshComponent* MeshComponent) const override
		{
			const URealtimeMeshComponent* RealtimeMeshComp = CastChecked<URealtimeMeshComponent>(MeshComponent);
			const URealtimeMeshConstructed* MeshConstructed = RealtimeMeshComp->GetRealtimeMeshAs<URealtimeMeshConstructed>();
			const TSharedRef<FRealtimeMeshConstructed> MeshData = MeshConstructed->GetMeshAs<FRealtimeMeshConstructed>();

			if (const auto* Ptr = MeshMap.Find(MeshData))
			{
				if (const auto Pinned = Ptr->Pin())
				{
					return Pinned.ToSharedRef();
				}
			}

			TSharedRef<FRealtimeMeshConstructedImpl_v0> MeshInterface = MakeShared<FRealtimeMeshConstructedImpl_v0>(MeshData);
			MeshMap.Add(MeshData.ToSharedPtr(), MeshInterface);			
			return MeshInterface;
		}
	};

	// Register the interface
	TRealtimeMeshModularFeatureRegistration<FRealtimeMeshConstructedInterfaceImpl_v0> GRealtimeMeshConstructedInterfaceImpl_v0;
}
