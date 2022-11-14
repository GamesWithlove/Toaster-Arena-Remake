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

    // Percentage chance of tracer effect dispatching
    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (UIMin = 0, UIMax = 100))
    int32 ChancePercent = 100;

    // Image to map onto tracer particle
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    class UTexture2D* Texture;

    // Sound effect this tracer makes as it flies past players
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    class USoundBase* Sound;
};