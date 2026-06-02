// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "NaniteSceneProxy.h"
#include "RealtimeMeshCore.h"
#include "RenderProxy/RealtimeMeshNaniteProxyInterface.h"
#include "RenderProxy/RealtimeMeshProxy.h"
#if RMC_ENGINE_ABOVE_5_4
#include "InstanceDataSceneProxy.h"
#endif

namespace RealtimeMesh
{
	class FNaniteRealtimeMeshSceneProxy : public IRealtimeMeshNaniteSceneProxy
	{
	public:
		using Super = ::Nanite::FSceneProxyBase;
	
		FNaniteRealtimeMeshSceneProxy(const ::Nanite::FMaterialAudit& MaterialAudit, URealtimeMeshComponent* Component, const RealtimeMesh::FRealtimeMeshProxyRef& InRealtimeMeshProxy);
		virtual ~FNaniteRealtimeMeshSceneProxy() = default;

	public:
		// FPrimitiveSceneProxy interface.
#if RMC_ENGINE_ABOVE_5_4
		virtual void CreateRenderThreadResources(FRHICommandListBase& RHICmdList) override;
#else
		virtual void CreateRenderThreadResources() override;
#endif

		virtual SIZE_T GetTypeHash() const override;
		virtual FPrimitiveViewRelevance	GetViewRelevance(const FSceneView* View) const override;
		
#if WITH_EDITOR
#if RMC_ENGINE_ABOVE_5_4
		virtual HHitProxy* CreateHitProxies(UPrimitiveComponent* Component, TArray<TRefCountPtr<HHitProxy>>& OutHitProxies) override;
		virtual HHitProxy* CreateHitProxies(IPrimitiveComponent* ComponentInterface, TArray<TRefCountPtr<HHitProxy>>& OutHitProxies) override;
		//virtual const FColorVertexBuffer* GetCustomHitProxyIdBuffer() const override;
#endif
#endif

		
		virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const override;
		virtual void DrawStaticElements(FStaticPrimitiveDrawInterface* PDI) override;

		virtual uint32 GetMemoryFootprint() const override;

#if RMC_ENGINE_ABOVE_5_4
		virtual void OnTransformChanged(FRHICommandListBase& RHICmdList) override;
#else
		virtual void OnTransformChanged() override;
#endif

		// FSceneProxyBase interface.
#if RMC_ENGINE_ABOVE_5_7
		virtual ::Nanite::FResourcePrimitiveInfo GetResourcePrimitiveInfo() const override;
#elif RMC_ENGINE_ABOVE_5_6
		virtual void GetNaniteResourceInfo(uint32& ResourceID, uint32& HierarchyOffset, uint32& AssemblyTransformOffset, uint32& ImposterIndex) const override;
#else
		virtual void GetNaniteResourceInfo(uint32& ResourceID, uint32& HierarchyOffset, uint32& ImposterIndex) const override;
#endif
#if RMC_ENGINE_BELOW_5_5
		virtual void GetNaniteMaterialMask(FUint32Vector2& OutMaterialMask) const override;
#endif

		virtual ::Nanite::FResourceMeshInfo GetResourceMeshInfo() const override;


		virtual void GetDistanceFieldAtlasData(const FDistanceFieldVolumeData*& OutDistanceFieldData, float& SelfShadowBias) const override;
#if RMC_ENGINE_BELOW_5_6
		virtual void GetDistanceFieldInstanceData(TArray<FRenderTransform>& InstanceLocalToPrimitiveTransforms) const override;
#endif
		virtual bool HasDistanceFieldRepresentation() const override;
		virtual bool HasDynamicIndirectShadowCasterRepresentation() const override;

		virtual const FCardRepresentationData* GetMeshCardRepresentation() const override;

		// Clear cached Nanite resources - call when mesh is updated
		void ClearCachedNaniteResources();

	private:
		// Helper method to ensure Nanite resources are cached and valid
		bool EnsureNaniteResourcesValid() const;

		/** Called on render thread to setup dynamic geometry for rendering */
		//void SetDynamicData_RenderThread(FGeometryCollectionDynamicData* NewDynamicData);

		//void ResetPreviousTransforms_RenderThread();

		//void FlushGPUSceneUpdate_GameThread();

		/*FORCEINLINE void SetRequiresGPUSceneUpdate_RenderThread(bool bRequireUpdate)
		{
			bRequiresGPUSceneUpdate = bRequireUpdate;
		}
	
		FORCEINLINE bool GetRequiresGPUSceneUpdate_RenderThread() const
		{
			return bRequiresGPUSceneUpdate;
		}
	
		void OnMotionBegin();
		void OnMotionEnd();*/

	protected:
		// TODO : Copy required data from UObject instead of using unsafe object pointer.
		//const UGeometryCollection* GeometryCollection = nullptr;
		RealtimeMesh::FRealtimeMeshProxyRef RealtimeMeshProxy;
		mutable TSharedPtr<FRealtimeMeshNaniteResources> NaniteResourcesPtr;
		mutable FCriticalSection NaniteResourcesLock;
	
		TArray<RealtimeMesh::FRealtimeMeshSectionProxyRef> SectionMapping;

#if WITH_EDITOR
		TArray<TRefCountPtr<HHitProxy>> HitProxies;
#endif
		
		/*struct FGeometryNaniteData
		{
			FBoxSphereBounds LocalBounds;
			uint32 HierarchyOffset;
		};
		TArray<FGeometryNaniteData> GeometryNaniteData;*/

		/*
		uint32 NaniteResourceID = INDEX_NONE;
		uint32 NaniteHierarchyOffset = INDEX_NONE;*/

		// TODO: Should probably calculate this on the materials array above instead of on the component
		//       Null and !Opaque are assigned default material unlike the component material relevance.
		FMaterialRelevance MaterialRelevance;

		uint32 bCastShadow : 1;
		uint32 bReverseCulling : 1;
		uint32 bHasMaterialErrors : 1;
		uint32 bCurrentlyInMotion : 1;
		uint32 bRequiresGPUSceneUpdate : 1;

		FUint32Vector2 NaniteMaterialMask;

		//FInstanceSceneDataBuffers InstanceSceneDataBuffersImpl;
	};
}