// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshFactoryInterfaceImpl.h"

#include "RealtimeMeshComponent.h"
#include "Factory/RealtimeMeshFactory.h"
#include "Core/RealtimeMeshModularFeatures.h"
#include "Factory/RealtimeMeshConstructed.h"

namespace RealtimeMesh
{

	FRealtimeMeshFactoryImpl_v0::FRealtimeMeshFactoryImpl_v0(const TSharedRef<FRealtimeMeshFactory>& InFactory)
		: Factory(InFactory)
	{ }

	TFuture<UObject*> FRealtimeMeshFactoryImpl_v0::InitializeNewRealtimeMesh(const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams,
		FRealtimeMeshCancellationToken CancellationToken)
	{
		return Factory->InitializeNewRealtimeMesh(InitParams, CancellationToken).Then([](TFuture<URealtimeMeshConstructed*>&& Future) -> UObject*
		{
			return Future.Consume();
		});
	}

	TFuture<bool> FRealtimeMeshFactoryImpl_v0::MarkRealtimeMeshDirty(const FRealtimeMeshID& MeshId, const FRealtimeMeshDirtyFlags& DirtyFlags,
		FRealtimeMeshCancellationToken CancellationToken)
	{
		return Factory->MarkRealtimeMeshDirty(MeshId, DirtyFlags, CancellationToken);
	}

	TFuture<bool> FRealtimeMeshFactoryImpl_v0::MarkRealtimeMeshDirty(UObject* RealtimeMesh, const FRealtimeMeshDirtyFlags& DirtyFlags,
		FRealtimeMeshCancellationToken CancellationToken)
	{
		if (URealtimeMeshConstructed* ConstructedMesh = Cast<URealtimeMeshConstructed>(RealtimeMesh))
		{
			return ConstructedMesh->MarkDirty(DirtyFlags, CancellationToken);
		}
		return MakeFulfilledPromise<bool>(false).GetFuture();
	}

	void FRealtimeMeshFactoryImpl_v0::DestroyRealtimeMesh(const FRealtimeMeshID& MeshId)
	{
		Factory->DestroyRealtimeMesh(MeshId);
	}


	void FRealtimeMeshFactoryInterfaceImpl_v0::CleanupDanglingReferences() const
	{
		for (auto It = FactoryMap.CreateIterator(); It; ++It)
		{
			if (!It.Value().IsValid())
			{
				It.RemoveCurrent();
			}
		}
	}
	
	TSharedRef<IRealtimeMeshFactory_v0> FRealtimeMeshFactoryInterfaceImpl_v0::CreateFactory(const TSharedRef<FRealtimeMeshFactoryProvider>& InProvider) const
	{
		TSharedRef<FRealtimeMeshFactory> Factory = MakeShared<FRealtimeMeshFactory>(InProvider);
		TSharedRef<FRealtimeMeshFactoryImpl_v0> FactoryInterface = MakeShared<FRealtimeMeshFactoryImpl_v0>(Factory);
		FactoryMap.Add(Factory, FactoryInterface);	
		return FactoryInterface;
	}

	// Register the interface
	TRealtimeMeshModularFeatureRegistration<FRealtimeMeshFactoryInterfaceImpl_v0> GRealtimeMeshFactoryInterfaceImpl_v0;
}
