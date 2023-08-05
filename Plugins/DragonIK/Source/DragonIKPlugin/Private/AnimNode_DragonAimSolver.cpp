/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "AnimNode_DragonAimSolver.h"
#include "Animation/AnimInstanceProxy.h"
#include "DrawDebugHelpers.h"
#include "AnimationRuntime.h"
#include "AnimationCoreLibrary.h"
#include "Algo/Reverse.h"






// Initialize the component pose as well as defining the owning skeleton
void FAnimNode_DragonAimSolver::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	FAnimNode_DragonControlBase::Initialize_AnyThread(Context);
	//	ComponentPose.Initialize(Context);
	owning_skel = Context.AnimInstanceProxy->GetSkelMeshComponent();




	//	dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);
}


/*
// Cache the bones . Thats it !!
void FAnimNode_DragonAimSolver::CacheBones_AnyThread(const FAnimationCacheBonesContext & Context)
{
	FAnimNode_Base::CacheBones_AnyThread(Context);
	ComponentPose.CacheBones(Context);
	InitializeBoneReferences(Context.AnimInstanceProxy->GetRequiredBones());
}
*/









void FAnimNode_DragonAimSolver::Make_All_Bones(FCSPose<FCompactPose>& MeshBases)
{


	const FBoneContainer& BoneContainer = MeshBases.GetPose().GetBoneContainer();

	TArray<FCompactPoseBoneIndex> BoneIndices;

	{
		const FCompactPoseBoneIndex RootIndex = spine_Feet_pair[0].Spine_Involved.GetCompactPoseIndex(BoneContainer);
		FCompactPoseBoneIndex BoneIndex = spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.GetCompactPoseIndex(BoneContainer);
		do
		{
			BoneIndices.Insert(BoneIndex, 0);
			BoneIndex = MeshBases.GetPose().GetParentBoneIndex(BoneIndex);
		} while (BoneIndex != RootIndex);
		BoneIndices.Insert(BoneIndex, 0);
	}

	combined_indices = BoneIndices;
}






// Store the animated and calculated pose transform data
void FAnimNode_DragonAimSolver::GetAnimatedPoseInfo(FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{
	
	OutBoneTransforms = TArray<FBoneTransform>();






//	if(owning_skel->GetWorld()->IsGameWorld())
	{



		for (int i = 0; i < HeadTransforms.Num(); i++)
		{


			OutBoneTransforms.Add(HeadTransforms[i]);
		}

		for (int i = 0; i < LegIK_Transforms.Num(); i++)
		{
			OutBoneTransforms.Add(LegIK_Transforms[i]);
		}



		for (int i = 0; i < HandIK_Transforms.Num(); i++)
		{

			//OutBoneTransforms.Add(HandIK_Transforms[i]);

			Lerp_HandIK_Transforms[i].BoneIndex = HandIK_Transforms[i].BoneIndex;

			if (Enable_Hand_Interpolation)
				Lerp_HandIK_Transforms[i].Transform = UKismetMathLibrary::TInterpTo(Lerp_HandIK_Transforms[i].Transform, HandIK_Transforms[i].Transform, delta_seconds_saved, Hand_Interpolation_Speed);
			else
				Lerp_HandIK_Transforms[i].Transform = HandIK_Transforms[i].Transform;


			OutBoneTransforms.Add(Lerp_HandIK_Transforms[i]);

		}




		for (int boneindex = 0; boneindex < OutBoneTransforms.Num(); boneindex++)
		{

			if (OutBoneTransforms[boneindex].BoneIndex > -1)
			{

				FTransform original_transform = MeshBases.GetComponentSpaceTransform(OutBoneTransforms[boneindex].BoneIndex);
				OutBoneTransforms[boneindex].Transform = UKismetMathLibrary::TLerp(original_transform, OutBoneTransforms[boneindex].Transform, toggle_alpha);

			}

		}


		



	}

}




void FAnimNode_DragonAimSolver::Evaluate_AnyThread(FPoseContext& Output)
{
}




FTransform FAnimNode_DragonAimSolver::PhysicsAdaptTransform(FCSPose<FCompactPose>& MeshBases,FTransform const Input_Transform) const
{


	FTransform Result_Transform = Input_Transform;

	
	if(Use_Physics_Adaptation)
	{
		
	
	
		int const physics_root_bone_index = owning_skel->GetBoneIndex(physics_root_reference);

		if(physics_root_bone_index > -1)
		{
			FTransform const Pure_Transform = (MeshBases.GetComponentSpaceTransform(FCompactPoseBoneIndex(physics_root_bone_index)))*owner_skel_w_transform;
			FTransform const Existing_Transform = owning_skel->GetBoneTransform(physics_root_bone_index);


			//FTransform pure_transform = (MeshBases.GetComponentSpaceTransform(FCompactPoseBoneIndex(Actual_Shoulder_Array[0].CachedCompactPoseIndex)))*owner_skel_w_transform;
			//FTransform existing_transform = owning_skel->GetBoneTransform(Actual_Shoulder_Array[0].CachedCompactPoseIndex.GetInt());

						

			FTransform target_hand_transform = Result_Transform;
			Result_Transform = Existing_Transform.Inverse()*Pure_Transform;
									
			Result_Transform = target_hand_transform*Result_Transform;
		}
	}

	return Result_Transform;
	
}


void FAnimNode_DragonAimSolver::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const
{


#if WITH_EDITORONLY_DATA
	if (PreviewSkelMeshComp && PreviewSkelMeshComp->GetWorld())
	{
		for (int i = 0; i < TraceStartList.Num(); i++)
		{

			//	DrawDebugLine(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], FColor::Green, false, 0.1f);
			

			{
				DrawDebugLine(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], FColor::Red, false, 0.1f);

			}
		}

	}
#endif

}

//Perform update operations inside this
void FAnimNode_DragonAimSolver::UpdateInternal(const FAnimationUpdateContext& Context)
{
	FAnimNode_DragonControlBase::UpdateInternal(Context);




	if (owning_skel)
	{

		owner_skel_w_transform = owning_skel->GetComponentTransform();



		if (owning_skel->GetOwner() != nullptr)
		{
			delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds* owning_skel->GetOwner()->CustomTimeDilation;
		}
		else
		{
			delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds;
		}
	}
	else
	{
		delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds;
	}


	TraceStartList.Empty();
	TraceEndList.Empty();



	Toggle_Interpolation_Speed = FMath::Clamp<float>(Toggle_Interpolation_Speed, 0.25f, 100);

	Interpolation_Speed = FMath::Clamp<float>(Interpolation_Speed, 0.25f, 100);


	



	bool turn_on_solver = enable_solver;

	if (DisplayLineTrace == false)
	{
		if (owning_skel->GetWorld()->WorldType == EWorldType::EditorPreview)
		{
			turn_on_solver = false;
		}
	}


	if (Adaptive_Terrain_Tail)
	{
		turn_on_solver = enable_solver && TTS_Aim_Hit.bBlockingHit;
	}


	if (turn_on_solver)
		toggle_alpha = UKismetMathLibrary::FInterpTo(toggle_alpha, 1, delta_seconds_saved, Toggle_Interpolation_Speed);
	else
		toggle_alpha = UKismetMathLibrary::FInterpTo(toggle_alpha, 0, delta_seconds_saved, Toggle_Interpolation_Speed);





	TraceStartList.Empty();
	TraceEndList.Empty();


	if (test_counter < 500)
		test_counter++;



	trace_draw_counter++;

	if (trace_draw_counter > 5)
		trace_draw_counter = 0;



	component_scale = owner_skel_w_transform.GetScale3D().Z;


	//	FVector TTS_Ref_Pos = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, Debug_LookAtLocation.GetLocation() );


	FVector TTS_Ref_Pos = (Debug_LookAtLocation * owner_skel_w_transform).GetLocation();


	FVector TTS_Ref_Down = TTS_Ref_Pos;


	if (Adaptive_Terrain_Tail)
		line_trace_func(owning_skel, TTS_Ref_Pos + FVector(0, 0, Trace_Up_Height) * component_scale, TTS_Ref_Down + FVector(0, 0, -Trace_Down_Height) * component_scale, TTS_Aim_Hit, FName(), FName(), TTS_Aim_Hit, FLinearColor::Blue, true);


	FTransform Zeroed_Hit = Debug_LookAtLocation;
	Zeroed_Hit.SetLocation(FVector(Debug_LookAtLocation.GetLocation().X, Debug_LookAtLocation.GetLocation().Y, 0));

	Zeroed_Hit.SetLocation((Zeroed_Hit * owner_skel_w_transform).GetLocation());


	TTS_Height = (TTS_Ref_Pos - Zeroed_Hit.GetLocation()).Size();





	//	GEngine->AddOnScreenDebugMessage(-1, 5.01f, FColor::Red, "Elbow_Bone_Transform_Array " + FString::SanitizeFloat(Elbow_Bone_Transform_Array.Num()));



}






FName FAnimNode_DragonAimSolver::GetChildBone(FName BoneName, USkeletalMeshComponent* skel_mesh)
{

	FName child_bone = skel_mesh->GetBoneName(skel_mesh->GetBoneIndex(BoneName) + 1);

	return child_bone;

}


//Nothing would be needed here
void FAnimNode_DragonAimSolver::EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context)
{
}



void FAnimNode_DragonAimSolver::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	if (toggle_alpha > 0.01f)
	{

		TArray<FBoneTransform> BoneTransforms_input = TArray<FBoneTransform>();


		for (int spine_index = 0; spine_index < dragon_input_data.FeetBones.Num(); spine_index++)
		{
			FBoneReference knee_bone_ref = FBoneReference(dragon_input_data.FeetBones[spine_index].Knee_Bone_Name);


			if (automatic_leg_make == true)
			{
				knee_bone_ref = FBoneReference(dragon_input_data.FeetBones[spine_index].Feet_Bone_Name);
			}

			knee_bone_ref.Initialize(*SavedBoneContainer);

			if (knee_bone_ref.IsValidToEvaluate())
			{
				if (automatic_leg_make == true)
				{
					if (knee_Animated_transform_array.Num() > spine_index)
						knee_Animated_transform_array[spine_index] = Output.Pose.GetComponentSpaceTransform((*SavedBoneContainer).GetParentBoneIndex(knee_bone_ref.CachedCompactPoseIndex));

				}
				else
				{
					if (knee_Animated_transform_array.Num() > spine_index)
						knee_Animated_transform_array[spine_index] = Output.Pose.GetComponentSpaceTransform(knee_bone_ref.CachedCompactPoseIndex);
				}
			}
		}



		FABRIK_BodySystem(Output.Pose, Output, BoneTransforms_input);

		GetAnimatedPoseInfo(Output.Pose, OutBoneTransforms);

	}



}





bool FAnimNode_DragonAimSolver::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{


	//return true;




	for (int i = 0; i < dragon_input_data.FeetBones.Num(); i++)
	{
		//dragon_bone_data.FeetBones[i] = FBoneReference(dragon_input_data.FeetBones[i]);
		//dragon_bone_data.FeetBones.Add(FBoneReference(dragon_input_data.FeetBones[i].Feet_Bone_Name));
		//dragon_bone_data.FeetBones[i].Initialize(RequiredBones);


		//GEngine->AddOnScreenDebugMessage(-1, 5.01f, FColor::Red, "Is single spine "+ dragon_input_data.FeetBones[i].Feet_Bone_Name.ToString());


		FBoneReference foot_bone_ref = FBoneReference(dragon_input_data.FeetBones[i].Feet_Bone_Name);
		foot_bone_ref.Initialize(RequiredBones);


		FBoneReference knee_bone_ref = FBoneReference(dragon_input_data.FeetBones[i].Knee_Bone_Name);
		knee_bone_ref.Initialize(RequiredBones);


		FBoneReference thigh_bone_ref = FBoneReference(dragon_input_data.FeetBones[i].Thigh_Bone_Name);
		thigh_bone_ref.Initialize(RequiredBones);
		

	}

	/*
	for (int i = 0; i < dragon_bone_data.FeetBones.Num(); i++)
	{

		if (dragon_bone_data.FeetBones.Num() == dragon_input_data.FeetBones.Num())
			if (FBoneReference(dragon_bone_data.FeetBones[i]).IsValidToEvaluate(RequiredBones) == false)
			{
				feet_is_true = false;
			}

	}*/



	FBoneReference Pelvis_ref = FBoneReference(dragon_input_data.Pelvis);
	Pelvis_ref.Initialize(RequiredBones);


	FBoneReference Chest_ref = FBoneReference(dragon_input_data.Start_Spine);
	Chest_ref.Initialize(RequiredBones);


	

	if (dragon_bone_data.Pelvis.IsValidToEvaluate(RequiredBones) || dragon_bone_data.Start_Spine.IsValidToEvaluate(RequiredBones))
	{
		return (RequiredBones.BoneIsChildOf(FBoneReference(dragon_bone_data.Start_Spine).BoneIndex, FBoneReference(dragon_bone_data.Pelvis).BoneIndex) && EndSplineBone.IsValidToEvaluate(RequiredBones) && StartSplineBone.IsValidToEvaluate(RequiredBones) && RequiredBones.IsValid() && (RequiredBones.BoneIsChildOf(EndSplineBone.BoneIndex, StartSplineBone.BoneIndex)));
	}

	return (EndSplineBone.IsValidToEvaluate(RequiredBones) && StartSplineBone.IsValidToEvaluate(RequiredBones) && RequiredBones.IsValid() && (RequiredBones.BoneIsChildOf(EndSplineBone.BoneIndex, StartSplineBone.BoneIndex)));


	/*
	return (EndSplineBone.IsValidToEvaluate(RequiredBones) && StartSplineBone.IsValidToEvaluate(RequiredBones) && RequiredBones.IsValid()&&solve_should_fail == false && feet_is_true && dragon_input_data.FeetBones.Num()%2==0&&
		feet_is_empty==false&& Chest_ref.IsValidToEvaluate(RequiredBones) &&
		Pelvis_ref.IsValidToEvaluate(RequiredBones)&&
		RequiredBones.BoneIsChildOf(EndSplineBone.BoneIndex, StartSplineBone.BoneIndex));
		*/

		//return false;

}


// SPLINE IK CODE INITIALIZATION CODE


// SPLINE IK CODE END





FAnimNode_DragonAimSolver::FAnimNode_DragonAimSolver()
{


	Lerped_LookatLocation = FVector::ZeroVector;

	FRichCurve* Look_Bending_CurveData = Look_Bending_Curve.GetRichCurve();
	Look_Bending_CurveData->AddKey(0.f, 0.025f);
	Look_Bending_CurveData->AddKey(1.f, 1.f);


	FRichCurve* Look_Multiplier_CurveData = Look_Multiplier_Curve.GetRichCurve();
	Look_Multiplier_CurveData->AddKey(0.f, 1.0f);
	Look_Multiplier_CurveData->AddKey(1.f, 1.0f);


	LookAt_Axis = FVector(0, 1, 0);
	Reference_Constant_Forward_Axis = FVector(0, 1, 0);
	//LookAt_Axis.bInLocalSpace = false;



//	Debug_Hand_Locations.Reset();
//	Debug_Hand_Locations.SetNum(Aiming_Hand_Limbs.Num());
//	Debug_Hand_Locations.AddDefaulted(Aiming_Hand_Limbs.Num());

//	Debug_Hand_Locations.Reset();

	if (Debug_Hand_Locations.Num() == 0)
		ResizeDebugLocations(2);



	Debug_LookAtLocation.SetLocation(FVector(0, 200, 100));

}




//#if WITH_EDITOR
void FAnimNode_DragonAimSolver::ResizeDebugLocations(int32 NewSize)
{
	if (NewSize == 0)
	{
		Debug_Hand_Locations.Reset();
	}
	else if (Debug_Hand_Locations.Num() != NewSize)
	{
		int32 StartIndex = Debug_Hand_Locations.Num();
		Debug_Hand_Locations.SetNum(NewSize);

		int pair_finish_count = 1;

		for (int32 Index = StartIndex; Index < Debug_Hand_Locations.Num(); ++Index)
		{
			Debug_Hand_Locations[Index] = FTransform::Identity;

			bool is_even = (Index % 2 == 0);

			if (is_even)
			{
				pair_finish_count++;
			}


			if (is_even)
				Debug_Hand_Locations[Index].SetLocation(FVector(50 * pair_finish_count, 75, 75));
			else
				Debug_Hand_Locations[Index].SetLocation(FVector(-50 * pair_finish_count, 75, 75));



		}
	}
}
//#endif 


void FAnimNode_DragonAimSolver::InitializeBoneReferences(FBoneContainer& RequiredBones)
{


	SavedBoneContainer = &RequiredBones;


	solve_should_fail = false;

	if (dragon_input_data.Start_Spine == dragon_input_data.Pelvis)
	{
		solve_should_fail = true;
	}

	dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);
	dragon_bone_data.Start_Spine.Initialize(RequiredBones);

	dragon_bone_data.Pelvis = FBoneReference(dragon_input_data.Pelvis);
	dragon_bone_data.Pelvis.Initialize(RequiredBones);

	if (!RequiredBones.BoneIsChildOf(FBoneReference(dragon_bone_data.Start_Spine).BoneIndex, FBoneReference(dragon_bone_data.Pelvis).BoneIndex))
	{
		solve_should_fail = true;
	}


	if (Use_FName_Bone_Input == true)
	{
		EndSplineBone = FBoneReference(Name_EndSpline_Bone);
		StartSplineBone = FBoneReference(Name_StartSpline_Bone);
	}

	EndSplineBone.Initialize(*SavedBoneContainer);
	StartSplineBone.Initialize(*SavedBoneContainer);

	Hand_Array.Empty();
	Elbow_Array.Empty();
	Shoulder_Array.Empty();
	Actual_Shoulder_Array.Empty();
	
	if (Lerp_HandIK_Transforms.Num() == 0)
		Lerp_HandIK_Transforms.AddDefaulted(Aiming_Hand_Limbs.Num() * 6);

	Last_Shoulder_Angles.Empty();

	Last_Shoulder_Angles.AddDefaulted(Aiming_Hand_Limbs.Num());

	//Extra_Elbow_Pole_Array.SetNum(Aiming_Hand_Limbs.Num());

	//Debug_Hand_Locations.Empty();

	//Debug_Hand_Locations.AddDefaulted(Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num());



//#if WITH_EDITOR
//	ResizeDebugLocations(Aiming_Hand_Limbs.Num());
//#elif
	if (Debug_Hand_Locations.Num() < Aiming_Hand_Limbs.Num())
		ResizeDebugLocations(Aiming_Hand_Limbs.Num());
	//#endif

	for (int i = 0; i < Aiming_Hand_Limbs.Num(); i++)
	{
		if (Debug_Hand_Locations.Num() > i)
		{
			//	Debug_Hand_Locations[i] = FTransform::Identity;

			//	if (!debug_hands_initialized && Debug_Hand_Locations[i].Equals( FTransform::Identity))
			//		Debug_Hand_Locations[i].SetLocation(FVector(-100000, -100000, -100000));
		}

		/*
		Hand_Array.Add(Aiming_Hand_Limbs[i].Hand_Bone_Name);
		Elbow_Array.Add(Aiming_Hand_Limbs[i].Elbow_Bone_Name);
		Shoulder_Array.Add(Aiming_Hand_Limbs[i].Shoulder_Bone_Name);
		Actual_Shoulder_Array.Add(Aiming_Hand_Limbs[i].Shoulder_Bone_Name);



		Hand_Array[i].Initialize(*SavedBoneContainer);
		Elbow_Array[i].Initialize(*SavedBoneContainer);
		Shoulder_Array[i].Initialize(*SavedBoneContainer);
		Actual_Shoulder_Array[i].Initialize(*SavedBoneContainer);
		*/

		Hand_Array.Add(Aiming_Hand_Limbs[i].Hand_Bone_Name);
		Elbow_Array.Add(Aiming_Hand_Limbs[i].Elbow_Bone_Name);
		Shoulder_Array.Add(Aiming_Hand_Limbs[i].Shoulder_Bone_Name);
		Actual_Shoulder_Array.Add(Aiming_Hand_Limbs[i].Shoulder_Bone_Name);

		


		Hand_Array[i].Initialize(*SavedBoneContainer);
		Elbow_Array[i].Initialize(*SavedBoneContainer);
		Shoulder_Array[i].Initialize(*SavedBoneContainer);
		Actual_Shoulder_Array[i].Initialize(*SavedBoneContainer);

		Aiming_Hand_Limbs[i].Clavicle_Bone.Initialize(*SavedBoneContainer);
		Aiming_Hand_Limbs[i].Twist_Forearm_Bone.Initialize(*SavedBoneContainer);

		Aiming_Hand_Limbs[i].Twist_Shoulder_Bone.Initialize(*SavedBoneContainer);

	}



	debug_hands_initialized = true;

	Elbow_Bone_Transform_Array.Empty();
	Hand_Default_Transform_Array.Empty();


	//if (Elbow_Bone_Transform_Array.Num() == 0)
	Elbow_Bone_Transform_Array.AddDefaulted(Aiming_Hand_Limbs.Num());

	//if (Hand_Default_Transform_Array.Num() == 0)
	Hand_Default_Transform_Array.AddDefaulted(Aiming_Hand_Limbs.Num());


	//if (test_counter < 10 && solve_should_fail==false)

	if (solve_should_fail == false)
	{


		spine_Feet_pair.Empty();
		Total_spine_bones.Empty();





		//if (spine_AnimatedTransform_pairs.Num() == 0)
		if (test_counter < 10)
		{

			spine_Transform_pairs.Empty();

			spine_AnimatedTransform_pairs.Empty();

			spine_hit_pairs.Empty();

			spine_LocDifference.Empty();

			spine_RotDifference.Empty();


			Total_spine_heights.Empty();

			Total_spine_alphas.Empty();

			spine_hit_between.Empty();

			spine_hit_edges.Empty();

			knee_Animated_transform_array.Empty();

			//	Elbow_Bone_Transform_Array.Empty();

			//	Hand_Default_Transform_Array.Empty();
		}


		Total_spine_bones = BoneArrayMachine(0, dragon_input_data.Start_Spine, "", "", dragon_input_data.Pelvis, false);

		Algo::Reverse(Total_spine_bones);

		solve_should_fail = false;

		//	spine_Feet_pair.AddDefaulted(Total_spine_bones.Num());





		for (int32 i = 0; i < dragon_input_data.FeetBones.Num(); i++)
		{

			for (int32 j = 0; j < dragon_input_data.FeetBones.Num(); j++)
			{
				if (i != j)
				{
					if (dragon_input_data.FeetBones[i].Feet_Bone_Name == dragon_input_data.FeetBones[j].Feet_Bone_Name)
					{
						solve_should_fail = true;
					}
				}
			}

			BoneArrayMachine(i, dragon_input_data.FeetBones[i].Feet_Bone_Name, dragon_input_data.FeetBones[i].Knee_Bone_Name, dragon_input_data.FeetBones[i].Thigh_Bone_Name, dragon_input_data.Pelvis, true);

		}
		Spine_Indices.Empty();






		Total_spine_angles.Empty();
		Total_Terrain_Locations.Empty();

		const TArray<FDragonData_SpineFeetPair> const_feet_pair = spine_Feet_pair;

		if (test_counter < 10)
			Total_spine_alphas.AddDefaulted(const_feet_pair.Num());

		for (int32 i = 0; i < const_feet_pair.Num(); i++)
		{
			if (test_counter < 10)
				Total_spine_alphas[i] = 0;

			if (const_feet_pair[i].Associated_Feet.Num() == 0 && i < const_feet_pair.Num())
				spine_Feet_pair.Remove(const_feet_pair[i]);



		}

		spine_Feet_pair.Shrink();







		if (spine_Feet_pair.Num() == 1)
		{

			FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
			data.Spine_Involved = FBoneReference(Total_spine_bones[Total_spine_bones.Num() - 1]);
			data.Spine_Involved.Initialize(*SavedBoneContainer);

			spine_Feet_pair.Add(data);



			



		}
		else
		{
			spine_Feet_pair = Swap_Spine_Pairs(spine_Feet_pair);

		}



		/*
		for (int i = 0; i < spine_Feet_pair.Num(); i++)
		{
			for (int j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
			{

				GEngine->AddOnScreenDebugMessage(-1, 20.01f, FColor::Red, "- Bone Feet : " + spine_Feet_pair[i].Associated_Feet[j].BoneName.ToString());
				GEngine->AddOnScreenDebugMessage(-1, 20.01f, FColor::Red, "- Knee Feet : " + spine_Feet_pair[i].Associated_Knees[j].BoneName.ToString());
				GEngine->AddOnScreenDebugMessage(-1, 20.01f, FColor::Red, "- Thigh Feet : " + spine_Feet_pair[i].Associated_Thighs[j].BoneName.ToString());
				GEngine->AddOnScreenDebugMessage(-1, 20.01f, FColor::Red, " -///////////////- " + spine_Feet_pair[i].Associated_Thighs[j].BoneName.ToString());
			}
		}
		*/
		/*
		dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);
		dragon_bone_data.Start_Spine.Initialize(RequiredBones);



		dragon_bone_data.Pelvis = FBoneReference(dragon_input_data.Pelvis);
		dragon_bone_data.Pelvis.Initialize(RequiredBones);
		*/






		if (test_counter < 10)
		{
			spine_hit_pairs.AddDefaulted(spine_Feet_pair.Num());

			//if (spine_Transform_pairs.Num() == 0)
			spine_Transform_pairs.AddDefaulted(spine_Feet_pair.Num());

			//if(spine_AnimatedTransform_pairs.Num() == 0)
			spine_AnimatedTransform_pairs.AddDefaulted(spine_Feet_pair.Num());

			Total_spine_angles.AddDefaulted(spine_Feet_pair.Num());
			Total_Terrain_Locations.AddDefaulted(spine_Feet_pair.Num());
			spine_LocDifference.AddDefaulted(spine_Feet_pair.Num());
			spine_RotDifference.AddDefaulted(spine_Feet_pair.Num());

			knee_Animated_transform_array.AddDefaulted(dragon_input_data.FeetBones.Num());


		}



		//	Total_spine_alphas.AddDefaulted(spine_Feet_pair.Num());



	//	spine_hit_between.AddDefaulted(7);










		for (int32 i = 0; i < spine_Feet_pair.Num(); i++)
		{


			//	spine_Feet_pair[i].Associated_Knees.AddUninitialized(spine_Feet_pair[i].Associated_Feet.Num());
			//	spine_Feet_pair[i].Associated_Thighs.AddUninitialized(spine_Feet_pair[i].Associated_Feet.Num());






			every_foot_dont_have_child = false;
			feet_is_empty = true;



			//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Child Bone " + GetChildBone(spine_Feet_pair[i].Associated_Feet[j].BoneName, owning_skel).ToString());

			for (int32 j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
			{

				FBoneReference Knee_Involved = FBoneReference(owning_skel->GetParentBone(spine_Feet_pair[i].Associated_Feet[j].BoneName));
				Knee_Involved.Initialize(*SavedBoneContainer);

				//	spine_Feet_pair[i].Associated_Knees[j] = Knee_Involved;


			}


			spine_Feet_pair[i].Feet_Heights.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());



			if (test_counter < 10)
			{
				spine_hit_pairs[i].RV_Feet_Hits.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				//if (spine_Transform_pairs.Num() == 0)
				{
					spine_Transform_pairs[i].Associated_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

					spine_Transform_pairs[i].Associated_Knee.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

					spine_Transform_pairs[i].Associated_FeetBalls.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				}

				//if (spine_AnimatedTransform_pairs.Num() == 0)
				{
					spine_AnimatedTransform_pairs[i].Associated_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

					spine_AnimatedTransform_pairs[i].Associated_Knee.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

					spine_AnimatedTransform_pairs[i].Associated_FeetBalls.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				}
			}

			if (spine_Feet_pair[i].Associated_Feet.Num() > 0)
			{
				feet_is_empty = false;
			}

		}






		if (dragon_input_data.Start_Spine == dragon_input_data.Pelvis)
			solve_should_fail = true;

		if (spine_Feet_pair.Num() > 0)
		{
			if (spine_Feet_pair[0].Spine_Involved.BoneIndex > spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.BoneIndex)
				solve_should_fail = true;
		}

		if (!dragon_bone_data.Start_Spine.IsValidToEvaluate(RequiredBones) || !dragon_bone_data.Pelvis.IsValidToEvaluate(RequiredBones))
			solve_should_fail = true;



		Extra_Spine_Indices.Empty();


		if (spine_Feet_pair.Num() > 0)
		{
			spine_Feet_pair[0].Spine_Involved = dragon_bone_data.Pelvis;

			if (spine_Feet_pair.Num() > 1)
				spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved = dragon_bone_data.Start_Spine;
		}

		//	if(enable_solver)
		//	Extra_Spine_Indices.Add(dragon_bone_data.Head_Bone.GetCompactPoseIndex(RequiredBones));

		for (int32 i = 0; i < Total_spine_bones.Num(); i++)
		{
			FBoneReference bone_ref = FBoneReference(Total_spine_bones[i]);
			bone_ref.Initialize(RequiredBones);

			if (spine_Feet_pair.Num() > 0)
			{
				if (bone_ref.BoneIndex >= spine_Feet_pair[0].Spine_Involved.BoneIndex && bone_ref.BoneIndex <= spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.BoneIndex)
					Spine_Indices.Add(bone_ref.GetCompactPoseIndex(RequiredBones));
				else
				{
					Extra_Spine_Indices.Add(bone_ref.GetCompactPoseIndex(RequiredBones));

					//				GEngine->AddOnScreenDebugMessage(-1, 4.01f, FColor::Red, "Extra Bone " + FString::SanitizeFloat(Extra_Spine_Indices[i].GetInt()) );

				}


			}
			else
			{
				Spine_Indices.Add(bone_ref.GetCompactPoseIndex(RequiredBones));

			}

		}


		if (test_counter < 10)
		{
			spine_between_transforms.Empty();

			spine_between_heights.Empty();
		}

		combined_indices.Empty();

		if (spine_Feet_pair.Num() > 1 && solve_should_fail == false)
		{

			TArray<FCompactPoseBoneIndex> BoneIndices;

			{
				const FCompactPoseBoneIndex RootIndex = spine_Feet_pair[0].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer);
				FCompactPoseBoneIndex BoneIndex = spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer);
				do
				{
					BoneIndices.Insert(BoneIndex, 0);

					//owning_skel->GetBoneIndex( owning_skel->GetParentBone(owning_skel->GetBoneName(BoneIndex.GetInt())));
					BoneIndex = FCompactPoseBoneIndex(owning_skel->GetBoneIndex(owning_skel->GetParentBone(owning_skel->GetBoneName(BoneIndex.GetInt()))));
				} while (BoneIndex != RootIndex);
				BoneIndices.Insert(BoneIndex, 0);
			}



			combined_indices = BoneIndices;

			if (test_counter < 10)
			{
				spine_between_transforms.AddDefaulted(combined_indices.Num() - 2);
				spine_hit_edges.AddDefaulted(combined_indices.Num() - 2);
				spine_between_offseted_transforms.AddDefaulted(combined_indices.Num() - 2);

				spine_between_heights.AddDefaulted(combined_indices.Num() - 2);

				snake_spine_positions.AddDefaulted(combined_indices.Num());
			}

		}

		if (test_counter < 10)
			spine_hit_between.AddDefaulted(spine_between_transforms.Num());










		if (dragon_input_data.Pelvis == dragon_input_data.Start_Spine)
		{
			solve_should_fail = true;
		}

		if (!dragon_bone_data.Start_Spine.IsValidToEvaluate(RequiredBones) || !dragon_bone_data.Pelvis.IsValidToEvaluate(RequiredBones))
			solve_should_fail = true;

		//	dragon_bone_data.FeetBones.Add(dragon_input_data.FeetBones.Num() );
		dragon_bone_data.FeetBones.Empty();

		for (int i = 0; i < dragon_input_data.FeetBones.Num(); i++)
		{
			//dragon_bone_data.FeetBones[i] = FBoneReference(dragon_input_data.FeetBones[i]);
			dragon_bone_data.FeetBones.Add(FBoneReference(dragon_input_data.FeetBones[i].Feet_Bone_Name));
			dragon_bone_data.FeetBones[i].Initialize(RequiredBones);

			if (dragon_bone_data.FeetBones[i].IsValidToEvaluate(RequiredBones))
				feet_is_empty = false;


		}


	}
}


TArray<FDragonData_SpineFeetPair> FAnimNode_DragonAimSolver::Swap_Spine_Pairs(TArray<FDragonData_SpineFeetPair>& test_list)
{



	bool is_swapped = false;

	do
	{
		is_swapped = false;

		for (int32 j = 1; j < test_list.Num(); j++)
		{

			for (int32 i = 1; i < test_list[j].Associated_Feet.Num(); i++)
			{
				if (test_list[j].Associated_Feet[i - 1].BoneIndex < test_list[j].Associated_Feet[i].BoneIndex)
				{
					FBoneReference temp = test_list[j].Associated_Feet[i - 1];
					test_list[j].Associated_Feet[i - 1] = test_list[j].Associated_Feet[i];
					test_list[j].Associated_Feet[i] = temp;


					FBoneReference temp_knee = test_list[j].Associated_Knees[i - 1];
					test_list[j].Associated_Knees[i - 1] = test_list[j].Associated_Knees[i];
					test_list[j].Associated_Knees[i] = temp_knee;

					if (!automatic_leg_make)
					{
						FBoneReference temp_thigh = test_list[j].Associated_Thighs[i - 1];
						test_list[j].Associated_Thighs[i - 1] = test_list[j].Associated_Thighs[i];
						test_list[j].Associated_Thighs[i] = temp_thigh;


						int temp_knee_order = test_list[j].order_index[i - 1];
						test_list[j].order_index[i - 1] = test_list[j].order_index[i];
						test_list[j].order_index[i] = temp_knee_order;
					}

					is_swapped = true;
				}


			}
		}

	} while (is_swapped == true);


	return test_list;

}


TArray<FName> FAnimNode_DragonAimSolver::BoneArrayMachine(int32 index, FName starting, FName knee, FName thigh, FName ending, bool is_foot)
{

	TArray<FName> spine_bones;

	int iteration_count = 0;

	spine_bones.Add(starting);

	if (is_foot == false)
	{
		FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
		data.Spine_Involved = FBoneReference(starting);
		data.Spine_Involved.Initialize(*SavedBoneContainer);
		spine_Feet_pair.Add(data);



	}


	bool finish = false;

	do
	{


		if (is_foot)
		{
			if (Check_Loop_Exist(index, dragon_input_data.FeetBones[index].Feet_Trace_Offset, dragon_input_data.FeetBones[index].Feet_Heights, dragon_input_data.FeetBones[index].Knee_Direction_Offset, starting, knee, thigh, spine_bones[spine_bones.Num() - 1], Total_spine_bones))
			{
				return spine_bones;
			}
		}



		iteration_count++;
		spine_bones.Add(owning_skel->GetParentBone(spine_bones[iteration_count - 1]));


		if (is_foot == false)
		{

			FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
			data.Spine_Involved = FBoneReference(spine_bones[spine_bones.Num() - 1]);
			data.Spine_Involved.Initialize(*SavedBoneContainer);
			spine_Feet_pair.Add(data);


		}


		if (spine_bones[spine_bones.Num() - 1] == ending && is_foot == false)
		{

			return spine_bones;
		}

	} while (iteration_count < 50 && finish == false);


	return spine_bones;


}


bool FAnimNode_DragonAimSolver::Check_Loop_Exist(int index, FVector feet_trace_offset, float feet_height, FVector knee_pole, FName start_bone, FName knee_bone, FName thigh_bone, FName input_bone, TArray<FName>& total_spine_bones)
{

	for (int32 i = 0; i < total_spine_bones.Num(); i++)
	{
		if (input_bone.ToString().TrimStartAndEnd().Equals(total_spine_bones[i].ToString().TrimStartAndEnd()))
		{
			if (spine_Feet_pair.Num() > i)
			{
				FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
				data.Spine_Involved = FBoneReference(total_spine_bones[i]);
				data.Spine_Involved.Initialize(*SavedBoneContainer);

				FBoneReference foot_bone = FBoneReference(start_bone);
				foot_bone.Initialize(*SavedBoneContainer);
				data.Associated_Feet.Add(foot_bone);

				spine_Feet_pair[i].Spine_Involved = data.Spine_Involved;
				spine_Feet_pair[i].Associated_Feet.Add(foot_bone);
				spine_Feet_pair[i].Feet_Heights.Add(feet_height);
				spine_Feet_pair[i].feet_trace_offset.Add(feet_trace_offset);
				spine_Feet_pair[i].knee_direction_offset.Add(knee_pole);
				spine_Feet_pair[i].order_index.Add(index);


				//if (enable_solver == false)
				//if (!automatic_leg_make)
				{

					FBoneReference knee_bone_ref = FBoneReference(knee_bone);
					knee_bone_ref.Initialize(*SavedBoneContainer);
					spine_Feet_pair[i].Associated_Knees.Add(knee_bone_ref);

					FBoneReference thigh_bone_ref = FBoneReference(thigh_bone);
					thigh_bone_ref.Initialize(*SavedBoneContainer);
					spine_Feet_pair[i].Associated_Thighs.Add(thigh_bone_ref);
				}



				//	GEngine->AddOnScreenDebugMessage(-1, 10.01f, FColor::Red, "Bone Feet : " + spine_Feet_pair[i].Associated_Feet[spine_Feet_pair[i].Associated_Feet.Num()-1].BoneName.ToString());
				//	GEngine->AddOnScreenDebugMessage(-1, 10.01f, FColor::Red, "Knee Feet : " + spine_Feet_pair[i].Associated_Knees[spine_Feet_pair[i].Associated_Feet.Num() - 1].BoneName.ToString());
				//	GEngine->AddOnScreenDebugMessage(-1, 10.01f, FColor::Red, "Thigh Feet : " + spine_Feet_pair[i].Associated_Thighs[spine_Feet_pair[i].Associated_Feet.Num() - 1].BoneName.ToString());
				//	GEngine->AddOnScreenDebugMessage(-1, 10.01f, FColor::Red, "///////////////");


				return true;
			}
		}
	}

	return false;
}







FCollisionQueryParams FAnimNode_DragonAimSolver::getDefaultSpineColliParams(FName name, AActor* me, bool debug_mode)
{

	const FName TraceTag(name);

	FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, me);
	RV_TraceParams.bTraceComplex = true;
	//	RV_TraceParams.bTraceAsyncScene = true;
	RV_TraceParams.bReturnPhysicalMaterial = false;
	RV_TraceParams.TraceTag = TraceTag;

	//	if(debug_mode)
	//	me->GetWorld()->DebugDrawTraceTag = TraceTag;


	return RV_TraceParams;
}


void FAnimNode_DragonAimSolver::line_trace_func(USkeletalMeshComponent* skelmesh, FVector startpoint, FVector endpoint, FHitResult RV_Ragdoll_Hit, FName bone_text, FName trace_tag, FHitResult& Output, FLinearColor debug_color, bool debug_mode)
{




	TArray<AActor*> ignoreActors;

	if (owning_skel->GetOwner())
	{
		ignoreActors.Add(owning_skel->GetOwner());
		UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, Trace_Channel, true, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color);
	}


	TraceStartList.Add(startpoint);
	TraceEndList.Add(endpoint);

	Output = RV_Ragdoll_Hit;


}





FVector ClampRotateVector(FVector input_position, FVector forward_vector_dir, FVector origin_location, float min_clamp_degrees, float max_clamp_degree, float hori_clamp_min, float hori_clamp_max, bool use_natural_rotations)
{
	float Magnitude = (origin_location - input_position).Size();

	FVector rot1_v = (forward_vector_dir).GetSafeNormal();
	//	rot1_v = FVector::CrossProduct(FVector::UpVector, rot1_v);


	FVector rot2_v = (input_position - origin_location).GetSafeNormal();

	//FVector rot3_v = rot2_v;
	//	rot3_v.Y = 0;
	//	rot3_v.Z = 0;

	float Degrees = UKismetMathLibrary::DegAcos(FVector::DotProduct(rot1_v, rot2_v));


	//float Degrees_Vertical = UKismetMathLibrary::DegAcos(FVector::DotProduct(rot1_v, rot3_v));
	FVector Angle_Cross_Result = FVector::CrossProduct(rot2_v, rot1_v);
	float Dir = FVector::DotProduct(Angle_Cross_Result, FVector::CrossProduct(FVector::UpVector, rot1_v));
	float Alpha_Dir_Vertical = (Dir / 2) + 0.5f;

	//float Degrees_Horizontal = UKismetMathLibrary::DegAcos(FVector::DotProduct(rot1_v, rot3_v));
	FVector Angle_Cross_Result_Horizontal = FVector::CrossProduct(rot2_v, rot1_v);
	float Dir_Horizontal = FVector::DotProduct(Angle_Cross_Result_Horizontal, FVector::UpVector);
	float Alpha_Dir_Horizontal = (Dir_Horizontal / 2) + 0.5f;

	//	float Max_Side_Angle = hori_clamp_max;
	//	float Min_Side_Angle = hori_clamp_min;

	float Max_Vertical_Angle = max_clamp_degree;
	float Min_Vertical_Angle = min_clamp_degrees;

	Max_Vertical_Angle = use_natural_rotations ? Max_Vertical_Angle : FMath::Clamp<float>(Max_Vertical_Angle, -85, 85);
	Min_Vertical_Angle = use_natural_rotations ? Min_Vertical_Angle : FMath::Clamp<float>(Min_Vertical_Angle, -85, 85); ;


	float Horizontal_Degree_Priority = (FMath::Lerp<float>(FMath::Abs<float>(hori_clamp_min), FMath::Abs<float>(hori_clamp_max), FMath::Clamp<float>(Alpha_Dir_Horizontal, 0, 1)));

	float Vertical_Degree_Priority = (FMath::Lerp<float>(FMath::Abs<float>(Min_Vertical_Angle), FMath::Abs<float>(Max_Vertical_Angle), FMath::Clamp<float>(Alpha_Dir_Vertical, 0, 1)));



	//	Dir = Dir > 0 ? 1:-1;

	//	float selected_clamp_value = FMath::Lerp(FMath::Abs<float>(min_clamp_degrees), FMath::Abs<float>(max_clamp_degree),  FMath::Clamp<float>( Dir,0,1));
	//	float selected_clamp_value = FMath::Abs<float>(max_clamp_degree);

	float selected_clamp_value = FMath::Lerp<float>(Vertical_Degree_Priority, Horizontal_Degree_Priority, FMath::Clamp<float>(FMath::Abs<float>(Dir_Horizontal), 0, 1));

	float Alpha = (selected_clamp_value / (FMath::Max<float>(selected_clamp_value, Degrees)));
	Alpha = FMath::Clamp<float>(Alpha, 0, 1);


	//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Alpha : " + FString::SanitizeFloat(Alpha));


	//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Dir : "+ FString::SanitizeFloat(Vertical_Degree_Priority) + " Dir_Horizontal : " + FString::SanitizeFloat(Horizontal_Degree_Priority));
	FVector output_rot = UKismetMathLibrary::VLerp(rot1_v, rot2_v, Alpha);
	return (origin_location + (output_rot.GetSafeNormal() * Magnitude));
}


void FAnimNode_DragonAimSolver::FABRIK_BodySystem(FCSPose<FCompactPose>& MeshBases, FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{



	if (Use_Reference_Forward_Axis)
		Reference_Constant_Forward_Temp = Reference_Constant_Forward_Axis;
	else
		Reference_Constant_Forward_Temp = LookAt_Axis;




	//	if (toggle_alpha > 0.01f)
	{



		FTransform LookAtLocation_Temp = LookAtLocation;


		LookAtLocation_Temp = PhysicsAdaptTransform(MeshBases,LookAtLocation_Temp);




		//if (!owning_skel->GetWorld()->IsGameWorld() && Work_Outside_PIE==false)
		//	LookAtLocation_Temp = Debug_LookAtLocation;


		FVector arm_average_position = FVector::ZeroVector;

		if (Aggregate_Hand_Body && Use_Separate_Targets)
		{
			for (int arm_index = 0; arm_index < Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num(); arm_index++)
			{

				FVector Arm_Position;


				if ((owning_skel->GetWorld()->IsGameWorld() || Work_Outside_PIE))
				{
					Arm_Position = Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[arm_index].Overrided_Arm_Transform.GetLocation();

				}
				else
				{
					if (Debug_Hand_Locations.Num() > arm_index)
						Arm_Position = Debug_Hand_Locations[arm_index].GetLocation();
				}



				//	arm_average_position += Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[arm_index].Overrided_Arm_Transform.GetLocation();

				arm_average_position += Arm_Position;


			}

			if (Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num() > 0)
			{

				arm_average_position = arm_average_position / Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num();

				//arm_average_position = (FVector::ZeroVector - arm_average_position)

				//LookAtLocation_Temp.SetLocation((LookAtLocation_Temp.GetLocation() + arm_average_position) / 2);


			}
		}




		for (int arm_index = 0; arm_index < Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num(); arm_index++)
		{


			if ((owning_skel->GetWorld()->IsGameWorld() || Work_Outside_PIE))
			{

				//	Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[arm_index].Overrided_Arm_Transform.GetLocation();

				if (Debug_Hand_Locations.Num() > arm_index)
				{
					Debug_Hand_Locations[arm_index] = Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[arm_index].Overrided_Arm_Transform;

					Debug_Hand_Locations[arm_index] = PhysicsAdaptTransform(MeshBases,Debug_Hand_Locations[arm_index]);

					
				}

			}
			else
			{
				//	Arm_Position = Debug_Hand_Locations[arm_index].GetLocation();



					/*
					if (Debug_Hand_Locations[arm_index].GetLocation().Equals(FVector(-100000, -100000, -100000)))
					{

						FTransform Hand_Transform_Default = MeshBases.GetComponentSpaceTransform(Hand_Array[arm_index].CachedCompactPoseIndex);
						Debug_Hand_Locations[arm_index].SetLocation(Hand_Transform_Default.GetLocation());



					}
					*/

			}

		}



		




		if ((owning_skel->GetWorld()->IsGameWorld() || Work_Outside_PIE))
		{

		}
		else
		{
			LookAtLocation_Temp = Debug_LookAtLocation;

		}



		if (!enable_head_aim)
		{

			Head_Orig_Transform = MeshBases.GetComponentSpaceTransform(EndSplineBone.CachedCompactPoseIndex);

			LookAtLocation_Temp.SetLocation(Head_Orig_Transform.GetLocation() + LookAt_Axis * 100000);


			LookAtLocation_Temp = LookAtLocation_Temp*owner_skel_w_transform;
		}




		if (automatic_leg_make)
		{
			for (int spineindex = 0; spineindex < spine_Feet_pair.Num(); spineindex++)
			{
				for (int footindex = 0; footindex < spine_Feet_pair[spineindex].Associated_Feet.Num(); footindex++)
				{
					//	if (spine_Feet_pair[spineindex].Associated_Knees.Num()==0)
					{
						FCompactPoseBoneIndex Knee_Index = MeshBases.GetPose().GetParentBoneIndex(spine_Feet_pair[spineindex].Associated_Feet[footindex].CachedCompactPoseIndex);
						spine_Feet_pair[spineindex].Associated_Knees[footindex] = (FBoneReference(owning_skel->GetBoneName(Knee_Index.GetInt())));
						spine_Feet_pair[spineindex].Associated_Knees[footindex].Initialize(*SavedBoneContainer);

						FCompactPoseBoneIndex Thigh_Index = MeshBases.GetPose().GetParentBoneIndex(Knee_Index);
						spine_Feet_pair[spineindex].Associated_Thighs[footindex] = (FBoneReference(owning_skel->GetBoneName(Thigh_Index.GetInt())));
						spine_Feet_pair[spineindex].Associated_Thighs[footindex].Initialize(*SavedBoneContainer);

					}
				}
			}

		}




		if (enable_solver)
		{
			HeadTransforms.Empty();
			Ref_HeadTransforms.Empty();



			FAxis LookatAxis_Temp;
			LookatAxis_Temp.bInLocalSpace = false;
			LookatAxis_Temp.Axis = LookAt_Axis.GetSafeNormal();


			if (Adaptive_Terrain_Tail)
			{



				if (TTS_Aim_Hit.bBlockingHit)
					LookAtLocation_Temp.SetLocation(TTS_Aim_Hit.ImpactPoint + FVector(0, 0, TTS_Height));
				else
				{
					FVector TTS_Ref_Pos = (Debug_LookAtLocation * owner_skel_w_transform).GetLocation();
					LookAtLocation_Temp.SetLocation(TTS_Ref_Pos);
				}

				//LookAtLocation_Temp = Debug_LookAtLocation*owner_skel_w_transform;


			//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Angle_Of_Target " + TTS_Aim_Hit.ImpactPoint.ToString());


			}


			Head_Orig_Transform = MeshBases.GetComponentSpaceTransform(EndSplineBone.CachedCompactPoseIndex);




			//FVector target_dir = (LookAtLocation_Temp.GetLocation() - Head_Orig_Transform.GetLocation()).GetSafeNormal();
			//float Diff_Length = (LookAtLocation_Temp.GetLocation() - Head_Orig_Transform.GetLocation()).Size();			


			/*
			float AimClampInRadians_Temp = FMath::DegreesToRadians(FMath::Min(Lookat_Clamp, 180.f));
			float Angle_Of_Target = FMath::Acos(FVector::DotProduct(target_dir,LookatAxis_Temp.Axis));

			if (Angle_Of_Target < AimClampInRadians_Temp)
			{
				GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Angle_Of_Target " + FString::SanitizeFloat(Angle_Of_Target));

				LookAtLocation_Saved = LookAtLocation_Temp;
			}

		//	LookAtLocation_Temp.SetLocation( Head_Orig_Transform.GetLocation() + target_dir *Diff_Length );

		//	LookAtLocation_Temp = LookAtLocation_Saved;
			LookAtLocation_Temp.SetLocation(FVector(LookAtLocation_Temp.GetLocation().X, LookAtLocation_Saved.GetLocation().Y, LookAtLocation_Temp.GetLocation().Z));
			*/




			//|| (Lerped_LookatLocation-LookAtLocation_Temp.GetLocation()).Size() > 1000 

			if (Lerped_LookatLocation == FVector::ZeroVector)
				Lerped_LookatLocation = LookAtLocation_Temp.GetLocation();

			//	Lerped_LookatLocation = UKismetMathLibrary::VLerp(Lerped_LookatLocation,LookAtLocation_Temp.GetLocation(),owning_skel->GetWorld()->GetDeltaSeconds()* Interpolation_Speed);

			Lerped_LookatLocation = AnimLocLerp(Lerped_LookatLocation, LookAtLocation_Temp.GetLocation(), delta_seconds_saved * Interpolation_Speed);

			//	AnimLocLerp(FVector start_pos, FVector end_pos, float delta_seconds);

			LookAtLocation_Temp.SetLocation(Lerped_LookatLocation);





			LookAtLocation_Temp.SetLocation(ClampRotateVector(LookAtLocation_Temp.GetLocation(), owner_skel_w_transform.TransformVector(LookAt_Axis), owner_skel_w_transform.TransformPosition(Head_Orig_Transform.GetLocation()), Verticle_Range_Angles.X, Verticle_Range_Angles.Y, Horizontal_Range_Angles.X, Horizontal_Range_Angles.Y, Use_Natural_Method));


			FTransform LookHeadTransform = FTransform::Identity;
			LookHeadTransform = (LookAtLocation_Temp);


			FTransform LookTargetTransform = FTransform::Identity;
			LookTargetTransform = (LookAtLocation_Temp);

			FVector Head_World = owner_skel_w_transform.TransformPosition(Head_Orig_Transform.GetLocation());


			if (Aggregate_Hand_Body && Use_Separate_Targets)
			{
				

				FVector Clamped_Target_Dir = (LookAtLocation_Temp.GetLocation() - Head_World).GetSafeNormal();

				float Head_Arm_Distance = (Head_World - arm_average_position).Size() * 2;

				{
					LookAtLocation_Temp.SetLocation(Head_World + Clamped_Target_Dir * Head_Arm_Distance);
					LookTargetTransform.SetLocation((LookAtLocation_Temp.GetLocation() + arm_average_position) / 2);
					LookAtLocation_Temp.SetLocation((LookAtLocation_Temp.GetLocation() + arm_average_position) / 2);
				}

				

			}


			



			if (look_transform_space == EInputTransformSpace_DragonIK::ENUM_WorldSpaceSystem)
			{

				FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBases, LookTargetTransform, EndSplineBone.GetCompactPoseIndex(*SavedBoneContainer), EBoneControlSpace::BCS_WorldSpace);

				FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBases, LookHeadTransform, EndSplineBone.GetCompactPoseIndex(*SavedBoneContainer), EBoneControlSpace::BCS_WorldSpace);

			}
			else
			{

			//	FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBases, LookAtLocation_Temp, EndSplineBone.GetCompactPoseIndex(*SavedBoneContainer), EBoneControlSpace::BCS_ComponentSpace);
				

			}


			//	LookTargetTransform.SetLocation(ClampRotateVector(LookTargetTransform.GetLocation(), LookAt_Axis, Head_Orig_Transform.GetLocation(), Verticle_Range_Angles.X, Verticle_Range_Angles.Y));




				//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " TEST ");



			nsew_pole_method = false;

			if (pole_system_input == EPole_System_DragonIK::ENUM_NSEWPoleSystem)
			{
				nsew_pole_method = true;
			}

			up_arm_twist_technique = false;

			if (arm_twist_axis == ETwist_Type_DragonIK::ENUM_UpAxisTwist)
			{
				up_arm_twist_technique = true;
			}






			




			UDragonIK_Library::Evaluate_ConsecutiveBoneRotations(Output, owning_skel, owner_skel_w_transform, spine_Feet_pair, Look_Bending_Curve, StartSplineBone, EndSplineBone, Lookat_Radius, Inner_Body_Clamp, LookAtLocation_Temp, LookatAxis_Temp, Lookat_Radius, Vertical_Dip_Treshold, Downward_Dip_Multiplier, Inverted_Dip_Multiplier, Side_Move_Multiplier, Side_Down_Multiplier, false, FTransform::Identity, Look_Multiplier_Curve, Up_Rot_Clamp, Use_Natural_Method, Head_Use_Separate_Clamp, Lookat_Clamp, LookHeadTransform, Override_Head_Rotation, look_transform_space, HeadTransforms);
			//	Evaluate_ConsecutiveBoneRotations(FComponentSpacePoseContext & Output, USkeletalMeshComponent * owning_skel, FRuntimeFloatCurve Look_Bending_Curve, FBoneReference RootBone_Input, FBoneReference TipBone_Input, float Lookat_Radius, FTransform EffectorTransform, FAxis LookUp_Axis, FAxis LookAt_Axis, float Lookat_Clamp, FRotator HeadRotOffset, TArray<FBoneTransform> & OutBoneTransforms)

			//	UDragonIK_Library::Evaluate_CCDIK_Modified(Output, owning_skel, StartSplineBone, EndSplineBone, Precision, MaxIterations, true, true, Lookat_Radius, Lock_Forward_Axis, Lock_Side_Axis, Head_WSTransform, FabrikOffset, Ref_HeadTransforms);
			//	UDragonIK_Library::Evaluate_CCDIK_Modified(Output, owning_skel, StartSplineBone, EndSplineBone, Precision, MaxIterations, true, true, Lookat_Radius, Lock_Forward_Axis, Lock_Side_Axis, LookAtLocation, FabrikOffset, Ref_HeadTransforms);



				//	UDragonIK_Library::Evaluate_SplineIK_Modified(Output,owning_skel,CachedBoneReferences,ControlPoints,TransformedSpline,BoneSpline,LinearApproximation,Roll,TwistStart,TwistEnd,TwistBlend, HeadTransforms);


			if (Is_Head_Accurate)
			{

				//	FBoneTransform Lookat_Rotation_Rotator = LookAt_Processor(MeshBases, LookTargetTransform.GetLocation(), EndSplineBone.BoneName, HeadTransforms.Num() - 1, Lookat_Radius);

				//	FBoneTransform Lookat_Rotation_Rotator = HeadTransforms[HeadTransforms.Num()-1];

				//	HeadTransforms[HeadTransforms.Num() - 1] = Lookat_Rotation_Rotator;

				if (Override_Head_Rotation)
				{

					//	HeadTransforms[HeadTransforms.Num() - 1].Transform.SetRotation(LookAtLocation_Temp.GetRotation() * Head_Orig_Transform.GetRotation());

					HeadTransforms[HeadTransforms.Num() - 1].Transform.SetRotation((owner_skel_w_transform.GetRotation().Inverse() * LookAtLocation_Temp.GetRotation()) * Head_Orig_Transform.GetRotation());


				}
				else
				{
					HeadTransforms[HeadTransforms.Num() - 1].Transform.SetRotation(LookAt_Processor(MeshBases, LookHeadTransform.GetLocation(), EndSplineBone.BoneName, HeadTransforms.Num() - 1, Lookat_Clamp).Transform.GetRotation());
				}

			}



			TArray<FCompactPoseBoneIndex> HeadTransformPoses = TArray<FCompactPoseBoneIndex>();

			for (int transformindex = 0; transformindex < HeadTransforms.Num(); transformindex++)
			{
				HeadTransformPoses.Add(HeadTransforms[transformindex].BoneIndex);
			}



			//	FBoneReference foot_bone_ref = FBoneReference(spine_Feet_pair[0].Associated_Feet);
			//	foot_bone_ref.Initialize(*SavedBoneContainer);


			LegIK_Transforms.Empty();
			HandIK_Transforms.Empty();



			//FQuat Pelvis_Difference = RootBone_Transform.GetRotation().Inverse() * pelvis_transform.GetRotation();

			if (Lock_Legs)
				for (int i = 0; i < spine_Feet_pair.Num(); i++)
				{

					bool is_valid_bone = false;

					int common_bone_index = 0;

					for (int k = 0; k < HeadTransforms.Num(); k++)
					{
						if (spine_Feet_pair[i].Spine_Involved.BoneIndex == HeadTransforms[k].BoneIndex.GetInt())
						{
							is_valid_bone = true;

							common_bone_index = k;
						}
					}


					FTransform  RootBone_Transform = MeshBases.GetComponentSpaceTransform(HeadTransforms[common_bone_index].BoneIndex);


					if (is_valid_bone)
						for (int j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
						{

							//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Bone Feet : " + spine_Feet_pair[i].Associated_Feet[j].BoneName.ToString());
							//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Knee Feet : " + spine_Feet_pair[i].Associated_Knees[j].BoneName.ToString());
							//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Thigh Feet : " + spine_Feet_pair[i].Associated_Thighs[j].BoneName.ToString());
							//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "///////////////" + spine_Feet_pair[i].Associated_Thighs[j].BoneName.ToString());


							if (spine_Feet_pair[i].Associated_Knees[j].IsValidToEvaluate() && spine_Feet_pair[i].Associated_Thighs[j].IsValidToEvaluate() && spine_Feet_pair[i].Associated_Feet.Num() > 0 && spine_Feet_pair[i].Associated_Knees.Num() > 0 && spine_Feet_pair[i].Associated_Thighs.Num() > 0)
							{

								FTransform  Thigh_Transform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[i].Associated_Thighs[j].CachedCompactPoseIndex);

								//FTransform  Thigh_Transform = DebugEffectorTransform * owner_skel_w_transform.Inverse();


								FTransform Inv_Pelvis_Thigh = Thigh_Transform * RootBone_Transform.Inverse();

								Thigh_Transform = Inv_Pelvis_Thigh * HeadTransforms[common_bone_index].Transform;

								//	if (j > 10)

								if (dragon_input_data.FeetBones.Num() > spine_Feet_pair[i].order_index[j])
								{
									//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Knee_Direction_Offset Feet : " + FString::SanitizeFloat(spine_Feet_pair[i].order_index[j])+" at knee "+ spine_Feet_pair[i].Associated_Knees[j].BoneName.ToString());

									UDragonIK_Library::Evaluate_TwoBoneIK_Modified(Output, owning_skel, owner_skel_w_transform, spine_Feet_pair[i].Associated_Feet[j], spine_Feet_pair[i].Associated_Knees[j], spine_Feet_pair[i].Associated_Thighs[j], Thigh_Transform, LookTargetTransform.GetLocation(), dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Knee_Direction_Offset, LookAt_Axis, Reference_Constant_Forward_Temp, LegIK_Transforms); //spine_Feet_pair[i].knee_direction_offset[j]


								}


							}


						}
				}





			//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "LegIK_Transforms value : " + FString::SanitizeFloat(LegIK_Transforms.Num()));






			if (!ignore_separate_hand_solving)
			{

				if (!reach_instead)
				{
					if (Main_Arm_Index > -1 && Main_Arm_Index < Hand_Array.Num())
					{


						if (Actual_Shoulder_Array[Main_Arm_Index].IsValidToEvaluate() && Elbow_Array[Main_Arm_Index].IsValidToEvaluate() && Hand_Array[Main_Arm_Index].IsValidToEvaluate())
						{

							//	FTransform  Shoulder_Transform = MeshBases.GetComponentSpaceTransform(Shoulder_Array[limb_index].CachedCompactPoseIndex);
							//	FTransform  Elbow_Transform = MeshBases.GetComponentSpaceTransform(Elbow_Array[limb_index].CachedCompactPoseIndex);
							//	FTransform  Hand_Transform = MeshBases.GetComponentSpaceTransform(Hand_Array[limb_index].CachedCompactPoseIndex);

							FCompactPoseBoneIndex Connector_Index = FCompactPoseBoneIndex(0);

							FTransform Common_Spine_Modified_Transform = FTransform::Identity;


							for (int body_index = 0; body_index < HeadTransforms.Num(); body_index++)
							{


								//	FVector Arm_LookTarget = LookAtLocation_Temp.GetLocation();


								//	Arm_LookTarget = Arm_TargetLocation_Overrides[body_index];

								FCompactPoseBoneIndex First_Level = MeshBases.GetPose().GetParentBoneIndex(Actual_Shoulder_Array[Main_Arm_Index].CachedCompactPoseIndex);

								if (HeadTransforms[body_index].BoneIndex == First_Level)
								{
									Connector_Index = HeadTransforms[body_index].BoneIndex;

									Common_Spine_Modified_Transform = HeadTransforms[body_index].Transform;
								}


								FCompactPoseBoneIndex Second_Level = MeshBases.GetPose().GetParentBoneIndex(First_Level);

								if (HeadTransforms[body_index].BoneIndex == Second_Level)
								{
									Connector_Index = HeadTransforms[body_index].BoneIndex;

									Common_Spine_Modified_Transform = HeadTransforms[body_index].Transform;
								}


							}


							if (Connector_Index.GetInt() > 0)
							{

								FVector Arm_LookTarget = LookAtLocation_Temp.GetLocation();

								FTransform  Common_Spine_Transform = MeshBases.GetComponentSpaceTransform(Connector_Index);


								FVector Target_CS_Position = owner_skel_w_transform.InverseTransformPosition(Arm_LookTarget);


								/*
								if (Aiming_Hand_Limbs[Main_Arm_Index].override_limits)
									Target_CS_Position = (ClampRotateVector(Arm_LookTarget, owner_skel_w_transform.TransformVector(LookAt_Axis), owner_skel_w_transform.TransformPosition(Head_Orig_Transform.GetLocation()), Aiming_Hand_Limbs[Main_Arm_Index].Max_Arm_V_Angle.X, Aiming_Hand_Limbs[Main_Arm_Index].Max_Arm_V_Angle.Y, Aiming_Hand_Limbs[Main_Arm_Index].Max_Arm_H_Angle.X, Aiming_Hand_Limbs[Main_Arm_Index].Max_Arm_H_Angle.Y, Use_Natural_Method));
								else
									Target_CS_Position = (ClampRotateVector(Arm_LookTarget, owner_skel_w_transform.TransformVector(LookAt_Axis), owner_skel_w_transform.TransformPosition(Head_Orig_Transform.GetLocation()), Verticle_Range_Angles.X, Verticle_Range_Angles.Y, Horizontal_Range_Angles.X, Horizontal_Range_Angles.Y, Use_Natural_Method));
									*/

								Target_CS_Position += TargetOffset;

								Target_CS_Position += Aiming_Hand_Limbs[Main_Arm_Index].Arm_Aiming_Offset;

								FTransform Inv_Common_Spine = Common_Spine_Transform.Inverse() * Common_Spine_Modified_Transform;


								FTransform  Hand_Transform_Default = MeshBases.GetComponentSpaceTransform(Hand_Array[Main_Arm_Index].CachedCompactPoseIndex);
								FTransform  Shoulder_Transform_Default = MeshBases.GetComponentSpaceTransform(Actual_Shoulder_Array[Main_Arm_Index].CachedCompactPoseIndex);
								FTransform  Knee_Transform_Default = MeshBases.GetComponentSpaceTransform(Elbow_Array[Main_Arm_Index].CachedCompactPoseIndex);


								//	if(Debug_Hand_Locations[Main_Arm_Index].GetLocation().Equals( FVector(-100000, -100000, -100000)))
								//	Debug_Hand_Locations[Main_Arm_Index].SetLocation(Hand_Transform_Default.GetLocation());



								FTransform Hand_Transform = MeshBases.GetComponentSpaceTransform(Hand_Array[Main_Arm_Index].CachedCompactPoseIndex) * Inv_Common_Spine;
								FTransform Shoulder_Transform = MeshBases.GetComponentSpaceTransform(Actual_Shoulder_Array[Main_Arm_Index].CachedCompactPoseIndex) * Inv_Common_Spine;


								FTransform Shoulder_Offseted_Transform = Shoulder_Transform_Default;
								Shoulder_Offseted_Transform.SetLocation(Shoulder_Transform.GetLocation());

								float Individual_Leg_Clamp = Limbs_Clamp;



								FTransform Rotated_Shoulder = UDragonIK_Library::LookAt_Processor(Shoulder_Offseted_Transform, Common_Spine_Transform.GetLocation(), Target_CS_Position, LookatAxis_Temp, Individual_Leg_Clamp, FRotator(0, 0, 0), Use_Natural_Method, 1, 1);
								FTransform Inv_Shoulder_Value = Shoulder_Transform_Default.Inverse() * Rotated_Shoulder;

								FTransform Shoulder_Transform_Output = Shoulder_Transform_Default * Inv_Shoulder_Value;
								FTransform Knee_Transform_Output = Knee_Transform_Default * Inv_Shoulder_Value;
								FTransform Hand_Transform_Output = Hand_Transform_Default * Inv_Shoulder_Value;


								FVector Arm_Vector = (Hand_Transform_Output.GetLocation() - Shoulder_Transform_Output.GetLocation());
								float Arm_Length = Arm_Vector.Size();
								float Target_Arm_Length = (Common_Spine_Modified_Transform.GetLocation() - Target_CS_Position).Size();

								Target_Arm_Length = FMath::Clamp<float>(Target_Arm_Length, 1, Arm_Length);
								Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + Arm_Vector.GetSafeNormal() * Target_Arm_Length);

								Common_Spine_Transform.SetLocation(Target_CS_Position);

								if (!ignore_elbow_modification)
								{


									FTransform Main_Relative_Transform = (Main_Hand_Default_Transform.Inverse() * Main_Hand_New_Transform);
									FTransform Offseted_Hand_Transform = Hand_Transform_Default * Main_Relative_Transform;

									if (Main_Arm_Index < 0)
									{
										Main_Relative_Transform = FTransform::Identity;
										Offseted_Hand_Transform = Hand_Transform;

										//	Offseted_Hand_Transform.SetLocation(Target_CS_Position);
									}



									//Offseted_Hand_Transform.AddToTranslation( ( Main_Hand_Default_Transform.Inverse() * Hand_Transform_Default).GetLocation() );


									FTransform Hand_Spine_Relation = Hand_Transform_Default * Inv_Common_Spine;

									if (reach_instead)
									{
										Offseted_Hand_Transform.SetLocation(Target_CS_Position);

										Offseted_Hand_Transform.SetLocation(ClampRotateVector(owner_skel_w_transform.TransformPosition(Offseted_Hand_Transform.GetLocation()), owner_skel_w_transform.TransformVector(LookAt_Axis), owner_skel_w_transform.TransformPosition(Shoulder_Transform_Output.GetLocation()), Aiming_Hand_Limbs[Main_Arm_Index].Max_Arm_V_Angle.X, Aiming_Hand_Limbs[Main_Arm_Index].Max_Arm_V_Angle.Y, Aiming_Hand_Limbs[Main_Arm_Index].Max_Arm_H_Angle.X, Aiming_Hand_Limbs[Main_Arm_Index].Max_Arm_H_Angle.Y, Use_Natural_Method));

										Offseted_Hand_Transform.SetLocation(owner_skel_w_transform.InverseTransformPosition(Offseted_Hand_Transform.GetLocation()));

										//Offseted_Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + (Point_Thigh_Dir * Point_Thigh_Size) );


										Shoulder_Transform_Output = Shoulder_Transform_Default * Inv_Common_Spine;
										Knee_Transform_Output = Knee_Transform_Default * Inv_Common_Spine;
										Hand_Transform_Output = Hand_Spine_Relation;

										FVector Point_Thigh_Dir = (Offseted_Hand_Transform.GetLocation() - Shoulder_Transform_Output.GetLocation());

										float Point_Thigh_Size = Point_Thigh_Dir.Size();

										float Effector_Thigh_Size = (Hand_Transform_Output.GetLocation() - Shoulder_Transform_Output.GetLocation()).Size();

										Point_Thigh_Dir.Normalize();

										Offseted_Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + Point_Thigh_Dir * FMath::Clamp<float>(Point_Thigh_Size, Effector_Thigh_Size * FMath::Abs(Aiming_Hand_Limbs[Main_Arm_Index].Minimum_Extension), Effector_Thigh_Size * FMath::Abs(Aiming_Hand_Limbs[Main_Arm_Index].Maximum_Extension)));


									}
									else
									{
										Offseted_Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + (Arm_Vector.GetSafeNormal() * FMath::Clamp<float>(Arm_Length, Arm_Length * FMath::Abs(Aiming_Hand_Limbs[Main_Arm_Index].Minimum_Extension), Arm_Length * FMath::Abs(Aiming_Hand_Limbs[Main_Arm_Index].Maximum_Extension))));

									}

									if (Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num() > Main_Arm_Index)
									{


										if (Override_Hand_Rotation)
										{
											if (hand_rotation_method == ERotation_Type_DragonIK::ENUM_AdditiveRotation)
											{
												FQuat Offseted_Rotation_Value = owner_skel_w_transform.GetRotation().Inverse() * Debug_Hand_Locations[Main_Arm_Index].GetRotation();
												Offseted_Hand_Transform.SetRotation(Offseted_Rotation_Value);
											}
											else
											{

												Offseted_Hand_Transform.SetRotation(Debug_Hand_Locations[Main_Arm_Index].GetRotation());

											}

										}


										Offseted_Hand_Transform.SetRotation(Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[Main_Arm_Index].rotation_offset.Quaternion() * Offseted_Hand_Transform.GetRotation());


										Offseted_Hand_Transform = UKismetMathLibrary::TLerp(Hand_Spine_Relation, Offseted_Hand_Transform, Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[Main_Arm_Index].Arm_Alpha);

									}




									//	UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified(Output, owning_skel, Hand_Array[limb_index], Elbow_Array[limb_index], Actual_Shoulder_Array[limb_index], Offseted_Hand_Transform, Shoulder_Transform_Output, Knee_Transform_Output, Hand_Transform_Output, FVector(0, 0, 0), FVector(0, 0, 0), Inv_Common_Spine, Common_Spine_Transform, Limb_Rotation_Offset, Aiming_Hand_Limbs[limb_index].Local_Direction_Axis, Aiming_Hand_Limbs[limb_index].relative_axis, Individual_Leg_Clamp, Aiming_Hand_Limbs[limb_index].accurate_hand_rotation, Main_Relative_Transform, Aiming_Hand_Limbs[limb_index].Elbow_Pole_Offset, Override_Hand_Rotation, Knee_Transform_Default, HandIK_Transforms);

									float main_arm_LSA = 0;


									FDragonData_ArmSizeStruct custom_arm_temp = FDragonData_ArmSizeStruct();


									if (custom_arm_lengths.CustomArmSizeArray.Num() > Main_Arm_Index)
									{
										custom_arm_temp = custom_arm_lengths.CustomArmSizeArray[Main_Arm_Index];
									}





									ArmIKParamStruct arm_ik_params;


									arm_ik_params.mesh_component_transform = owner_skel_w_transform;
									arm_ik_params.FeetBone = Hand_Array[Main_Arm_Index];
									arm_ik_params.KneeBone = Elbow_Array[Main_Arm_Index];
									arm_ik_params.ThighBone = Actual_Shoulder_Array[Main_Arm_Index];
									arm_ik_params.twist_elbow_bone = Aiming_Hand_Limbs[Main_Arm_Index].Twist_Forearm_Bone;
									arm_ik_params.twist_shoulder_bone = Aiming_Hand_Limbs[Main_Arm_Index].Twist_Shoulder_Bone;
									arm_ik_params.ThighTransform = Offseted_Hand_Transform;
									arm_ik_params.Shoulder_Trans = Shoulder_Transform_Output;
									arm_ik_params.Knee_Trans = Knee_Transform_Output;
									arm_ik_params.Hand_Trans = Hand_Transform_Output;
									arm_ik_params.JointLocation = FVector(0, 0, 0);
									arm_ik_params.Knee_Pole_Offset = FVector(0, 0, 0);
									arm_ik_params.transform_offset = Inv_Common_Spine;
									arm_ik_params.Common_Spine_Modified_Transform = Common_Spine_Transform;
									arm_ik_params.Limb_Rotation_Offset = Limb_Rotation_Offset;



									arm_ik_params.Hand_Clamp_Value = Individual_Leg_Clamp;
									arm_ik_params.Extra_Hand_Offset = FTransform::Identity;
									arm_ik_params.Elbow_Pole_Offset = Aiming_Hand_Limbs[Main_Arm_Index].Elbow_Pole_Offset;
									arm_ik_params.override_hand_rotation = Override_Hand_Rotation;
									arm_ik_params.Knee_Transform_Default = Knee_Transform_Default;
									arm_ik_params.LookAt_Axis_Input = LookAt_Axis;
									arm_ik_params.Reference_Constant_Forward_Axis_Input = Reference_Constant_Forward_Temp;


									arm_ik_params.Use_NSEW_Poles = nsew_pole_method;
									arm_ik_params.up_arm_twist_technique = up_arm_twist_technique;
									arm_ik_params.Up_Vector_Val = Upward_Axis;
									arm_ik_params.Separate_Arms_Logic_Used = Use_Separate_Targets;
									arm_ik_params.is_reach_mode = reach_instead;
									arm_ik_params.bAllowHandStretching = bAllowHandStretching;
									arm_ik_params.Let_Arm_Twist_With_Hand = Let_Arm_Twist_With_Hand;
									arm_ik_params.rotation_method = hand_rotation_method;
									arm_ik_params.arm_alpha = 1;
									arm_ik_params.custom_arm_size = custom_arm_temp;


									if (pole_system_input == EPole_System_DragonIK::ENUM_PoseBendSystem)
										arm_ik_params.Auto_Calculated_Poles = true;

									if(Extra_Elbow_Pole_Array.Num() > Main_Arm_Index && Extra_Elbow_Pole_Array.Num() > 0)
									arm_ik_params.Extra_Elbow_Pole_Offset = Extra_Elbow_Pole_Array[Main_Arm_Index];


									UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified(Output, owning_skel, arm_ik_params, Aiming_Hand_Limbs[Main_Arm_Index], main_arm_LSA, HandIK_Transforms);

									Main_Hand_New_Transform = HandIK_Transforms[0].Transform;

									Main_Hand_Default_Transform = Hand_Transform_Default;

								}
								else
									HandIK_Transforms.Add(FBoneTransform(Actual_Shoulder_Array[Main_Arm_Index].CachedCompactPoseIndex, Rotated_Shoulder));

							}
						

						}


					}

				}

				for (int limb_index = 0; limb_index < Aiming_Hand_Limbs.Num(); limb_index++)
				{


					//Debug_Hand_Locations[limb_index].SetLocation();

					Actual_Shoulder_Array[limb_index] = Shoulder_Array[limb_index];
					FCompactPoseBoneIndex current_parent = Actual_Shoulder_Array[limb_index].CachedCompactPoseIndex;
					FCompactPoseBoneIndex Last_Saved_Bone = current_parent;



					if (Aiming_Hand_Limbs[limb_index].Clavicle_Bone.IsValidToEvaluate() && !reach_instead)
					{

						Actual_Shoulder_Array[limb_index] = Aiming_Hand_Limbs[limb_index].Clavicle_Bone;

					}
					else
					{
						for (int i = 0; i < 5; i++)
						{
							if (Actual_Shoulder_Array[limb_index].BoneIndex > 0)
							{
								//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Last_Saved_Bone[limb_index] : " + Actual_Shoulder_Array[limb_index].BoneName.ToString());

								Last_Saved_Bone = Actual_Shoulder_Array[limb_index].GetCompactPoseIndex(*SavedBoneContainer);

								if (Last_Saved_Bone.GetInt() > -1)
								{

									FCompactPoseBoneIndex Ref_Parent = MeshBases.GetPose().GetParentBoneIndex(Last_Saved_Bone);
									//current_parent = MeshBases.GetPose().GetParentBoneIndex(Actual_Shoulder_Array[limb_index].CachedCompactPoseIndex);


									if (HeadTransformPoses.Contains(Ref_Parent))
									{
										break;
									}


									//if (Spine_Index_Ref == current_parent)
									{


										if (!reach_instead && !Use_Separate_Targets)
										{
											//	Actual_Shoulder_Array[limb_index] = FBoneReference(owning_skel->GetBoneName(Last_Saved_Bone.GetInt()));
											Actual_Shoulder_Array[limb_index] = FBoneReference(owning_skel->GetBoneName(current_parent.GetInt()));
											Actual_Shoulder_Array[limb_index].Initialize(*SavedBoneContainer);
										}

										if (limb_index < Actual_Shoulder_Array.Num() && limb_index > -1)
										{
											if (Actual_Shoulder_Array[limb_index].GetCompactPoseIndex(*SavedBoneContainer).GetInt() > -1)
												current_parent = MeshBases.GetPose().GetParentBoneIndex(Actual_Shoulder_Array[limb_index].GetCompactPoseIndex(*SavedBoneContainer));
										}
									}


								}

							}
							else
							{
								break;
							}
						}
					}
				}


				for (int limb_index = 0; limb_index < Aiming_Hand_Limbs.Num(); limb_index++)
				{


					/*
					if (Hand_Array[limb_index].IsValidToEvaluate() && Elbow_Array[limb_index].IsValidToEvaluate() && Elbow_Array[limb_index].IsValidToEvaluate())
					{


					}*/

					//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Actual_Shoulder_Array[limb_index] : "+ Actual_Shoulder_Array[limb_index].BoneName.ToString());




					//if (Actual_Shoulder_Array[limb_index].IsValidToEvaluate() && Elbow_Array[limb_index].IsValidToEvaluate() && Hand_Array[limb_index].IsValidToEvaluate() && (limb_index != Main_Arm_Index || Main_Arm_Index < 0) || reach_instead)


					if ((Actual_Shoulder_Array[limb_index].IsValidToEvaluate() && Elbow_Array[limb_index].IsValidToEvaluate() && Hand_Array[limb_index].IsValidToEvaluate()) && (limb_index != Main_Arm_Index || Main_Arm_Index < 0 || reach_instead))
					{

						if (Elbow_Bone_Transform_Array.Num() > limb_index)
							Elbow_Bone_Transform_Array[limb_index] = MeshBases.GetComponentSpaceTransform(Elbow_Array[limb_index].CachedCompactPoseIndex);


						if (Hand_Default_Transform_Array.Num() > limb_index)
							Hand_Default_Transform_Array[limb_index] = MeshBases.GetComponentSpaceTransform(Hand_Array[limb_index].CachedCompactPoseIndex);


						//	FTransform  Shoulder_Transform = MeshBases.GetComponentSpaceTransform(Shoulder_Array[limb_index].CachedCompactPoseIndex);
						//	FTransform  Elbow_Transform = MeshBases.GetComponentSpaceTransform(Elbow_Array[limb_index].CachedCompactPoseIndex);
						//	FTransform  Hand_Transform = MeshBases.GetComponentSpaceTransform(Hand_Array[limb_index].CachedCompactPoseIndex);

						FCompactPoseBoneIndex Connector_Index = FCompactPoseBoneIndex(0);

						FTransform Common_Spine_Modified_Transform = FTransform::Identity;


						FVector Arm_LookTarget = LookAtLocation_Temp.GetLocation();

						if (Use_Separate_Targets)
						{

							if (Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num() > limb_index)
							{
								if (Debug_Hand_Locations.Num() > limb_index)
								{
									Arm_LookTarget = Debug_Hand_Locations[limb_index].GetLocation();
								}

							}
							//	Arm_LookTarget = UKismetMathLibrary::VLerp(Arm_LookTarget, Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[limb_index].Arm_Alpha);
						}

						//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Arm_LookTarget[0] : " + Arm_LookTarget.ToString());


						for (int body_index = 0; body_index < HeadTransforms.Num(); body_index++)
						{

							FCompactPoseBoneIndex First_Level = MeshBases.GetPose().GetParentBoneIndex(Actual_Shoulder_Array[limb_index].CachedCompactPoseIndex);

							if (HeadTransforms[body_index].BoneIndex == First_Level)
							{
								Connector_Index = HeadTransforms[body_index].BoneIndex;

								Common_Spine_Modified_Transform = HeadTransforms[body_index].Transform;
							}


							FCompactPoseBoneIndex Second_Level = MeshBases.GetPose().GetParentBoneIndex(First_Level);

							if (HeadTransforms[body_index].BoneIndex == Second_Level)
							{
								Connector_Index = HeadTransforms[body_index].BoneIndex;

								Common_Spine_Modified_Transform = HeadTransforms[body_index].Transform;
							}


						}


						if (Connector_Index.GetInt() > 0)
						{

							FTransform  Common_Spine_Transform = MeshBases.GetComponentSpaceTransform(Connector_Index);

							FVector Target_CS_Position = owner_skel_w_transform.InverseTransformPosition(Arm_LookTarget);

							//Target_CS_Position = (ClampRotateVector(Aferrm_LookTarget, owner_skel_w_transform.TransformVector(LookAt_Axis), owner_skel_w_transform.TransformPosition(Head_Orig_Transform.GetLocation()), Aiming_Hand_Limbs[limb_index].Max_Arm_V_Angle.X, Aiming_Hand_Limbs[limb_index].Max_Arm_V_Angle.Y, Aiming_Hand_Limbs[limb_index].Max_Arm_H_Angle.X, Aiming_Hand_Limbs[limb_index].Max_Arm_H_Angle.Y, Use_Natural_Method));

							if (Aiming_Hand_Limbs[limb_index].override_limits)
								Target_CS_Position = (ClampRotateVector(Arm_LookTarget, owner_skel_w_transform.TransformVector(LookAt_Axis), owner_skel_w_transform.TransformPosition(Head_Orig_Transform.GetLocation()), Aiming_Hand_Limbs[limb_index].Max_Arm_V_Angle.X, Aiming_Hand_Limbs[limb_index].Max_Arm_V_Angle.Y, Aiming_Hand_Limbs[limb_index].Max_Arm_H_Angle.X, Aiming_Hand_Limbs[limb_index].Max_Arm_H_Angle.Y, Use_Natural_Method));
							else
								Target_CS_Position = (ClampRotateVector(Arm_LookTarget, owner_skel_w_transform.TransformVector(LookAt_Axis), owner_skel_w_transform.TransformPosition(Head_Orig_Transform.GetLocation()), Verticle_Range_Angles.X, Verticle_Range_Angles.Y, Horizontal_Range_Angles.X, Horizontal_Range_Angles.Y, Use_Natural_Method));


							if (arm_transform_space == EInputTransformSpace_DragonIK::ENUM_WorldSpaceSystem)
							{
								Target_CS_Position = owner_skel_w_transform.InverseTransformPosition(Target_CS_Position);
							}


							Target_CS_Position += TargetOffset;

							Target_CS_Position += Aiming_Hand_Limbs[limb_index].Arm_Aiming_Offset;




							FTransform Inv_Common_Spine = Common_Spine_Transform.Inverse() * Common_Spine_Modified_Transform;


							FTransform  Hand_Transform_Default = MeshBases.GetComponentSpaceTransform(Hand_Array[limb_index].CachedCompactPoseIndex);
							FTransform  Shoulder_Transform_Default = MeshBases.GetComponentSpaceTransform(Actual_Shoulder_Array[limb_index].CachedCompactPoseIndex);
							FTransform  Knee_Transform_Default = MeshBases.GetComponentSpaceTransform(Elbow_Array[limb_index].CachedCompactPoseIndex);


							//if (Debug_Hand_Locations[limb_index].GetLocation().Equals(FVector(-100000, -100000, -100000)))
							//Debug_Hand_Locations[limb_index].SetLocation(Hand_Transform_Default.GetLocation());


							FTransform Hand_Transform = MeshBases.GetComponentSpaceTransform(Hand_Array[limb_index].CachedCompactPoseIndex) * Inv_Common_Spine;
							FTransform Shoulder_Transform = MeshBases.GetComponentSpaceTransform(Actual_Shoulder_Array[limb_index].CachedCompactPoseIndex) * Inv_Common_Spine;


							FTransform Shoulder_Offseted_Transform = Shoulder_Transform_Default;
							Shoulder_Offseted_Transform.SetLocation(Shoulder_Transform.GetLocation());

							float Individual_Leg_Clamp = Limbs_Clamp;



							FTransform Rotated_Shoulder = UDragonIK_Library::LookAt_Processor(Shoulder_Offseted_Transform, Common_Spine_Transform.GetLocation(), Target_CS_Position, LookatAxis_Temp, Individual_Leg_Clamp, FRotator(0, 0, 0), Use_Natural_Method, 1, 1);
							FTransform Inv_Shoulder_Value = Shoulder_Transform_Default.Inverse() * Rotated_Shoulder;

							FTransform Shoulder_Transform_Output = Shoulder_Transform_Default * Inv_Shoulder_Value;
							FTransform Knee_Transform_Output = Knee_Transform_Default * Inv_Shoulder_Value;
							FTransform Hand_Transform_Output = Hand_Transform_Default * Inv_Shoulder_Value;

							//Hand_Transform_Output.SetLocation(Target_CS_Position);

							FVector Arm_Vector = (Hand_Transform_Output.GetLocation() - Shoulder_Transform_Output.GetLocation());
							float Arm_Length = Arm_Vector.Size();
							float Target_Arm_Length = (Common_Spine_Modified_Transform.GetLocation() - Target_CS_Position).Size();

							Target_Arm_Length = FMath::Clamp<float>(Target_Arm_Length, 1, Arm_Length);
							Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + Arm_Vector.GetSafeNormal() * Target_Arm_Length);

							Common_Spine_Transform.SetLocation(Target_CS_Position);

							if (!ignore_elbow_modification)
							{

								//	FTransform Main_Hand_Default_Transform;Main_Hand_New_Transform

								//    FTransform Main_Relative_Transform =   Hand_Transform_Default * Main_Hand_Default_Transform.Inverse();
								//	Main_Relative_Transform = FTransform::Identity;
								//	FTransform Offseted_Hand_Transform = Main_Hand_New_Transform + Main_Relative_Transform;






								FTransform Main_Relative_Transform = (Main_Hand_Default_Transform.Inverse() * Main_Hand_New_Transform);
								FTransform Offseted_Hand_Transform = Hand_Transform_Default * Main_Relative_Transform;


								if (Main_Arm_Index < 0 || reach_instead)
								{
									Main_Relative_Transform = FTransform::Identity;
									Offseted_Hand_Transform = Hand_Transform;

									//	Offseted_Hand_Transform.SetLocation(Target_CS_Position);
								}



								//Offseted_Hand_Transform.AddToTranslation( ( Main_Hand_Default_Transform.Inverse() * Hand_Transform_Default).GetLocation() );


								FTransform Hand_Spine_Relation = Hand_Transform_Default * Inv_Common_Spine;

								FTransform Elbow_Pole_Transform = FTransform::Identity;



								if (reach_instead)
								{



									Offseted_Hand_Transform.SetLocation(Target_CS_Position);

									//Offseted_Hand_Transform.SetLocation(ClampRotateVector(owner_skel_w_transform.TransformPosition(Offseted_Hand_Transform.GetLocation()), owner_skel_w_transform.TransformVector(LookAt_Axis), owner_skel_w_transform.TransformPosition(Shoulder_Transform_Output.GetLocation()), Aiming_Hand_Limbs[limb_index].Max_Arm_V_Angle.X, Aiming_Hand_Limbs[limb_index].Max_Arm_V_Angle.Y, Aiming_Hand_Limbs[limb_index].Max_Arm_H_Angle.X, Aiming_Hand_Limbs[limb_index].Max_Arm_H_Angle.Y, Use_Natural_Method));

									//Offseted_Hand_Transform.SetLocation(owner_skel_w_transform.InverseTransformPosition(Offseted_Hand_Transform.GetLocation()));

									//Offseted_Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + (Point_Thigh_Dir * Point_Thigh_Size) );


									Shoulder_Transform_Output = Shoulder_Transform_Default * Inv_Common_Spine;
									Knee_Transform_Output = Knee_Transform_Default * Inv_Common_Spine;
									Hand_Transform_Output = Hand_Spine_Relation;

									FVector Point_Thigh_Dir = (Offseted_Hand_Transform.GetLocation() - Shoulder_Transform_Output.GetLocation());

									float Point_Thigh_Size = Point_Thigh_Dir.Size();

									float Effector_Thigh_Size = (Hand_Transform_Output.GetLocation() - Shoulder_Transform_Output.GetLocation()).Size();

									Point_Thigh_Dir.Normalize();

									Offseted_Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + Point_Thigh_Dir * FMath::Clamp<float>(Point_Thigh_Size, Effector_Thigh_Size * FMath::Abs(Aiming_Hand_Limbs[limb_index].Minimum_Extension), Effector_Thigh_Size * FMath::Abs(Aiming_Hand_Limbs[limb_index].Maximum_Extension)));


									Elbow_Pole_Transform.SetLocation(Aiming_Hand_Limbs[limb_index].Elbow_Pole_Offset);
									Elbow_Pole_Transform = Elbow_Pole_Transform * Inv_Shoulder_Value;

								}
								else
								{

									FVector Point_Thigh_Dir = (Target_CS_Position - Shoulder_Transform_Output.GetLocation());

									float Point_Thigh_Size = Point_Thigh_Dir.Size();

									FVector Arm_Hand_Vector = (Offseted_Hand_Transform.GetLocation() - Shoulder_Transform_Output.GetLocation()).GetSafeNormal();

									Offseted_Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + (Arm_Hand_Vector * FMath::Clamp<float>(Point_Thigh_Size, Arm_Length * FMath::Abs(Aiming_Hand_Limbs[limb_index].Minimum_Extension), Arm_Length * FMath::Abs(Aiming_Hand_Limbs[limb_index].Maximum_Extension))));

								}


								float Hand_Alpha = 1;


								if (Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num() > limb_index)
								{


									//Debug_Hand_Locations[limb_index].SetRotation( Debug_Hand_Locations[limb_index].GetRotation() * Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[limb_index].rotation_offset.Quaternion());

									FQuat Hand_Temp_Rot = (Debug_Hand_Locations[limb_index].GetRotation() * Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[limb_index].rotation_offset.Quaternion());


									Hand_Alpha = Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[limb_index].Arm_Alpha;



									if (Override_Hand_Rotation)
									{

										if (hand_rotation_method == ERotation_Type_DragonIK::ENUM_AdditiveRotation)
										{
											FQuat Offseted_Rotation_Value = owner_skel_w_transform.GetRotation().Inverse() * Hand_Temp_Rot;

											Offseted_Hand_Transform.SetRotation(Offseted_Rotation_Value);
										}
										else
										{
											Offseted_Hand_Transform.SetRotation(Hand_Temp_Rot);

										}


									}


									//Offseted_Hand_Transform.SetRotation(Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[limb_index].rotation_offset.Quaternion() * Offseted_Hand_Transform.GetRotation());



									Offseted_Hand_Transform = UKismetMathLibrary::TLerp(Hand_Spine_Relation, Offseted_Hand_Transform, Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[limb_index].Arm_Alpha);



								}
								else
								{
									if (Override_Hand_Rotation)
									{
										FQuat Offseted_Rotation_Value = owner_skel_w_transform.GetRotation().Inverse() * LookAtLocation.GetRotation();

										Offseted_Hand_Transform.SetRotation(Offseted_Rotation_Value);
									}
								}


							//	if (arm_transform_space == EInputTransformSpace_DragonIK::ENUM_ComponentSpaceSystem)
							//	{

									//Offseted_Hand_Transform = Offseted_Hand_Transform*owner_skel_w_transform;

									//Offseted_Hand_Transform.SetToRelativeTransform(owner_skel_w_transform);

									//FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBases, World_Rotatation_Transform, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);


							//	}

								//Offseted_Hand_Transform = Hand_Transform_Default * Main_Relative_Transform;



								//custom_arm_lengths.CustomArmSizeArray[limb_index]

								FDragonData_ArmSizeStruct custom_arm_temp = FDragonData_ArmSizeStruct();


								if (custom_arm_lengths.CustomArmSizeArray.Num() > limb_index)
								{
									custom_arm_temp = custom_arm_lengths.CustomArmSizeArray[limb_index];
								}








								ArmIKParamStruct arm_ik_params;


								arm_ik_params.mesh_component_transform = owner_skel_w_transform;
								arm_ik_params.FeetBone = Hand_Array[limb_index];
								arm_ik_params.KneeBone = Elbow_Array[limb_index];
								arm_ik_params.ThighBone = Actual_Shoulder_Array[limb_index];
								arm_ik_params.twist_elbow_bone = Aiming_Hand_Limbs[limb_index].Twist_Forearm_Bone;
								arm_ik_params.twist_shoulder_bone = Aiming_Hand_Limbs[limb_index].Twist_Shoulder_Bone;
								arm_ik_params.ThighTransform = Offseted_Hand_Transform;
								arm_ik_params.Shoulder_Trans = Shoulder_Transform_Output;
								arm_ik_params.Knee_Trans = Knee_Transform_Output;
								arm_ik_params.Hand_Trans = Hand_Transform_Output;
								arm_ik_params.JointLocation = FVector(0, 0, 0);
								arm_ik_params.Knee_Pole_Offset = FVector(0, 0, 0);
								arm_ik_params.transform_offset = Inv_Common_Spine;
								arm_ik_params.Common_Spine_Modified_Transform = Common_Spine_Transform;
								arm_ik_params.Limb_Rotation_Offset = Limb_Rotation_Offset;



								arm_ik_params.Hand_Clamp_Value = Individual_Leg_Clamp;
								arm_ik_params.Extra_Hand_Offset = Main_Relative_Transform;
								arm_ik_params.Elbow_Pole_Offset = Elbow_Pole_Transform.GetLocation();
								arm_ik_params.override_hand_rotation = Override_Hand_Rotation;
								arm_ik_params.Knee_Transform_Default = Knee_Transform_Default;
								arm_ik_params.LookAt_Axis_Input = LookAt_Axis;
								arm_ik_params.Reference_Constant_Forward_Axis_Input = Reference_Constant_Forward_Temp;


								arm_ik_params.Use_NSEW_Poles = nsew_pole_method;
								arm_ik_params.up_arm_twist_technique = up_arm_twist_technique;
								arm_ik_params.Up_Vector_Val = Upward_Axis;
								arm_ik_params.Separate_Arms_Logic_Used = Use_Separate_Targets;
								arm_ik_params.is_reach_mode = reach_instead;
								arm_ik_params.bAllowHandStretching = bAllowHandStretching;
								arm_ik_params.Let_Arm_Twist_With_Hand = Let_Arm_Twist_With_Hand;
								arm_ik_params.rotation_method = hand_rotation_method;
								arm_ik_params.arm_alpha = Hand_Alpha;
								arm_ik_params.custom_arm_size = custom_arm_temp;


								if (pole_system_input == EPole_System_DragonIK::ENUM_PoseBendSystem)
									arm_ik_params.Auto_Calculated_Poles = true;


								if (Extra_Elbow_Pole_Array.Num() > limb_index && Extra_Elbow_Pole_Array.Num() > 0)
								arm_ik_params.Extra_Elbow_Pole_Offset = Extra_Elbow_Pole_Array[limb_index];
								else
									arm_ik_params.Extra_Elbow_Pole_Offset = FVector(0,0,0);




								UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified(Output, owning_skel, arm_ik_params, Aiming_Hand_Limbs[limb_index], Last_Shoulder_Angles[limb_index], HandIK_Transforms);




								//	UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified(Output, owning_skel, Hand_Array[limb_index], Elbow_Array[limb_index], Actual_Shoulder_Array[limb_index], Offseted_Hand_Transform, Shoulder_Transform_Output, Knee_Transform_Output, Hand_Transform_Output, FVector(0, 0, 0), FVector(0, 0, 0), Inv_Common_Spine, Common_Spine_Transform, Limb_Rotation_Offset, Aiming_Hand_Limbs[limb_index].Local_Direction_Axis, Aiming_Hand_Limbs[limb_index].relative_axis, Individual_Leg_Clamp, Aiming_Hand_Limbs[limb_index].accurate_hand_rotation, Main_Relative_Transform, Elbow_Pole_Transform.GetLocation(), Override_Hand_Rotation, Knee_Transform_Default, HandIK_Transforms);

							}
							else
								HandIK_Transforms.Add(FBoneTransform(Actual_Shoulder_Array[limb_index].CachedCompactPoseIndex, Rotated_Shoulder));





						}


					}


				}

			}


		}

	}
}





FVector FAnimNode_DragonAimSolver::AnimLocLerp(FVector start_pos, FVector end_pos, float delta_seconds)
{
	FVector start_pos_val = start_pos;
	FVector end_pos_val = end_pos;


	if (Adaptive_Terrain_Tail)
	{
		start_pos_val.X = end_pos_val.X;
		start_pos_val.Y = end_pos_val.Y;

	}


	FVector vector_difference = (start_pos_val - end_pos_val) / FMath::Clamp<float>(100 - (Interpolation_Speed * delta_seconds * 12), 1, 100);

	FVector output = FVector::ZeroVector;

	if (!Enable_Interpolation)
	{
		return end_pos;
	}



	if (loc_interp_type == EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp)
		output = (start_pos_val - vector_difference);
	else
		output = UKismetMathLibrary::VInterpTo(start_pos_val, end_pos_val, delta_seconds, 0.5f);

	return output;
}



FBoneTransform FAnimNode_DragonAimSolver::LookAt_Processor(FCSPose<FCompactPose>& MeshBases, FVector Offset_Vector, FName bone_name, int index, float Lookat_Clamp_Param)
{



	const FCompactPoseBoneIndex ModifyBoneIndex = EndSplineBone.GetCompactPoseIndex(*SavedBoneContainer);
	FTransform ComponentBoneTransform = MeshBases.GetComponentSpaceTransform(ModifyBoneIndex);



	if (HeadTransforms.Num() > 0)
		ComponentBoneTransform.SetLocation(HeadTransforms[index].Transform.GetLocation());



	FVector TargetLocationInComponentSpace = Offset_Vector;


	//TargetLocationInComponentSpace += (TargetOffset);

	FAxis LookatAxis_Temp;
	LookatAxis_Temp.bInLocalSpace = false;
	LookatAxis_Temp.Axis = LookAt_Axis.GetSafeNormal();

	// lookat vector
	FVector LookAtVector = LookatAxis_Temp.GetTransformedAxis(ComponentBoneTransform).GetSafeNormal();
	// find look up vector in local space

	// Find new transform from look at info
	//FQuat DeltaRotation = AnimationCore::SolveAim(ComponentBoneTransform, TargetLocationInComponentSpace, LookAtVector, false, LookUpVector, Lookat_Clamp);


	//COMPARISON MODE



	FVector target_dir = (TargetLocationInComponentSpace - ComponentBoneTransform.GetLocation()).GetSafeNormal();
	float AimClampInRadians = FMath::DegreesToRadians(FMath::Min(Lookat_Clamp_Param, 180.f));
	float DiffAngle = FMath::Acos(FVector::DotProduct(LookAtVector, target_dir));

	if (DiffAngle > AimClampInRadians)
	{

		check(DiffAngle > 0.f);

		FVector DeltaTarget = target_dir - LookAtVector;
		// clamp delta target to within the ratio
		DeltaTarget *= (AimClampInRadians / DiffAngle);
		// set new target
		target_dir = LookAtVector + DeltaTarget;
		target_dir.Normalize();
	}

	//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " DiffAngle[0] : " +FString::SanitizeFloat(DiffAngle)+" AimClampInRadians : "+ FString::SanitizeFloat(AimClampInRadians));


	//FRotator Rot_Ref_01 = UDragonIK_Library::CustomLookRotation(target_dir, FVector(0, 0, -1));

	//	FRotator Rot_Ref_01 = UDragonIK_Library::CustomLookRotation( (TargetLocationInComponentSpace - ComponentBoneTransform.GetLocation() ).GetSafeNormal(), FVector(0, 0, -1));

	//FRotator Rot_Ref_02 = UDragonIK_Library::CustomLookRotation(LookAtVector, FVector(0, 0, -1));



	//	FQuat Normalized_Delta = FQuat::FindBetweenNormals(LookAtVector , (TargetLocationInComponentSpace - ComponentBoneTransform.GetLocation()).GetSafeNormal());


	FQuat Normalized_Delta = FQuat::FindBetweenNormals(LookAtVector, target_dir);


	if (!Use_Natural_Method)
	{
		FRotator Rot_Ref_01 = UKismetMathLibrary::FindLookAtRotation(FVector(0, 0, 0), target_dir);
		FRotator Rot_Ref_02 = UKismetMathLibrary::FindLookAtRotation(FVector(0, 0, 0), LookAtVector);
		Normalized_Delta = Rot_Ref_01.Quaternion() * Rot_Ref_02.Quaternion().Inverse();
	}


	/*
	if (!Use_Natural_Method)
	{
	//	FRotator Rot_Ref_01 = UDragonIK_Library::CustomLookRotation(target_dir, FVector(0, 0, -1));
	//	FRotator Rot_Ref_02 = UDragonIK_Library::CustomLookRotation(LookAtVector, FVector(0, 0, -1));
	//	Normalized_Delta = UKismetMathLibrary::NormalizedDeltaRotator(Rot_Ref_01, Rot_Ref_02).Quaternion();

		Normalized_Delta = UKismetMathLibrary::NormalizedDeltaRotator(target_dir.ToOrientationRotator(), LookAtVector.ToOrientationRotator()).Quaternion();

		FRotator temp_ND = FRotator(Normalized_Delta);

		if (LookAtVector == FVector(0.0f, 1.0f, 0.0f))
			Normalized_Delta = FRotator(-temp_ND.Roll, temp_ND.Yaw, -temp_ND.Pitch).Quaternion();
		else
			if (LookAtVector == FVector(0.0f, -1.0f, 0.0f))
				Normalized_Delta = FRotator(temp_ND.Roll, temp_ND.Yaw, temp_ND.Pitch).Quaternion();
			else
				if (LookAtVector == FVector(-1.0f, 0.0f, 0.0f))
					Normalized_Delta = FRotator(-temp_ND.Pitch, temp_ND.Yaw, -temp_ND.Roll).Quaternion();
				else
					if (LookAtVector == FVector(1.0f, 0.0f, 0.0f))
						Normalized_Delta = FRotator(temp_ND.Pitch, temp_ND.Yaw, temp_ND.Roll).Quaternion();
					else
						Normalized_Delta = FRotator(-temp_ND.Roll, temp_ND.Yaw, -temp_ND.Pitch).Quaternion();
	}
	*/
	/*
		FQuat Normalized_Delta = UKismetMathLibrary::NormalizedDeltaRotator(Rot_Ref_01, Rot_Ref_02).Quaternion();

		FVector Quat_Euler = Normalized_Delta.Euler();


		Quat_Euler.X = FMath::Clamp<float>(Quat_Euler.X, -Lookat_Clamp, Lookat_Clamp);
		Quat_Euler.Y = FMath::Clamp<float>(Quat_Euler.Y, -Lookat_Clamp, Lookat_Clamp);
		Quat_Euler.Z = FMath::Clamp<float>(Quat_Euler.Z, -Lookat_Clamp, Lookat_Clamp);



		Normalized_Delta =  FQuat::MakeFromEuler(Quat_Euler);
		*/

	FTransform World_Rotatation_Transform = ComponentBoneTransform;

	World_Rotatation_Transform.SetRotation(Normalized_Delta);

	FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, MeshBases, World_Rotatation_Transform, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);


	FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBases, World_Rotatation_Transform, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);

	//FVector World_Euler_Rot = World_Rotatation_Transform.Rotator().Euler();
	 //World_Rotatation_Transform.SetRotation(FRotator(FMath::Clamp <float>(World_Rotatation_Transform.Rotator().Pitch, -Lookat_Clamp, Lookat_Clamp), FMath::Clamp <float>(World_Rotatation_Transform.Rotator().Yaw, -Lookat_Clamp, Lookat_Clamp), FMath::Clamp <float>(World_Rotatation_Transform.Rotator().Roll, -Lookat_Clamp, Lookat_Clamp)).Quaternion());

	// World_Rotatation_Transform.SetRotation(FRotator::MakeFromEuler(FVector( FMath::FMath::Abs<float>(World_Euler_Rot.X), FMath::FMath::Abs<float>(World_Euler_Rot.Y), FMath::FMath::Abs<float>(World_Euler_Rot.Z) )).Quaternion());

//	if (DiffAngle < AimClampInRadians)
	{

		ComponentBoneTransform.SetRotation(World_Rotatation_Transform.GetRotation() * ComponentBoneTransform.GetRotation());

		//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " World_Rotatation_Transform : " + World_Rotatation_Transform.Rotator().ToString());


		//	ComponentBoneTransform.SetRotation(DeltaRotation * ComponentBoneTransform.GetRotation());




	}



	return (FBoneTransform(ModifyBoneIndex, ComponentBoneTransform));


}



FTransform FAnimNode_DragonAimSolver::LookAtAroundPoint(FVector direction, FVector AxisVector, float AngleAxis, FVector origin)
{
	FVector RotateValue = UKismetMathLibrary::RotateAngleAxis(direction, AngleAxis, AxisVector);



	//FVector RotateValue = Dimensions.RotateAngleAxis(AngleAxis, AxisVector);

	origin += RotateValue;

	FTransform result = FTransform();

	result.SetLocation(origin);

	return result;
}




void FAnimNode_DragonAimSolver::Dragon_VectorCreation(bool isPelvis, FTransform& OutputTransform, FCSPose<FCompactPose>& MeshBases)
{




}









FVector FAnimNode_DragonAimSolver::SmoothApproach(FVector pastPosition, FVector pastTargetPosition, FVector targetPosition, float speed)
{
	float t = delta_seconds_saved * speed;
	FVector v = (targetPosition - pastTargetPosition) / t;
	FVector f = pastPosition - pastTargetPosition + v;
	return targetPosition - v + f * FMath::Exp(-t);
}

FVector FAnimNode_DragonAimSolver::RotateAroundPoint(FVector input_point, FVector forward_vector, FVector origin_point, float angle)
{
	FVector orbit_direction;

	orbit_direction = input_point - origin_point;

	FVector axis_dir = UKismetMathLibrary::RotateAngleAxis(orbit_direction, angle, forward_vector);

	FVector result_vector = input_point + (axis_dir - orbit_direction);

	return result_vector;

}




void FAnimNode_DragonAimSolver::OrthoNormalize(FVector& Normal, FVector& Tangent)
{
	Normal = Normal.GetSafeNormal();
	Tangent = Tangent - (Normal * FVector::DotProduct(Tangent, Normal));
	Tangent = Tangent.GetSafeNormal();
}

FQuat FAnimNode_DragonAimSolver::LookRotation(FVector lookAt, FVector upDirection) {

	FVector forward = lookAt;
	FVector up = upDirection;

	OrthoNormalize(forward, up);


	FVector right = FVector::CrossProduct(up, forward);

#define m00 right.X

#define m01 up.X

#define m02 forward.X

#define m10 right.Y

#define m11 up.Y

#define m12 forward.Y

#define m20 right.Z

#define m21 up.Z

#define m22 forward.Z



	float num8 = (m00 + m11) + m22;
	FQuat quaternion = FQuat();
	if (num8 > 0.0f)
	{
		float num = (float)FMath::Sqrt(num8 + 1.0f);
		quaternion.W = num * 0.5f;
		num = 0.5f / num;
		quaternion.X = (m12 - m21) * num;
		quaternion.Y = (m20 - m02) * num;
		quaternion.Z = (m01 - m10) * num;
		return quaternion;
	}
	if ((m00 >= m11) && (m00 >= m22))
	{
		float num7 = (float)FMath::Sqrt(((1.0f + m00) - m11) - m22);
		float num4 = 0.5f / num7;
		quaternion.X = 0.5f * num7;
		quaternion.Y = (m01 + m10) * num4;
		quaternion.Z = (m02 + m20) * num4;
		quaternion.W = (m12 - m21) * num4;
		return quaternion;
	}
	if (m11 > m22)
	{
		float num6 = (float)FMath::Sqrt(((1.0f + m11) - m00) - m22);
		float num3 = 0.5f / num6;
		quaternion.X = (m10 + m01) * num3;
		quaternion.Y = 0.5f * num6;
		quaternion.Z = (m21 + m12) * num3;
		quaternion.W = (m20 - m02) * num3;
		return quaternion;
	}
	float num5 = (float)FMath::Sqrt(((1.0f + m22) - m00) - m11);
	float num2 = 0.5f / num5;
	quaternion.X = (m20 + m02) * num2;
	quaternion.Y = (m21 + m12) * num2;
	quaternion.Z = 0.5f * num5;
	quaternion.W = (m01 - m10) * num2;



#undef m00

#undef m01

#undef m02

#undef m10

#undef m11

#undef m12

#undef m20

#undef m21

#undef m22

	return quaternion;

	//	return ret;

}




FVector FAnimNode_DragonAimSolver::GetCurrentLocation(FCSPose<FCompactPose>& MeshBases, const FCompactPoseBoneIndex& BoneIndex)
{
	return MeshBases.GetComponentSpaceTransform(BoneIndex).GetLocation();
}

