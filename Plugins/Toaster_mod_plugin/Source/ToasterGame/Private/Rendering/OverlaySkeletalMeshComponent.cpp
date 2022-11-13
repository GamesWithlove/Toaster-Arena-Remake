#include "OverlaySkeletalMeshComponent.h"
#include "SkeletalMeshTypes.h"
#include "SkeletalRenderPublic.h"
#include "GPUSkinCache.h"

// From GPUSkinCache.cpp
// Grab stuff we can't normally get
// Must overlay directly on top of internal version in memory
class FGPUSkinCacheEntry
{
public:
    EGPUSkinCacheEntryMode Mode;
    FGPUSkinCache::FRWBuffersAllocation* PositionAllocation;
    FGPUSkinCache* SkinCache;
    TArray<FGPUSkinBatchElementUserData> BatchElementsUserData;
};

// From SkeletalMesh.cpp

/** 
 * Iterates over sections,chunks,elements based on current instance weight usage 
 */
class FSkeletalMeshSectionIter
{
public:
	FSkeletalMeshSectionIter(const int32 InLODIdx, const FSkeletalMeshObject& InMeshObject, const FSkeletalMeshLODRenderData& InLODData, const FSkeletalMeshSceneProxy::FLODSectionElements& InLODSectionElements)
		: SectionIndex(0)
		, MeshObject(InMeshObject)
		, LODSectionElements(InLODSectionElements)
		, Sections(InLODData.RenderSections)
#if WITH_EDITORONLY_DATA
		, SectionIndexPreview(InMeshObject.SectionIndexPreview)
		, MaterialIndexPreview(InMeshObject.MaterialIndexPreview)
#endif
	{
		while (NotValidPreviewSection())
		{
			SectionIndex++;
		}
	}
	FORCEINLINE FSkeletalMeshSectionIter& operator++()
	{
		do 
		{
		SectionIndex++;
		} while (NotValidPreviewSection());
		return *this;
	}
	FORCEINLINE explicit operator bool() const
	{
		return ((SectionIndex < Sections.Num()) && LODSectionElements.SectionElements.IsValidIndex(GetSectionElementIndex()));
	}
	FORCEINLINE const FSkelMeshRenderSection& GetSection() const
	{
		return Sections[SectionIndex];
	}
	FORCEINLINE const int32 GetSectionElementIndex() const
	{
		return SectionIndex;
	}
	FORCEINLINE const FSkeletalMeshSceneProxy::FSectionElementInfo& GetSectionElementInfo() const
	{
		int32 SectionElementInfoIndex = GetSectionElementIndex();
		return LODSectionElements.SectionElements[SectionElementInfoIndex];
	}
	FORCEINLINE bool NotValidPreviewSection()
	{
#if WITH_EDITORONLY_DATA
		if (MaterialIndexPreview == INDEX_NONE)
		{
			int32 ActualPreviewSectionIdx = SectionIndexPreview;

			return	(SectionIndex < Sections.Num()) &&
				((ActualPreviewSectionIdx >= 0) && (ActualPreviewSectionIdx != SectionIndex));
		}
		else
		{
			int32 ActualPreviewMaterialIdx = MaterialIndexPreview;
			int32 ActualPreviewSectionIdx = INDEX_NONE;
			if (ActualPreviewMaterialIdx != INDEX_NONE && Sections.IsValidIndex(SectionIndex))
			{
				const FSkeletalMeshSceneProxy::FSectionElementInfo& SectionInfo = LODSectionElements.SectionElements[SectionIndex];
				if (SectionInfo.UseMaterialIndex == ActualPreviewMaterialIdx)
				{
					ActualPreviewSectionIdx = SectionIndex;
				}
			}

			return	(SectionIndex < Sections.Num()) &&
				((ActualPreviewMaterialIdx >= 0) && (ActualPreviewSectionIdx != SectionIndex));
		}
#else
		return false;
#endif
	}
private:
	int32 SectionIndex;
	const FSkeletalMeshObject& MeshObject;
	const FSkeletalMeshSceneProxy::FLODSectionElements& LODSectionElements;
	const TArray<FSkelMeshRenderSection>& Sections;
#if WITH_EDITORONLY_DATA
	const int32 SectionIndexPreview;
	const int32 MaterialIndexPreview;
#endif
};

// This must overlay its memory directly on top of FSkeletalMeshObject
class FSkeletalMeshObjectImposter : public FDeferredCleanupInterface
{
public:
    virtual ~FSkeletalMeshObjectImposter() {}
    struct FSkelMeshObjectLODInfo
    {
        TArray<bool>	HiddenMaterials;
    };

    TArray<FSkelMeshObjectLODInfo> LODInfo;
    TArray<FCapsuleShape3f> ShadowCapsuleShapes;
    int32 MinDesiredLODLevel;
    float MaxDistanceFactor;
    int32 WorkingMinDesiredLODLevel;
    float WorkingMaxDistanceFactor;
    bool bHasBeenUpdatedAtLeastOnce;

#if RHI_RAYTRACING
    bool bRequireRecreatingRayTracingGeometry;
    bool bSupportRayTracing;
    bool bHiddenMaterialVisibilityDirtyForRayTracing;
    int32 RayTracingMinLOD;
#endif

#if !UE_BUILD_SHIPPING
    FName DebugName;
#endif

#if WITH_EDITORONLY_DATA
    int32 SectionIndexPreview;
    int32 MaterialIndexPreview;
    int32 SelectedEditorSection;
    int32 SelectedEditorMaterial;
#endif

    // Accessor functions we wanted
    bool IsMaterialHidden(int32 InLODIndex, int32 MaterialIdx) const
    {
        check(LODInfo.IsValidIndex(InLODIndex));
        return LODInfo[InLODIndex].HiddenMaterials.IsValidIndex(MaterialIdx) && LODInfo[InLODIndex].HiddenMaterials[MaterialIdx];
    }

    float GetScreenSize(int32 LODIndex) const
    {
        if (SkeletalMeshLODInfo.IsValidIndex(LODIndex))
        {
            return SkeletalMeshLODInfo[LODIndex].ScreenSize.Default;
        }
        return 0.f;
    }

    FSkeletalMeshRenderData* SkeletalMeshRenderData;
    TArray<FSkeletalMeshLODInfo> SkeletalMeshLODInfo;
    FGPUSkinCacheEntry* SkinCacheEntry;
    FGPUSkinCacheEntry* SkinCacheEntryForRayTracing;
    uint32 LastFrameNumber;
    bool bUsePerBoneMotionBlur;
    TStatId StatId;
    ERHIFeatureLevel::Type FeatureLevel;
    uint32 ComponentId;
};

class FOverlaySkeletalMeshSceneProxy : public FSkeletalMeshSceneProxy
{
public:
    FMaterialRenderProxy* OverlayMaterialProxy = nullptr;
    float OverlayValue = 0.f;

    SIZE_T GetTypeHash() const
    {
        static size_t UniquePointer;
        return reinterpret_cast<size_t>(&UniquePointer);
    }

    FOverlaySkeletalMeshSceneProxy(UOverlaySkeletalMeshComponent* Component, FSkeletalMeshRenderData* InSkelMeshRenderData)
        : FSkeletalMeshSceneProxy(Component, InSkelMeshRenderData)
    {
        if (UMaterialInterface* OverlayMaterial = Component->GetOverlayMaterial())
        {
            MaterialRelevance |= OverlayMaterial->GetRelevance_Concurrent(FeatureLevel);
            OverlayMaterialProxy = OverlayMaterial->GetRenderProxy();
            OverlayValue = Component->OverlayValue;
        }
    }

    void SetOverlayValue(float InOverlayValue)
    {
        check(IsInRenderingThread());

        OverlayValue = InOverlayValue;
    }

    void DrawStaticElements(FStaticPrimitiveDrawInterface* PDI) override
    {
        FSkeletalMeshSceneProxy::DrawStaticElements(PDI);
        if (HasViewDependentDPG()) return;
        if (OverlayMaterialProxy == nullptr) return;
        if (OverlayValue <= 0.f) return;

        ESceneDepthPriorityGroup PrimitiveDPG = GetStaticDepthPriorityGroup();

		int32 NumLODs = SkeletalMeshRenderData->LODRenderData.Num();

        // Hack to retrieve LOD info which is hidden
        // This only works if the layout of FSkeletalMeshObject doesn't change
        FSkeletalMeshObjectImposter* Imposter = reinterpret_cast<FSkeletalMeshObjectImposter*>(MeshObject);

		for (int32 LODIndex = 0; LODIndex < NumLODs; ++LODIndex)
		{
			const FSkeletalMeshLODRenderData& LODData = SkeletalMeshRenderData->LODRenderData[LODIndex];
			
			if (LODSections.Num() > 0 && LODData.GetNumVertices() > 0)
			{
				float ScreenSize = Imposter->GetScreenSize(LODIndex);
				const FLODSectionElements& LODSection = LODSections[LODIndex];
				check(LODSection.SectionElements.Num() == LODData.RenderSections.Num());

				for (FSkeletalMeshSectionIter Iter(LODIndex, *MeshObject, LODData, LODSection); Iter; ++Iter)
				{
					const FSkelMeshRenderSection& Section = Iter.GetSection();
					const int32 SectionIndex = Iter.GetSectionElementIndex();
					const FSectionElementInfo& SectionElementInfo = Iter.GetSectionElementInfo();
					const FVertexFactory* VertexFactory = MeshObject->GetSkinVertexFactory(nullptr, LODIndex, SectionIndex);
				
                    // If hidden or missing vertex factory, skip the draw
                    if (Imposter->IsMaterialHidden(LODIndex, SectionElementInfo.UseMaterialIndex)) continue;
					if (!VertexFactory) continue;
								
					FMeshBatch MeshElement;
					FMeshBatchElement& BatchElement = MeshElement.Elements[0];
					MeshElement.DepthPriorityGroup = PrimitiveDPG;
					MeshElement.VertexFactory = MeshObject->GetSkinVertexFactory(nullptr, LODIndex, SectionIndex);
					MeshElement.MaterialRenderProxy = OverlayMaterialProxy;
					MeshElement.ReverseCulling = IsLocalToWorldDeterminantNegative();
					MeshElement.CastShadow = false;
				#if RHI_RAYTRACING
					MeshElement.CastRayTracedShadow = false;
				#endif
					MeshElement.Type = PT_TriangleList;
					MeshElement.LODIndex = LODIndex;
					MeshElement.SegmentIndex = SectionIndex;
						
					BatchElement.FirstIndex = Section.BaseIndex;
					BatchElement.MinVertexIndex = Section.BaseVertexIndex;
					BatchElement.MaxVertexIndex = LODData.GetNumVertices() - 1;
					BatchElement.NumPrimitives = Section.NumTriangles;
					BatchElement.IndexBuffer = LODData.MultiSizeIndexContainer.GetIndexBuffer();
													
					PDI->DrawMesh(MeshElement, ScreenSize);
				}
			}
		}
    }

    void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const override
    {
        FSkeletalMeshSceneProxy::GetDynamicMeshElements(Views, ViewFamily, VisibilityMap, Collector);

        if (!MeshObject) return;
        if (OverlayMaterialProxy == nullptr) return;
        if (OverlayValue <= 0.f) return;

        // Hack to retrieve LOD info which is hidden
        // This only works if the layout of FSkeletalMeshObject doesn't change
        FSkeletalMeshObjectImposter* Imposter = reinterpret_cast<FSkeletalMeshObjectImposter*>(MeshObject);

        const FEngineShowFlags& EngineShowFlags = ViewFamily.EngineShowFlags;

        int32 FirstLODIdx = SkeletalMeshRenderData->GetFirstValidLODIdx(FMath::Max(SkeletalMeshRenderData->PendingFirstLODIdx, SkeletalMeshRenderData->CurrentFirstLODIdx));
        if (FirstLODIdx == INDEX_NONE)
        {
#if DO_CHECK
            UE_LOG(LogSkeletalMesh, Warning, TEXT("Skeletal mesh %s has no valid LODs for rendering."), *GetResourceName().ToString());
#endif
        }
        else
        {
            const int32 LODIndex = MeshObject->GetLOD();
            check(LODIndex < SkeletalMeshRenderData->LODRenderData.Num());
            const FSkeletalMeshLODRenderData& LODData = SkeletalMeshRenderData->LODRenderData[LODIndex];

            if (LODSections.Num() > 0 && LODIndex >= FirstLODIdx)
            {
                check(SkeletalMeshRenderData->LODRenderData[LODIndex].GetNumVertices() > 0);

                const FLODSectionElements& LODSection = LODSections[LODIndex];

                check(LODSection.SectionElements.Num() == LODData.RenderSections.Num());

                for (FSkeletalMeshSectionIter Iter(LODIndex, *MeshObject, LODData, LODSection); Iter; ++Iter)
                {
                    const FSkelMeshRenderSection& Section = Iter.GetSection();
                    const int32 SectionIndex = Iter.GetSectionElementIndex();
                    const FSectionElementInfo& SectionElementInfo = Iter.GetSectionElementInfo();

                    bool bSectionSelected = false;

                    // If hidden skip the draw
                    if (Imposter->IsMaterialHidden(LODIndex, SectionElementInfo.UseMaterialIndex) || Section.bDisabled)
                    {
                        continue;
                    }

                    for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
                    {
                        if (VisibilityMap & (1 << ViewIndex))
                        {
                            const FSceneView* View = Views[ViewIndex];

                            FMeshBatch& Mesh = Collector.AllocateMesh();
                            Mesh.VertexFactory = MeshObject->GetSkinVertexFactory(View, LODIndex, SectionIndex, ESkinVertexFactoryMode::Default);
                            Mesh.MaterialRenderProxy = OverlayMaterialProxy;
#if RHI_RAYTRACING
                            Mesh.SegmentIndex = SectionIndex;
                            Mesh.CastRayTracedShadow = false;
#endif
                            FMeshBatchElement& BatchElement = Mesh.Elements[0];
                            BatchElement.FirstIndex = LODData.RenderSections[SectionIndex].BaseIndex;
                            BatchElement.IndexBuffer = LODData.MultiSizeIndexContainer.GetIndexBuffer();
                            BatchElement.MinVertexIndex = LODData.RenderSections[SectionIndex].GetVertexBufferIndex();
                            BatchElement.MaxVertexIndex = LODData.RenderSections[SectionIndex].GetVertexBufferIndex() + LODData.RenderSections[SectionIndex].GetNumVertices() - 1;

                            if (Imposter->SkinCacheEntry != nullptr)
                            {
                                BatchElement.VertexFactoryUserData = &Imposter->SkinCacheEntry->BatchElementsUserData[SectionIndex];
                            }
                            else
                            {
                                BatchElement.VertexFactoryUserData = nullptr;
                            }

                            BatchElement.PrimitiveUniformBuffer = GetUniformBuffer();
                            BatchElement.NumPrimitives = LODData.RenderSections[SectionIndex].NumTriangles;

                            if (!Mesh.VertexFactory) continue;

                            Mesh.Type = PT_TriangleList;

                            BatchElement.MinVertexIndex = Section.BaseVertexIndex;
                            Mesh.ReverseCulling = IsLocalToWorldDeterminantNegative();
                            Mesh.CastShadow = false;
                            Mesh.bCanApplyViewModeOverrides = true;
                            Mesh.bUseWireframeSelectionColoring = false;

                            Collector.AddMesh(ViewIndex, Mesh);
                        }
                    }
                }
            }
        }
    }

};

UMaterialInterface* UOverlaySkeletalMeshComponent::GetOverlayMaterial() const
{
    if (OverlayMaterialDynamic != nullptr) return OverlayMaterialDynamic;
    return OverlayMaterial;
}

void UOverlaySkeletalMeshComponent::GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials /*= false*/) const
{
    Super::GetUsedMaterials(OutMaterials, bGetDebugMaterials);

    if (GetOverlayMaterial() != nullptr)
    {
        OutMaterials.Add(GetOverlayMaterial());
    }
}

int32 UOverlaySkeletalMeshComponent::GetOverlayMaterialIndex() const
{
    return USkeletalMeshComponent::GetNumMaterials();
}

UMaterialInterface* UOverlaySkeletalMeshComponent::GetMaterial(int32 MaterialIndex) const
{
    const int32 OverlayMaterialIndex = GetOverlayMaterialIndex();
    if (MaterialIndex == OverlayMaterialIndex) return GetOverlayMaterial();
    return Super::GetMaterial(MaterialIndex);
}

FPrimitiveSceneProxy* UOverlaySkeletalMeshComponent::CreateSceneProxy()
{
    ERHIFeatureLevel::Type SceneFeatureLevel = GetWorld()->FeatureLevel;
    FSkeletalMeshSceneProxy* Result = nullptr;
    FSkeletalMeshRenderData* SkelMeshRenderData = GetSkeletalMeshRenderData();

    // Only create a scene proxy for rendering if properly initialized
    if (SkelMeshRenderData &&
        SkelMeshRenderData->LODRenderData.IsValidIndex(GetPredictedLODLevel()) &&
        !bHideSkin &&
        MeshObject)
    {
        // Only create a scene proxy if the bone count being used is supported, or if we don't have a skeleton (this is the case with destructibles)
        int32 MinLODIndex = ComputeMinLOD();
        int32 MaxBonesPerChunk = SkelMeshRenderData->GetMaxBonesPerSection(MinLODIndex);
        int32 MaxSupportedNumBones = MeshObject->IsCPUSkinned() ? MAX_int32 : FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones();
        if (MaxBonesPerChunk <= MaxSupportedNumBones)
        {
            Result = ::new FOverlaySkeletalMeshSceneProxy(this, SkelMeshRenderData);
        }
    }

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
    SendRenderDebugPhysics(Result);
#endif

    return Result;
}

#if WITH_EDITOR

bool UOverlaySkeletalMeshComponent::GetMaterialPropertyPath(int32 ElementIndex, UObject*& OutOwner, FString& OutPropertyPath, FProperty*& OutProperty)
{
    const int32 OverlayMaterialIndex = GetOverlayMaterialIndex();
    if (ElementIndex == OverlayMaterialIndex)
    {
        OutOwner = this;
        OutPropertyPath = FString::Printf(TEXT("%s"), GET_MEMBER_NAME_STRING_CHECKED(UOverlaySkeletalMeshComponent, OverlayMaterial));
        if (FProperty* MaterialProperty = UMeshComponent::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UOverlaySkeletalMeshComponent, OverlayMaterial)))
        {
            OutProperty = MaterialProperty;
        }
        return true;
    }

    return Super::GetMaterialPropertyPath(ElementIndex, OutOwner, OutPropertyPath, OutProperty);
}

#endif

void UOverlaySkeletalMeshComponent::CreateRenderState_Concurrent(FRegisterComponentContext* Context)
{
    Super::CreateRenderState_Concurrent(Context);

    //SendRenderDynamicData_Concurrent();
}

void UOverlaySkeletalMeshComponent::OnRegister()
{
    Super::OnRegister();

    if (OverlayMaterial != nullptr)
    {
        OverlayMaterialDynamic = UMaterialInstanceDynamic::Create(OverlayMaterial, this);
    }
}

void UOverlaySkeletalMeshComponent::SendRenderDynamicData_Concurrent()
{
    Super::SendRenderDynamicData_Concurrent();

    if (SceneProxy != nullptr)
    {   
        const float CurrentOverlayValue = OverlayValue;

        if (OverlayMaterialDynamic != nullptr)
        {
            static const FName NAME_OverlayValue(TEXT("OverlayValue"));
            OverlayMaterialDynamic->SetScalarParameterValue(NAME_OverlayValue, CurrentOverlayValue);
        }

        FOverlaySkeletalMeshSceneProxy* OverlayProxy = (FOverlaySkeletalMeshSceneProxy*) SceneProxy;
        ENQUEUE_RENDER_COMMAND(FSendOverlayData)(
            [OverlayProxy, CurrentOverlayValue](FRHICommandListImmediate& RHICmdList)
        {
            OverlayProxy->SetOverlayValue(CurrentOverlayValue);
        });
    }
}

