// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "RenderProxy/RealtimeMeshNaniteProxyInterface.h"

namespace RealtimeMesh::Nanite
{
    struct FRealtimeMeshNaniteMesh;
}

namespace RealtimeMesh
{
    struct FRealtimeMeshStreamSet;

    class FRealtimeMeshNaniteModule : public IRealtimeMeshNaniteSceneProxyManager
    {
    public:
        virtual void StartupModule() override;
        virtual void ShutdownModule() override;
        
        virtual bool ShouldUseNanite(URealtimeMeshComponent* RealtimeMeshComponent) override;
        virtual IRealtimeMeshNaniteSceneProxy* CreateNewSceneProxy(URealtimeMeshComponent* Component, const RealtimeMesh::FRealtimeMeshProxyRef& InRealtimeMeshProxy) override;

        void AuditMaterials(const URealtimeMeshComponent* InComponent, ::Nanite::FMaterialAudit& Audit, bool bSetMaterialUsage);

        //virtual TSharedRef<IRealtimeMeshNaniteResourcesImplementation> CreateNewResources(const ::Nanite::FResources& InResources) override;
        
    };

}
