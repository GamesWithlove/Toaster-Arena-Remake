// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshNaniteProxy.h"

#include "EngineUtils.h"
#include "MaterialDomain.h"
#include "NaniteSceneProxy.h"
#include "RealtimeMeshComponent.h"
#include "RealtimeMeshNaniteResources.h"
#include "RenderProxy/RealtimeMeshLODProxy.h"
#include "RenderProxy/RealtimeMeshProxy.h"
#include "Materials/Material.h"
#include "SceneInterface.h"
#include "MaterialShaderType.h"
#include "MaterialShared.h"
#include "SceneView.h"

namespace RealtimeMesh
{
	FNaniteRealtimeMeshSceneProxy::FNaniteRealtimeMeshSceneProxy(const ::Nanite::FMaterialAudit& MaterialAudit, URealtimeMeshComponent* Component, const RealtimeMesh::FRealtimeMeshProxyRef& InRealtimeMeshProxy)
		: IRealtimeMeshNaniteSceneProxy(Component)
		, RealtimeMeshProxy(InRealtimeMeshProxy)
		, bCurrentlyInMotion(false)
		, bRequiresGPUSceneUpdate(false)
	{
		LLM_SCOPE_BYTAG(Nanite);

		// Nanite requires GPUScene
		checkSlow(UseGPUScene(GMaxRHIShaderPlatform, GetScene().GetFeatureLevel()));
		checkSlow(DoesPlatformSupportNanite(GMaxRHIShaderPlatform));

		SetWireframeColor(FColor::Green);

		// Initialize distance field self shadow bias - use default value since URealtimeMeshComponent doesn't expose this property
		DistanceFieldSelfShadowBias = 0.0f;

		// Use fast path that does not update static draw lists.
		bStaticElementsAlwaysUseProxyPrimitiveUniformBuffer = true;

		// Nanite always uses GPUScene, so we can skip expensive primitive uniform buffer updates.
		bVFRequiresPrimitiveUniformBuffer = false;

		// Indicates if 1 or more materials contain settings not supported by Nanite.
		bHasMaterialErrors = false;

		//InstanceWPODisableDistance = ProxyDesc.WorldPositionOffsetDisableDistance;
		//bEvaluateWorldPositionOffset = ProxyDesc.bEvaluateWorldPositionOffset;



		NaniteMaterialMask = FUint32Vector2(0u, 0u);
		SectionMapping.Empty();
		MaterialSections.Empty();


		const auto AddUsedMaterial = [&](int32 SectionIndex, int32 MaterialIndex)
		{
			FMaterialSection& MaterialSection = MaterialSections.AddZeroed_GetRef();

			const bool bValidMeshSection = MaterialIndex != INDEX_NONE;

			// Keep track of highest observed material index.
			MaterialMaxIndex = FMath::Max(MaterialIndex, MaterialMaxIndex);

			UMaterialInterface* MaterialInterface = bValidMeshSection ? Component->GetMaterial(MaterialIndex) : nullptr;

			// TODO: PROG_RASTER (Implement programmable raster support)
			const bool bInvalidMaterial = !MaterialInterface || !IsOpaqueOrMaskedBlendMode(*MaterialInterface) || MaterialInterface->GetShadingModels().HasShadingModel(MSM_SingleLayerWater);
			if (bInvalidMaterial)
			{
				bHasMaterialErrors = true;
				if (MaterialInterface)
				{
					UE_LOG
					(
						LogStaticMesh, Warning,
						TEXT("Invalid material [%s] used on Nanite geometry collection [%s] - forcing default material instead. Only opaque blend mode and a shading model that is not SingleLayerWater is currently supported, [%s] blend mode and [%s] shading model was specified."),
						*MaterialInterface->GetName(),
						*Component->GetName(),
						*GetBlendModeString(MaterialInterface->GetBlendMode()),
						*GetShadingModelFieldString(MaterialInterface->GetShadingModels())
					);
				}
			}

			const bool bForceDefaultMaterial = /*!!FORCE_NANITE_DEFAULT_MATERIAL ||*/ bHasMaterialErrors;
			if (bForceDefaultMaterial)
			{
				MaterialInterface = UMaterial::GetDefaultMaterial(MD_Surface);
			}

			// Should never be null here
			check(MaterialInterface != nullptr);

			// Should always be opaque blend mode here.
			check(IsOpaqueOrMaskedBlendMode(*MaterialInterface));

			MaterialSections[SectionIndex].ShadingMaterialProxy = MaterialInterface->GetRenderProxy();
			MaterialSections[SectionIndex].RasterMaterialProxy  = MaterialInterface->GetRenderProxy(); // TODO: PROG_RASTER (Implement programmable raster support)
			MaterialSections[SectionIndex].MaterialIndex = MaterialIndex;
#if RMC_ENGINE_ABOVE_5_5
			MaterialSections[SectionIndex].bCastShadow = true;
#endif

			// Accumulate material relevance
			MaterialRelevance |= MaterialInterface->GetRelevance_Concurrent(GetScene().GetFeatureLevel());
		};





		

		// Get materials directly from component for Nanite rendering
		TArray<UMaterialInterface*> ComponentMaterials = Component->GetMaterials();
		for (int32 MaterialIndex = 0; MaterialIndex < ComponentMaterials.Num(); ++MaterialIndex)
		{
			AddUsedMaterial(MaterialIndex, MaterialIndex);
		}

		// Ensure we have at least one material (default material)
		if (ComponentMaterials.Num() == 0)
		{
			AddUsedMaterial(0, 0);
		}
		
	

		// Nanite supports the GPUScene instance data buffer.
		//SetupInstanceSceneDataBuffers(&InstanceSceneDataBuffersImpl);

		bSupportsDistanceFieldRepresentation = MaterialRelevance.bOpaque && !MaterialRelevance.bUsesSingleLayerWaterMaterial && RealtimeMeshProxy->HasDistanceFieldData();

	

		// Check if the assigned materials can be rendered in Nanite
		// Note: MaterialRelevance is already calculated in the material processing loop above
		const bool IsRenderable = MaterialRelevance.bOpaque && !MaterialRelevance.bUsesSingleLayerWaterMaterial;

		if (!IsRenderable)
		{
			bHasMaterialErrors = true;
			UE_LOG(LogStaticMesh, Warning, TEXT("RealtimeMesh Nanite proxy [%s] contains materials that are not compatible with Nanite rendering. Only opaque materials without single layer water are supported."), 
				*Component->GetName());
		}

#if WITH_EDITOR
		HitProxyMode = ::Nanite::FSceneProxyBase::EHitProxyMode::MaterialSection;
		
		if (AActor* Actor = Component->GetOwner())
		{
			// Generate default material hit proxies for simple selection.
			HitProxyMode = ::Nanite::FSceneProxyBase::EHitProxyMode::MaterialSection;
			for (int32 SectionIndex = 0; SectionIndex < MaterialSections.Num(); ++SectionIndex)
			{
				FMaterialSection& Section = MaterialSections[SectionIndex];
				HHitProxy* HitProxy = new HActor(Actor, Component, SectionIndex, SectionIndex);
				Section.HitProxy = HitProxy;
				HitProxies.Add(HitProxy);
			}
		}
#endif

	
		OnMaterialsUpdated();
	
		FilterFlags = ::Nanite::EFilterFlags::StaticMesh;
#if RMC_ENGINE_ABOVE_5_4
		FilterFlags |= Component->Mobility == EComponentMobility::Static ? ::Nanite::EFilterFlags::StaticMobility : ::Nanite::EFilterFlags::NonStaticMobility;
#endif
		bReverseCulling = false;// ProxyDesc.bReverseCulling;

#if RMC_ENGINE_ABOVE_5_4
		bOpaqueOrMasked = true; // Nanite only supports opaque
#endif
		UpdateVisibleInLumenScene();
	}



#if RMC_ENGINE_ABOVE_5_4
	void FNaniteRealtimeMeshSceneProxy::CreateRenderThreadResources(FRHICommandListBase& RHICmdList)
	#else
	void FNaniteRealtimeMeshSceneProxy::CreateRenderThreadResources()
	#endif
	{		
	}


	FPrimitiveViewRelevance FNaniteRealtimeMeshSceneProxy::GetViewRelevance(const FSceneView* View) const
	{
		LLM_SCOPE_BYTAG(Nanite);

#if WITH_EDITOR
		const bool bOptimizedRelevance = false;
#else
		const bool bOptimizedRelevance = true;
#endif

		FPrimitiveViewRelevance Result;
		Result.bDrawRelevance = IsShown(View) && View->Family->EngineShowFlags.NaniteMeshes;
		Result.bShadowRelevance = IsShadowCast(View);
		Result.bRenderCustomDepth = ::Nanite::GetSupportsCustomDepthRendering() && ShouldRenderCustomDepth();
		Result.bUsesLightingChannels = GetLightingChannelMask() != GetDefaultLightingChannelMask();

		// Always render the Nanite mesh data with static relevance.
		Result.bStaticRelevance = true;

		// Should always be covered by constructor of Nanite scene proxy.
		Result.bRenderInMainPass = true;

		if (bOptimizedRelevance) // No dynamic relevance if optimized.
		{
			CombinedMaterialRelevance.SetPrimitiveViewRelevance(Result);
			Result.bVelocityRelevance = DrawsVelocity();
		}
		else
		{
#if WITH_EDITOR
			//only check these in the editor
			Result.bEditorVisualizeLevelInstanceRelevance = IsEditingLevelInstanceChild();
			Result.bEditorStaticSelectionRelevance = (IsSelected() || IsHovered());
#endif

#if NANITE_ENABLE_DEBUG_RENDERING
			bool bDrawSimpleCollision = false, bDrawComplexCollision = false;
			const bool bInCollisionView =  false; //IsCollisionView(View->Family->EngineShowFlags, bDrawSimpleCollision, bDrawComplexCollision);
#else
			bool bInCollisionView = false;
#endif

			// Set dynamic relevance for overlays like collision and bounds.
			bool bSetDynamicRelevance = false;
#if !(UE_BUILD_SHIPPING) || WITH_EDITOR
			bSetDynamicRelevance |= (
				// Nanite doesn't respect rich view enabling dynamic relevancy.
				//IsRichView(*View->Family) ||
				View->Family->EngineShowFlags.Collision ||
				bInCollisionView ||
				View->Family->EngineShowFlags.Bounds ||
				View->Family->EngineShowFlags.VisualizeInstanceUpdates
			);
#endif
#if WITH_EDITOR
			// Nanite doesn't render debug vertex colors.
			//bSetDynamicRelevance |= (IsSelected() && View->Family->EngineShowFlags.VertexColors);
#endif
#if NANITE_ENABLE_DEBUG_RENDERING
			//bSetDynamicRelevance |= bDrawMeshCollisionIfComplex || bDrawMeshCollisionIfSimple;
#endif

			if (bSetDynamicRelevance)
			{
				Result.bDynamicRelevance = true;

#if NANITE_ENABLE_DEBUG_RENDERING
				// If we want to draw collision, needs to make sure we are considered relevant even if hidden
				if (View->Family->EngineShowFlags.Collision || bInCollisionView)
				{
					Result.bDrawRelevance = true;
				}
#endif
			}

			if (!View->Family->EngineShowFlags.Materials
			#if NANITE_ENABLE_DEBUG_RENDERING
				|| bInCollisionView
			#endif
				)
			{
				Result.bOpaque = true;
			}

			CombinedMaterialRelevance.SetPrimitiveViewRelevance(Result);
			Result.bVelocityRelevance = Result.bOpaque && Result.bRenderInMainPass && DrawsVelocity();
		}

		return Result;
	}

#if WITH_EDITOR
	HHitProxy* FNaniteRealtimeMeshSceneProxy::CreateHitProxies(UPrimitiveComponent* Component, TArray<TRefCountPtr<HHitProxy>>& OutHitProxies)
	{
		return FNaniteRealtimeMeshSceneProxy::CreateHitProxies(Component->GetPrimitiveComponentInterface(), OutHitProxies);
	}
	
#if RMC_ENGINE_ABOVE_5_4
	/*HHitProxy* FNaniteRealtimeMeshSceneProxy::CreateHitProxies(UPrimitiveComponent* Component, TArray<TRefCountPtr<HHitProxy>>& OutHitProxies)
	{
		HHitProxy* DefaultHitProxy = FPrimitiveSceneProxy::CreateHitProxies(Component, OutHitProxies);
		OutHitProxies.Append(HitProxies);
		return DefaultHitProxy;
	}

	const FColorVertexBuffer* FNaniteRealtimeMeshSceneProxy::GetCustomHitProxyIdBuffer() const
	{
		return nullptr;
		//return (bEnableBoneSelection || bUsesSubSections) ? &HitProxyIdBuffer : nullptr;
	}*/

	HHitProxy* FNaniteRealtimeMeshSceneProxy::CreateHitProxies(IPrimitiveComponent* Component, TArray<TRefCountPtr<HHitProxy>>& OutHitProxies)
	{
		switch (HitProxyMode)
		{
		case FSceneProxyBase::EHitProxyMode::MaterialSection:
			{
				OutHitProxies.Append(HitProxies);
				/*if (Component->GetOwner())
				{
					// Generate separate hit proxies for each material section, so that we can perform hit tests against each one.
					for (int32 SectionIndex = 0; SectionIndex < MaterialSections.Num(); ++SectionIndex)
					{
						FMaterialSection& Section = MaterialSections[SectionIndex];
					

						//HHitProxy* ActorHitProxy = new HActor(Component->GetOwner(), Component, SectionIndex, SectionIndex);
						//HHitProxy* ActorHitProxy =  Component->CreateMeshHitProxy(SectionIndex, SectionIndex);
						if (ActorHitProxy)
						{
							check(!Section.HitProxy);
							Section.HitProxy = ActorHitProxy;
							OutHitProxies.Add(ActorHitProxy);
						}
					}
				}*/
				break;
			}

		case FSceneProxyBase::EHitProxyMode::PerInstance:
			{
				// Note: the instance data proxy handles the hitproxy lifetimes internally as the update cadence does not match FPrimitiveSceneInfo ctor cadence
				break;
			}

		default:
			break;
		}

		return Super::CreateHitProxies(Component, OutHitProxies);
	}

#endif

	/*HHitProxy* FNaniteRealtimeMeshSceneProxy::CreateHitProxies(UPrimitiveComponent* Component, TArray<TRefCountPtr<HHitProxy>>& OutHitProxies)
	{
		LLM_SCOPE_BYTAG(Nanite);
	
		if (Component->GetOwner())
		{
			// Generate separate hit proxies for each material section, so that we can perform hit tests against each one.
			for (int32 SectionIndex = 0; SectionIndex < MaterialSections.Num(); ++SectionIndex)
			{
				FMaterialSection& Section = MaterialSections[SectionIndex];
				HHitProxy* ActorHitProxy = new HActor(Component->GetOwner(), Component, SectionIndex, SectionIndex);
				check(!Section.HitProxy);
				Section.HitProxy = ActorHitProxy;
				OutHitProxies.Add(ActorHitProxy);
			}
		}
	
		return Super::CreateHitProxies(Component, OutHitProxies);
	}*/
	
#endif
	
	void FNaniteRealtimeMeshSceneProxy::GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap,
		FMeshElementCollector& Collector) const
	{
		const FEngineShowFlags& EngineShowFlags = ViewFamily.EngineShowFlags;
		const bool bDrawWireframeCollision = EngineShowFlags.Collision && IsCollisionEnabled();

		// draw extra stuff ( collision , bounds ... )
		for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
		{
			if (VisibilityMap & (1 << ViewIndex))
			{
				/*// collision modes
				if (ShowCollisionMeshes(EngineShowFlags) && GeometryCollection && GeometryCollection->GetGeometryCollection() && AllowDebugViewmodes())
				{
					FTransform GeomTransform(GetLocalToWorld());
					if (bDrawWireframeCollision)
					{
						GeometryCollectionDebugDraw::DrawWireframe(*GeometryCollection->GetGeometryCollection(), GeomTransform, Collector, ViewIndex, GetWireframeColor().ToFColor(true));
					}
					else
					{
						FMaterialRenderProxy* CollisionMaterialInstance = new FColoredMaterialRenderProxy(GEngine->ShadedLevelColorationUnlitMaterial->GetRenderProxy(), GetWireframeColor());
						Collector.RegisterOneFrameMaterialProxy(CollisionMaterialInstance);
						GeometryCollectionDebugDraw::DrawSolid(*GeometryCollection->GetGeometryCollection(), GeomTransform, Collector, ViewIndex, CollisionMaterialInstance);
					}
				}*/

				// render bounds
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
				RenderBounds(Collector.GetPDI(ViewIndex), ViewFamily.EngineShowFlags, GetBounds(), IsSelected());
#endif
			}
		}
	}

	void FNaniteRealtimeMeshSceneProxy::DrawStaticElements(FStaticPrimitiveDrawInterface* PDI)
	{
		const FLightCacheInterface* LCI = nullptr;
		DrawStaticElementsInternal(PDI, LCI);
	}

	uint32 FNaniteRealtimeMeshSceneProxy::GetMemoryFootprint() const
	{
		return sizeof(*this) + GetAllocatedSize();
	}

#if RMC_ENGINE_ABOVE_5_4
	void FNaniteRealtimeMeshSceneProxy::OnTransformChanged(FRHICommandListBase& RHICmdList)
	{
		FSceneProxyBase::OnTransformChanged(RHICmdList);
	}
	
#else
	void FNaniteRealtimeMeshSceneProxy::OnTransformChanged()
	{
		FSceneProxyBase::OnTransformChanged();
	}
#endif

#if RMC_ENGINE_ABOVE_5_7
	// UE 5.7: New interface returning FResourcePrimitiveInfo struct
	::Nanite::FResourcePrimitiveInfo FNaniteRealtimeMeshSceneProxy::GetResourcePrimitiveInfo() const
	{
		FScopeLock Lock(&NaniteResourcesLock);

		::Nanite::FResourcePrimitiveInfo Info;

		if (!EnsureNaniteResourcesValid())
		{
			Info.ResourceID = INDEX_NONE;
			Info.HierarchyOffset = INDEX_NONE;
			Info.AssemblyTransformOffset = INDEX_NONE;
			Info.AssemblyTransformCount = 0;
			Info.ImposterIndex = INDEX_NONE;
			return Info;
		}

		const ::Nanite::FResources& Resources = *NaniteResourcesPtr->GetNanitePtr();

		Info.ResourceID = Resources.RuntimeResourceID;
		Info.HierarchyOffset = Resources.HierarchyOffset;
		Info.AssemblyTransformOffset = Resources.AssemblyTransformOffset;
		Info.AssemblyTransformCount = 0; // No assembly transforms for runtime meshes
		Info.ImposterIndex = Resources.ImposterIndex;

		UE_LOG(LogRealtimeMesh, VeryVerbose, TEXT("GetResourcePrimitiveInfo (5.7): ResourceID=%u, HierarchyOffset=%u, ImposterIndex=%u"),
			Info.ResourceID, Info.HierarchyOffset, Info.ImposterIndex);

		return Info;
	}
#elif RMC_ENGINE_ABOVE_5_6
	void FNaniteRealtimeMeshSceneProxy::GetNaniteResourceInfo(uint32& ResourceID, uint32& HierarchyOffset, uint32& AssemblyTransformOffset, uint32& ImposterIndex) const
	{
		FScopeLock Lock(&NaniteResourcesLock);

		if (!EnsureNaniteResourcesValid())
		{
			ResourceID = INDEX_NONE;
			HierarchyOffset = INDEX_NONE;
			AssemblyTransformOffset = INDEX_NONE;
			ImposterIndex = INDEX_NONE;
			return;
		}

		const ::Nanite::FResources& Resources = *NaniteResourcesPtr->GetNanitePtr();

		ResourceID = Resources.RuntimeResourceID;
		HierarchyOffset = Resources.HierarchyOffset;
		AssemblyTransformOffset = Resources.AssemblyTransformOffset;
		ImposterIndex = Resources.ImposterIndex;

		UE_LOG(LogRealtimeMesh, VeryVerbose, TEXT("GetNaniteResourceInfo: ResourceID=%u, HierarchyOffset=%u, ImposterIndex=%u"),
			ResourceID, HierarchyOffset, ImposterIndex);
	}
#else
	void FNaniteRealtimeMeshSceneProxy::GetNaniteResourceInfo(uint32& ResourceID, uint32& HierarchyOffset, uint32& ImposterIndex) const
	{
		FScopeLock Lock(&NaniteResourcesLock);

		if (!EnsureNaniteResourcesValid())
		{
			ResourceID = INDEX_NONE;
			HierarchyOffset = INDEX_NONE;
			ImposterIndex = INDEX_NONE;
			return;
		}

		const ::Nanite::FResources& Resources = *NaniteResourcesPtr->GetNanitePtr();

		ResourceID = Resources.RuntimeResourceID;
		HierarchyOffset = Resources.HierarchyOffset;
		ImposterIndex = Resources.ImposterIndex;

		UE_LOG(LogRealtimeMesh, VeryVerbose, TEXT("GetNaniteResourceInfo: ResourceID=%u, HierarchyOffset=%u, ImposterIndex=%u"),
			ResourceID, HierarchyOffset, ImposterIndex);
	}
#endif
	
#if RMC_ENGINE_BELOW_5_5
	void FNaniteRealtimeMeshSceneProxy::GetNaniteMaterialMask(FUint32Vector2& OutMaterialMask) const
	{
		OutMaterialMask = NaniteMaterialMask;
	}
#endif

	::Nanite::FResourceMeshInfo FNaniteRealtimeMeshSceneProxy::GetResourceMeshInfo() const
	{
		FScopeLock Lock(&NaniteResourcesLock);
		
		if (!EnsureNaniteResourcesValid())
		{
			return ::Nanite::FResourceMeshInfo();
		}
		
		const ::Nanite::FResources& Resources = *NaniteResourcesPtr->GetNanitePtr();

		::Nanite::FResourceMeshInfo OutInfo;

		OutInfo.NumClusters = Resources.NumClusters;
		OutInfo.NumNodes = Resources.NumHierarchyNodes;
		OutInfo.NumVertices = Resources.NumInputVertices;
		OutInfo.NumTriangles = Resources.NumInputTriangles;
		OutInfo.NumMaterials = MaterialMaxIndex + 1;
		//OutInfo.DebugName = RealtimeMeshProxy->nam 

		OutInfo.NumResidentClusters = Resources.NumResidentClusters;

		{
			// Map material indices directly since we're using component-level materials
			OutInfo.NumSegments = MaterialSections.Num();
			OutInfo.SegmentMapping.Init(INDEX_NONE, MaterialMaxIndex + 1);

			for (int32 SectionIndex = 0; SectionIndex < MaterialSections.Num(); ++SectionIndex)
			{
				const int32 MaterialIndex = MaterialSections[SectionIndex].MaterialIndex;
				if (MaterialIndex != INDEX_NONE && MaterialIndex <= MaterialMaxIndex)
				{
					OutInfo.SegmentMapping[MaterialIndex] = SectionIndex;
				}
			}
		}
	
		return MoveTemp(OutInfo);
	}

	void FNaniteRealtimeMeshSceneProxy::GetDistanceFieldAtlasData(const FDistanceFieldVolumeData*& OutDistanceFieldData, float& SelfShadowBias) const
	{
		OutDistanceFieldData = RealtimeMeshProxy->GetDistanceFieldData();
		SelfShadowBias = DistanceFieldSelfShadowBias;
	}

#if RMC_ENGINE_BELOW_5_6
	void FNaniteRealtimeMeshSceneProxy::GetDistanceFieldInstanceData(TArray<FRenderTransform>& InstanceLocalToPrimitiveTransforms) const
	{
		check(InstanceLocalToPrimitiveTransforms.IsEmpty());

		if (RealtimeMeshProxy->HasDistanceFieldData())
		{
			InstanceLocalToPrimitiveTransforms.Add(FRenderTransform::Identity);
		}
	}
#endif

	bool FNaniteRealtimeMeshSceneProxy::HasDistanceFieldRepresentation() const
	{
		return CastsDynamicShadow() && AffectsDistanceFieldLighting() && RealtimeMeshProxy->HasDistanceFieldData();
	}

	bool FNaniteRealtimeMeshSceneProxy::HasDynamicIndirectShadowCasterRepresentation() const
	{
		return bCastsDynamicIndirectShadow && HasDistanceFieldRepresentation();
	}

	const FCardRepresentationData* FNaniteRealtimeMeshSceneProxy::GetMeshCardRepresentation() const
	{
		// RealtimeMeshProxy->GetCardRepresentation() already handles validation and returns nullptr if invalid
		return RealtimeMeshProxy->GetCardRepresentation();
	}


	SIZE_T FNaniteRealtimeMeshSceneProxy::GetTypeHash() const
	{
		static size_t UniquePointer;
		return reinterpret_cast<size_t>(&UniquePointer);
	}

	void FNaniteRealtimeMeshSceneProxy::ClearCachedNaniteResources()
	{
		FScopeLock Lock(&NaniteResourcesLock);
		UE_LOG(LogRealtimeMesh, VeryVerbose, TEXT("Clearing cached Nanite resources for scene proxy"));
		NaniteResourcesPtr.Reset();
	}

	bool FNaniteRealtimeMeshSceneProxy::EnsureNaniteResourcesValid() const
	{
		// This method assumes the caller already holds the lock
		
		// Cache the resources pointer to avoid multiple calls
		if (!NaniteResourcesPtr.IsValid())
		{
			NaniteResourcesPtr = RealtimeMeshProxy->GetNaniteResources();
		}
		
		if (!NaniteResourcesPtr.IsValid())
		{
			UE_LOG(LogRealtimeMesh, Error, TEXT("EnsureNaniteResourcesValid: NaniteResourcesPtr is invalid for scene proxy"));
			return false;
		}
		
		if (!NaniteResourcesPtr->HasValidData())
		{
			UE_LOG(LogRealtimeMesh, Error, TEXT("EnsureNaniteResourcesValid: NaniteResourcesPtr has no valid data for scene proxy"));
			return false;
		}
		
		return true;
	}
}