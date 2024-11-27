#include "ToasterGameplayStatics.h"
#include "ToasterGameStateBase.h"
#include "ActorPool.h"
#include "Engine/Engine.h"

APooledActor* UToasterGameplayStatics::SpawnPooledActor(UObject* WorldContextObject, TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty /*= true*/)
{
    if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
    {
        AToasterGameStateBase* GameState = Cast<AToasterGameStateBase>(World->GetGameState());
        if (GameState)
        {
            return GameState->SpawnActorFromPool(ActorClass, Transform, bReclaimIfEmpty);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Tried to spawn pooled actor, but gamestate does not inherit ToasterGameStateBase."));
        }
    }

    return nullptr;
}

APooledActor* UToasterGameplayStatics::SpawnPooledActorDefer(UObject* WorldContextObject, TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty)
{
    if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
    {
        AToasterGameStateBase* GameState = Cast<AToasterGameStateBase>(World->GetGameState());
        if (GameState)
        {
            return GameState->SpawnActorFromPoolDefer(ActorClass, Transform, bReclaimIfEmpty);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Tried to spawn pooled actor, but gamestate does not inherit ToasterGameStateBase."));
        }
    }

    return nullptr;
}

void UToasterGameplayStatics::FinishSpawningPooledActor(APooledActor* PooledActor, AActor* Owner)
{
    if (PooledActor == nullptr) return;
    PooledActor->SetOwner(Owner);
    PooledActor->FinishPooledSpawning();
}
