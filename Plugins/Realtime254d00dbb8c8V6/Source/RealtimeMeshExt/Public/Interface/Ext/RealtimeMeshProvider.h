// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "Core/RealtimeMeshCollision.h"
#include "Core/RealtimeMeshFuture.h"
#include "Ext/RealtimeMeshFactoryCommon.h"
#include "Mesh/RealtimeMeshNaniteResourcesInterface.h"

struct FRealtimeMeshSectionGroupKey;

namespace RealtimeMesh
{
	class FRealtimeMeshFactoryProviderParentInterface
	{
	public:
		FRealtimeMeshFactoryProviderParentInterface() = default;
		virtual ~FRealtimeMeshFactoryProviderParentInterface() = default;

		virtual TFuture<bool> MarkRealtimeMeshDirty(const FRealtimeMeshID& MeshId, const FRealtimeMeshDirtyFlags& DirtyFlags, FRealtimeMeshCancellationToken CancellationToken) = 0;
	};


	
	class FRealtimeMeshFactoryProvider : public TSharedFromThis<FRealtimeMeshFactoryProvider>, public FRealtimeMeshFactoryProviderParentInterface
	{
	private:
		TArray<TSharedPtr<FRealtimeMeshFactoryProvider>> ChildProviders;
		TWeakPtr<FRealtimeMeshFactoryProviderParentInterface> Parent;

		
		template<typename CallableType>
		auto DoOnProviderThread(CallableType Callable) const
		{
			return DoOnAllowedThread(AllowedThread(), [Callable = MoveTemp(Callable)]() mutable
			{
				return Callable();
			});
		}

		template<typename CallableType>
		auto DoForChildProvider(int32 ChildIndex, CallableType Callable) const
		{
			using ReturnType = decltype(Callable(TSharedRef<FRealtimeMeshFactoryProvider>()));

			const TSharedPtr<FRealtimeMeshFactoryProvider> Child = ChildProviders[ChildIndex];
			return Child->DoOnProviderThread([ChildWeak = Child->AsWeak(), Callable = MoveTemp(Callable)]() mutable
			{				
				if (const auto Child = ChildWeak.Pin())
				{
					return Callable(Child.ToSharedRef());
				}

				return ReturnType();
			});
		}
		
		template<typename ContinuationType, typename ParamType>
		auto Continue(TFuture<ParamType>& Future, ContinuationType Continuation) const
		{
			return ContinueOnAllowedThread(Future, AllowedThread(), Forward<ContinuationType>(Continuation));
		}		

		friend class FRealtimeMeshFactory;
	public:
		FRealtimeMeshFactoryProvider() = default;
		FRealtimeMeshFactoryProvider(const TArray<TSharedRef<FRealtimeMeshFactoryProvider>>& InChildren)
			: ChildProviders(InChildren)
		{ }

		virtual void InitializeProvider(const TSharedRef<FRealtimeMeshFactoryProviderParentInterface>& InParent)
		{
			Parent = InParent;
			
		}

		virtual TFuture<bool> MarkRealtimeMeshDirty(const FRealtimeMeshID& MeshId, const FRealtimeMeshDirtyFlags& DirtyFlags, FRealtimeMeshCancellationToken CancellationToken) override
		{
			if (const auto ParentPinned = Parent.Pin())
			{
				return ParentPinned->MarkRealtimeMeshDirty(MeshId, DirtyFlags, CancellationToken);
			}
			return MakeFulfilledPromise<bool>(false).GetFuture();
		}

		/*
		 * Called to initialize/reinitialize an RealtimeMesh.
		 */
		virtual TFuture<FRealtimeMeshInitializationResult> InitializeNewRealtimeMesh(const FRealtimeMeshID& MeshId, const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams, FRealtimeMeshCancellationToken CancellationToken)
		{
			FRealtimeMeshInitializationResult Result;
			Result.bIsValid = false;
			Result.ComponentName = "Unknown";
			return MakeFulfilledPromise<FRealtimeMeshInitializationResult>(Result).GetFuture();
		}
		

		/*
		 * Called right before any of the functions below to do any cross task/shared preparation.  Can be used for things like generating mesh and collision at the same time, etc.
		 */
		virtual TFuture<TSharedRef<FRealtimeMeshFactoryPreUpdateResult>> PreUpdateRealtimeMesh(const FRealtimeMeshID& MeshId, const FRealtimeMeshDirtyFlags& DirtyFlags, FRealtimeMeshCancellationToken CancellationToken)
		{
			return MakeFulfilledPromise<TSharedRef<FRealtimeMeshFactoryPreUpdateResult>>(FRealtimeMeshFactoryPreUpdateResult::Make(DirtyFlags)).GetFuture();
		}
		
		/*
		 * GetRealtimeMeshStructure
		*/
		virtual TFuture<FRealtimeMeshStructure> GetRealtimeMeshStructure(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken)
		{
			return MakeFulfilledPromise<FRealtimeMeshStructure>(FRealtimeMeshStructure()).GetFuture();
		}
	
		/*
		 * GetRealtimeMeshSectionGroup
		 */
		virtual TFuture<TSharedRef<FRealtimeMeshSectionGroupData>> GetRealtimeMeshSectionGroup(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, const FRealtimeMeshSectionGroupKey& SectionGroupKey, FRealtimeMeshCancellationToken CancellationToken)
		{
			return MakeFulfilledPromise<TSharedRef<FRealtimeMeshSectionGroupData>>().GetFuture();	
		}

		/*
		 * Called by the RMC to gather the bounds of the mesh.
		 * Bounds that are too small will cause the mesh to flicker or disappear too early
		 * Bounds that are too big will reduce the effectiveness of culling and lower performance
		 */
		virtual TFuture<FBoxSphereBounds3f> CalculateBounds(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken)
		{			
			return MakeFulfilledPromise<FBoxSphereBounds3f>(FBoxSphereBounds3f(FVector3f::ZeroVector, FVector3f::ZeroVector, 0.0)).GetFuture();
		}
	
		/*
		 * Function called by the component to gather simple collision
		 */
		virtual TFuture<TSharedRef<FRealtimeMeshCollisionInfo>> GetCollisionData(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken)
		{
			return MakeFulfilledPromise<TSharedRef<FRealtimeMeshCollisionInfo>>(MakeShared<FRealtimeMeshCollisionInfo>()).GetFuture();
		}
	
		/*
		 * Get nanite mesh data
		 */
		virtual TFuture<FRealtimeMeshNaniteResourcesPtr> GetNaniteResources(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken)
		{
			return MakeFulfilledPromise<FRealtimeMeshNaniteResourcesPtr>(nullptr).GetFuture();
		}

		
	
		/*
		 * Called when the mesh is destroyed, to let the providers clean up
		 */
		virtual TFuture<bool> DestroyRealtimeMesh(const FRealtimeMeshID& MeshId)
		{
			return MakeFulfilledPromise<bool>(true).GetFuture();
		}
	
		/*
		 * Return the threads this provider is allowed/expected to run on
		 */
		virtual ERealtimeMeshThreadType AllowedThread() const { return ERealtimeMeshThreadType::GameThread; }

	protected:
		
		TFuture<FRealtimeMeshInitializationResult> InitializeNewRealtimeMeshForChild(int32 ChildIndex,
			const FRealtimeMeshID& MeshId, const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams, FRealtimeMeshCancellationToken CancellationToken) const
		{
			return DoForChildProvider(ChildIndex, [MeshId, InitParams, CancellationToken = MoveTemp(CancellationToken)](const TSharedRef<FRealtimeMeshFactoryProvider>& Child)
			{
				return Child->InitializeNewRealtimeMesh(MeshId, InitParams, CancellationToken);
			});
		}

		TFuture<TSharedRef<FRealtimeMeshFactoryPreUpdateResult>> PreUpdateRealtimeMeshForChild(int32 ChildIndex, const FRealtimeMeshID& MeshId,
			const FRealtimeMeshDirtyFlags& DirtyFlags, FRealtimeMeshCancellationToken CancellationToken) const
		{			
			return DoForChildProvider(ChildIndex, [MeshId, DirtyFlags, CancellationToken = MoveTemp(CancellationToken)](const TSharedRef<FRealtimeMeshFactoryProvider>& Child)
			{
				return Child->PreUpdateRealtimeMesh(MeshId, DirtyFlags, CancellationToken);
			});
		}
		
		TFuture<FRealtimeMeshStructure> GetRealtimeMeshStructureForChild(int32 ChildIndex, const FRealtimeMeshID& MeshId,
			const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken) const
		{
			return DoForChildProvider(ChildIndex, [MeshId, PreUpdateResult, CancellationToken = MoveTemp(CancellationToken)](const TSharedRef<FRealtimeMeshFactoryProvider>& Child)
			{
				return Child->GetRealtimeMeshStructure(MeshId, PreUpdateResult, CancellationToken);
			});
		}

		TFuture<TSharedRef<FRealtimeMeshSectionGroupData>> GetRealtimeMeshSectionGroupForChild(int32 ChildIndex, const FRealtimeMeshID& MeshId,
			const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, const FRealtimeMeshSectionGroupKey& SectionGroupKey, FRealtimeMeshCancellationToken CancellationToken) const
		{
			return DoForChildProvider(ChildIndex, [MeshId, PreUpdateResult, SectionGroupKey, CancellationToken = MoveTemp(CancellationToken)](const TSharedRef<FRealtimeMeshFactoryProvider>& Child)
			{
				return Child->GetRealtimeMeshSectionGroup(MeshId, PreUpdateResult, SectionGroupKey, CancellationToken);
			});
		}

		TFuture<FBoxSphereBounds3f> CalculateBoundsForChild(int32 ChildIndex, FRealtimeMeshID MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult,
			FRealtimeMeshCancellationToken CancellationToken) const
		{			
			return DoForChildProvider(ChildIndex, [MeshId, PreUpdateResult, CancellationToken = MoveTemp(CancellationToken)](const TSharedRef<FRealtimeMeshFactoryProvider>& Child)
			{
				return Child->CalculateBounds(MeshId, PreUpdateResult, CancellationToken);
			});
		}

		TFuture<TSharedRef<FRealtimeMeshCollisionInfo>> GetCollisionDataForChild(int32 ChildIndex, const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult,
			FRealtimeMeshCancellationToken CancellationToken) const
		{
			return DoForChildProvider(ChildIndex, [MeshId, PreUpdateResult, CancellationToken = MoveTemp(CancellationToken)](const TSharedRef<FRealtimeMeshFactoryProvider>& Child)
			{
				return Child->GetCollisionData(MeshId, PreUpdateResult, CancellationToken);
			});
		}
	
		TFuture<FRealtimeMeshNaniteResourcesPtr> GetNaniteResourcesForChild(int32 ChildIndex, const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken) const
		{
			return DoForChildProvider(ChildIndex, [MeshId, PreUpdateResult, CancellationToken = MoveTemp(CancellationToken)](const TSharedRef<FRealtimeMeshFactoryProvider>& Child)
			{
				return Child->GetNaniteResources(MeshId, PreUpdateResult, CancellationToken);
			});
		}

		TFuture<bool> DestroyRealtimeMeshForChild(int32 ChildIndex, const FRealtimeMeshID& MeshId) const
		{			
			return DoForChildProvider(ChildIndex, [MeshId](const TSharedRef<FRealtimeMeshFactoryProvider>& Child)
			{
				return Child->DestroyRealtimeMesh(MeshId);
			});
		}
	};
}


