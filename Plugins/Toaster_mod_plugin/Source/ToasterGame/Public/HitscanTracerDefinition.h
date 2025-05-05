#pragma once

#include "CoreMinimal.h"
#include "HitscanTracerDefinition.generated.h"

UCLASS(BlueprintType)
class TOASTERGAME_API UHitscanTracerDefinition : public UObject
{
    GENERATED_BODY()

public:
    
    // Speed of tracer in cm/s
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Speed = 10000.f;

    // Width of tracer particle
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Width = 1.f;

    // Length of tracer particle
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Length = 100.f;

    // Percentage chance of tracer effect dispatching
    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (UIMin = 0, UIMax = 100))
    int32 ChancePercent = 100;

    // Material to map onto tracer particle
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    class UMaterialInterface* Material;

    // Sound effect this tracer makes as it flies past players
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    class USoundBase* Sound;

    // Particle class to use on as tracer
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    class UNiagaraSystem* Tracer;


};