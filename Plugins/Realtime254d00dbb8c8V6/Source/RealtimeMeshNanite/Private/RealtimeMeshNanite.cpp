// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshNanite.h"

#include "MaterialCachedData.h"
#include "MaterialDomain.h"
#include "RealtimeMeshComponent.h"
#include "RealtimeMeshNaniteBuilder.h"
#include "RealtimeMeshNaniteProxy.h"
#include "RealtimeMeshNaniteResources.h"
#include "Materials/Material.h"
#include "UObject/Package.h"
#include "MaterialShaderType.h"

#define LOCTEXT_NAMESPACE "FRealtimeMeshNaniteModule"

namespace RealtimeMesh
{
    void FRealtimeMeshNaniteModule::StartupModule()
    {
        IModularFeatures::Get().RegisterModularFeature(GetModularFeatureName(), this);
    }

    void FRealtimeMeshNaniteModule::ShutdownModule()
    {
        IModularFeatures::Get().UnregisterModularFeature(GetModularFeatureName(), this);    
    }

    IRealtimeMeshNaniteSceneProxy* FRealtimeMeshNaniteModule::CreateNewSceneProxy(URealtimeMeshComponent* Component, const RealtimeMesh::FRealtimeMeshProxyRef& InRealtimeMeshProxy)
    {
        ::Nanite::FMaterialAudit NaniteMaterials{};
        AuditMaterials(Component, NaniteMaterials, true);

        const bool bIsMaskingAllowed = ::Nanite::IsMaskingAllowed(Component->GetWorld(), false/*TODO: Expose as setting? */);
        if (!NaniteMaterials.IsValid(bIsMaskingAllowed))
        {
            return nullptr;
        }

        /*if (!InRealtimeMeshProxy->GetNaniteResources().IsValid())
        {
            return nullptr;
        }*/


    

        // Is Nanite supported, and is there built Nanite data for this static mesh?
        //const bool bUseNanite = ShouldCreateNaniteProxy(&NaniteMaterials);
    
        return new FNaniteRealtimeMeshSceneProxy(NaniteMaterials, Component, InRealtimeMeshProxy);
    }

    /*TSharedRef<IRealtimeMeshNaniteResources> FRealtimeMeshNaniteModule::CreateNewResources(const ::Nanite::FResources& InResources)
    {
        return MakeShared<FRealtimeMeshNaniteResources>(InResources);
    }*/


    void FRealtimeMeshNaniteModule::AuditMaterials(const URealtimeMeshComponent* InComponent, ::Nanite::FMaterialAudit& Audit, bool bSetMaterialUsage)
    {
        static const auto NaniteForceEnableMeshesCvar = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.Nanite.ForceEnableMeshes"));
        static const bool bNaniteForceEnableMeshes = NaniteForceEnableMeshesCvar && NaniteForceEnableMeshesCvar->GetValueOnAnyThread() != 0;

        Audit.bHasAnyError = false;
        Audit.Entries.Reset();	

        if (InComponent != nullptr)
        {
            uint32 Index = 0;
            for (UMaterialInterface* SlotMaterial : InComponent->GetMaterials())
            {
                if (InComponent->UseNaniteOverrideMaterials())
                {
                    SlotMaterial = SlotMaterial->GetNaniteOverride();
                }
                ::Nanite::FMaterialAuditEntry& Entry = Audit.Entries.AddDefaulted_GetRef();
                Entry.MaterialSlotName = InComponent->GetMaterialSlotName(Index);
                Entry.MaterialIndex = Index;
                Index++;
                Entry.Material = SlotMaterial;
                Entry.bHasNullMaterial = Entry.Material == nullptr;
#if RMC_ENGINE_ABOVE_5_4
                Entry.LocalUVDensities = FVector4f(1.0f);
#endif
                /*FVector4f(            
                    SlotInfo.UVChannelData.LocalUVDensities[0],
                    SlotInfo.UVChannelData.LocalUVDensities[1],
                    SlotInfo.UVChannelData.LocalUVDensities[2],
                    SlotInfo.UVChannelData.LocalUVDensities[3]
                );*/

                if (Entry.bHasNullMaterial)
                {
                    // Never allow null materials, assign default instead
                    Entry.Material = UMaterial::GetDefaultMaterial(EMaterialDomain::MD_Surface);
                }

                const UMaterial* Material = Entry.Material->GetMaterial_Concurrent();
                check(Material != nullptr); // Should always be valid here

                const EBlendMode BlendMode = Entry.Material->GetBlendMode();

                bool bUsingCookedEditorData = false;
#if WITH_EDITORONLY_DATA
                bUsingCookedEditorData = Material->GetOutermost()->bIsCookedForEditor;
#endif
                bool bUsageSetSuccessfully = false;

                const FMaterialCachedExpressionData& CachedMaterialData = Material->GetCachedExpressionData();
                Entry.bHasVertexInterpolator		= CachedMaterialData.bHasVertexInterpolator;
                Entry.bHasPerInstanceRandomID		= CachedMaterialData.bHasPerInstanceRandom;
                Entry.bHasPerInstanceCustomData		= CachedMaterialData.bHasPerInstanceCustomData;
                Entry.bHasPixelDepthOffset			= Material->HasPixelDepthOffsetConnected();
                Entry.bHasWorldPositionOffset		= Material->HasVertexPositionOffsetConnected();
#if RMC_ENGINE_ABOVE_5_4
                Entry.bHasTessellationEnabled		= Material->IsTessellationEnabled();
#endif
                Entry.bHasUnsupportedBlendMode		= !::Nanite::IsSupportedBlendMode(BlendMode);
                Entry.bHasUnsupportedShadingModel	= !::Nanite::IsSupportedShadingModel(Material->GetShadingModels());
                Entry.bHasInvalidUsage				= (bUsingCookedEditorData || !bSetMaterialUsage) ? Material->NeedsSetMaterialUsage_Concurrent(bUsageSetSuccessfully, MATUSAGE_Nanite) : !Material->CheckMaterialUsage_Concurrent(MATUSAGE_Nanite);

                if (BlendMode == BLEND_Masked)
                {
                    Audit.bHasMasked = true;
                }

                if (Material->bIsSky)
                {
                    // Sky material is a special case we want to skip
                    Audit.bHasSky = true;
                }

                Entry.bHasAnyError =
                    Entry.bHasUnsupportedBlendMode |
                    Entry.bHasUnsupportedShadingModel |
                    Entry.bHasInvalidUsage;

                if (!bUsingCookedEditorData && Entry.bHasAnyError && !Audit.bHasAnyError)
                {
                    // Only populate on error for performance/memory reasons
                    Audit.AssetName = InComponent->GetName();
                    Audit.FallbackMaterial = UMaterial::GetDefaultMaterial(MD_Surface);
                }

                Audit.bHasAnyError |= Entry.bHasAnyError;

#if !(UE_BUILD_SHIPPING) || WITH_EDITOR
                if (!bUsingCookedEditorData && !bNaniteForceEnableMeshes)
                {
                    if (Entry.bHasUnsupportedBlendMode)
                    {
                        const FString BlendModeName = GetBlendModeString(Entry.Material->GetBlendMode());
                        UE_LOG
                        (
                            LogStaticMesh, Warning,
                            TEXT("Invalid material [%s] used on Nanite static mesh [%s]. Only opaque or masked blend modes are currently supported, [%s] blend mode was specified."),
                            *Entry.Material->GetName(),
                            *Audit.AssetName,
                            *BlendModeName
                        );
                    }
                    if (Entry.bHasUnsupportedShadingModel)
                    {
                        const FString ShadingModelString = GetShadingModelFieldString(Entry.Material->GetShadingModels());
                        UE_LOG
                        (
                            LogStaticMesh, Warning,
                            TEXT("Invalid material [%s] used on Nanite static mesh [%s]. The SingleLayerWater shading model is currently not supported, [%s] shading model was specified."),
                            *Entry.Material->GetName(),
                            *Audit.AssetName,
                            *ShadingModelString
                        );
                    }
                }
#endif
            }
        }
    }

    bool FRealtimeMeshNaniteModule::ShouldUseNanite(URealtimeMeshComponent* RealtimeMeshComponent)
    {
        ::Nanite::FMaterialAudit NaniteMaterials{};
        AuditMaterials(RealtimeMeshComponent, NaniteMaterials, true);

        const bool bIsMaskingAllowed = ::Nanite::IsMaskingAllowed(RealtimeMeshComponent->GetWorld(), false/*TODO: Expose as setting? */);
        return NaniteMaterials.IsValid(bIsMaskingAllowed);
    }
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(RealtimeMesh::FRealtimeMeshNaniteModule, RealtimeMeshNanite)