#pragma once

#include "ToasterGameplayStatics.generated.h"

class APooledActor;

UCLASS()
class TOASTERGAME_API UToasterGameplayStatics : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    
    UFUNCTION(BlueprintCallable, Category = "ActorPool", meta=(WorldContext = "WorldContextObject"))
    static AActor* SpawnPooledActor(UObject* WorldContextObject, TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty = true);
};