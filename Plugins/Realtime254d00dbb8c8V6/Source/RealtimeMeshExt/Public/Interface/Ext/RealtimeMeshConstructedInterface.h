// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "Core/RealtimeMeshInterface.h"

namespace RealtimeMesh
{
	class IRealtimeMeshConstructed_v0 : public IRealtimeMesh_v0
	{
	public:
		static FName GetModularFeatureName()
		{
			static FName FeatureName = TEXT("IRealtimeMeshConstructed_v0");
			return FeatureName;
		}
		
		virtual TFuture<ERealtimeMeshProxyUpdateStatus> Reset(bool bShouldRecreate) = 0;
	};

	class IRealtimeMeshConstructedInterface_v0 : public IModularFeature
	{
	public:
		virtual ~IRealtimeMeshConstructedInterface_v0() = default;

		static FName GetModularFeatureName()
		{
			static FName FeatureName = TEXT("IRealtimeMeshConstructedInterface_v0");
			return FeatureName;
		}

	
		virtual TSharedRef<IRealtimeMeshConstructed_v0> InitializeMesh(UMeshComponent* MeshComponent) const = 0;
		virtual TSharedRef<IRealtimeMeshConstructed_v0> GetMesh(UMeshComponent* MeshComponent) const = 0;
	};


}