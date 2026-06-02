#pragma once

#include "ToasterGameplayStatics.generated.h"

class APooledActor;

UCLASS()
class TOASTERGAME_API UToasterGameplayStatics : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    
    UFUNCTION()
    static APooledActor* SpawnPooledActor(UObject* WorldContextObject, TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty = true);

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true", BlueprintInternalUseOnly = "true"))
    static APooledActor* SpawnPooledActorDefer(UObject* WorldContextObject, TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty);

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true", BlueprintInternalUseOnly = "true"))
    static void FinishSpawningPooledActor(APooledActor* PooledActor, AActor* Owner);
};