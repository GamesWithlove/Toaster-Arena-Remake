// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Mesh/RealtimeMeshNaniteResourcesInterface.h"
#include "Rendering/NaniteResources.h"


namespace RealtimeMesh
{
	
	
	/*struct FRealtimeMeshNaniteResourcesImplementation : public IRealtimeMeshNaniteMeshResourcesImplementation
	{
	private:
		::Nanite::FResources Resources;
		FBoxSphereBounds Bounds;
		bool bIsInitialized;
	public:
		FRealtimeMeshNaniteResourcesImplementation(const FRealtimeMeshNaniteResourcesImplementation&) = delete;
		FRealtimeMeshNaniteResourcesImplementation(FRealtimeMeshNaniteResourcesImplementation&&) = delete;
		
		FRealtimeMeshNaniteResourcesImplementation(FRealtimeMeshNaniteBuiltData&& InBuiltData);
		FRealtimeMeshNaniteResourcesImplementation(const ::Nanite::FResources& InResources);
		FRealtimeMeshNaniteResourcesImplementation(::Nanite::FResources&& InResources);

		virtual ~FRealtimeMeshNaniteResourcesImplementation() override;

		FRealtimeMeshNaniteResourcesImplementation& operator=(const FRealtimeMeshNaniteResourcesImplementation&) = delete;
		FRealtimeMeshNaniteResourcesImplementation& operator=(FRealtimeMeshNaniteResourcesImplementation&&) = delete;

		void ClearTransientData();

		virtual bool HasValidData() const override;

		virtual FBoxSphereBounds GetBounds() const override { return Bounds; }

		const ::Nanite::FResources* GetRawResources() const;
	
		virtual void InitResources(URealtimeMesh* Owner) override;
		virtual void ReleaseResources() override;
	};*/
}
