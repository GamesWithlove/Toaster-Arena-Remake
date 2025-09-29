// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SMMSkeletalMergerFunctionLibrary.generated.h"

class USkeletalMesh;
class AActor;
class USkeleton;

/**
 *
 */
UCLASS()
class RUNTIMEMERGER_API USMMSkeletalMergerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()

public:
   UFUNCTION(BlueprintCallable, Category = ACFLibrary)
   static USkeletalMesh* MergeSkeletalMeshes(const TArray<USkeletalMesh*>& meshes, USkeleton* inSkeleton = nullptr, bool bNeedCpuAccess = false, bool bMergeSkeletonsBefore = false);

   UFUNCTION(BlueprintCallable, Category = ACFLibrary)
   static USkeletalMesh* MergeAllSkeletalMeshesInActor(AActor* inActor, USkeleton* inSkeleton = nullptr, bool bNeedCpuAccess = false, bool bMergeSkeletonsBefore = false);
};
