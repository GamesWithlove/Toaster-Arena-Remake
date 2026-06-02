// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "Ext/RealtimeMeshFactoryInterface.h"
#include "Factory/RealtimeMeshFactory.h"

namespace RealtimeMesh
{
	class FRealtimeMeshFactoryImpl_v0 : public IRealtimeMeshFactory_v0
	{
		TSharedRef<FRealtimeMeshFactory> Factory;
	public:
		FRealtimeMeshFactoryImpl_v0(const TSharedRef<FRealtimeMeshFactory>& InFactory);

		TSharedRef<FRealtimeMeshFactory> GetFactory() const { return Factory; }

		virtual TFuture<UObject*> InitializeNewRealtimeMesh(const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<bool> MarkRealtimeMeshDirty(const FRealtimeMeshID& MeshId, const FRealtimeMeshDirtyFlags& DirtyFlags, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<bool> MarkRealtimeMeshDirty(UObject* RealtimeMesh, const FRealtimeMeshDirtyFlags& DirtyFlags, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual void DestroyRealtimeMesh(const FRealtimeMeshID& MeshId) override;
	};
	
	struct FRealtimeMeshFactoryInterfaceImpl_v0 : public IRealtimeMeshFactoryInterface_v0
	{
	private:
		mutable TMap<TSharedPtr<FRealtimeMeshFactory>, TWeakPtr<FRealtimeMeshFactoryImpl_v0>> FactoryMap;

		void CleanupDanglingReferences() const;
	public:
		virtual TSharedRef<IRealtimeMeshFactory_v0> CreateFactory(const TSharedRef<FRealtimeMeshFactoryProvider>& InProvider) const override;
	};
}
