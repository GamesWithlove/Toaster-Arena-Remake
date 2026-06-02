// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMMTypes.h"
#include "Subsystems/EngineSubsystem.h"

#include "SMMSkeletalMeshMergerSubsystem.generated.h"

class AActor;

UCLASS()
class SKELETALMESHMERGER_API USMMSkeletalMeshMergerSubsystem : public UEngineSubsystem {
    GENERATED_BODY()

public:
    /**
     * Merges the given meshes into a single mesh and saves the result in a package with the provided
     * name in the provided path relative to Content/
     * @return if the operation is succesfull.
     */
    UFUNCTION(BlueprintCallable, Category = "SMM", meta = (UnsafeDuringActorConstruction = "true"))
    bool MergeMeshes(const FSkeletalMeshMergeParams& mergeParams, const FString& fileName, const FString& relativePath, FString& outMessage);

    UFUNCTION(BlueprintCallable, Category = "SMM", meta = (UnsafeDuringActorConstruction = "true"))
    class USkeletalMesh* RuntimeMergeMesh(const FSkeletalMeshMergeParams& mergeParams);

    UFUNCTION(BlueprintCallable, Category = "SMM", meta = (UnsafeDuringActorConstruction = "true"))
    bool MergeSkeletons(const FSkeletonMergeParams& mergeParams, const FString& fileName, const FString& relativePath, FString& outMessage);

    UFUNCTION(BlueprintCallable, Category = "SMM")
    class USkeleton* ExtractSkeletalMeshesFromBlueprint(const TSubclassOf<AActor>& actorClass, TArray<USkeletalMesh*>& outSkeletalMeshes);

    UFUNCTION(BlueprintCallable, Category = "SMM")
    bool CreatePackageFromObject(UObject* objectInstance, const FString& fileName, const FString& relativePath);
};
