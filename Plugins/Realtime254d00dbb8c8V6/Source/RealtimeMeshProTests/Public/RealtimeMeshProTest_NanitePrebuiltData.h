// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshActor.h"
#include "RealtimeMeshProTest_NanitePrebuiltData.generated.h"

/**
 * Test actor that validates Nanite rendering by copying prebuilt Nanite resources
 * from a StaticMesh asset directly to a RealtimeMesh component.
 *
 * This bypasses RMC's Nanite build pipeline entirely, allowing us to isolate
 * whether rendering issues are in the component or the build pipeline.
 *
 * Usage:
 * 1. Assign a StaticMesh with "Enable Nanite Support" checked
 * 2. If it renders: Component is fine, problem is in RMC's Nanite builder
 * 3. If it doesn't render: Problem is in component's Nanite scene proxy
 */
UCLASS()
class REALTIMEMESHPROTESTS_API ARealtimeMeshProTest_NanitePrebuiltData : public ARealtimeMeshActor
{
	GENERATED_BODY()

public:
	ARealtimeMeshProTest_NanitePrebuiltData();

	/** Source StaticMesh with Nanite data to copy. Must have "Enable Nanite Support" checked. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nanite Test")
	TObjectPtr<UStaticMesh> SourceStaticMesh;

	/** Enable verbose logging for debugging */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nanite Test|Debug")
	bool bEnableVerboseLogging = true;

	virtual void OnConstruction(const FTransform& Transform) override;

private:
	/** Copy Nanite resources from the source StaticMesh to this RealtimeMesh */
	void CopyNaniteFromStaticMesh();
};
