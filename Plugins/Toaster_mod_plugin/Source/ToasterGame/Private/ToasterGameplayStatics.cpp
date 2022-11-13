#include "ToasterGameplayStatics.h"
#include "ToasterGameStateBase.h"

AActor* UToasterGameplayStatics::SpawnPooledActor(UObject* WorldContextObject, TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty /*= true*/)
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
