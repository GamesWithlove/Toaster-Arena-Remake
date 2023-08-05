/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "AnimNode_DragonWarpSolver.h"
#include "Animation/AnimInstanceProxy.h"
#include "DrawDebugHelpers.h"




#include "AnimationRuntime.h"
#include "AnimationCoreLibrary.h"


DECLARE_CYCLE_STAT(TEXT("DragonWarpSolver Eval"), STAT_DragonWarpSolver_Eval, STATGROUP_Anim);



// Initialize the component pose as well as defining the owning skeleton
void FAnimNode_DragonWarpSolver::Initialize_AnyThread(const FAnimationInitializeContext & Context)
{

	FAnimNode_DragonControlBase::Initialize_AnyThread(Context);
	owning_skel = Context.AnimInstanceProxy->GetSkelMeshComponent();
	//	dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);

}






void FAnimNode_DragonWarpSolver::EvaluateComponentSpaceInternal(FComponentSpacePoseContext & Output)
{
	Super::EvaluateComponentSpaceInternal(Output);

}






//Perform update operations inside this
void FAnimNode_DragonWarpSolver::UpdateInternal(const FAnimationUpdateContext & Context)
{

	FAnimNode_DragonControlBase::UpdateInternal(Context);


	TraceStartList.Empty();
	TraceEndList.Empty();



	if (owning_skel->GetOwner())
	{
		scale_mode = owning_skel->GetComponentToWorld().GetScale3D().Z * virtual_scale;

		delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds * owning_skel->GetOwner()->CustomTimeDilation;
	}
	else
	{
		delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds;
	}




	if (enable_solver)
	{

		if (test_counter < 500)
			test_counter++;


		trace_draw_counter++;

		if (trace_draw_counter > 5)
			trace_draw_counter = 0;


		scale_mode = 1;

		if (owning_skel->GetOwner())
		{
			scale_mode = owning_skel->GetComponentScale().Z* virtual_scale;
		}



		const FVector char_up = character_direction_vector_CS;
		FVector character_direction_vector = UKismetMathLibrary::TransformDirection(owning_skel->GetComponentToWorld(), char_up);


		const FVector char_forward_cs = forward_vector_CS;
		FVector forward_dir = UKismetMathLibrary::TransformDirection(owning_skel->GetComponentToWorld(), char_forward_cs);

		

		FVector hip_location = UKismetMathLibrary::TransformLocation(owning_skel->GetComponentToWorld(), Hip_Transform_Value.GetLocation());

		if (enable_slope_warp)
		{


		//	line_trace_func(*owning_skel, hip_location + character_direction_vector * (line_trace_upper_height * scale_mode) + (forward_dir * scale_mode * virtual_leg_width), hip_location - character_direction_vector * (line_trace_downward_height * 1 * scale_mode) + (forward_dir * scale_mode * virtual_leg_width), front_hit_result, "", "", front_hit_result, FLinearColor::Green, true);
		//	line_trace_func(*owning_skel, hip_location + character_direction_vector * (line_trace_upper_height * scale_mode) - (forward_dir * scale_mode * virtual_leg_width), hip_location - character_direction_vector * (line_trace_downward_height * 1 * scale_mode) - (forward_dir * scale_mode * virtual_leg_width), back_hit_result, "", "", back_hit_result, FLinearColor::Green, true);


			line_trace_func(*owning_skel, hip_location + character_direction_vector * (line_trace_upper_height * scale_mode) + (forward_dir * scale_mode * virtual_leg_width), hip_location - character_direction_vector * (line_trace_downward_height * 1 * scale_mode) + (forward_dir * scale_mode * virtual_leg_width), front_hit_result, "", "", front_hit_result, FLinearColor::Green, true);
			line_trace_func(*owning_skel, hip_location + character_direction_vector * (line_trace_upper_height * scale_mode), hip_location - character_direction_vector * (line_trace_downward_height * 1 * scale_mode) , back_hit_result, "", "", back_hit_result, FLinearColor::Green, true);

		}

	}

}



/*
void FAnimNode_DragonWarpSolver::EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{
}
*/

void FAnimNode_DragonWarpSolver::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{

	//ComponentPose.EvaluateComponentSpace(Output);

	if (enable_solver && (FVector(0, 0, 0) - Output.AnimInstanceProxy->GetActorTransform().GetScale3D()).Size() > 0 && FAnimWeight::IsRelevant(ActualAlpha) && IsValidToEvaluate(Output.AnimInstanceProxy->GetSkeleton(), Output.AnimInstanceProxy->GetRequiredBones()) && dragon_limb_input.Num() > 0 && Output.ContainsNaN() == false)
	{


		EvaluateComponentSpaceInternal(Output);


		ComponentPose.EvaluateComponentSpace(Output);



		SCOPE_CYCLE_COUNTER(STAT_DragonWarpSolver_Eval);
		check(OutBoneTransforms.Num() == 0);



		float speed_warping_total = (speed_warping_const);

		if(enable_slope_warp)
			speed_warping_total = (automatic_speed_warping_const)*internal_slope_diff;

		if(enable_slope_warp)
			Hip_Offset = Hip_Lifting_Curve.GetRichCurve()->Eval(speed_warping_total) * Hip_Change_Intensity;
		else
		Hip_Offset = Hip_Lifting_Curve.GetRichCurve()->Eval(speed_warping_const)*Hip_Change_Intensity;

		Hip_Transform_Value = Output.Pose.GetComponentSpaceTransform(Hip_Bone_Ref.GetCompactPoseIndex(*SavedBoneContainer));

		Hip_Transform_Value.AddToTranslation( FVector(0,0,Hip_Offset) );

		OutBoneTransforms.Add(FBoneTransform(Hip_Bone_Ref.CachedCompactPoseIndex, Hip_Transform_Value ));


		float internal_slope_diff_temp = 1;

		if (front_hit_result.bBlockingHit && back_hit_result.bBlockingHit)
		{

			FVector Front_Hit = (front_hit_result.ImpactPoint);
			Front_Hit.X = 0;
			Front_Hit.Y = 0;

			FVector Back_Hit = (back_hit_result.ImpactPoint);
			Back_Hit.X = 0;
			Back_Hit.Y = 0;


			internal_slope_diff_temp = (Front_Hit - Back_Hit).Size() * slope_detection_tolerance;

			internal_slope_diff_temp = (1 - internal_slope_diff_temp);

			internal_slope_diff_temp = FMath::Clamp<float>(internal_slope_diff_temp,0,10);
		}



		internal_slope_diff = UKismetMathLibrary::Lerp(internal_slope_diff, internal_slope_diff_temp, delta_seconds_saved*15);

		//internal_slope_diff = (internal_slope_diff_temp);


		if (dragon_limb_input.Num() > 0)
		{

			for (int i = 0; i < dragon_limb_data.Num(); i++)
			{
				 Leg_Full_Function(dragon_limb_input[i].Foot_Bone_Name, i, Output, OutBoneTransforms);
			}


		}


	}


}



void FAnimNode_DragonWarpSolver::Leg_Full_Function(FName foot_name, int feet_index, FComponentSpacePoseContext& MeshBasesSaved, TArray<FBoneTransform>& OutBoneTransforms)
{


	FBoneReference ik_feet_bone = FBoneReference(foot_name);
	ik_feet_bone.Initialize(*SavedBoneContainer);






	Leg_ik_Function(ik_feet_bone, feet_index, EBoneControlSpace::BCS_WorldSpace, EBoneControlSpace::BCS_ComponentSpace, MeshBasesSaved, OutBoneTransforms);

}






void FAnimNode_DragonWarpSolver::Leg_ik_Function(FBoneReference ik_footbone, int feet_index, TEnumAsByte<enum EBoneControlSpace> EffectorLocationSpace, TEnumAsByte<enum EBoneControlSpace> JointTargetLocationSpace, FComponentSpacePoseContext& MeshBasesSaved, TArray<FBoneTransform>& OutBoneTransforms)
{

	// Get indices of the lower and upper limb bones and check validity.
	bool bInvalidLimb = false;

	FCompactPoseBoneIndex IKBoneCompactPoseIndex = ik_footbone.GetCompactPoseIndex(*SavedBoneContainer);


	
	IKBoneCompactPoseIndex = dragon_limb_data[feet_index].Foot_Bone_Name.CachedCompactPoseIndex;


	const FVector char_up = character_direction_vector_CS;

	FVector character_direction_vector = UKismetMathLibrary::TransformDirection(owning_skel->GetComponentToWorld(), char_up);



	FCompactPoseBoneIndex LowerLimbIndex = (*SavedBoneContainer).GetParentBoneIndex(IKBoneCompactPoseIndex);

	LowerLimbIndex = dragon_limb_data[feet_index].Knee_Bone_Name.CachedCompactPoseIndex;




	if (LowerLimbIndex == INDEX_NONE)
	{
		bInvalidLimb = true;
	}


	FCompactPoseBoneIndex UpperLimbIndex = (*SavedBoneContainer).GetParentBoneIndex(LowerLimbIndex);

	UpperLimbIndex = dragon_limb_data[feet_index].Thigh_Bone_Name.CachedCompactPoseIndex;



	if (UpperLimbIndex == INDEX_NONE)
	{
		bInvalidLimb = true;
	}




	const bool bInBoneSpace = (EffectorLocationSpace == BCS_ParentBoneSpace) || (EffectorLocationSpace == BCS_BoneSpace);
	const int32 EffectorBoneIndex = bInBoneSpace ? (*SavedBoneContainer).GetPoseBoneIndexForBoneName("") : INDEX_NONE;
	const FCompactPoseBoneIndex EffectorSpaceBoneIndex = (*SavedBoneContainer).MakeCompactPoseIndex(FMeshPoseBoneIndex(EffectorBoneIndex));


	// If we walked past the root, this controlled is invalid, so return no affected bones.
	if (bInvalidLimb)
	{
		return;
	}




	// Now get those in component space...
	FTransform LowerLimbCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(LowerLimbIndex);
	FTransform UpperLimbCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(UpperLimbIndex);
	FTransform EndBoneCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex);

	original_foot_array[feet_index] = EndBoneCSTransform.GetLocation();

	original_foot_array[feet_index].Z = 0;

	//	FTransform RootBoneCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(FCompactPoseBoneIndex(0));




	// Get current position of root of limb.
	// All position are in Component space.
	const FVector RootPos = UpperLimbCSTransform.GetTranslation();
	const FVector InitialJointPos = LowerLimbCSTransform.GetTranslation();
	const FVector InitialEndPos = EndBoneCSTransform.GetTranslation();

	

		FTransform eb_wtransform = EndBoneCSTransform;

	//	float speed_warping_total = (speed_warping_const + dragon_limb_input[feet_index].Warp_Param_Adder)* internal_slope_diff;

		float speed_warping_total = 0;

		if(enable_slope_warp)
			speed_warping_total = (automatic_speed_warping_const + dragon_limb_input[feet_index].Warp_Param_Adder) * internal_slope_diff;
		else
			speed_warping_total = (speed_warping_const + dragon_limb_input[feet_index].Warp_Param_Adder);


		speed_warping_total = FMath::Clamp(speed_warping_total, dragon_limb_input[feet_index].Min_Max_Warp.X, dragon_limb_input[feet_index].Min_Max_Warp.Y);

		FVector Thigh_Feet_Dir = (eb_wtransform.GetLocation() - UpperLimbCSTransform.GetLocation()).GetSafeNormal();



	//	float Root_Feet_Len = ((dragon_limb_data[feet_index].Warp_Lift_Reference_Location) - (eb_wtransform.GetLocation().Z)) * (FMath::Clamp<float>(1 - speed_warping_total, 0, 1) * 0.5f);//speed_warping_total


		float Root_Feet_Len = (   (eb_wtransform.GetLocation().Z) + (dragon_limb_input[feet_index].Warp_Lift_Reference_Location) ) * (FMath::Clamp<float>(1 - speed_warping_total,0,1) * 0.5f);//speed_warping_total
	
	//	float Root_Feet_Len = ((dragon_limb_data[feet_index].Warp_Lift_Reference_Location) + (eb_wtransform.GetLocation().Z)) * (FMath::Clamp<float>(1 - speed_warping_total, 0, 1) * 0.5f) + dragon_limb_data[feet_index].Warp_Lift_Reference_Location;//speed_warping_total

		Root_Feet_Len = FMath::Clamp<float>(Root_Feet_Len,0, dragon_limb_input[feet_index].max_extra_compression_height);

		float const Thigh_Feet_Const_Len = (eb_wtransform.GetLocation() - UpperLimbCSTransform.GetLocation()).Size();

		float Thigh_Feet_Len = Thigh_Feet_Const_Len;


		float Speed_Param = Limb_Lifting_Curve.GetRichCurve()->Eval(speed_warping_total);


		Thigh_Feet_Len -= Root_Feet_Len* Speed_Param * Limb_Compression_Intensity;

		//FVector Down_Vector = FVector(Thigh_Feet_Dir.X, Thigh_Feet_Dir.Y * 0, Thigh_Feet_Dir.Z);

		FVector Down_Vector = Thigh_Feet_Dir* (FVector(1,1,1) - forward_vector_CS);

		//(1,1,1 - 0,1,0) = 1,0,1

		eb_wtransform.SetLocation(UpperLimbCSTransform.GetLocation() + (UKismetMathLibrary::VLerp(Down_Vector, Thigh_Feet_Dir, speed_warping_total).GetSafeNormal() * Thigh_Feet_Len));


		//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Root_Feet_Lenn : " + FString::SanitizeFloat(Root_Feet_Len));

	



		// Transform EffectorLocation from EffectorLocationSpace to ComponentSpace.
	FTransform EffectorTransform(owning_skel->GetComponentToWorld().TransformPosition(eb_wtransform.GetLocation()));

	//	FTransform EffectorTransform(DebugEffectorTransform);

	FAnimationRuntime::ConvertBoneSpaceTransformToCS(owning_skel->GetComponentTransform(), MeshBasesSaved.Pose, EffectorTransform, EffectorSpaceBoneIndex, EffectorLocationSpace);

	// This is our reach goal.
	FVector DesiredPos = EffectorTransform.GetTranslation();
	FVector DesiredDelta = DesiredPos - RootPos;
	float DesiredLength = DesiredDelta.Size();

	// Check to handle case where DesiredPos is the same as RootPos.
	FVector	DesiredDir;
	if (DesiredLength < (float)KINDA_SMALL_NUMBER)
	{
		DesiredLength = (float)KINDA_SMALL_NUMBER;
		DesiredDir = FVector(1, 0, 0);
	}
	else
	{
		DesiredDir = DesiredDelta / DesiredLength;
	}



	// Get joint target (used for defining plane that joint should be in).
	//	FTransform JointTargetTransform(ik_footbone.joint_point);

	//The transform for the bending direction joint point
	FTransform BendingDirectionTransform = LowerLimbCSTransform;


	FVector cs_forward = owning_skel->GetComponentToWorld().InverseTransformVector(owning_skel->GetRightVector());




//	cs_forward = owning_skel->GetComponentToWorld().InverseTransformVector( (((UpperLimb_WS + EndLimb_WS + LowerLimb_WS) / 3) - LowerLimb_WS).GetSafeNormal() );



//	if( dragon_input_data.FeetBones.Num() > spine_Feet_pair[spine_index].order_index[feet_index])
	cs_forward = (((UpperLimbCSTransform.GetLocation() + EndBoneCSTransform.GetLocation() + LowerLimbCSTransform.GetLocation() ) / 3) - (LowerLimbCSTransform.GetLocation() ) ).GetSafeNormal();
	BendingDirectionTransform.SetLocation(BendingDirectionTransform.GetLocation() + cs_forward *-1000);


	FTransform JointTargetTransform(BendingDirectionTransform);


	FVector	JointTargetPos = JointTargetTransform.GetTranslation();
	FVector JointTargetDelta = JointTargetPos - RootPos;
	const float JointTargetLengthSqr = JointTargetDelta.SizeSquared();

	// Same check as above, to cover case when JointTarget position is the same as RootPos.
	FVector JointPlaneNormal, JointBendDir;
	if (JointTargetLengthSqr < FMath::Square((float)KINDA_SMALL_NUMBER))
	{
		JointBendDir = FVector(0, 1, 0);
		//JointPlaneNormal = FVector(0, 0, 1);
		JointPlaneNormal = character_direction_vector;

	}
	else
	{
		JointPlaneNormal = DesiredDir ^ JointTargetDelta;

		// If we are trying to point the limb in the same direction that we are supposed to displace the joint in, 
		// we have to just pick 2 random vector perp to DesiredDir and each other.
		if (JointPlaneNormal.SizeSquared() < FMath::Square((float)KINDA_SMALL_NUMBER))
		{
			DesiredDir.FindBestAxisVectors(JointPlaneNormal, JointBendDir);
		}
		else
		{
			JointPlaneNormal.Normalize();

			// Find the final member of the reference frame by removing any component of JointTargetDelta along DesiredDir.
			// This should never leave a zero vector, because we've checked DesiredDir and JointTargetDelta are not parallel.
			JointBendDir = JointTargetDelta - ((JointTargetDelta | DesiredDir) * DesiredDir);
			JointBendDir.Normalize();
		}
	}


	float LowerLimbLength = (InitialEndPos - InitialJointPos).Size();
	float UpperLimbLength = (InitialJointPos - RootPos).Size();
	float MaxLimbLength = LowerLimbLength + UpperLimbLength;


	FVector OutEndPos = DesiredPos;
	FVector OutJointPos = InitialJointPos;

	// If we are trying to reach a goal beyond the length of the limb, clamp it to something solvable and extend limb fully.
	if (DesiredLength > MaxLimbLength)
	{
		OutEndPos = RootPos + (MaxLimbLength * DesiredDir);
		OutJointPos = RootPos + (UpperLimbLength * DesiredDir);
	}
	else
	{
		// So we have a triangle we know the side lengths of. We can work out the angle between DesiredDir and the direction of the upper limb
		// using the sin rule:
		const float TwoAB = 2.f * UpperLimbLength * DesiredLength;

		const float CosAngle = (TwoAB != 0.f) ? ((UpperLimbLength*UpperLimbLength) + (DesiredLength*DesiredLength) - (LowerLimbLength*LowerLimbLength)) / TwoAB : 0.f;

		// If CosAngle is less than 0, the upper arm actually points the opposite way to DesiredDir, so we handle that.
		const bool bReverseUpperBone = (CosAngle < 0.f);

		// If CosAngle is greater than 1.f, the triangle could not be made - we cannot reach the target.
		// We just have the two limbs double back on themselves, and EndPos will not equal the desired EffectorLocation.
		if ((CosAngle > 1.f) || (CosAngle < -1.f))
		{
			// Because we want the effector to be a positive distance down DesiredDir, we go back by the smaller section.
			if (UpperLimbLength > LowerLimbLength)
			{
				OutJointPos = RootPos + (UpperLimbLength * DesiredDir);
				OutEndPos = OutJointPos - (LowerLimbLength * DesiredDir);
			}
			else
			{
				OutJointPos = RootPos - (UpperLimbLength * DesiredDir);
				OutEndPos = OutJointPos + (LowerLimbLength * DesiredDir);
			}
		}
		else
		{
			// Angle between upper limb and DesiredDir
			const float Angle = FMath::Acos(CosAngle);

			// Now we calculate the distance of the joint from the root -> effector line.
			// This forms a right-angle triangle, with the upper limb as the hypotenuse.
			const float JointLineDist = UpperLimbLength * FMath::Sin(Angle);

			// And the final side of that triangle - distance along DesiredDir of perpendicular.
			// ProjJointDistSqr can't be neg, because JointLineDist must be <= UpperLimbLength because appSin(Angle) is <= 1.
			const float ProjJointDistSqr = (UpperLimbLength*UpperLimbLength) - (JointLineDist*JointLineDist);
			// although this shouldn't be ever negative, sometimes Xbox release produces -0.f, causing ProjJointDist to be NaN
			// so now I branch it. 						
			float ProjJointDist = (ProjJointDistSqr > 0.f) ? FMath::Sqrt(ProjJointDistSqr) : 0.f;
			if (bReverseUpperBone)
			{
				ProjJointDist *= -1.f;
			}

			// So now we can work out where to put the joint!
			OutJointPos = RootPos + (ProjJointDist * DesiredDir) + (JointLineDist * JointBendDir);
		}
	}


	// Update transform for upper bone.
	{
		// Get difference in direction for old and new joint orientations
		FVector const OldDir = (InitialJointPos - RootPos).GetSafeNormal();
		FVector const NewDir = (OutJointPos - RootPos).GetSafeNormal();
		// Find Delta Rotation take takes us from Old to New dir
		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);
		// Rotate our Joint quaternion by this delta rotation




		UpperLimbCSTransform.SetRotation(DeltaRotation * UpperLimbCSTransform.GetRotation());
		// And put joint where it should be.
		UpperLimbCSTransform.SetTranslation(RootPos);

		// Order important. First bone is upper limb.
	}

	// Update transform for lower bone.
	{
		// Get difference in direction for old and new joint orientations
		FVector const OldDir = (InitialEndPos - InitialJointPos).GetSafeNormal();
		FVector const NewDir = (OutEndPos - OutJointPos).GetSafeNormal();

		// Find Delta Rotation take takes us from Old to New dir
		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);





		LowerLimbCSTransform.SetRotation(DeltaRotation * LowerLimbCSTransform.GetRotation());
		// And put joint where it should be.
		LowerLimbCSTransform.SetTranslation(OutJointPos);



		// Order important. Second bone is lower limb.
	}

	// Update transform for end bone.




	{

		// Set correct location for end bone.
		EndBoneCSTransform.SetTranslation(OutEndPos);
		//+ impact_result.ImpactNormal.GetSafeNormal() 


		//		MeshBasesSaved.ResetToRefPose();



	}


	UpperLimbCSTransform.AddToTranslation(FVector(0,0,Hip_Offset));
	LowerLimbCSTransform.AddToTranslation(FVector(0, 0, Hip_Offset));
	EndBoneCSTransform.AddToTranslation(FVector(0, 0, Hip_Offset));


	 

	OutBoneTransforms.Add(FBoneTransform(UpperLimbIndex, UpperLimbCSTransform));
	OutBoneTransforms.Add(FBoneTransform(LowerLimbIndex, LowerLimbCSTransform));
	OutBoneTransforms.Add(FBoneTransform(IKBoneCompactPoseIndex, EndBoneCSTransform));


}





void FAnimNode_DragonWarpSolver::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const
{

#if WITH_EDITORONLY_DATA
	if (DisplayLineTrace && PreviewSkelMeshComp && PreviewSkelMeshComp->GetWorld())
	{
		for (int i = 0; i < TraceStartList.Num(); i++)
		{

			//	DrawDebugLine(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], FColor::Green, false, 0.1f);



			

			
			DrawDebugLine(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], FColor::Green, false, 0.1f);
			
		}

	}
#endif

}



void FAnimNode_DragonWarpSolver::line_trace_func(USkeletalMeshComponent& skelmesh, FVector startpoint, FVector endpoint, FHitResult RV_Ragdoll_Hit, FName bone_text, FName trace_tag, FHitResult& Output, FLinearColor debug_color, bool debug_mode)
{

	

	TArray<AActor*> ignoreActors;

	if (owning_skel->GetOwner())
	{
		ignoreActors.Add(owning_skel->GetOwner());


		//UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, Trace_Channel, true, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, false, debug_color, FLinearColor::Yellow);

		


		 UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, Trace_Channel, true, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color);


	}


	TraceStartList.Add(startpoint);
	TraceEndList.Add(endpoint);


	Output = RV_Ragdoll_Hit;

}








bool FAnimNode_DragonWarpSolver::IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer & RequiredBones)
{


	return (solve_should_fail == false);



}


void FAnimNode_DragonWarpSolver::Evaluate_AnyThread(FPoseContext & Output)
{
}


FAnimNode_DragonWarpSolver::FAnimNode_DragonWarpSolver()
{
	is_initialized = false;


	FRichCurve* Hip_Lifting_CurveData = Hip_Lifting_Curve.GetRichCurve();
	Hip_Lifting_CurveData->AddKey(0.0f, -0.1f);
	Hip_Lifting_CurveData->AddKey(1.0f, 0.0f);
	Hip_Lifting_CurveData->AddKey(1.5f, -0.5f);


	FRichCurve* Limb_Lifting_CurveData = Limb_Lifting_Curve.GetRichCurve();
	Limb_Lifting_CurveData->AddKey(0.0f, 1.0f);
	Limb_Lifting_CurveData->AddKey(1.0f, 0.0f);

}

void FAnimNode_DragonWarpSolver::InitializeBoneReferences(FBoneContainer & RequiredBones)
{

	SavedBoneContainer = &RequiredBones;

	solve_should_fail = false;

	dragon_limb_data.Empty();
	original_foot_array.Empty();


	dragon_limb_data.AddDefaulted(dragon_limb_input.Num());
	original_foot_array.AddDefaulted(dragon_limb_input.Num());


	Hip_Bone_Ref = FBoneReference(Hip_Bone_Name);
	Hip_Bone_Ref.Initialize(RequiredBones);

	if (!Hip_Bone_Ref.IsValidToEvaluate(RequiredBones))
	{
		solve_should_fail = true;
	}


	for (int limb_index = 0; limb_index < dragon_limb_input.Num(); limb_index++)
	{

		dragon_limb_data[limb_index].Foot_Bone_Name = FBoneReference(dragon_limb_input[limb_index].Foot_Bone_Name);
		dragon_limb_data[limb_index].Foot_Bone_Name.Initialize(RequiredBones);

		dragon_limb_data[limb_index].Knee_Bone_Name = FBoneReference(dragon_limb_input[limb_index].Knee_Bone_Name);
		dragon_limb_data[limb_index].Knee_Bone_Name.Initialize(RequiredBones);

		dragon_limb_data[limb_index].Thigh_Bone_Name = FBoneReference(dragon_limb_input[limb_index].Thigh_Bone_Name);
		dragon_limb_data[limb_index].Thigh_Bone_Name.Initialize(RequiredBones);

		dragon_limb_data[limb_index].Warp_Lift_Reference_Location = dragon_limb_input[limb_index].Warp_Lift_Reference_Location;

		if (!dragon_limb_data[limb_index].Foot_Bone_Name.IsValidToEvaluate(RequiredBones))
		{
			solve_should_fail = true;
		}

		if (!dragon_limb_data[limb_index].Knee_Bone_Name.IsValidToEvaluate(RequiredBones))
		{
			solve_should_fail = true;

		}

		if (!dragon_limb_data[limb_index].Thigh_Bone_Name.IsValidToEvaluate(RequiredBones))
		{
			solve_should_fail = true;

		}



	}


}





