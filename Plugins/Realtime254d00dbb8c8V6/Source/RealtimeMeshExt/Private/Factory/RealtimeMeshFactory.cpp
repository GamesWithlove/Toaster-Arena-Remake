// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "Factory/RealtimeMeshFactory.h"
#include "Data/RealtimeMeshUpdateBuilder.h"
#include "Factory/RealtimeMeshConstructed.h"
#include "Factory/RealtimeMeshProviderPlane.h"
#include "UObject/Package.h"

namespace RealtimeMesh
{
	struct FFactoryUpdateState
	{
	private:
		FThreadSafeBool bAborted = false;


	public:
		URealtimeMeshConstructed* Mesh;
		FRealtimeMeshConstructedPtr MeshData;
		FRealtimeMeshID MeshId;
		FCriticalSection SyncRoot;


		TWeakPtr<FRealtimeMeshFactory> Factory;
		TWeakPtr<FRealtimeMeshFactoryProvider> Provider;
		FRealtimeMeshCancellationToken CancellationToken;

		FRealtimeMeshUpdateBuilder UpdateBuilder;

		TOptional<FRealtimeMeshInitializationResult> InitializationResult;
		TOptional<TSharedRef<FRealtimeMeshFactoryPreUpdateResult>> PreUpdateResult;
		TOptional<FRealtimeMeshDirtyFlags> UpdateFlags;
		TOptional<FRealtimeMeshStructure> Structure;
		//FRealtimeMeshFactoryUpdateResult UpdateResult;

		TOptional<ERealtimeMeshProxyUpdateStatus> ProxyUpdateStatus;
		TOptional<ERealtimeMeshCollisionUpdateResult> CollisionUpdateResult;

	public:
		void Abort() { bAborted.AtomicSet(true); }
		bool ShouldAbort() const
		{
			return bAborted || CancellationToken.IsCancelled() || !Factory.IsValid() || !Provider.IsValid() || (UpdateFlags.IsSet() && UpdateFlags->IsMeshInvalid());
		}
		bool ShouldContinue() const
		{
			return !ShouldAbort();
		}

		const URealtimeMeshConstructed* GetMesh() { return Mesh; }
		const FRealtimeMeshConstructedPtr& GetMeshData() { return MeshData; }

		TSharedPtr<FRealtimeMeshFactory> GetFactory() const { return Factory.Pin(); }
		TSharedPtr<FRealtimeMeshFactoryProvider> GetProvider() const { return Provider.Pin(); }
			
	};
	
	FRealtimeMeshFactory::FRealtimeMeshFactory()
		: RootProvider(MakeShared<FRealtimeMeshProviderPlane>())
		, bInitialized(false)
	{
		// We never want an empty provider so we default it to a plane until another is setup.
	}

	FRealtimeMeshFactory::FRealtimeMeshFactory(const TSharedRef<FRealtimeMeshFactoryProvider>& InRootProvider)
		: RootProvider(InRootProvider)
		, bInitialized(false)
	{
	}

	TFuture<bool> FRealtimeMeshFactory::MarkRealtimeMeshDirty(const FRealtimeMeshID& MeshId, const FRealtimeMeshDirtyFlags& DirtyFlags, FRealtimeMeshCancellationToken CancellationToken)
	{
		InitializeIfNecessary();

		auto State = MakeShared<FFactoryUpdateState>();
		State->Factory = AsWeak();
		State->Provider = RootProvider;
		State->CancellationToken = CancellationToken;
		State->UpdateFlags = DirtyFlags;

		TSharedPtr<FRealtimeMeshConstructed> Mesh;
		{
			FWriteScopeLock ScopeLock(MeshesLock);
			if (const auto MeshWeak = Meshes.Find(MeshId))
			{
				State->MeshData = MeshWeak->Pin();
			}
		}

		// If the mesh is not found, abort
		if (!State->MeshData.IsValid())
		{
			return MakeFulfilledPromise<bool>(false).GetFuture();			
		}

		State->MeshId = State->MeshData->MeshID;

		// Build the update chain
		auto UpdateFuture = UpdateMeshInternal(MakeSimpleStateFuture(State));

		auto FinalResult = ContinueOnGameThread(MoveTemp(UpdateFuture), [](TFuture<FUpdateStateRef>&& Future) -> bool
		{
			auto State = Future.Get();

			return State->ShouldContinue();
		});

		return FinalResult;
	}

	TFuture<URealtimeMeshConstructed*> FRealtimeMeshFactory::InitializeNewRealtimeMesh(const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams, FRealtimeMeshCancellationToken CancellationToken)
	{
		InitializeIfNecessary();

		auto State = MakeShared<FFactoryUpdateState>();
		State->Factory = AsWeak();
		State->Provider = RootProvider;
		State->CancellationToken = CancellationToken;
		State->MeshId = FRealtimeMeshID::CreateNew();
		
		// Fire provider initialization
		auto RunningState = DoOnRootProviderThread([State, InitParams]()
		{
			if (auto Factory = State->GetFactory())
			{
				return Factory->ProviderInitializeMesh(State, InitParams);
			}
			return MakeSimpleStateFuture(State);
		});

		// Create the mesh on the game thread
		RunningState = ContinueOnGameThread(MoveTemp(RunningState), [](TFuture<FUpdateStateRef>&& Future)
		{
			if (auto Factory = Future.Get()->GetFactory())
			{
				return Factory->CreateNewMesh(Future.Get());
			}
			return MakeSimpleStateFuture(Future.Get());
		});

		// Update the mesh
		RunningState = UpdateMeshInternal(MoveTemp(RunningState));

		// Finalize new mesh with factory
		auto FinalResult = ContinueOnGameThread(MoveTemp(RunningState), [](TFuture<FUpdateStateRef>&& Future) -> URealtimeMeshConstructed*
		{
			check(IsInGameThread());
			
			auto State = Future.Get();
			auto Factory = State->GetFactory();

			URealtimeMeshConstructed* Mesh = State->Mesh;

			const bool bIsMesValid = IsValid(Mesh);
			if (bIsMesValid)
			{
				// Clear async flag so that the mesh can be collected
				Mesh->ClearInternalFlags(EInternalObjectFlags::Async);
			}
			
			if (State->ShouldContinue() && Factory)
			{
				// Add the reference to our tracked meshes
				FWriteScopeLock ScopeLock(Factory->MeshesLock);
				Factory->Meshes.Add(State->MeshId, State->MeshData);

				return Mesh;				
			}

			if (bIsMesValid)
			{
				// TODO: Should we recycle the mesh				
			}

			return nullptr;
		});
		
		return FinalResult;
	}


	TFuture<bool> FRealtimeMeshFactory::DestroyRealtimeMesh(const FRealtimeMeshID& MeshId)
	{
		bool bRemovedMesh = false;
		{
			FWriteScopeLock ScopeLock(MeshesLock);
			if (auto* Mesh = Meshes.Find(MeshId))
			{
				Meshes.Remove(MeshId);
				bRemovedMesh = true;
			}
		}

		if (bRemovedMesh)
		{			
			return DoOnAllowedThread(RootProvider->AllowedThread(), [FactoryWeak = this->AsWeak(), MeshId]()
				{				
					const TSharedPtr<FRealtimeMeshFactory> Factory = FactoryWeak.Pin();			
					const TSharedPtr<FRealtimeMeshFactoryProvider> Provider = Factory? Factory->RootProvider : TSharedPtr<FRealtimeMeshFactoryProvider>(nullptr);
				
					if (!Provider.IsValid())
					{
						return MakeFulfilledPromise<bool>().GetFuture();
					}

					return Provider->DestroyRealtimeMesh(MeshId);
				});
		}

		return MakeFulfilledPromise<bool>(true).GetFuture();
	}

	TFuture<FUpdateStateRef> FRealtimeMeshFactory::ProviderInitializeMesh(const FUpdateStateRef& State,
		const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams)
	{
		auto Provider = State->GetProvider();
		if (Provider && State->ShouldContinue())
		{
			auto ProviderFuture = Provider->InitializeNewRealtimeMesh(State->MeshId, InitParams, State->CancellationToken);
			
			auto Res = ProviderFuture.Then([State](TFuture<FRealtimeMeshInitializationResult>&& Future) -> FUpdateStateRef
				{
					State->InitializationResult = Future.Consume();
					return State;
				});

			return Res;
		}
		
		return MakeSimpleStateFuture(State);
	}

	TFuture<FUpdateStateRef> FRealtimeMeshFactory::CreateNewMesh(const FUpdateStateRef& State)
	{
		if (State->ShouldContinue()) 
		{
			check(State->InitializationResult.IsSet());
		
			// TODO: Should we use a different outer?
			// Create the new Mesh
			URealtimeMeshConstructed* NewMesh = NewObject<URealtimeMeshConstructed>(GetTransientPackage(), FName(*State->InitializationResult->ComponentName));

			// We create/hold a strong object ptr so that we know the mesh stays valid
			State->Mesh = NewMesh;
			State->MeshData = State->Mesh->GetMeshAs<FRealtimeMeshConstructed>();
			State->UpdateFlags = FRealtimeMeshDirtyFlags::AllDirty();

			if (IsInGameThread())
			{
				NewMesh->SetInternalFlags(EInternalObjectFlags::Async);
			}

			// Apply our initialization data
			State->MeshData->Initialize(AsShared(), State->MeshId);
		}
		
		return MakeSimpleStateFuture(State);
	}

	TFuture<FUpdateStateRef> FRealtimeMeshFactory::UpdateMeshInternal(TFuture<FUpdateStateRef>&& RunningState)
	{
		// Pre-Update mesh from provider stack
		RunningState = ContinueOnGameThread(MoveTemp(RunningState), [](TFuture<FUpdateStateRef>&& Future)
		{
			if (auto Factory = Future.Get()->GetFactory())
			{
				return Factory->ProviderPreUpdateMesh(Future.Get());
			}
			return MakeSimpleStateFuture(Future.Get());
		});

		// Update structure from provider stack
		RunningState = ContinueOnGameThread(MoveTemp(RunningState), [](TFuture<FUpdateStateRef>&& Future)
		{
			if (auto Factory = Future.Get()->GetFactory())
			{
				return Factory->ProviderUpdateMeshStructure(Future.Get());
			}
			return MakeSimpleStateFuture(Future.Get());
		});

		// Update all dirty section groups from provider stack
		RunningState = ContinueOnGameThread(MoveTemp(RunningState), [](TFuture<FUpdateStateRef>&& Future)
		{
			if (auto Factory = Future.Get()->GetFactory())
			{
				return Factory->ProviderUpdateDirtySectionGroups(Future.Get());
			}
			return MakeSimpleStateFuture(Future.Get());
		});

		// Update nanite mesh resources
		RunningState = ContinueOnGameThread(MoveTemp(RunningState), [](TFuture<FUpdateStateRef>&& Future)
		{
			if (auto Factory = Future.Get()->GetFactory())
			{
				return Factory->ProviderUpdateNaniteResources(Future.Get());
			}
			return MakeSimpleStateFuture(Future.Get());
		});

		// Update collision from provider stack
		RunningState = ContinueOnGameThread(MoveTemp(RunningState), [](TFuture<FUpdateStateRef>&& Future)
		{
			if (auto Factory = Future.Get()->GetFactory())
			{
				return Factory->ProviderUpdateCollisionData(Future.Get());
			}
			return MakeSimpleStateFuture(Future.Get());
		});

		// Update bounds from provider stack
		RunningState = ContinueOnGameThread(MoveTemp(RunningState), [](TFuture<FUpdateStateRef>&& Future)
		{
			if (auto Factory = Future.Get()->GetFactory())
			{
				return Factory->ProviderGetBounds(Future.Get());
			}
			return MakeSimpleStateFuture(Future.Get());
		});
		
		// Apply final update
		RunningState = ContinueOnGameThread(MoveTemp(RunningState), [](TFuture<FUpdateStateRef>&& Future)
		{
			auto State = Future.Get();

			if (!State->UpdateFlags.IsSet() || !State->UpdateFlags->IsMeshInvalid())
			{
				if (auto Mesh = State->GetMeshData())
				{
					// If the app can render, force the proxy to create itself so we can push the data through to the gpu
					if (FApp::CanEverRender())
					{
						(void)Mesh->GetRenderProxy(true);
					}
				
					auto FactoryFuture = State->UpdateBuilder.Commit(Mesh.ToSharedRef());

					return FactoryFuture.Then([State](TFuture<ERealtimeMeshProxyUpdateStatus>&& Future)
					{
						if (State->ShouldContinue())
						{
							State->ProxyUpdateStatus = Future.Get();
						}
						return State;
					});				
				}
			}
			
			return MakeSimpleStateFuture(State);
		});

		return RunningState;		
	}

	TFuture<FUpdateStateRef> FRealtimeMeshFactory::ProviderPreUpdateMesh(const FUpdateStateRef& State)
	{		
		auto Provider = State->GetProvider();
		if (Provider && State->ShouldContinue() && State->UpdateFlags->IsAnyDirty())
		{
			check(State->UpdateFlags.IsSet());
			check(State->MeshData.IsValid());
			check(State->MeshId.IsValid());
		
			return Provider->PreUpdateRealtimeMesh(State->MeshId, State->UpdateFlags.GetValue(), State->CancellationToken)
				.Then([State](TFuture<TSharedRef<FRealtimeMeshFactoryPreUpdateResult>>&& Future) -> FUpdateStateRef
				{
					State->PreUpdateResult = Future.Consume();
					State->UpdateFlags = (*State->PreUpdateResult)->GetDirtyFlags();
					return State;
				});
		}
		
		return MakeSimpleStateFuture(State);
	}

	TFuture<FUpdateStateRef> FRealtimeMeshFactory::ProviderUpdateMeshStructure(const FUpdateStateRef& State)
	{		
		auto Provider = State->GetProvider();
		if (Provider && State->ShouldContinue())
		{
			check(State->UpdateFlags.IsSet());
			check(State->MeshData.IsValid());
			check(State->MeshId.IsValid());
			check(State->PreUpdateResult.IsSet());

			if (State->UpdateFlags->IsStructureDirty())
			{
				// Ask the provider for the structure
				return Provider->GetRealtimeMeshStructure(State->MeshId, State->PreUpdateResult.GetValue(), State->CancellationToken)
					.Then([State](TFuture<FRealtimeMeshStructure>&& Future)
					{
						if (State->ShouldContinue())
						{
							// Store the new structure so we can use it in later steps
							State->Structure = Future.Get();

							// Add the structure update to our builder.
							State->UpdateBuilder.AddMeshTask<FRealtimeMeshConstructed>([Structure = Future.Consume()](FRealtimeMeshUpdateContext& UpdateContext, FRealtimeMeshConstructed& Mesh)
							{
								Mesh.ApplyStructure(UpdateContext, Structure);
							});
						}
					
						return State;
					});
			}
			else
			{
				if (auto Mesh = State->GetMeshData())
				{
					FRealtimeMeshAccessContext AccessContext(Mesh.ToSharedRef());
					State->Structure = Mesh->GetStructure(AccessContext);

					return MakeSimpleStateFuture(State);				
				}
				else
				{
					State->Abort();
				}
			}
		}
		
		return MakeSimpleStateFuture(State);
	}

	TFuture<FUpdateStateRef> FRealtimeMeshFactory::ProviderUpdateDirtySectionGroups(const FUpdateStateRef& State)
	{		
		auto Provider = State->GetProvider();
		if (Provider && State->ShouldContinue() && State->UpdateFlags->IsAnyRenderDataDirty())
		{
			check(State->UpdateFlags.IsSet());
			check(State->MeshData.IsValid());
			check(State->MeshId.IsValid());
			check(State->PreUpdateResult.IsSet());
			check(State->Structure.IsSet());

			TArray<TFuture<bool>> SectionGroupFutures;

			// Kick off all section group updates.
			for (const auto& LOD : State->Structure->LODs)
			{
				for (const auto& SectionGroupKey : LOD.SectionGroups)
				{
					SectionGroupFutures.Add(DoOnAllowedThread(Provider->AllowedThread(), [State, SectionGroupKey]() -> TFuture<bool>
					{
						if (auto Factory = State->GetFactory())
						{
							return Factory->ProviderUpdateDirtySectionGroup(State, SectionGroupKey);
						}
						return MakeFulfilledPromise<bool>(true).GetFuture();
					}));
				}
			}

			return ContinueOnAsyncThread(WaitForAll(MoveTemp(SectionGroupFutures)), [State](TFuture<TArray<bool>>&& Results) -> TFuture<FUpdateStateRef>
			{							
				return MakeSimpleStateFuture(State);
			});
		}
		
		return MakeSimpleStateFuture(State);
	}

	TFuture<bool> FRealtimeMeshFactory::ProviderUpdateDirtySectionGroup(const FUpdateStateRef& State, const FRealtimeMeshSectionGroupKey& SectionGroup)
	{		
		auto Provider = State->GetProvider();
		if (Provider && State->ShouldContinue() && State->UpdateFlags->IsSectionGroupDirty(SectionGroup))
		{
			check(State->UpdateFlags.IsSet());
			check(State->MeshData.IsValid());
			check(State->MeshId.IsValid());
			check(State->PreUpdateResult.IsSet());
			check(State->Structure.IsSet());

			auto StructureRequestFuture = Provider->GetRealtimeMeshSectionGroup(State->MeshId, State->PreUpdateResult.GetValue(), SectionGroup, State->CancellationToken);

			return ContinueOnAsyncThread(MoveTemp(StructureRequestFuture), [State, SectionGroup](TFuture<TSharedRef<FRealtimeMeshSectionGroupData>>&& Future) -> TFuture<bool>
			{
				{
					FScopeLock Lock(&State->SyncRoot);
					State->UpdateBuilder.AddMeshTask<FRealtimeMeshConstructed>([SectionGroup, SectionGroupData = Future.Get()](FRealtimeMeshUpdateContext& UpdateContext, FRealtimeMeshConstructed& Mesh) mutable
					{
						Mesh.ApplySectionGroupUpdate(UpdateContext, SectionGroup, MoveTemp(*SectionGroupData));
					});
				}
				return MakeFulfilledPromise<bool>(true).GetFuture();
			});
		}
		
		return MakeFulfilledPromise<bool>(true).GetFuture();
	}

	TFuture<FUpdateStateRef> FRealtimeMeshFactory::ProviderUpdateNaniteResources(const FUpdateStateRef& State)
	{
		auto Provider = State->GetProvider();
		if (Provider && State->ShouldContinue() && State->UpdateFlags->IsNaniteDataDirty())
		{
			check(State->UpdateFlags.IsSet());
			check(State->MeshData.IsValid());
			check(State->MeshId.IsValid());
			check(State->PreUpdateResult.IsSet());

			// Ask the provider for the structure
			return Provider->GetNaniteResources(State->MeshId, State->PreUpdateResult.GetValue(), State->CancellationToken)
				.Then([State](TFuture<FRealtimeMeshNaniteResourcesPtr>&& Future)
				{
					if (State->ShouldContinue())
					{
						FScopeLock Lock(&State->SyncRoot);
						auto Resources = Future.Consume();
						if (Resources.IsValid() && Resources->HasValidData())
						{
							State->UpdateBuilder.AddMeshTask<FRealtimeMeshConstructed>([NaniteResources = MoveTemp(Resources)](FRealtimeMeshUpdateContext& UpdateContext, FRealtimeMeshConstructed& Mesh) mutable
							{
								Mesh.SetNaniteResources(UpdateContext, MoveTemp(NaniteResources));
							});
						}
					}
				
					return State;
			});
		}
		
		return MakeSimpleStateFuture(State);
	}

	TFuture<FUpdateStateRef> FRealtimeMeshFactory::ProviderUpdateCollisionData(const FUpdateStateRef& State)
	{		
		auto Provider = State->GetProvider();
		if (Provider && State->ShouldContinue() && State->UpdateFlags->IsCollisionDirty())
		{
			check(State->UpdateFlags.IsSet());
			check(State->MeshData.IsValid());
			check(State->MeshId.IsValid());
			check(State->PreUpdateResult.IsSet());

			// Ask the provider for the structure
			return Provider->GetCollisionData(State->MeshId, State->PreUpdateResult.GetValue(), State->CancellationToken)
				.Then([State](TFuture<TSharedRef<FRealtimeMeshCollisionInfo>>&& Future)
				{
					if (State->ShouldContinue())
					{
						FScopeLock Lock(&State->SyncRoot);
						if (Future.Get()->ComplexGeometry.NumMeshes() > 0 || Future.Get()->SimpleGeometry.HasAnyShapes())
						{
							State->UpdateBuilder.AddMeshTask<FRealtimeMeshConstructed>([CollisionData = Future.Get()](FRealtimeMeshUpdateContext& UpdateContext, FRealtimeMeshConstructed& Mesh) mutable
							{
								Mesh.UpdateCollision(MoveTemp(*CollisionData));
							});
						}
					}
				
					return State;
			});
		}
		
		return MakeSimpleStateFuture(State);
	}

	TFuture<FUpdateStateRef> FRealtimeMeshFactory::ProviderGetBounds(const FUpdateStateRef& State)
	{		
		auto Provider = State->GetProvider();
		if (Provider && State->ShouldContinue() && State->UpdateFlags->IsBoundsDirty())
		{
			check(State->UpdateFlags.IsSet());
			check(State->MeshData.IsValid());
			check(State->MeshId.IsValid());
			check(State->PreUpdateResult.IsSet());

			if (State->UpdateFlags->IsCollisionDirty())
			{
				// Ask the provider for the structure
				return Provider->CalculateBounds(State->MeshId, State->PreUpdateResult.GetValue(), State->CancellationToken)
					.Then([State](TFuture<FBoxSphereBounds3f>&& Future)
					{
						if (State->ShouldContinue())
						{
							State->UpdateBuilder.AddMeshTask<FRealtimeMeshConstructed>([Bounds = Future.Get()](FRealtimeMeshUpdateContext& UpdateContext, FRealtimeMeshConstructed& Mesh)
							{
								Mesh.SetBounds(UpdateContext, Bounds);
							});
						}
					
						return State;
					});
			}
		}
		
		return MakeSimpleStateFuture(State);
	}

	void FRealtimeMeshFactory::InitializeIfNecessary()
	{
		if (!bInitialized)
		{
			RootProvider->InitializeProvider(this->AsShared());
			bInitialized = true;
		}
	}
}
