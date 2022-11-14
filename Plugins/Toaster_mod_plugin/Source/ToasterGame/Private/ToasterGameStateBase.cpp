#include "ToasterGameStateBase.h"
#include "ActorPool.h"

APooledActor* AToasterGameStateBase::SpawnActorFromPool(TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty /*= true*/)
{
    APooledActor* NewActor = SpawnActorFromPoolDefer(ActorClass, Transform, bReclaimIfEmpty);
    if (NewActor) NewActor->FinishPooledSpawning();

    return NewActor;
}

APooledActor* AToasterGameStateBase::SpawnActorFromPoolDefer(TSubclassOf<APooledActor> ActorClass, FTransform Transform, bool bReclaimIfEmpty /*= true*/)
{
    UActorPool* Pool = GetActorPoolForClass(ActorClass);
    if (Pool == nullptr) return nullptr;

    APooledActor* NewActor = Pool->AllocateFromPool(bReclaimIfEmpty, Transform);
    if (NewActor == nullptr) return nullptr;

    return NewActor;
}

void AToasterGameStateBase::InitActorPools()
{
    ENetMode NetMode = GetNetMode();
    if (NetMode == NM_Standalone || NetMode == NM_DedicatedServer || NetMode == NM_ListenServer)
    {
        for (auto Tuple : ServerActorPoolTypes)
        {
            UActorPool* Pool = NewObject<UActorPool>(this);
            Pool->Initialize(GetWorld(), Tuple.Key, Tuple.Value);
            ServerActorPools.Add(Tuple.Key) = Pool;
        }
    }

    if (NetMode == NM_Standalone || NetMode == NM_ListenServer || NetMode == NM_Client)
    {
        for (auto Tuple : ClientActorPoolTypes)
        {
            UActorPool* Pool = NewObject<UActorPool>(this);
            Pool->Initialize(GetWorld(), Tuple.Key, Tuple.Value);
            ServerActorPools.Add(Tuple.Key) = Pool;
        }
    }
}

UActorPool* AToasterGameStateBase::GetActorPoolForClass(TSubclassOf<APooledActor> ActorClass)
{
    ENetMode NetMode = GetNetMode();
    if (NetMode == NM_Standalone || NetMode == NM_DedicatedServer || NetMode == NM_ListenServer)
    {
        UActorPool** Found = ServerActorPools.Find(ActorClass);
        if ( Found ) return *Found;
    }

    if (NetMode == NM_Standalone || NetMode == NM_ListenServer || NetMode == NM_Client)
    {
        UActorPool** Found = ClientActorPools.Find(ActorClass);
        if (Found) return *Found;
    }

    return nullptr;
}

void AToasterGameStateBase::BeginPlay()
{
    Super::BeginPlay();
    InitActorPools();
}
