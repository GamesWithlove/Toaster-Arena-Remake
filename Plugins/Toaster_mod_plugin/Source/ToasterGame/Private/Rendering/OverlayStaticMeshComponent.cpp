#include "OverlayStaticMeshComponent.h"
#include "StaticMeshResources.h"

class FOverlayStaticMeshSceneProxy : public FStaticMeshSceneProxy
{
public:
    FMaterialRenderProxy* OverlayMaterialProxy = nullptr;
    float OverlayValue = 0.f;

    SIZE_T GetTypeHash() const
    {
        static size_t UniquePointer;
        return reinterpret_cast<size_t>(&UniquePointer);
    }

    FOverlayStaticMeshSceneProxy(UOverlayStaticMeshComponent* Component, bool bForceLODsShareStaticLighting)
        : FStaticMeshSceneProxy(Component, bForceLODsShareStaticLighting)
    {
        if (UMaterialInterface* OverlayMaterial = Component->GetOverlayMaterial())
        {
            const auto FeatureLevel = GetScene().GetFeatureLevel();
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
        FStaticMeshSceneProxy::DrawStaticElements(PDI);
        if (HasViewDependentDPG()) return;
        if (OverlayMaterialProxy == nullptr) return;
        if (OverlayValue <= 0.f) return;

        ESceneDepthPriorityGroup PrimitiveDPG = GetStaticDepthPriorityGroup();
        int32 NumLODs = RenderData->LODResources.Num();
        bool bIsMeshElementSelected = false;
        const auto FeatureLevel = GetScene().GetFeatureLevel();
        const bool IsMobile = IsMobilePlatform(GetScene().GetShaderPlatform());

        if (ForcedLodModel > 0)
        {
            int32 LODIndex = FMath::Clamp(ForcedLodModel, ClampedMinLOD + 1, NumLODs) - 1;
            const FStaticMeshLODResources& LODModel = RenderData->LODResources[LODIndex];

            // Draw the static mesh elements.
			for(int32 SectionIndex = 0; SectionIndex < LODModel.Sections.Num(); SectionIndex++)
			{
				const int32 NumBatches = GetNumMeshBatches();
				PDI->ReserveMemoryForMeshes(NumBatches);

				for (int32 BatchIndex = 0; BatchIndex < NumBatches; BatchIndex++)
				{
					FMeshBatch BaseMeshBatch;

					if (GetMeshElement(LODIndex, BatchIndex, SectionIndex, PrimitiveDPG, bIsMeshElementSelected, true, BaseMeshBatch))
					{
                        BaseMeshBatch.CastShadow = false;
                        BaseMeshBatch.bUseAsOccluder = false;
                        BaseMeshBatch.bUseForDepthPass = false;
                        BaseMeshBatch.MaterialRenderProxy = OverlayMaterialProxy;
					    PDI->DrawMesh(BaseMeshBatch, FLT_MAX);
					}
				}
			}
        }
        else
        {
            for (int32 LODIndex = ClampedMinLOD; LODIndex < NumLODs; ++LODIndex)
            {
                const FStaticMeshLODResources& LODModel = RenderData->LODResources[LODIndex];
                float ScreenSize = GetScreenSize(LODIndex);

				// Draw the static mesh elements.
				for(int32 SectionIndex = 0;SectionIndex < LODModel.Sections.Num();SectionIndex++)
				{
					const int32 NumBatches = GetNumMeshBatches();
					PDI->ReserveMemoryForMeshes(NumBatches);

					for (int32 BatchIndex = 0; BatchIndex < NumBatches; BatchIndex++)
					{
						FMeshBatch BaseMeshBatch;
						if (GetMeshElement(LODIndex, BatchIndex, SectionIndex, PrimitiveDPG, bIsMeshElementSelected, true, BaseMeshBatch))
						{
                            BaseMeshBatch.CastShadow = false;
                            BaseMeshBatch.bUseAsOccluder = false;
                            BaseMeshBatch.bUseForDepthPass = false;
                            BaseMeshBatch.MaterialRenderProxy = OverlayMaterialProxy;
							PDI->DrawMesh(BaseMeshBatch, ScreenSize);
						}
					}
				}
            }
        }
    }

    void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, class FMeshElementCollector& Collector) const override
    {
        FStaticMeshSceneProxy::GetDynamicMeshElements(Views, ViewFamily, VisibilityMap, Collector);

        if (OverlayMaterialProxy == nullptr) return;
        if (OverlayValue <= 0.f) return;

        for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
        {
            const FSceneView* View = Views[ViewIndex];

            if (IsShown(View) && (VisibilityMap & (1 << ViewIndex)))
            {
                FFrozenSceneViewMatricesGuard FrozenMatricesGuard(*const_cast<FSceneView*>(Views[ViewIndex]));

                FLODMask LODMask = GetLODMask(View);

                for (int32 LODIndex = 0; LODIndex < RenderData->LODResources.Num(); LODIndex++)
                {
                    if (LODMask.ContainsLOD(LODIndex) && LODIndex >= ClampedMinLOD)
                    {
                        const FStaticMeshLODResources& LODModel = RenderData->LODResources[LODIndex];
                        const FLODInfo& ProxyLODInfo = LODs[LODIndex];
                        for (int32 SectionIndex = 0; SectionIndex < LODModel.Sections.Num(); SectionIndex++)
                        {
                            const int32 NumBatches = GetNumMeshBatches();

                            for (int32 BatchIndex = 0; BatchIndex < NumBatches; BatchIndex++)
                            {
                                bool bSectionIsSelected = false;
                                FMeshBatch& MeshElement = Collector.AllocateMesh();
                                if (GetMeshElement(LODIndex, BatchIndex, SectionIndex, SDPG_World, bSectionIsSelected, true, MeshElement))
                                {
                                    MeshElement.CastShadow = false;
                                    MeshElement.bUseAsOccluder = false;
                                    MeshElement.bUseForDepthPass = false;
                                    MeshElement.MaterialRenderProxy = OverlayMaterialProxy;
                                    Collector.AddMesh(ViewIndex, MeshElement);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
};

UMaterialInterface* UOverlayStaticMeshComponent::GetOverlayMaterial() const
{
    if ( OverlayMaterialDynamic != nullptr ) return OverlayMaterialDynamic;
    return OverlayMaterial;
}

void UOverlayStaticMeshComponent::SetOverlayMaterial(UMaterialInterface* InMaterial)
{
    if (UMaterialInstanceDynamic* DynamicInstance = Cast<UMaterialInstanceDynamic>(InMaterial))
    {
        OverlayMaterial = DynamicInstance->GetBaseMaterial();
        OverlayMaterialDynamic = DynamicInstance;
    }
    else
    {
        OverlayMaterial = InMaterial;
        if (bAutoCreateDynamicOverlay)
        {
            OverlayMaterialDynamic = UMaterialInstanceDynamic::Create(OverlayMaterial, this);
        }
    }
}

void UOverlayStaticMeshComponent::GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials /*= false*/) const
{
    Super::GetUsedMaterials(OutMaterials, bGetDebugMaterials);

    if (GetOverlayMaterial() != nullptr)
    {
        OutMaterials.Add(GetOverlayMaterial());
    }
}

int32 UOverlayStaticMeshComponent::GetOverlayMaterialIndex() const
{
    return UStaticMeshComponent::GetNumMaterials();
}

UMaterialInterface* UOverlayStaticMeshComponent::GetMaterial(int32 MaterialIndex) const
{
    const int32 OverlayMaterialIndex = GetOverlayMaterialIndex();
    if (MaterialIndex == OverlayMaterialIndex) return GetOverlayMaterial();
    return Super::GetMaterial(MaterialIndex);
}

#if WITH_EDITOR

bool UOverlayStaticMeshComponent::GetMaterialPropertyPath(int32 ElementIndex, UObject*& OutOwner, FString& OutPropertyPath, FProperty*& OutProperty)
{
    const int32 OverlayMaterialIndex = GetOverlayMaterialIndex();
    if (ElementIndex == OverlayMaterialIndex)
    {
        OutOwner = this;
        OutPropertyPath = FString::Printf(TEXT("%s"), GET_MEMBER_NAME_STRING_CHECKED(UOverlayStaticMeshComponent, OverlayMaterial));
        if (FProperty* MaterialProperty = UMeshComponent::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UOverlayStaticMeshComponent, OverlayMaterial)))
        {
            OutProperty = MaterialProperty;
        }
        return true;
    }

    return Super::GetMaterialPropertyPath(ElementIndex, OutOwner, OutPropertyPath, OutProperty);
}

#endif

FPrimitiveSceneProxy* UOverlayStaticMeshComponent::CreateSceneProxy()
{
    if (GetStaticMesh() == nullptr)
    {
        UE_LOG(LogStaticMesh, Verbose, TEXT("Skipping CreateSceneProxy for OverlayStaticMeshComponent %s (StaticMesh is null)"), *GetFullName());
        return nullptr;
    }

    // Prevent accessing the RenderData during async compilation. The RenderState will be recreated when compilation finishes.
    if (GetStaticMesh()->IsCompiling())
    {
        UE_LOG(LogStaticMesh, Verbose, TEXT("Skipping CreateSceneProxy for OverlayStaticMeshComponent %s (StaticMesh is not ready)"), *GetFullName());
        return nullptr;
    }

    if (GetStaticMesh()->GetRenderData() == nullptr)
    {
        UE_LOG(LogStaticMesh, Verbose, TEXT("Skipping CreateSceneProxy for OverlayStaticMeshComponent %s (RenderData is null)"), *GetFullName());
        return nullptr;
    }

    if (!GetStaticMesh()->GetRenderData()->IsInitialized())
    {
        UE_LOG(LogStaticMesh, Verbose, TEXT("Skipping CreateSceneProxy for OverlayStaticMeshComponent %s (RenderData is not initialized)"), *GetFullName());
        return nullptr;
    }

    const FStaticMeshLODResourcesArray& LODResources = GetStaticMesh()->GetRenderData()->LODResources;
    const int32 SMCurrentMinLOD = GetStaticMesh()->GetMinLODIdx();
    const int32 EffectiveMinLOD = bOverrideMinLOD ? MinLOD : SMCurrentMinLOD;
    if (LODResources.Num() == 0 || LODResources[FMath::Clamp<int32>(EffectiveMinLOD, 0, LODResources.Num() - 1)].VertexBuffers.StaticMeshVertexBuffer.GetNumVertices() == 0)
    {
        UE_LOG(LogStaticMesh, Verbose, TEXT("Skipping CreateSceneProxy for StaticMeshComponent %s (LOD problems)"), *GetFullName());
        return nullptr;
    }

    LLM_SCOPE(ELLMTag::StaticMesh);

    FPrimitiveSceneProxy* Proxy = ::new FOverlayStaticMeshSceneProxy(this, false);
#if STATICMESH_ENABLE_DEBUG_RENDERING
    SendRenderDebugPhysics(Proxy);
#endif

    return Proxy;
}

void UOverlayStaticMeshComponent::CreateRenderState_Concurrent(FRegisterComponentContext* Context)
{
    Super::CreateRenderState_Concurrent(Context);

    SendRenderDynamicData_Concurrent();
}

void UOverlayStaticMeshComponent::OnRegister()
{
    Super::OnRegister();

    if (OverlayMaterial != nullptr && bAutoCreateDynamicOverlay)
    {
        OverlayMaterialDynamic = UMaterialInstanceDynamic::Create(OverlayMaterial, this);
    }
}

void UOverlayStaticMeshComponent::SendRenderDynamicData_Concurrent()
{
    if (SceneProxy != nullptr)
    {   
        const float CurrentOverlayValue = OverlayValue;

        if (OverlayMaterialDynamic != nullptr)
        {
            static const FName NAME_OverlayValue(TEXT("OverlayValue"));
            OverlayMaterialDynamic->SetScalarParameterValue(NAME_OverlayValue, CurrentOverlayValue);
        }

        FOverlayStaticMeshSceneProxy* OverlayProxy = (FOverlayStaticMeshSceneProxy*) SceneProxy;
        ENQUEUE_RENDER_COMMAND(FSendOverlayData)(
            [OverlayProxy, CurrentOverlayValue](FRHICommandListImmediate& RHICmdList)
        {
            OverlayProxy->SetOverlayValue(CurrentOverlayValue);
        });
    }
}

