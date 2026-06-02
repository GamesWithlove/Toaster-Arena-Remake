//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSTypes.h"
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"

struct FActorSpawnParameters;
struct FActorSaveData;
struct FRawObjectSaveData;
struct FActorByteKey;

class UWorld;
class AActor;
class APlayerController;
class USceneComponent;
class UActorComponent;

class EASYMULTISAVE_API FActorHelpers
{

public:

	static bool IsPlacedActor(const AActor* Actor);
	static bool IsPersistentActor(const AActor* Actor);
	static bool IsSkipTransform(const AActor* Actor);

	static bool IsLoaded(const AActor* Actor);
	static bool IsSkipSave(const AActor* Actor);

	static bool IsLevelActor(const EActorType Type, const bool bIncludeScripts);
	static bool IsLevelPlaced(const EActorType Type);

	/*Includes Persistent Actors*/
	static bool IsRuntime(const EActorType Type);

	static bool IsMultiLevelStreamRelevant(const EActorType Type);

	/*Only Persistent Actors*/
	static bool IsPersistent(const EActorType Type);

	static bool IsLevelScript(const EActorType Type);

	static EActorType GetActorType(const AActor* Actor);

	static FString GetActorLevelName(const AActor* Actor);
	static FString GetFullActorName(const AActor* Actor);
	static FString GetComponentName(const AActor* Actor/*ToSave*/, const UActorComponent* Comp);

	static bool IsMovable(const USceneComponent* SceneComp);
	static bool HasValidTransform(const FTransform& CheckTransform);
	static bool CanProcessActorTransform(const AActor* Actor);

	static void SortLevelActors(TArray<FActorSaveData>& ToSort, const APlayerController* PC);
	static bool CompareDistance(const FVector& VecA, const FVector& VecB, const APlayerController* PC);

	static void PruneSavedActors(const TMap<FActorByteKey, TWeakObjectPtr<AActor>>& InActorMap, TArray<FActorSaveData>& OutSaved);

	static bool AreWorldActorsInitialized(const UWorld* InWorld);
};

class EASYMULTISAVE_API FSpawnHelpers
{

public:

	static UClass* StaticLoadSpawnClass(const FString& Class);
	static UClass* ResolveSpawnClass(const FString& InClass);
	static FActorSpawnParameters GetSpawnParams(const UObject* WorldContext, const FActorSaveData& ActorArray);
	static AActor* CheckForExistingActor(const UWorld* InWorld, const FActorSaveData& ActorArray);
};

