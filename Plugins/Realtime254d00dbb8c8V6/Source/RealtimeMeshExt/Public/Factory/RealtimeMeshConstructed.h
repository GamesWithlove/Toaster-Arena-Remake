// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMesh.h"
#include "RealtimeMeshFactory.h"
#include "Core/RealtimeMeshFuture.h"
#include "Ext/RealtimeMeshFactoryCommon.h"
#include "RealtimeMeshConstructed.generated.h"


namespace RealtimeMesh
{
	struct FRealtimeMeshID;
	class FRealtimeMeshConstructed;
	class FRealtimeMeshFactory;



	class REALTIMEMESHEXT_API FRealtimeMeshSharedResourcesConstructed : public FRealtimeMeshSharedResources
	{
		virtual FRealtimeMeshRef CreateRealtimeMesh() const override;

		virtual FRealtimeMeshSharedResourcesRef CreateSharedResources() const override
		{
			return MakeShared<FRealtimeMeshSharedResourcesConstructed>();
		}
	};

	class REALTIMEMESHEXT_API FRealtimeMeshConstructed : public FRealtimeMesh
	{
		TSharedPtr<FRealtimeMeshFactory> Factory;
		FRealtimeMeshID MeshID;
		
	public:
		FRealtimeMeshConstructed(const FRealtimeMeshSharedResourcesRef& InSharedResources)
			: FRealtimeMesh(InSharedResources)
			, MeshID(FRealtimeMeshID::Invalid())
		{
			//TypeName = "RealtimeMesh-Constructed";
		}

		// Disconnects from the existing factory and alerts the factory that we no longer wants updates
		using FRealtimeMesh::Reset;
		virtual void Reset(FRealtimeMeshUpdateContext& UpdateContext, bool bRemoveRenderProxy) override;

		TFuture<bool> MarkDirty(const FRealtimeMeshDirtyFlags& DirtyFlags, const FRealtimeMeshCancellationToken& CancellationToken)
		{
			if (Factory)
			{
				return Factory->MarkRealtimeMeshDirty(MeshID, DirtyFlags, CancellationToken);
			}
			return MakeFulfilledPromise<bool>(false).GetFuture();
		}

	protected:
		void Initialize(const TSharedRef<FRealtimeMeshFactory>& InFactory, const FRealtimeMeshID& InID)
		{
			Factory = InFactory;
			MeshID = InID;
		}
		
		TFuture<ERealtimeMeshCollisionUpdateResult> UpdateCollision(FRealtimeMeshCollisionInfo&& CollisionInfo)
		{
			return FRealtimeMesh::UpdateCollision(MoveTemp(CollisionInfo), GetNextCollisionUpdateVersion());
		}
		
		void ApplyStructure(FRealtimeMeshUpdateContext& UpdateContext, const FRealtimeMeshStructure& Structure);
		
		FRealtimeMeshStructure GetStructure(const FRealtimeMeshLockContext& LockContext) const;
		void ApplySectionGroupUpdate(FRealtimeMeshUpdateContext& UpdateContext, const FRealtimeMeshSectionGroupKey& SectionGroupKey, FRealtimeMeshSectionGroupData&& NewGroupData);
		void SetBounds(FRealtimeMeshUpdateContext& UpdateContext, const FBoxSphereBounds3f& NewBounds);

		friend class FRealtimeMeshFactory;
	};


	using FRealtimeMeshConstructedRef = TSharedRef<FRealtimeMeshConstructed, ESPMode::ThreadSafe>;
	using FRealtimeMeshConstructedPtr = TSharedPtr<FRealtimeMeshConstructed, ESPMode::ThreadSafe>;
	using FRealtimeMeshConstructedWeakPtr = TWeakPtr<FRealtimeMeshConstructed, ESPMode::ThreadSafe>;
	using FRealtimeMeshConstructedConstRef = TSharedRef<const FRealtimeMeshConstructed, ESPMode::ThreadSafe>;
	using FRealtimeMeshConstructedConstPtr = TSharedPtr<const FRealtimeMeshConstructed, ESPMode::ThreadSafe>;
	using FRealtimeMeshConstructedConstWeakPtr = TWeakPtr<const FRealtimeMeshConstructed, ESPMode::ThreadSafe>;
	
}





/**
 * 
 */
UCLASS(Blueprintable)
class REALTIMEMESHEXT_API URealtimeMeshConstructed : public URealtimeMesh
{
	GENERATED_UCLASS_BODY()
private:
	
public:

	virtual void BeginDestroy() override;
	bool IsRealtimeMeshValid() const { return MeshRef.IsValid(); }
	
	TFuture<bool> MarkDirty(const RealtimeMesh::FRealtimeMeshDirtyFlags& DirtyFlags, const RealtimeMesh::FRealtimeMeshCancellationToken& CancellationToken);
};


