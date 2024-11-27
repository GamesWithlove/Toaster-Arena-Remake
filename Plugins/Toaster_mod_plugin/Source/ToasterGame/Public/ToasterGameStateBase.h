#pragma once

#include "GameFramework/GameState.h"
#include "ToasterGameStateBase.generated.h"

class APooledActor;

UCLASS()
class TOASTERGAME_API AToasterGameStateBase : public AGameStateBase
{
    GENERATED_BODY()

public:

    // Actors that are meant to be spawned on the server
    UPROPERTY(EditAnywhere, Category = "Actor Pools")
    TMap<TSubclassOf<APooledActor>, int32> ServerActorPoolTypes;

    // Actors that are meant to be spawned on the client
    UPROPERTY(EditAnywhere, Category = "Actor Pools")
    TMap<TSubclassOf<APooledActor>, int32> ClientActorPoolTypes;

    UFUNCTION(BlueprintCallable, Category = "Actor")
    APooledActor* SpawnActorFromPool(TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty = true);

    UFUNCTION()
    APooledActor* SpawnActorFromPoolDefer(TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty = true);

protected:
    
    void InitActorPools();

    class UActorPool* GetActorPoolForClass(TSubclassOf<APooledActor> ActorClass);

    UPROPERTY()
    TMap<TSubclassOf<APooledActor>, UActorPool*> ServerActorPools;

    UPROPERTY()
    TMap<TSubclassOf<APooledActor>, UActorPool*> ClientActorPools;

    void BeginPlay() override;

    bool ShouldUseServerPools() const;

    bool ShouldUseClientPools() const;

};