#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorPool.generated.h"

UCLASS()
class TOASTERGAME_API APooledActor : public AActor
{
    GENERATED_BODY()
public:

    UFUNCTION(BlueprintImplementableEvent, Category = "Pooling")
    void OnCreatedFromPool();

    UFUNCTION(BlueprintImplementableEvent, Category = "Pooling")
    void OnReturnToPool();

    UFUNCTION(BlueprintPure, Category = "Pooling")
    bool IsPooled() const;
    
    void K2_DestroyActor() override;

    void LifeSpanExpired() override;

    void BeginDestroy() override;

    // Must be called after un-pooling this actor to initialize it
    void FinishPooledSpawning();

private:
    friend class UActorPool;

    UPROPERTY()
    class UActorPool* MyActorPool;

    UPROPERTY()
    APooledActor* NextActor = nullptr;

    UPROPERTY()
    bool bPooled = true;
};

UCLASS()
class TOASTERGAME_API UActorPool : public UObject
{
    GENERATED_BODY()

public:
    void Initialize(UWorld* InWorld, TSubclassOf<APooledActor> InActorClass, int32 Count);

    APooledActor* AllocateFromPool(bool bReclaimIfEmpty, const FTransform& Transform);


private:
    friend class APooledActor;

    void ReleaseToPool(APooledActor* Actor);

    UPROPERTY()
    UWorld* World;

    UPROPERTY()
    APooledActor* FreeList = nullptr;

    UPROPERTY()
    APooledActor* ActiveList = nullptr;

    TSubclassOf<APooledActor> ActorClass;
};