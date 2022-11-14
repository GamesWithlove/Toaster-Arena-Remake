#pragma once

#include "CoreMinimal.h"
#include "HitscanImpactDefinition.generated.h"

UCLASS(BlueprintType)
class TOASTERGAME_API UHitscanImpactDefinition : public UObject
{
    GENERATED_BODY()

public:

    // Particle system to play on impact
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    class UNiagaraSystem* ImpactEffect;
    
    // Sound to play on impact
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    class USoundBase* ImpactSound;

    // Size of decal
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float DecalSize = 1.f;

    // Material to put on decal
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    class UMaterialInterface* DecalMaterial;
};