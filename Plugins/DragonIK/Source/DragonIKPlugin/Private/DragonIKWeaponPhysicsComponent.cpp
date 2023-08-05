/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "DragonIKWeaponPhysicsComponent.h"

#include "Kismet/KismetMathLibrary.h"


// Sets default values for this component's properties
UDragonIKWeaponPhysicsComponent::UDragonIKWeaponPhysicsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
	

	// ...
}


// Called when the game starts
void UDragonIKWeaponPhysicsComponent::BeginPlay()
{
	Super::BeginPlay();


}


void UDragonIKWeaponPhysicsComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	
	Super::OnComponentDestroyed(bDestroyingHierarchy);

	//UPhysicsHandleComponent* test;
	//test->DestroyComponent

	if(weapon_physics_handle != nullptr)
	weapon_physics_handle->DestroyComponent();

	if (weapon_physics_constraint != nullptr)
	weapon_physics_constraint->DestroyComponent();

}


// Called every frame
void UDragonIKWeaponPhysicsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	if (owning_skeleton != nullptr)
	{

		ModifyWeaponTransform();

		if (perform_grab_weapon == true)
		{

			//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Yellow, " perform_grab_weapon : "+ FString::SanitizeFloat(owning_skeleton->GetLastRenderTime()));

			//USkeletalMeshComponent* skeleton_input;

			if (owning_skeleton->GetLastRenderTime() > 0)
				grab_counter += owning_skeleton->GetWorld()->DeltaTimeSeconds;

			//dominant_hand_transform = owning_skeleton->GetBoneTransform(owning_skeleton->GetBoneIndex(weapon_grabbed_bone));
			//if (grab_counter > 0.2f)
			DelayedGrabEvent();

		}

	}

}

void UDragonIKWeaponPhysicsComponent::FirstTimeInitialization(USkeletalMeshComponent* skeleton_input)
{

	if (skeleton_input != nullptr)
	{
		owning_skeleton = skeleton_input;


		FString wephandles_name_str = "Weapon Physics Handle";
		wephandles_name_str.AppendInt(physanim_tag_index);


		FString wepconstraint_name_str = "Weapon Physics Constraint";
		wepconstraint_name_str.AppendInt(physanim_tag_index);


		weapon_physics_handle = NewObject<UPhysicsHandleComponent>(owning_skeleton->GetOwner(), FName(wephandles_name_str));

		weapon_physics_constraint = NewObject<UPhysicsConstraintComponent>(owning_skeleton->GetOwner(), FName(wepconstraint_name_str));



		if (!weapon_physics_handle->IsRegistered())
		{
			weapon_physics_handle->RegisterComponentWithWorld(owning_skeleton->GetOwner()->GetWorld());
			weapon_physics_handle->RegisterComponent();
		}

		if (!weapon_physics_constraint->IsRegistered())
		{
			weapon_physics_constraint->RegisterComponentWithWorld(owning_skeleton->GetOwner()->GetWorld());
			weapon_physics_constraint->RegisterComponent();
		}



		weapon_physics_handle->LinearDamping = Linear_Damp;
		weapon_physics_handle->AngularDamping = Angular_Damp;

		weapon_physics_handle->LinearStiffness = Linear_Strength;
		weapon_physics_handle->AngularStiffness = Angular_Strength;

		weapon_physics_handle->InterpolationSpeed = Interpolation_Speed * 10;

		weapon_physics_handle->Activate();
		weapon_physics_constraint->Activate();

		/*
		weapon_physics_constraint->AttachToComponent(owning_skeleton,FAttachmentTransformRules::KeepWorldTransform,weapon_grabbed_bone);
		weapon_physics_constraint->SetConstrainedComponents(owning_skeleton,weapon_grabbed_bone,active_weapon_component,"None");
		*/

		//GetOwner()->AddInstanceComponent(weapon_physics_handle);

		arm_grabbing_status.Empty();
		arm_reset_queue_index.Empty();
		Frozen_Elbow_Component_Status.Empty();


		handbone_array_boneName.Empty();
		handbone_array_boneIndex.Empty();




		for (int i = 0; i < 10; i++)
		{
			arm_grabbing_status.Add(true);
			arm_reset_queue_index.Add(false);
			handbone_array_boneName.Add("");
			handbone_array_boneIndex.Add(0);
			Frozen_Elbow_Component_Status.Add(false);

			should_override_hand_location.Add(false);
			should_override_hand_rotation.Add(false);
			arm_override_transform.Add(FTransform::Identity);

		}

	}


}




void UDragonIKWeaponPhysicsComponent::SetWeaponPhysicsBlendWeight(float InWeight)
{
	// Clamp the blend weight to [0, 1]
	InWeight = FMath::Clamp<float>(InWeight, 0.f, 1.f);

	// Get the current transform and physics transform
	FTransform PhysicsTransform = active_weapon_component->GetBodyInstance()->GetUnrealWorldTransform();


	// Blend the transforms using the weight
	FTransform BlendedTransform = FTransform::Identity;
	BlendedTransform.SetTranslation(FMath::Lerp(last_saved_relative_wep_transform.GetTranslation(), PhysicsTransform.GetTranslation(), InWeight));
	BlendedTransform.SetRotation(FQuat::Slerp(last_saved_relative_wep_transform.GetRotation(), PhysicsTransform.GetRotation(), InWeight));
	BlendedTransform.SetScale3D(FMath::Lerp(last_saved_relative_wep_transform.GetScale3D(), PhysicsTransform.GetScale3D(), InWeight));





	// Set the component's transform to the blended transform
	active_weapon_component->SetRelativeTransform(BlendedTransform);
}



void UDragonIKWeaponPhysicsComponent::ModifyWeaponTransform()
{



	if (is_grabbing && weapon_physics_handle != nullptr && weapon_physics_handle != NULL && owning_skeleton != nullptr)
	{



		


		//dominant_hand_transform = owning_skeleton->GetBoneTransform(owning_skeleton->GetBoneIndex(weapon_grabbed_bone));

		//dominant_hand_transform = owning_skeleton->GetBoneTransform(owning_skeleton->GetBoneIndex(weapon_grabbed_bone));


		//FTransform inversed_transform_input = last_saved_hand_transform.Inverse() * dominant_hand_transform;


		FTransform inversed_transform_input;

		if(this_should_override_weapon_transform)
		{
			dominant_hand_transform = overrided_weapon_transform;
		}

		if(Weapon_Freeze_Bool)
		{
			inversed_transform_input = Frozen_Hand_Transform;
			frozen_lerp_alpha = 0;
		}
		else
		{
			frozen_lerp_alpha += owning_skeleton->GetWorld()->DeltaTimeSeconds*unfreeze_speed;

			frozen_lerp_alpha = FMath::Clamp<float>(frozen_lerp_alpha,0,1);

			if(frozen_lerp_alpha == 1)
			{
				inversed_transform_input = dominant_hand_transform;
			}
			else
			{
				inversed_transform_input = UKismetMathLibrary::TLerp(Frozen_Hand_Transform,dominant_hand_transform,frozen_lerp_alpha);
			}
		}

		//FTransform inversed_transform_input = FTransform::Identity;
		//inversed_transform_input.AddToTranslation(FVector(0,0,250));

		//inversed_transform_input = FTransform::Identity;

		/*
		if (grab_origin_type == EOrigin_Grab_DragonIK::ENUM_Origin_Hand)
		{
			inversed_transform_input = dominant_hand_transform;
		}
		*/

	
		if (perform_physics_simulation == true)
			weapon_physics_handle->SetTargetLocationAndRotation(inversed_transform_input.GetLocation(), inversed_transform_input.Rotator());
		else
		{
			//if (is_grabbing)
			
			/*
			{
				FVector shoulder_pos = owning_skeleton->GetBoneLocation(dominant_shoulder_name);
				FVector Wep_Shoulder_Vect = active_weapon_component->GetComponentLocation() - shoulder_pos;
				float current_wepshould_length = Wep_Shoulder_Vect.Size();
				current_wepshould_length = FMath::Clamp(current_wepshould_length, 0, arm_length);
				active_weapon_component->SetWorldLocation(shoulder_pos + Wep_Shoulder_Vect.GetUnsafeNormal() * current_wepshould_length);
			}*/
		}

		//UPhysicsHandleComponent* test;
		//test->GrabbedComponent

		

		//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " last_saved_hand_transform : " + inversed_transform_input.GetLocation().ToString());


	}
	

}

void UDragonIKWeaponPhysicsComponent::DelayedGrabEvent()
{

	
	if (owning_skeleton->GetBoneIndex(weapon_grabbed_bone) > -1)
	{

		//last_saved_hand_transform = active_weapon_component->GetComponentTransform();


		//weapon_physics_handle->GrabComponentAtLocationWithRotation(active_weapon_component, "", active_weapon_component->GetComponentLocation(), active_weapon_component->GetComponentRotation());

		//dominant_hand_transform = owning_skeleton->GetBoneTransform(owning_skeleton->GetBoneIndex(weapon_grabbed_bone));

		/*
		dominant_hand_transform = FTransform::Identity;
		dominant_hand_transform.AddToTranslation(FVector(0, 0, 0.1f));
		*/


		//if (physics_welded_weapon == true)
		//	dominant_hand_transform = owning_skeleton->GetBoneTransform(owning_skeleton->GetBoneIndex(weapon_grabbed_bone));




		last_saved_hand_transform = dominant_hand_transform;

		//last_saved_weapon_transform =  active_weapon_component->GetComponentTransform()* dominant_hand_transform.Inverse();
		last_saved_weapon_transform = active_weapon_component->GetComponentTransform();



		//GEngine->AddOnScreenDebugMessage(-1, 10.1f, FColor::Yellow, " last_saved_hand_transform : " + last_saved_hand_transform.GetLocation().ToString());




		if (!last_saved_hand_transform.Equals(FTransform::Identity))
		{
			if (perform_physics_simulation)
			{
				active_weapon_component->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				active_weapon_component->SetSimulatePhysics(true);
			}
			else
			{
				active_weapon_component->SetSimulatePhysics(false);
			}
			//weapon_physics_handle->GrabComponentAtLocationWithRotation(active_weapon_component, "", active_weapon_component->GetComponentLocation(), active_weapon_component->GetComponentRotation());

			//weapon_physics_handle->GrabComponentAtLocationWithRotation(active_weapon_component, "", last_saved_hand_transform.GetLocation(), last_saved_hand_transform.Rotator());

			//if (physics_welded_weapon == false)
			{

				/*
				if (grab_origin_type == EOrigin_Grab_DragonIK::ENUM_Origin_Zero)
				{
					weapon_physics_handle->GrabComponentAtLocationWithRotation(active_weapon_component, "", FVector::ZeroVector, FRotator::ZeroRotator);
				}
				else*/
				{
					weapon_physics_handle->GrabComponentAtLocationWithRotation(active_weapon_component, "", last_saved_hand_transform.GetLocation(), last_saved_hand_transform.Rotator());

				}

			}
			/*
			else
			{

				dominant_shoulder_name = weapon_grabbed_bone;

				dominant_shoulder = dominant_hand_transform;
			}
			*/

			weapon_physics_constraint->SetWorldLocation(dominant_shoulder.GetLocation());
			
			//weapon_physics_constraint->SetWorldLocation(active_weapon_component->GetComponentTransform().GetLocation());
			weapon_physics_constraint->AttachToComponent(owning_skeleton, FAttachmentTransformRules::KeepWorldTransform, dominant_shoulder_name);


			//UMeshComponent* active_weapon_component;
			FVector const cached_active_vector = active_weapon_component->GetComponentLocation();
			//active_weapon_component->SetWorldLocation(dominant_shoulder.GetLocation()+ (active_weapon_component->GetComponentLocation() - dominant_shoulder.GetLocation()).GetUnsafeNormal()*100);
			

			//FTransform weapon_hand_offset =  (active_weapon_component->GetComponentTransform() *  owning_skeleton->GetBoneTransform(owning_skeleton->GetBoneIndex(weapon_grabbed_bone)).Inverse());

			FVector weapon_hand_offset = (active_weapon_component->GetComponentLocation() - dominant_hand_transform.GetLocation());


			active_weapon_component->SetWorldLocation( (dominant_shoulder.GetLocation() + weapon_hand_offset));

			if (UDragonIK_Library::IsBonePhysicsEnabled(owning_skeleton, dominant_shoulder_name))
			{
				weapon_physics_constraint->SetConstrainedComponents(owning_skeleton, dominant_shoulder_name, active_weapon_component, "None");
			}
			else
			{

				FName shoulder_temp_bone = dominant_shoulder_name;
				for (int i = 0; i < 5; i++)
				{
					shoulder_temp_bone = owning_skeleton->GetParentBone(shoulder_temp_bone);


					if (UDragonIK_Library::IsBonePhysicsEnabled(owning_skeleton, shoulder_temp_bone))
					{
						weapon_physics_constraint->SetConstrainedComponents(owning_skeleton, shoulder_temp_bone, active_weapon_component, "None");

						//dominant_shoulder_name = shoulder_temp_bone;

						break;
					}

				}
			}


			physics_constraint_used = true;


			active_weapon_component->SetWorldLocation(cached_active_vector);
			

			arm_length = UDragonIK_Library::GetBoneLengthBetweenBones(owning_skeleton, dominant_shoulder_name,weapon_grabbed_bone);
			arm_length = arm_length * Max_Arm_Length_Percent;
			
			weapon_physics_constraint->SetLinearXLimit(ELinearConstraintMotion::LCM_Limited, arm_length);
			weapon_physics_constraint->SetLinearYLimit(ELinearConstraintMotion::LCM_Limited, arm_length);
			weapon_physics_constraint->SetLinearZLimit(ELinearConstraintMotion::LCM_Limited, arm_length);

			weapon_physics_constraint->SetLinearBreakable(false, 0.0f);


			/*
			if (physics_welded_weapon)
			{

				//UPhysicsConstraintComponent* weapon_physics_constraint;
				weapon_physics_constraint->SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Locked, 0);
				weapon_physics_constraint->SetAngularSwing2Limit(EAngularConstraintMotion::ACM_Locked, 0);
				weapon_physics_constraint->SetAngularTwistLimit(EAngularConstraintMotion::ACM_Locked, 0);

				weapon_physics_constraint->SetAngularBreakable(false, 0.0f);

			}
			*/


			

			//GEngine->AddOnScreenDebugMessage(-1, 10.1f, FColor::Yellow, " last_saved_hand_transform : " + last_saved_hand_transform.GetLocation().ToString());

			is_grabbing = true;

			perform_grab_weapon = false;
		}
		else
		{



			//UMeshComponent* wep_cmp;
			//active_weapon_component->AttachToComponent(owning_skeleton,FAttachmentTransformRules::KeepWorldTransform,weapon_grabbed_bone);

			FTransform temp_hand_transform = owning_skeleton->GetBoneTransform(owning_skeleton->GetBoneIndex(weapon_grabbed_bone));

			last_saved_hand_transform = temp_hand_transform;

			//active_weapon_component->SetWorldLocation(temp_hand_transform.GetLocation());

		}

	}

}



void UDragonIKWeaponPhysicsComponent::Release_Hand_Only(FName hand_bone)
{

	int hand_array_index = -1;

	if (handbone_array_boneName.Num() > 0 && handbone_array_boneIndex.Num() > 0)
	{
		int string_to_local_index = 0;
		handbone_array_boneName.Find(hand_bone.ToString(), string_to_local_index);

		if (string_to_local_index > -1)
		hand_array_index = handbone_array_boneIndex[string_to_local_index];


		if (hand_array_index > -1)
		{

			if (arm_grabbing_status.Num() > hand_array_index)
				arm_grabbing_status[hand_array_index] = false;


			
			
		}

		//GEngine->AddOnScreenDebugMessage(-1, 5.1f, FColor::Red, " TESTX ");
	}
}




void UDragonIKWeaponPhysicsComponent::Freeze_Elbows_Function(FName hand_bone)
{
	
	int hand_array_index = -1;

	if (handbone_array_boneName.Num() > 0 && handbone_array_boneIndex.Num() > 0)
	{
		int string_to_local_index = 0;
		handbone_array_boneName.Find(hand_bone.ToString(), string_to_local_index);

		if (string_to_local_index > -1)
			hand_array_index = handbone_array_boneIndex[string_to_local_index];

		if (hand_array_index > -1)
		{

			if (arm_grabbing_status.Num() > hand_array_index)
			{
				Frozen_Elbow_Component_Status[hand_array_index] = true;

				Weapon_Freeze_Bool = true;

				Frozen_Hand_Transform = owning_skeleton->GetBoneTransform(owning_skeleton->GetBoneIndex(weapon_grabbed_bone));
			}

			

		}
	}

	
	
}



void UDragonIKWeaponPhysicsComponent::Unfreeze_Elbows_Function(FName hand_bone)
{


	int hand_array_index = -1;

	if (handbone_array_boneName.Num() > 0 && handbone_array_boneIndex.Num() > 0)
	{
		int string_to_local_index = 0;
		handbone_array_boneName.Find(hand_bone.ToString(), string_to_local_index);

		if (string_to_local_index > -1)
			hand_array_index = handbone_array_boneIndex[string_to_local_index];

		if (hand_array_index > -1)
		{

			if (arm_grabbing_status.Num() > hand_array_index)
			{
				Frozen_Elbow_Component_Status[hand_array_index] = false;

				Weapon_Freeze_Bool = false;

				//Frozen_Hand_Transform = dominant_hand_transform;
			}

			

		}
	}
	
}






void UDragonIKWeaponPhysicsComponent::Attach_Hand_Only(FName hand_bone,bool arm_position_recalibrate)
{


	int hand_array_index = -1;

	if (handbone_array_boneName.Num() > 0 && handbone_array_boneIndex.Num() > 0)
	{
		int string_to_local_index = 0;
		handbone_array_boneName.Find(hand_bone.ToString(), string_to_local_index);

		if (string_to_local_index > -1)
		hand_array_index = handbone_array_boneIndex[string_to_local_index];

		if (hand_array_index > -1)
		{

			if (arm_grabbing_status.Num() > hand_array_index)
			{
				arm_grabbing_status[hand_array_index] = true;
			}

			arm_reset_queue_index[hand_array_index] = true;

		}
	}

}





void UDragonIKWeaponPhysicsComponent::Release_Hand_Plus_Override(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool override_hand_rotation)
{


	int hand_array_index = -1;

	if (handbone_array_boneName.Num() > 0 && handbone_array_boneIndex.Num() > 0)
	{
		
		int string_to_local_index = 0;
		handbone_array_boneName.Find(hand_bone.ToString(), string_to_local_index);

		if(string_to_local_index > -1)
		hand_array_index = handbone_array_boneIndex[string_to_local_index];


		if (hand_array_index > -1)
		{


			if (should_override_hand_location.Num() > hand_array_index)
			{
				should_override_hand_location[hand_array_index] = override_hand_location;
			}

			if (should_override_hand_rotation.Num() > hand_array_index)
			{
				should_override_hand_rotation[hand_array_index] = override_hand_rotation;
			}


			arm_override_transform[hand_array_index] = hand_transform;


		}

	}

	//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Yellow, " handbone NUM : " + FString::SanitizeFloat(handbone_array_map.Num()));


}

void UDragonIKWeaponPhysicsComponent::Weapon_Transform_Override(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform)
{

	this_should_override_weapon_transform = bShould_Override_Weapon_Transform;

	overrided_weapon_transform = Weapon_Transform;
	
	
}


void UDragonIKWeaponPhysicsComponent::Release_Weapon(bool should_simulatephysics, bool use_gravity,bool bKeep_Attachment)
{

	

	is_grabbing = false;

	//weapon_grabbed_bone = "None";

	if (active_weapon_component != nullptr)
	{
		active_weapon_component->SetEnableGravity(use_gravity);
		active_weapon_component->SetSimulatePhysics(should_simulatephysics);
	}


	if(weapon_physics_constraint != nullptr)
	weapon_physics_constraint->BreakConstraint();

	//UPhysicsHandleComponent* weapon_physics_handle;

	if (weapon_physics_handle != nullptr)
	weapon_physics_handle->ReleaseComponent();



	if(bKeep_Attachment)
	{

		active_weapon_component->AttachToComponent(owning_skeleton,FAttachmentTransformRules::KeepWorldTransform,weapon_grabbed_bone);
		
	}


	last_saved_hand_transform = FTransform::Identity;

	active_weapon_component = nullptr;

	perform_grab_weapon = false;

	dominant_hand_transform = FTransform::Identity;

	

	//physics_welded_weapon = false;

}



void UDragonIKWeaponPhysicsComponent::Grab_Weapon(UPrimitiveComponent* weapon_mesh_input, FName grabbed_bone,bool simulate_physics,bool use_gravity)
{

	

	if (owning_skeleton != nullptr)
	{

		if (weapon_mesh_input != nullptr && owning_skeleton->GetBoneIndex(grabbed_bone) > -1)
		{

			weapon_grabbed_bone = grabbed_bone;

			//weapon_mesh_input->SetSimulatePhysics(true);
			

			active_weapon_component = weapon_mesh_input;

			active_weapon_component->SetEnableGravity(use_gravity);
			
			
			//last_saved_hand_transform = owning_skeleton->GetBoneTransform(owning_skeleton->GetBoneIndex(grabbed_bone));

			last_saved_hand_transform = dominant_hand_transform;
			
			//last_saved_hand_transform = FTransform::Identity;

			perform_grab_weapon = true;

			grab_counter = 0;

			Wep_Offset_Calculated = false;

			perform_physics_simulation = simulate_physics;


			//physics_welded_weapon = is_physics_welded_weapon;

			//if(perform_physics_simulation)
			//active_weapon_component->AttachToComponent(owning_skeleton, FAttachmentTransformRules::FAttachmentTransformRules(EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false), weapon_grabbed_bone);

			if (perform_physics_simulation == false)
			{

				//USkeletalMeshComponent* test;
				
				//UPrimitiveComponent* test;

				

				active_weapon_component->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
				//owning_skel->
			}
			else
			{
				owning_skeleton->SetTickGroup(ETickingGroup::TG_PostPhysics);
			}

			last_saved_relative_wep_transform = active_weapon_component->GetRelativeTransform();

		}

	}


}







