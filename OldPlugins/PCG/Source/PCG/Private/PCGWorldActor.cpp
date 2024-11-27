// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGWorldActor.h"

#include "Grid/PCGLandscapeCache.h"
#include "PCGComponent.h"
#include "PCGModule.h"
#include "PCGSubsystem.h"
#include "Grid/PCGPartitionActor.h"
#include "Helpers/PCGActorHelpers.h"

#include "LandscapeProxy.h"
#include "Engine/World.h"
#include "HAL/IConsoleManager.h"

#if WITH_EDITOR
#include "UObject/UObjectHash.h"
#include "PCGActorAndComponentMapping.h"
#include "WorldPartition/WorldPartition.h"
#include "WorldPartition/WorldPartitionHelpers.h"
#include "WorldPartition/ActorPartition/PartitionActorDesc.h"
#include "WorldPartition/WorldPartitionActorDescInstance.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGWorldActor)

PRAGMA_DISABLE_DEPRECATION_WARNINGS
bool FPCGPartitionActorRecord::operator==(const FPCGPartitionActorRecord& InOther) const
{
	return GridGuid == InOther.GridGuid && GridSize == InOther.GridSize && GridCoords == InOther.GridCoords;
}

uint32 GetTypeHash(const FPCGPartitionActorRecord& In)
{
	uint32 HashResult = HashCombine(GetTypeHash(In.GridGuid), GetTypeHash(In.GridSize));
	HashResult = HashCombine(HashResult, GetTypeHash(In.GridCoords));
	return HashResult;
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS

APCGWorldActor::APCGWorldActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITOR
	bIsSpatiallyLoaded = false;
	bDefaultOutlinerExpansionState = false;
#endif

	PartitionGridSize = DefaultPartitionGridSize;
	LandscapeCacheObject = ObjectInitializer.CreateDefaultSubobject<UPCGLandscapeCache>(this, TEXT("LandscapeCache"));
}

#if WITH_EDITOR
void APCGWorldActor::BeginCacheForCookedPlatformData(const ITargetPlatform* TargetPlatform)
{
	Super::BeginCacheForCookedPlatformData(TargetPlatform);
	check(LandscapeCacheObject);

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	if (LandscapeCacheObject->SerializationMode == EPCGLandscapeCacheSerializationMode::SerializeOnlyAtCook)
	{
		// Implementation note: actor references gathered from the world partition helpers will register on creation and unregister on deletion
		// which is why we need to manage this only in the non-WP case.
		TSet<FWorldPartitionReference> ActorRefs;
		TArray<ALandscapeProxy*> ProxiesToRegisterAndUnregister;

		if (UWorldPartition* WorldPartition = World->GetWorldPartition())
		{
			FWorldPartitionHelpers::ForEachActorDescInstance<ALandscapeProxy>(WorldPartition, [WorldPartition, &ActorRefs](const FWorldPartitionActorDescInstance* ActorDescInstance)
			{
				check(ActorDescInstance);
				// Create WP references only for actors that aren't currently loaded, otherwise we might end up unloading them
				// if their actor desc ref count isn't setup properly
				if (!ActorDescInstance->GetActor())
				{
					ActorRefs.Add(FWorldPartitionReference(WorldPartition, ActorDescInstance->GetGuid()));
				}
				return true;
			});
		}
		else
		{
			// Since we're not in a WP map, the proxies should be outered to this world.
			// Important note: registering the landscape proxies can create objects, which can and will cause issues with the ForEachWithOuter, hence the second loop in which we do the register
			ForEachObjectWithOuter(GetWorld(), [&ProxiesToRegisterAndUnregister](UObject* Object)
			{
				if (ALandscapeProxy* LandscapeProxy = Cast<ALandscapeProxy>(Object))
				{
					bool bHasUnregisteredComponents = false;
					LandscapeProxy->ForEachComponent(/*bIncludeFromChildActors=*/false, [&bHasUnregisteredComponents](const UActorComponent* Component)
					{
						if (Component && !Component->IsRegistered())
						{
							bHasUnregisteredComponents = true;
						}
					});

					if (bHasUnregisteredComponents)
					{
						ProxiesToRegisterAndUnregister.Add(LandscapeProxy);
					}
				}
			});

			for (ALandscapeProxy* ProxyToRegister : ProxiesToRegisterAndUnregister)
			{
				ProxyToRegister->RegisterAllComponents();
			}
		}

		LandscapeCacheObject->PrimeCache();

		for (ALandscapeProxy* ProxyToUnregister : ProxiesToRegisterAndUnregister)
		{
			ProxyToUnregister->UnregisterAllComponents();
		}
	}
}
#endif

void APCGWorldActor::PostInitProperties()
{
	Super::PostInitProperties();

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		// Commented because it was causing issues with landscape proxies guids not being initialized.
		/*if (LandscapeCacheObject.Get())
		{
			// Make sure landscape cache is ready to provide data immediately.
			LandscapeCacheObject->Initialize();
		}*/
	}
}

void APCGWorldActor::BeginPlay()
{
	Super::BeginPlay();
	RegisterToSubsystem();
}

void APCGWorldActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterFromSubsystem();
	Super::EndPlay(EndPlayReason);
}

void APCGWorldActor::MergeFrom(APCGWorldActor* OtherWorldActor)
{
	check(OtherWorldActor && this != OtherWorldActor);
	// TODO: Is this really important to check? It seems it can fail, cf FORT-664546. We might want to do something special about it.
	// ensure(PartitionGridSize == OtherWorldActor->PartitionGridSize && bUse2DGrid == OtherWorldActor->bUse2DGrid && GridGuids.OrderIndependentCompareEqual(OtherWorldActor->GridGuids));
	LandscapeCacheObject->TakeOwnership(OtherWorldActor->LandscapeCacheObject);
}

#if WITH_EDITOR
APCGWorldActor* APCGWorldActor::CreatePCGWorldActor(UWorld* InWorld)
{
	APCGWorldActor* PCGActor = nullptr;

	if (InWorld)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.OverrideLevel = InWorld->PersistentLevel;

		// We don't want the PCGWorldActor creation to be part of a transaction, once it is created we add the flag to the actor
		SpawnParams.ObjectFlags &= ~RF_Transactional;
		PCGActor = InWorld->SpawnActor<APCGWorldActor>(SpawnParams);

		if (PCGActor)
		{
			PCGActor->SetFlags(RF_Transactional);
			PCGActor->RegisterToSubsystem();
		}
	}

	return PCGActor;
}
#endif

void APCGWorldActor::RegisterToSubsystem()
{
	if (UPCGSubsystem* PCGSubsystem = UPCGSubsystem::GetInstance(GetWorld()))
	{
		PCGSubsystem->RegisterPCGWorldActor(this);
	}
}

void APCGWorldActor::UnregisterFromSubsystem()
{
	if (UPCGSubsystem* PCGSubsystem = UPCGSubsystem::GetInstance(GetWorld()))
	{
		PCGSubsystem->UnregisterPCGWorldActor(this);
	}
}

#if WITH_EDITOR
void APCGWorldActor::OnPartitionGridSizeChanged()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(APCGWorldActor::OnPartitionGridSizeChanged);

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	UPCGSubsystem* PCGSubsystem = UPCGSubsystem::GetInstance(World);
	ULevel* Level = World->GetCurrentLevel();
	if (!PCGSubsystem || !Level)
	{
		return;
	}

	bool bAllSafeToDelete = true;

	auto AddPartitionComponentAndCheckIfSafeToDelete = [&bAllSafeToDelete](AActor* Actor) -> bool
	{
		TObjectPtr<APCGPartitionActor> PartitionActor = CastChecked<APCGPartitionActor>(Actor);

		if (!PartitionActor->IsSafeForDeletion())
		{
			bAllSafeToDelete = false;
			return true;
		}

		return true;
	};

	UPCGActorHelpers::ForEachActorInLevel<APCGPartitionActor>(Level, AddPartitionComponentAndCheckIfSafeToDelete);

	// TODO: When we have the capability to stop the generation, we should just do that
	// For now, just throw an error
	if (!bAllSafeToDelete)
	{
		UE_LOG(LogPCG, Error, TEXT("Trying to change the partition grid size while there are partitioned PCGComponents that are refreshing. We cannot stop the refresh for now, so we abort there. You should delete your partition actors manually and regenerate when the refresh is done"));
		return;
	}

	// Then delete all PCGPartitionActors
	PCGSubsystem->DeleteSerializedPartitionActors(/*bDeleteOnlyUnused=*/false);

	// And finally, regenerate all components that are partitioned (registered to the PCGSubsystem)
	// to let them recreate the needed PCG Partition Actors.
	for (UPCGComponent* PCGComponent : PCGSubsystem->GetAllRegisteredPartitionedComponents())
	{
		check(PCGComponent);
		PCGComponent->DirtyGenerated();
		PCGComponent->Refresh();
	}
}

void APCGWorldActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(APCGWorldActor, PartitionGridSize))
	{
		OnPartitionGridSizeChanged();
	}
}
#endif // WITH_EDITOR

void APCGWorldActor::BeginDestroy()
{
	UnregisterFromSubsystem();
	Super::BeginDestroy();
}
