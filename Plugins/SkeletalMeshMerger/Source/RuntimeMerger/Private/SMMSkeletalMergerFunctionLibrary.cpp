// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2023. All Rights Reserved. 


#include "SMMSkeletalMergerFunctionLibrary.h"
#include "SkeletalMergingLibrary.h"
#include "Engine/SkeletalMesh.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"


USkeletalMesh* USMMSkeletalMergerFunctionLibrary::MergeSkeletalMeshes(const TArray<USkeletalMesh*>& meshes, USkeleton* inSkeleton , bool bNeedCpuAccess /*= false*/, bool bMergeSkeletonsBefore /*= false*/)
{

	FSkeletalMeshMergeParams mergeParams;
    mergeParams.MeshesToMerge = meshes;
    mergeParams.bSkeletonBefore = bMergeSkeletonsBefore;
    mergeParams.bNeedsCpuAccess = bNeedCpuAccess;
    mergeParams.Skeleton = inSkeleton;
    return USkeletalMergingLibrary::MergeMeshes(mergeParams);
}

USkeletalMesh* USMMSkeletalMergerFunctionLibrary::MergeAllSkeletalMeshesInActor(AActor* inActor, USkeleton* inSkeleton, bool bNeedCpuAccess /*= false*/, bool bMergeSkeletonsBefore /*= false*/)
{
    TArray<USkeletalMesh*> meshes;
    if (inActor) {
        TArray<USkeletalMeshComponent*> outMeshes;
        inActor->GetComponents<USkeletalMeshComponent>(outMeshes, false);


         for (const USkeletalMeshComponent* comp : outMeshes) {
             if (comp->GetSkeletalMeshAsset()) {
                 meshes.Add(comp->GetSkeletalMeshAsset());
             }
        }
    }

   return MergeSkeletalMeshes(meshes, inSkeleton, bNeedCpuAccess, bMergeSkeletonsBefore);
}
