/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once



//#include "DragonIK_Library.h"
#include "CoreMinimal.h"

#include "DragonIKPlugin.h"

#include "Kismet/KismetMathLibrary.h"

#include "CollisionQueryParams.h"

#include "PhysicsEngine/PhysicsHandleComponent.h"

#include "DragonIKPhysicsComponent.h"

#include "DragonIKPhysicsHolder.h"
#include "Animation/InputScaleBias.h"
#include "AnimNode_DragonControlBase.h"
#include "AnimNode_DragonPhysicsSolver.generated.h"
/**
 * 
 */


class USkeletalMeshComponent;
//class UDragonIKPhysicsComponent;






USTRUCT(BlueprintType)
struct FDragonData_PhysicsBoneStrip
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Bone Chain Start", PinHiddenByDefault))
		FBoneReference Bone_Chain_Start;

	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Bone Chain End", PinHiddenByDefault))
		FBoneReference Bone_Chain_End;



};






USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonPhysicsSolver : public FAnimNode_DragonControlBase
{
	//	GENERATED_USTRUCT_BODY()
	GENERATED_BODY()

public:






	FAnimNode_DragonPhysicsSolver();


	TArray<FBoneReference> character_bone_references;

	TArray<FTransform> character_bone_transforms;

	virtual int32 GetLODThreshold() const override { return LODThreshold; }

	FBoneContainer* SavedBoneContainer;	

	USkeletalMeshComponent *owning_skel;

	TArray<UDragonIKPhysicsComponent*> dragon_phys_component;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Physanim component tag", PinHiddenByDefault))
		int physanim_tag_index = 1;

	


	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
//	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)  override;
	//virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;

	virtual void UpdateInternal(const FAnimationUpdateContext& Context) override;

	//virtual void EvaluateComponentSpace_AnyThread(FComponentSpacePoseContext& Output) override;

	virtual void EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context) override;
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;


	virtual void Evaluate_AnyThread(FPoseContext& Output);


	// use this function to evaluate for skeletal control base
//	virtual void EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context);
	// Evaluate the new component-space transforms for the affected bones.
	//	virtual void EvaluateBoneTransforms(USkeletalMeshComponent* SkelComp, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);

//	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);




	// return true if it is valid to Evaluate
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones);
	// initialize any bone references you have
	virtual void InitializeBoneReferences(FBoneContainer& RequiredBones) override;



protected:


};

