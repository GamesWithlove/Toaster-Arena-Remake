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
    if (Pool == nullptr) 
    {
        UE_LOG(LogTemp, Warning, TEXT("No actor pool for class : %s in network mode %i, role %i"), *ActorClass->GetName(), GetNetMode(), GetLocalRole());
        return nullptr;
    }

    APooledActor* NewActor = Pool->AllocateFromPool(bReclaimIfEmpty, Transform);
    if (NewActor == nullptr) 
    {
        UE_LOG(LogTemp, Warning, TEXT("Actor pool empty for class : %s in network mode %i, role %i"), *ActorClass->GetName(), GetNetMode(), GetLocalRole());
        return nullptr;
    }

    return NewActor;
}

void AToasterGameStateBase::InitActorPools()
{
    if (ShouldUseServerPools())
    {
        for (auto Tuple : ServerActorPoolTypes)
        {
            UActorPool* Pool = NewObject<UActorPool>(this);
            Pool->Initialize(GetWorld(), Tuple.Key, Tuple.Value);
            ServerActorPools.Add(Tuple.Key) = Pool;

            UE_LOG(LogTemp, Warning, TEXT("SERVER Actor pool init for class : %s x %i in network mode %i, role %i"), *Tuple.Key->GetName(), Tuple.Value, GetNetMode(), GetLocalRole());
        }
    }

    if (ShouldUseClientPools())
    {
        for (auto Tuple : ClientActorPoolTypes)
        {
            UActorPool* Pool = NewObject<UActorPool>(this);
            Pool->Initialize(GetWorld(), Tuple.Key, Tuple.Value);
            ClientActorPools.Add(Tuple.Key) = Pool;

            UE_LOG(LogTemp, Warning, TEXT("CLIENT Actor pool init for class : %s x %i in network mode %i, role %i"), *Tuple.Key->GetName(), Tuple.Value, GetNetMode(), GetLocalRole());
        }
    }
}

UActorPool* AToasterGameStateBase::GetActorPoolForClass(TSubclassOf<APooledActor> ActorClass)
{
    ENetMode NetMode = GetNetMode();
    ENetRole NetRole = GetLocalRole();
    if (ShouldUseServerPools())
    {
        UActorPool** Found = ServerActorPools.Find(ActorClass);
        if ( Found ) return *Found;
    }

    if (ShouldUseClientPools())
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

bool AToasterGameStateBase::ShouldUseServerPools() const
{
    ENetMode NetMode = GetNetMode();
    ENetRole NetRole = GetLocalRole();

    return (NetMode == NM_Standalone || NetMode == NM_DedicatedServer || NetMode == NM_ListenServer) && NetRole == ROLE_Authority;
}

bool AToasterGameStateBase::ShouldUseClientPools() const
{
    ENetMode NetMode = GetNetMode();
    ENetRole NetRole = GetLocalRole();

    return NetMode == NM_Standalone || NetMode == NM_ListenServer || NetMode == NM_Client;
}
