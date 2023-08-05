/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once



#include "DragonIK_Library.h"
#include "CoreMinimal.h"


#include "Kismet/KismetMathLibrary.h"

#include "Animation/InputScaleBias.h"
#include "AnimNode_DragonControlBase.h"


#include "AnimNode_DragonFabrikSolver.generated.h"

/**
 * 
 */

 

class FPrimitiveDrawInterface;
class USkeletalMeshComponent;




//USTRUCT(BlueprintInternalUseOnly)
USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonFabrikSolver : public FAnimNode_DragonControlBase
{
	//	GENERATED_USTRUCT_BODY()
	GENERATED_BODY()



public:

	UPROPERTY(EditAnywhere, Category = CoreInputData, meta = (DisplayName = "Tip Bone (Eg:- Head)", PinHiddenByDefault))
	 FBoneReference TipBone_Input;


	UPROPERTY(EditAnywhere, Category = CoreInputData, meta = (DisplayName = "Root Bone (Eg:- Pelvis)", PinHiddenByDefault))
		FBoneReference RootBone_Input;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentDirectionSettings)
		float Precision = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentDirectionSettings)
	float MaxIterations = 5;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentDirectionSettings,meta = (DisplayName = "Transform Target", PinShownByDefault))
	FTransform Target_Transform;


	int ChainLength = 0;
	TArray<FName> ChainBoneNames;
	TArray<int32> BoneLengths;
	bool bAllowTwist = true;

	TArray<FCompactPoseBoneIndex> ChainBoneIndices;




	USkeletalMeshComponent* owning_skel;

	bool first_start = true;


	FBoneContainer* SavedBoneContainer;

	void FABRIK_BodySystem(FCSPose<FCompactPose>& MeshBases, FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);




	virtual int32 GetLODThreshold() const override { return LODThreshold; }


	virtual void ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const;



	//constructor
	//UWheeledVehicleMovementComponent4W::UWheeledVehicleMovementComponent4W(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;

	virtual void UpdateInternal(const FAnimationUpdateContext& Context) override;

	virtual void EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context) override;
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;

	// initialize any bone references you have
	virtual void InitializeBoneReferences(FBoneContainer& RequiredBones) override;



	virtual void Evaluate_AnyThread(FPoseContext& Output);
	FAnimNode_DragonFabrikSolver();

protected:

	// return true if it is valid to Evaluate
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones);
	


};

