#include "Runtime/Engine/Classes/Engine/World.h"
#include "ActorPool.h"

bool APooledActor::IsPooled() const
{
    return bPooled;
}

void APooledActor::K2_DestroyActor()
{
    MyActorPool->ReleaseToPool(this);
}

void APooledActor::LifeSpanExpired()
{
    MyActorPool->ReleaseToPool(this);
}

void APooledActor::BeginDestroy()
{
    Super::BeginDestroy();
}

void APooledActor::FinishPooledSpawning()
{
    OnCreatedFromPool();
}

void UActorPool::Initialize(UWorld* InWorld, TSubclassOf<APooledActor> InActorClass, int32 Count)
{
    World = InWorld;
    ActorClass = InActorClass;

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    FTransform SpawnTransform;

    for (int32 i = 0; i < Count; ++i)
    {
        APooledActor* NewActor = InWorld->SpawnActor<APooledActor>(ActorClass.Get(), SpawnTransform, SpawnParams);
        check(NewActor);
        NewActor->MyActorPool = this;
        NewActor->NextActor = FreeList;
        FreeList = NewActor;
    }
}

APooledActor* UActorPool::AllocateFromPool(bool bReclaimIfEmpty, const FTransform& Transform)
{
    if (FreeList != nullptr)
    {
        // Unlink from freelist
        APooledActor* Actor = FreeList;
        FreeList = FreeList->NextActor;

        // Link into activelist
        Actor->NextActor = ActiveList;
        ActiveList = Actor;

        Actor->bPooled = false;
        Actor->SetActorTransform(Transform, false, nullptr, ETeleportType::ResetPhysics);
        return Actor;
    }
    else if (bReclaimIfEmpty)
    {
        if (ActiveList == nullptr) return nullptr;
        APooledActor* Actor = ActiveList;

        while (Actor->NextActor)
        {
            Actor = Actor->NextActor;
        }

        ReleaseToPool(Actor);

        return AllocateFromPool(false, Transform);
    }

    return nullptr;
}

void UActorPool::ReleaseToPool(APooledActor* Actor)
{
    if (Actor->bPooled) return;
    FLatentActionManager& LatentActionManager = World->GetLatentActionManager();


    // Actors could be released in arbitrary order, so traverse the list and link up the hole.
    // TODO: possibly use doubly-linked list for this?
    APooledActor* Iter = ActiveList;
    APooledActor* LastPtr = ActiveList;

    // Iterate over list, keeping track of last pointer
    while (Iter != Actor)
    {
        LastPtr = Iter;
        Iter = Iter->NextActor;
    }

    if (Iter == ActiveList)
    {
        // Actor is head of active list, shift out
        ActiveList = ActiveList->NextActor;
    }
    else
    {
        // Unlink from previous actor in list
        LastPtr->NextActor = Actor->NextActor;
    }

    Actor->NextActor = FreeList;
    FreeList = Actor;

    int32 NumLatentActions = LatentActionManager.GetNumActionsForObject(Actor);
    if (NumLatentActions > 0)
    {
        LatentActionManager.RemoveActionsForObject(Actor);
        //UE_LOG(LogTemp, Display, TEXT("Stop %i latent actions for '%s'"), NumLatentActions, *Actor->GetName());
    }

    Actor->bPooled = true;
    Actor->OnReturnToPool();
    Actor->SetActorTickEnabled(false);
    Actor->SetOwner(nullptr);
}
