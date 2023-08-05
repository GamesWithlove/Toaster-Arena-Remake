/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "DragonIKPhysicsComponent.h"

#include "Kismet/KismetMathLibrary.h"



// Sets default values for this component's properties
UDragonIKPhysicsComponent::UDragonIKPhysicsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	if (individual_bone_selection.Num() == 0)
	{
		individual_bone_selection.Add("pelvis");
		individual_bone_selection.Add("upperarm_r");
		individual_bone_selection.Add("upperarm_l");
		individual_bone_selection.Add("hand_l");
		individual_bone_selection.Add("hand_r");
		individual_bone_selection.Add("head");

	}

	if (Influence_Stopping_Bones.Num() == 0)
	{
		Influence_Stopping_Bones.Add("pelvis");
	}




	FRichCurve* Get_Up_CurveData = Physanim_Enter_Curve.GetRichCurve();
	Get_Up_CurveData->AddKey(0.f, 1.f);
	Get_Up_CurveData->AddKey(0.5f, 1.f);
	Get_Up_CurveData->AddKey(1.5f, 0.f);



	// ...
}


// Called when the game starts
void UDragonIKPhysicsComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	//Raw_Animation_Transforms = TArray<FTransform>();
}


// Called every frame
void UDragonIKPhysicsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(tick_counter < 100)
	tick_counter++;


	if (blend_to_zero)
	{
		blend_min_value = 0;
	}
	else
	{
		blend_min_value = 0.0001f;
	}

	//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, "EVA COMP : " + FString::SanitizeFloat(Raw_Animation_Transforms.Num()));

	/*
	* Function for getting the original pure animation information from the dragonik physics solver and using the info to
	* drive the transforms of the array of physics handles.
	*/
	ModifyAllHandleTransforms();


	/*
	* Optional function that handles the physics blending and physics simulation during hit event calls
	*/
	UpdateBodyBlends();





	// ...
}

void UDragonIKPhysicsComponent::FirstTimeInitialization(USkeletalMeshComponent* skeleton_input)
{

	if (skeleton_input != nullptr)
	{
		/*
		* Base initializing of the foundation such as the skeleton input and various arrays.
		*/
		SetSkeletonInput(skeleton_input);


		skeleton_input->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);


		/*
		* For spawning and initializing the array of physics handles based on the input settings.
		*/
		CreateAllHandles();

		/*
		* Once initialized, perform the initial grab operations
		*/
		GrabAllHandles();
		//ModifyAllHandleTransforms();
		//ReleaseAllHandles();
	}

}






void UDragonIKPhysicsComponent::SetSkeletonInput(USkeletalMeshComponent* skeleton_input)
{
	/*
	* The cached skeleton input used everywhere.
	*/
	owning_skeleton = skeleton_input;

	/*
	* The physics alpha value of every bone. Relevant when physics simulation is on.
	* This is only used if blending option is turned on in the physics solver component.
	*/
	Bodies_Physics_Blend = TArray<float>();


	/*
	* This is the delay counter between each On->Off transition of the body physics blend.
	*/
	Extra_Bone_Delay_Array = TArray<float>();


	/*
	* A bool array that determines if the body part needs to simulate physics and drive the body physics blend array.
	* These are set during the onHit function.
	*/
	Bodies_Physics_Hit_Bools = TArray<bool>();


	/*
	* A bool array that determines if a grab component function needs to be queued and executed later rather than executing it
	* in the moment.
	*/
	Grab_Handle_Tasks_Queue = TArray<bool>();


	/*
	* The actual physics states of the skeleton saved as a boolean array.
	*/
	Physics_States = TArray<bool>();


	/*
	* If a grab handle lock is true, it means the physics handle of that bone is currently in a grabbed state.
	* If its true, then the physics handle is in a grabbed state.
	*/
	Grab_Handle_Locks = TArray<bool>();


	/*
	* Bool array to queue a re-map of the physics states after a re-grab. A re-grab may temporarily disable physics
	* to avoid odd results. This remap queue array is for re-enabling the physics states after a proper re-grab.
	*/
	Remap_Physics_States_Queue = TArray<bool>();


	/*
	* The raw animation tranform which is relayed from the DragonIK Physics Relayer solver.
	*/
	Raw_Animation_Transforms = TArray<FTransform>();



	/*
	* The parent bone mapped to each bone in a skeleton relative to each defined sections. A section is defined by the Influence_Stopping_Bones
	*/
	Parent_Bone_Map = TArray<FName>();



	Autoblend_Reverse_Bools = TArray<bool>();



	control_bone_relative_transforms = TArray<FTransform>();



	custom_override_transforms = TArray<FTransform>();
	custom_override_bool = TArray<bool>();



	/*
	* Similar to above, but its the first child bone of each parent bone map element.
	*/
	Last_Second_Parent_Bone_Map = TArray<FName>();



	Bodies_Physics_Blend.AddDefaulted(owning_skeleton->GetNumBones());



	Extra_Bone_Delay_Array.AddDefaulted(owning_skeleton->GetNumBones());

	Bodies_Physics_Hit_Bools.AddDefaulted(owning_skeleton->GetNumBones());

	Grab_Handle_Tasks_Queue.AddDefaulted(owning_skeleton->GetNumBones());

	Physics_States.AddDefaulted(owning_skeleton->GetNumBones());

	Grab_Handle_Locks.AddDefaulted(owning_skeleton->GetNumBones());

	Remap_Physics_States_Queue.AddDefaulted(owning_skeleton->GetNumBones());

	Raw_Animation_Transforms.AddDefaulted(owning_skeleton->GetNumBones());

	test_debug = "changed..";

	Parent_Bone_Map.AddDefaulted(owning_skeleton->GetNumBones());

	Autoblend_Reverse_Bools.AddDefaulted(owning_skeleton->GetNumBones());



	Last_Second_Parent_Bone_Map.AddDefaulted(owning_skeleton->GetNumBones());


	/*
	* This calculates the Parent_Bone_Map array. All the bone data is sectioned based on the Influence_Stopping_Bones array which
	* the developer define in the blueprint settings.
	* It ultimately defines the root bone of each section of the skeelton, where this section is defined by the Influence_Stopping_Bones
	* It also calculates Last_Second_Parent_Bone_Map which is the last second root bone of a skeleton section.
	* The Last_Second_Parent_Bone_Map is important for determining the direction of a bone hierarchy.
	*/
	CalculateParentInfluenceBones();


	int bone_size = owning_skeleton->GetNumBones();




	bone_to_bone_map = TArray<TArray<int>>();

	bone_to_bone_map.AddDefaulted(bone_size);

	/*
	* Bone to bone hierarchy is cached in the "bone_to_bone_map". It helps use compare if one bone is a child of another bone
	* without using the expensive "IsBoneChildOf() function. Lets us use it freely on the onHit() function without a worry
	* of performance.
	*/
	for (int i = 0; i < bone_size; i++)
	{

		Extra_Bone_Delay_Array[i] = 0;

		bone_to_bone_map[i].AddDefaulted(bone_size);


		for (int j = 0; j < bone_size; j++)
		{

			FName parent_bone = owning_skeleton->GetBoneName(i);
			FName child_bone = owning_skeleton->GetBoneName(j);


			if (BoneIsChildOf(parent_bone, child_bone))
			{
				bone_to_bone_map[i][j] = 1;
			}
			else
			{
				bone_to_bone_map[i][j] = -1;
			}

		}

	}

	//owning_skeleton->OnComponentHit.AddDynamic(this, &UDragonIKPhysicsComponent::OnHitCallback);



}



void UDragonIKPhysicsComponent::CalculateParentInfluenceBones()
{


	/*
	* This calculates the Parent_Bone_Map array. All the bone data is sectioned based on the Influence_Stopping_Bones array which
	* the developer define in the blueprint settings.
	* The core parent bone of each bone is determined here.
	* Including the core "last second" parent bone to determine the direction.
	*/


	if (owning_skeleton->GetNumBones() > 0)
	{

		for (int bone_i = 0; bone_i < owning_skeleton->GetNumBones(); bone_i++)
		{

			FName bone_name = owning_skeleton->GetBoneName(bone_i);

			if (Root_Clamping_Bone.IsEqual("None") && individual_bone_selection.Contains(bone_name))
			{
				Root_Clamping_Bone = bone_name;
			}
		}

		for (int i = 0; i < owning_skeleton->GetNumBones(); i++)
		{
			Parent_Bone_Map[i] = Root_Clamping_Bone;

			for (int j = 0; j < Influence_Stopping_Bones.Num(); j++)
			{
				if (owning_skeleton->BoneIsChildOf(owning_skeleton->GetBoneName(i), Influence_Stopping_Bones[j]))
				{
					/*
					* Loop and find the lowest possible parent for each bone within the limits of the Influencce_Stopping_Bones
					*/
					if (!owning_skeleton->BoneIsChildOf(Parent_Bone_Map[i], Influence_Stopping_Bones[j]))
					{
						Parent_Bone_Map[i] = Influence_Stopping_Bones[j];
					}
				}

				if (owning_skeleton->GetBoneName(i) == Influence_Stopping_Bones[j])
				{
					Parent_Bone_Map[i] = Influence_Stopping_Bones[j];
				}
			}
		}
	}


	for (int i = 0; i < Parent_Bone_Map.Num(); i++)
	{
		/*
		* Loop and find the "last second" lowest possible parent for each bone within the limits of the Influencce_Stopping_Bones
		* This is needed for handling cases such as pelvis bones that is a parent for many bone chains.
		*/
		Last_Second_Parent_Bone_Map[i] = GetLastSecondParentBone(owning_skeleton->GetBoneName(i), Parent_Bone_Map[i]);
	}

}



void UDragonIKPhysicsComponent::CacheSimulationStates()
{
	/*
	* Save the physics simulation states now so we can use this later when internally toggling the physics on/off.
	*/

	for (int i = 0; i < Bodies_Physics_Hit_Bools.Num(); i++)
	{
		FName index_bone_name = owning_skeleton->GetBoneName(i);

		if (owning_skeleton->IsSimulatingPhysics(index_bone_name))
			Physics_States[i] = true;
		else
			Physics_States[i] = false;

	}

}


void UDragonIKPhysicsComponent::OnHitCallback(const FHitResult& Hit, FName Hit_Bone_Name, FVector& hit_location, FVector& hit_impulse_direction, FName& hit_bone_name)
{



	



	if (owning_skeleton != nullptr && component_grabbing_state && use_auto_blending_logic && is_released == false) //
	{

		int custom_hit_bone_index = owning_skeleton->GetBoneIndex(Hit_Bone_Name);

		int name_from_hit = owning_skeleton->GetBoneIndex(Hit.MyBoneName);

		FName selected_bone_name = "None";


		if (custom_hit_bone_index > -1)
		{
			
			
			selected_bone_name = Hit_Bone_Name;

			hit_impulse_direction = Hit.Normal;
			hit_location = owning_skeleton->GetBoneLocation(Hit_Bone_Name);
			hit_bone_name = selected_bone_name;
		}


		if (name_from_hit > -1)
		{
			selected_bone_name = Hit.MyBoneName;


			hit_impulse_direction = Hit.Normal;
			hit_location = Hit.ImpactPoint;
			hit_bone_name = selected_bone_name;

		}

		


		if ( ragdoll_mode == false && selected_bone_name!="None")
		{


			int hit_bone_index;
			hit_bone_index = owning_skeleton->GetBoneIndex(selected_bone_name);

			for (int i = 0; i < Bodies_Physics_Hit_Bools.Num(); i++)
			{
				FName index_bone_name = owning_skeleton->GetBoneName(i);
				int parent_index = owning_skeleton->GetBoneIndex(Last_Second_Parent_Bone_Map[hit_bone_index]);

				if (parent_index > -1)
				{

					/*
					* If any body part detects a hit, make all the defined sections of that body part feel the hit.
					* The sections are defined by the parent bone map and last second bone map which are already pre-calculated.
					* The parent bone map and last second bone map are pre-calculated using the influence stop bones array parameter.
					*/
					if ((bone_to_bone_map[i][parent_index] == 1) || (index_bone_name == Parent_Bone_Map[hit_bone_index]) || (index_bone_name == Last_Second_Parent_Bone_Map[hit_bone_index]))
					{
						Bodies_Physics_Hit_Bools[i] = true;

						/*
						* Reset the extra delay to 0. This is for the delay between the positive and negative physics blending.
						*/
						Extra_Bone_Delay_Array[i] = 0;

						get_up_timer = 0;

						//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, "Parent_Bone_Map ");
					}
				}
			}
		}


	}

}



bool UDragonIKPhysicsComponent::BoneIsChildOf(FName ChildBoneIndex, FName ParentBoneIndex)
{
	FName last_second_bone = ChildBoneIndex;

	int ChildBone_Index = owning_skeleton->GetBoneIndex(ChildBoneIndex);
	int ParentBone_Index = owning_skeleton->GetBoneIndex(ParentBoneIndex);



	if (ParentBone_Index != INDEX_NONE)
	{
		// Bones are in strictly increasing order.
		// So child must have an index greater than his parent.
		if (ChildBone_Index > ParentBone_Index)
		{

			for (int i = 0; i < owning_skeleton->GetNumBones(); i++)
			{
				FName BoneResult = owning_skeleton->GetParentBone(last_second_bone);

				if (BoneResult == ParentBoneIndex)
				{
					return true;
				}
				else
				{
					last_second_bone = BoneResult;
				}

			}// while (last_second_bone != "None");
		}
	}

	return false;
}


FName UDragonIKPhysicsComponent::GetLastSecondParentBone(FName ChildBoneName, FName ParentBoneName)
{

	FName last_second_bone = ChildBoneName;

	int ChildBone_Index = owning_skeleton->GetBoneIndex(ChildBoneName);
	int ParentBone_Index = owning_skeleton->GetBoneIndex(ParentBoneName);



	if (ParentBone_Index != INDEX_NONE)
	{
		// Bones are in strictly increasing order.
		// So child must have an index greater than his parent.
		if (ChildBone_Index > ParentBone_Index)
		{

			do
			{
				FName BoneResult = owning_skeleton->GetParentBone(last_second_bone);

				if (BoneResult == ParentBoneName)
				{
					return last_second_bone;
				}
				else
				{
					last_second_bone = BoneResult;
				}

			} while (last_second_bone != "None");
		}
	}

	return Custom_Root_Bone;
}






void UDragonIKPhysicsComponent::Modify_Reset_Bone_Info(TArray<FName> bone_list)
{


	individual_bone_selection = bone_list;



	if (owning_skeleton != nullptr && handler_holder != nullptr)
	{

		for (int bone_i = 0; bone_i < owning_skeleton->GetNumBones(); bone_i++)
		{

			FString physhandles_component_name_str = "Physics Hanlde Comp ";
			physhandles_component_name_str.AppendInt(bone_i);
			FName phys_name_FNAME = FName(physhandles_component_name_str);

			FName bone_name = owning_skeleton->GetBoneName(bone_i);

			//handler_holder->physics_handle_bool_array[bone_i] = false;

			Grab_Handle_Tasks_Queue[bone_i] = false;

			//Physics_States[bone_i] = false;

			//Grab_Handle_Locks[bone_i] = false;

			Remap_Physics_States_Queue[bone_i] = false;

			if (individual_bone_selection.Contains(bone_name))
			{






				if (handler_holder->physics_handle_array[bone_i] == nullptr)
				{

					float bone_strength_multiplier = 1;


					for (int struct_i = 0; struct_i < Override_Handle_Strength_Multiplier.Num(); struct_i++)
					{
						if (Override_Handle_Strength_Multiplier[struct_i].bone_name.IsEqual(bone_name))
						{

							bone_strength_multiplier = Override_Handle_Strength_Multiplier[struct_i].bone_strength;

							break;
						}
					}


					//GEngine->AddOnScreenDebugMessage(-1, 1.1f, FColor::Red, "bone_name : " + bone_name.ToString());



					handler_holder->physics_handle_array[bone_i] = NewObject<UPhysicsHandleComponent>(handler_holder, phys_name_FNAME);


					if (!handler_holder->physics_handle_array[bone_i]->IsRegistered())
					{
						handler_holder->physics_handle_array[bone_i]->RegisterComponentWithWorld(GetOwner()->GetWorld());
						handler_holder->physics_handle_array[bone_i]->RegisterComponent();
					}


					handler_holder->physics_handle_array[bone_i]->LinearDamping = Linear_Damp * bone_strength_multiplier;
					handler_holder->physics_handle_array[bone_i]->AngularDamping = Angular_Damp * bone_strength_multiplier;

					handler_holder->physics_handle_array[bone_i]->LinearStiffness = Linear_Strength * bone_strength_multiplier;
					handler_holder->physics_handle_array[bone_i]->AngularStiffness = Angular_Strength * bone_strength_multiplier;


					handler_holder->physics_handle_array[bone_i]->Activate();
					handler_holder->AddInstanceComponent(handler_holder->physics_handle_array[bone_i]);


					if (Root_Clamping_Bone.IsEqual("None"))
					{
						Root_Clamping_Bone = bone_name;
					}


				}



			}
			else
			{

				if (handler_holder->physics_handle_array[bone_i] != nullptr)
				{
					handler_holder->physics_handle_array[bone_i]->ReleaseComponent();

					handler_holder->physics_handle_array[bone_i]->UnregisterComponent();

					handler_holder->physics_handle_array[bone_i]->DestroyComponent();

					handler_holder->physics_handle_array[bone_i] = nullptr;
				}


			}


		}
	}





}




void UDragonIKPhysicsComponent::CreateAllHandles()
{




	/*m
	* Create the actor that later holds all the physics handles.
	*/
	if (handler_holder == nullptr && owning_skeleton != nullptr)
	{
		//handler_holder = NewObject<ADragonIKPhysicsHolder>(GetOwner());

		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


		handler_holder = GetOwner()->GetWorld()->SpawnActor<ADragonIKPhysicsHolder>(ADragonIKPhysicsHolder::StaticClass(), FTransform::Identity, SpawnInfo);





		handler_holder->SetActorTransform(GetOwner()->GetActorTransform());

		handler_holder->connected_actor = GetOwner();


		/* Set empty filled physics handle array */
		handler_holder->physics_handle_array.AddDefaulted(owning_skeleton->GetNumBones());
		//handler_holder->physics_handle_bool_array.AddDefaulted(owning_skeleton->GetNumBones());



		custom_override_bool.AddDefaulted(owning_skeleton->GetNumBones());

		custom_override_transforms.AddDefaulted(owning_skeleton->GetNumBones());

		control_bone_relative_transforms.AddDefaulted(owning_skeleton->GetNumBones());


	}

	if (owning_skeleton != nullptr && handler_holder != nullptr)
	{

		for (int bone_i = 0; bone_i < owning_skeleton->GetNumBones(); bone_i++)
		{

			FString physhandles_component_name_str = "Physics Hanlde Comp ";
			physhandles_component_name_str.AppendInt(bone_i);
			FName phys_name_FNAME = FName(physhandles_component_name_str);

			FName bone_name = owning_skeleton->GetBoneName(bone_i);

			//handler_holder->physics_handle_bool_array[bone_i] = false;

			Grab_Handle_Tasks_Queue[bone_i] = false;

			Physics_States[bone_i] = false;

			Grab_Handle_Locks[bone_i] = false;

			Remap_Physics_States_Queue[bone_i] = false;

			/*
			* Only create handles for specified input bones
			* Initialize the linear and angular info.
			*/
			if (individual_bone_selection.Contains(bone_name))
			{


				float bone_strength_multiplier = 1;


				for (int struct_i = 0; struct_i < Override_Handle_Strength_Multiplier.Num(); struct_i++)
				{
					if (Override_Handle_Strength_Multiplier[struct_i].bone_name.IsEqual(bone_name))
					{

						bone_strength_multiplier = Override_Handle_Strength_Multiplier[struct_i].bone_strength;

						break;
					}
				}

				handler_holder->physics_handle_array[bone_i] = NewObject<UPhysicsHandleComponent>(handler_holder, phys_name_FNAME);


				if (!handler_holder->physics_handle_array[bone_i]->IsRegistered())
				{
					handler_holder->physics_handle_array[bone_i]->RegisterComponentWithWorld(GetOwner()->GetWorld());
					handler_holder->physics_handle_array[bone_i]->RegisterComponent();
				}


				handler_holder->physics_handle_array[bone_i]->LinearDamping = Linear_Damp * bone_strength_multiplier;
				handler_holder->physics_handle_array[bone_i]->AngularDamping = Angular_Damp * bone_strength_multiplier;

				handler_holder->physics_handle_array[bone_i]->LinearStiffness = Linear_Strength * bone_strength_multiplier;
				handler_holder->physics_handle_array[bone_i]->AngularStiffness = Angular_Strength * bone_strength_multiplier;


				handler_holder->physics_handle_array[bone_i]->InterpolationSpeed = Interpolation_Speed * 10;



				handler_holder->physics_handle_array[bone_i]->Activate();
				handler_holder->AddInstanceComponent(handler_holder->physics_handle_array[bone_i]);


				if (Root_Clamping_Bone.IsEqual("None"))
				{
					Root_Clamping_Bone = bone_name;
				}

			}


		}
	}

	active_ragdoll = false;
}









void UDragonIKPhysicsComponent::GrabAllHandles()
{

	if (handler_holder != nullptr)
	{

		for (int handle_i = 0; handle_i < handler_holder->physics_handle_array.Num(); handle_i++)
		{

			{

				/*
				* Only perform the grab if the grab handle locks are false
				*/
				if (handler_holder->physics_handle_array[handle_i] != nullptr && Grab_Handle_Locks[handle_i] == false)
				{


					FTransform actual_bone_transform = owning_skeleton->GetBoneTransform(handle_i);

					// Grab the in-game bone transforms instead of the raw animation relayed from the physics solver in the animbp
					handler_holder->physics_handle_array[handle_i]->GrabComponentAtLocationWithRotation(owning_skeleton, owning_skeleton->GetBoneName(handle_i), actual_bone_transform.GetLocation(), actual_bone_transform.Rotator());

					//handler_holder->physics_handle_bool_array[handle_i] = true;

					Grab_Handle_Locks[handle_i] = true;


					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "Skeleton is Set");

				}
			}
		}

		// a boolean to determine if this component is in grabbing or released state.
		component_grabbing_state = true;

		is_released = false;

		slight_delay_counter = 0;


		TArray<USceneComponent*> ParentComponents;
		owning_skeleton->GetParentComponents(ParentComponents);

		if (ParentComponents.Num() > 0)
		{
			mesh_parent_reference = ParentComponents[0];
			relative_mesh_transform = owning_skeleton->GetRelativeTransform();
		}


	}

}

void UDragonIKPhysicsComponent::ModifyAllHandleTransforms()
{

	if (handler_holder != nullptr && owning_skeleton != nullptr && component_grabbing_state == true)
	{
		if (handler_holder->physics_handle_array.Num() > 0)
		{




			
			if (active_ragdoll)
			{

				

				for (int i = 0; i < control_bone_relative_transforms.Num(); i++)
				{

					FName* parent_bone = active_ragdoll_tmap.Find(owning_skeleton->GetBoneName(i));

					FTransform extra_offset;


					if (active_ragdoll_tmap.Num()==0 || parent_bone == nullptr || ragdoll_mode)
					{
						control_bone_relative_transforms[i] = Raw_Animation_Transforms[i];
					}
					else
					{

						int parent_body_index = owning_skeleton->GetBoneIndex(*parent_bone);
						FTransform parent_body_physical_transform = owning_skeleton->GetBoneTransform(parent_body_index);


						extra_offset = Raw_Animation_Transforms[parent_body_index].Inverse() * parent_body_physical_transform;


						control_bone_relative_transforms[i] = Raw_Animation_Transforms[i] * extra_offset;


					}


				}
				

			}
			else
			if (parent_child_ragdoll_state)
			{



				for (int i = 0; i < control_bone_relative_transforms.Num(); i++)
				{

					FName* parent_bone = Parent_Child_Connection_Array.Find(owning_skeleton->GetBoneName(i));

					FTransform extra_offset;


					if (parent_bone == nullptr || ragdoll_mode)
					{
						control_bone_relative_transforms[i] = Raw_Animation_Transforms[i];
					}
					else
					{

						int parent_body_index = owning_skeleton->GetBoneIndex(*parent_bone);
						FTransform parent_body_physical_transform = owning_skeleton->GetBoneTransform(parent_body_index);


						extra_offset = Raw_Animation_Transforms[parent_body_index].Inverse() * parent_body_physical_transform;


						control_bone_relative_transforms[i] = Raw_Animation_Transforms[i] * extra_offset;


					}


				}


			}





			if(Raw_Animation_Transforms.Num() > 0 && custom_override_bool.Num() > 0)
			for (int handle_i = 0; handle_i < handler_holder->physics_handle_array.Num(); handle_i++)
			{





				if (handler_holder->physics_handle_array[handle_i] != nullptr)
				{
					//FTransform mesh_transform = owning_skeleton->GetBoneTransform(handle_i);


					FTransform input_transform = Raw_Animation_Transforms[handle_i];


					if (custom_override_bool[handle_i])
					{
						input_transform = custom_override_transforms[handle_i];
						//custom_override_bool[handle_i] = false;
					}

					if (parent_child_ragdoll_state || active_ragdoll)
					{
						input_transform = control_bone_relative_transforms[handle_i];
					}

					handler_holder->physics_handle_array[handle_i]->SetTargetLocationAndRotation(input_transform.GetLocation(), input_transform.Rotator());
				
				}


			}
		}
	}


}



void UDragonIKPhysicsComponent::ReGrabAllHandles(bool exit_ragdoll)
{

	if (owning_skeleton != nullptr)
	{
		//if(exit_ragdoll)
		//use_auto_blending_logic = true;

		//owning_skeleton->SetAllBodiesBelowPhysicsBlendWeight(Root_Clamping_Bone, 0);


		owning_skeleton->SetMassOverrideInKg(Root_Clamping_Bone, saved_mass_kg, true);

		active_ragdoll = false;

		/*
		* Check if currently simulating physics or blend value is less than 1
		*/
		if (largest_blend_value < 1 && (use_auto_blending_logic && !is_released))
		{
			Need_To_Remap_PhysicsStates = true;
		}



		for (int handle_i = 0; handle_i < handler_holder->physics_handle_array.Num(); handle_i++)
		{
			//Bodies_Physics_Blend[handle_i] = 0;
			//if (Bodies_Physics_Blend[handle_i] == 1.0f)
			{

				Autoblend_Reverse_Bools[handle_i] = false;
				Bodies_Physics_Blend[handle_i] = 1;


				if (handler_holder->physics_handle_array[handle_i] != nullptr)
				{

					if (!Need_To_Remap_PhysicsStates)
					{

						FTransform actual_bone_transform = owning_skeleton->GetBoneTransform(handle_i);

						FName bone_name = owning_skeleton->GetBoneName(handle_i);

						float bone_strength_multiplier = 1;


						for (int struct_i = 0; struct_i < Override_Handle_Strength_Multiplier.Num(); struct_i++)
						{
							if (Override_Handle_Strength_Multiplier[struct_i].bone_name.IsEqual(bone_name))
							{

								bone_strength_multiplier = Override_Handle_Strength_Multiplier[struct_i].bone_strength;

								break;
							}
						}



						handler_holder->physics_handle_array[handle_i]->LinearDamping = Linear_Damp * bone_strength_multiplier;
						handler_holder->physics_handle_array[handle_i]->AngularDamping = Angular_Damp * bone_strength_multiplier;

						handler_holder->physics_handle_array[handle_i]->LinearStiffness = Linear_Strength * bone_strength_multiplier;
						handler_holder->physics_handle_array[handle_i]->AngularStiffness = Angular_Strength * bone_strength_multiplier;



						handler_holder->physics_handle_array[handle_i]->GrabComponentAtLocationWithRotation(owning_skeleton, owning_skeleton->GetBoneName(handle_i), actual_bone_transform.GetLocation(), actual_bone_transform.Rotator());

						Grab_Handle_Locks[handle_i] = true;

						//Bodies_Physics_Hit_Bools[handle_i] = true;





					}
					else
					{

						Grab_Handle_Tasks_Queue[handle_i] = true;

					}

					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "Skeleton is Set");

				}


				//	if(handle_i > 0)
				//	Physics_States[handle_i] = true;

				if (Need_To_Remap_PhysicsStates)
				{
					Remap_Physics_States_Queue[handle_i] = Physics_States[handle_i];

				}




			}



		}





		if (Need_To_Remap_PhysicsStates && use_auto_blending_logic && !is_released)
		{
			owning_skeleton->SetAllBodiesBelowSimulatePhysics(Root_Clamping_Bone, false, true);
		}


		is_released = false;

		slight_delay_counter = 0;

		get_up_timer = 0;


		if (exit_ragdoll)
			Physanim_Safe_Exit_Ragdoll();

		//ragdoll_mode = false;
	}
}



void UDragonIKPhysicsComponent::SetInterpolation(int inter_value)
{

	for (int handle_i = 0; handle_i < handler_holder->physics_handle_array.Num(); handle_i++)
	{


		if (handler_holder->physics_handle_array[handle_i] != nullptr)
		{


			this->Interpolation_Speed = inter_value;


			handler_holder->physics_handle_array[handle_i]->SetLinearStiffness(this->Interpolation_Speed * 10);



		}
	}

}


void UDragonIKPhysicsComponent::UpdatePhysanimData(int linear_strength_var, int angular_strength_var, int linear_damp_var, int angular_damp_var)
{




	for (int handle_i = 0; handle_i < handler_holder->physics_handle_array.Num(); handle_i++)
	{


		if (handler_holder->physics_handle_array[handle_i] != nullptr)
		{

			FName bone_name = owning_skeleton->GetBoneName(handle_i);
			float bone_strength_multiplier = 1;


			for (int struct_i = 0; struct_i < Override_Handle_Strength_Multiplier.Num(); struct_i++)
			{
				if (Override_Handle_Strength_Multiplier[struct_i].bone_name.IsEqual(bone_name))
				{

					bone_strength_multiplier = Override_Handle_Strength_Multiplier[struct_i].bone_strength;

					break;
				}
			}


			this->Linear_Strength = linear_strength_var;
			this->Linear_Damp = linear_damp_var;
			this->Angular_Strength = angular_damp_var;
			this->Angular_Damp = angular_damp_var;


			handler_holder->physics_handle_array[handle_i]->SetLinearStiffness(linear_strength_var * bone_strength_multiplier);

			handler_holder->physics_handle_array[handle_i]->SetAngularStiffness(angular_strength_var * bone_strength_multiplier);

			handler_holder->physics_handle_array[handle_i]->SetLinearDamping(linear_damp_var * bone_strength_multiplier);

			handler_holder->physics_handle_array[handle_i]->SetAngularDamping(angular_damp_var * bone_strength_multiplier);



		}


	}



}





void UDragonIKPhysicsComponent::ReleaseAllHandles(bool go_ragdoll)
{

	if (owning_skeleton != nullptr)
	{

		/*
		{
			bring_mesh_back_in_place = false;
			owning_skeleton->SetRelativeTransform(relative_mesh_transform, false, nullptr, ETeleportType::ResetPhysics);
			get_up_timer = 0;
		}
		*/

		if (handler_holder != nullptr)
		{
			for (int handle_i = 0; handle_i < handler_holder->physics_handle_array.Num(); handle_i++)
			{


				if (Grab_Handle_Locks[handle_i] == true && handler_holder->physics_handle_array[handle_i] != nullptr && handler_holder->physics_handle_array[handle_i]->GetGrabbedComponent())
				{
					handler_holder->physics_handle_array[handle_i]->ReleaseComponent();

					Grab_Handle_Locks[handle_i] = false;


				}
			}

			is_released = true;


			owning_skeleton->ForEachBodyBelow(Root_Clamping_Bone, true, false, [=](FBodyInstance* BI)
			{
				BI->PhysicsBlendWeight = 1;
			});


			/*
		* Saving the parent component of the mesh and the mesh relative transform for the optional ragdoll exit purposes.
		*/
			TArray<USceneComponent*> ParentComponents;
			owning_skeleton->GetParentComponents(ParentComponents);

			if (ParentComponents.Num() > 0)
			{
				mesh_parent_reference = ParentComponents[0];
				relative_mesh_transform = owning_skeleton->GetRelativeTransform();
			}

			if (go_ragdoll)
			{
				owning_skeleton->SetAllBodiesSimulatePhysics(true);
				ragdoll_mode = go_ragdoll;
			}


			if (use_auto_blending_logic == false)
			{
				ragdoll_mode = false;
			}

		}
	}

	


	slight_delay_counter = 0;

}








void UDragonIKPhysicsComponent::Physanim_Safe_Exit_Ragdoll()
{

	FName root_bone = owning_skeleton->GetBoneName(0);
	int clamp_index = owning_skeleton->GetBoneIndex(Root_Clamping_Bone);


	owning_skeleton->ForEachBodyBelow(root_bone, true, false, [=](FBodyInstance* BI)
	{
		int bone_index = BI->InstanceBoneIndex;

		if (bone_index >= clamp_index)
			BI->SetInstanceSimulatePhysics(true);
		else
			BI->SetInstanceSimulatePhysics(false);

	});


	if (mesh_parent_reference != nullptr)
		owning_skeleton->AttachToComponent(mesh_parent_reference, FAttachmentTransformRules::KeepWorldTransform);

	owning_skeleton->SetRelativeTransform(relative_mesh_transform, false, nullptr, ETeleportType::ResetPhysics);

}



bool UDragonIKPhysicsComponent::IsParentBone(const FName& PotentialParent, const FName& Child)
{
	// Code to determine if PotentialParent is a parent bone of Child
	// ...

	// For example, you could use the GetParentBoneIndex function of the USkeleton asset to determine the parent-child relationship between bones
	 
	//USkeletalMeshComponent* Skeleton = GetSkeleton();
	//Skeleton->BoneIsChildOf(child,parent);
	
	 int32 ParentIndex = owning_skeleton->GetBoneIndex(PotentialParent);
	 if (ParentIndex != INDEX_NONE && owning_skeleton->BoneIsChildOf(Child, PotentialParent) && Child != PotentialParent)
	 {
	     return true;
	 }

	 if (Child == Root_Clamping_Bone && PotentialParent == Child)
	 {
		 return true;
	 }

	// Return false if PotentialParent is not a parent of Child
	return false;
}


TMap<FName, FName> UDragonIKPhysicsComponent::MapParentChildRelationships(const TArray<FName>& BoneNames)
{
	TMap<FName, FName> ParentChildMap;

	if (owning_skeleton != nullptr)
	{


		// Iterate through each bone name in the input array
		for (const FName& BoneName : BoneNames)
		{
			// Check if the bone has a parent bone in the input array
			FName ParentBoneName = "Nil";
			for (int32 i = 0; i < BoneNames.Num(); i++)
			{
				// Code to determine if BoneNames[i] is a parent bone of BoneName
				// ...
				//ParentBoneName = BoneNames[i];
				if (IsParentBone(BoneNames[i], BoneName))
				{
					int new_index = owning_skeleton->GetBoneIndex(BoneNames[i]);
					int old_index = owning_skeleton->GetBoneIndex(ParentBoneName);

					if(new_index > old_index || old_index == -1)
					ParentBoneName = BoneNames[i];
					//break;
				}
			}

			// Add the bone name and its parent bone name to the map
			ParentChildMap.Add(BoneName, ParentBoneName);
		}

	}

	return ParentChildMap;
}




void UDragonIKPhysicsComponent::PerformActiveRagdoll(float pelvis_mass_override)
{



	active_ragdoll = true;

	if (owning_skeleton != nullptr)
	{

		/*
		{
			bring_mesh_back_in_place = false;
			owning_skeleton->SetRelativeTransform(relative_mesh_transform, false, nullptr, ETeleportType::ResetPhysics);
			get_up_timer = 0;
		}
		*/

		//USkeletalMeshComponent* test;
		owning_skeleton->SetAllBodiesBelowSimulatePhysics(Root_Clamping_Bone,true,true);
		

		if (handler_holder != nullptr)
		{



			 active_ragdoll_tmap = MapParentChildRelationships(individual_bone_selection);





			int handle_i = owning_skeleton->GetBoneIndex(Custom_Root_Bone);

			//for (int handle_i = 0; handle_i < handler_holder->physics_handle_array.Num(); handle_i++)
			{


				if (Grab_Handle_Locks[handle_i] == true && handler_holder->physics_handle_array[handle_i] != nullptr && handler_holder->physics_handle_array[handle_i]->GetGrabbedComponent())
				{
					handler_holder->physics_handle_array[handle_i]->ReleaseComponent();

					Grab_Handle_Locks[handle_i] = false;


				}
			}

			is_released = true;

			//USkeletalMeshComponent* test_abs;
			saved_mass_kg = owning_skeleton->GetMass();

			


			owning_skeleton->SetMassOverrideInKg(Root_Clamping_Bone, pelvis_mass_override,true);

			owning_skeleton->ForEachBodyBelow(Root_Clamping_Bone, true, false, [=](FBodyInstance* BI)
			{
				BI->PhysicsBlendWeight = 1;
			});


			/*
		* Saving the parent component of the mesh and the mesh relative transform for the optional ragdoll exit purposes.
		*/
			/*
			TArray<USceneComponent*> ParentComponents;
			owning_skeleton->GetParentComponents(ParentComponents);

			if (ParentComponents.Num() > 0)
			{
				mesh_parent_reference = ParentComponents[0];
				relative_mesh_transform = owning_skeleton->GetRelativeTransform();
			}

			
			{
				owning_skeleton->SetAllBodiesSimulatePhysics(true);
				ragdoll_mode = true;
			}
			*/


		}
	}




	slight_delay_counter = 0;




}





void UDragonIKPhysicsComponent::Control_Bone_Handle(FName bone_name, FTransform override_transform, bool enable)
{
	if (owning_skeleton != nullptr)
	{

		int bone_index = owning_skeleton->GetBoneIndex(bone_name);


		if (bone_index > -1)
		{


			custom_override_bool[bone_index] = enable;

			custom_override_transforms[bone_index] = override_transform;

			//this->handler_holder->physics_handle_array[bone_index].;


		}

	}


}







void UDragonIKPhysicsComponent::UpdateBodyBlends()
{
	/*
	* This function handles all the physics blending and simulation toggling.
	*/

	if ((tick_counter < 10 && owning_skeleton != nullptr && handler_holder != nullptr))
	{

		//use_auto_blending_logic = true;

	}

	

	if (  (owning_skeleton != nullptr && handler_holder != nullptr && is_released == false))
	{


		get_up_timer += owning_skeleton->GetWorld()->DeltaTimeSeconds;


		largest_blend_value = 0;

		for (int i = 0; i < Bodies_Physics_Blend.Num(); i++)
		{

			/*
			* Increment extra bone delay array for each bone until it reaches the set limit
			*/
			if (Extra_Bone_Delay_Array[i] < hit_delay_time)
				Extra_Bone_Delay_Array[i] += GetOwner()->GetWorld()->DeltaTimeSeconds;
			else
				Extra_Bone_Delay_Array[i] = hit_delay_time;
				
			/*
			* Only blend down if the extra bone delay array has reached the set limit.
			*/

			//if (ragdoll_mode == false)
			if(use_auto_blending_logic)
			{

				if (Bodies_Physics_Hit_Bools[i] == false )
				{
				//	if (Bodies_Physics_Blend[i] > 0)
					{
						//Bodies_Physics_Blend[i] = 0;


						if (ragdoll_mode)
						{
							float curve_parsed_value = Physanim_Enter_Curve.GetRichCurve()->Eval(get_up_timer);

							Bodies_Physics_Blend[i] = curve_parsed_value;

			
						}
						else
							Bodies_Physics_Blend[i] -= GetOwner()->GetWorld()->DeltaTimeSeconds * Hit_Disable_Speed;

					}

				}
				else //Otherwise blend up, as long as the section of the body detected a hit.
					if (Bodies_Physics_Hit_Bools[i] == true)
					{



						
						{
							Bodies_Physics_Blend[i] += GetOwner()->GetWorld()->DeltaTimeSeconds * Hit_Enable_Speed;

							if (Extra_Bone_Delay_Array[i] == hit_delay_time)
							{
								Bodies_Physics_Hit_Bools[i] = false;
							}

						}

						
					}

			}
			else
			{

				//if(Physics_States[i] == true)

				if(Autoblend_Reverse_Bools[i] == false)
				Bodies_Physics_Blend[i] += GetOwner()->GetWorld()->DeltaTimeSeconds * Hit_Enable_Speed;
				else //if(ragdoll_mode==false)
				{
					//Bodies_Physics_Blend[i] -= GetOwner()->GetWorld()->DeltaTimeSeconds * 0.1f;
					
					float curve_parsed_value = Physanim_Enter_Curve.GetRichCurve()->Eval(get_up_timer);

					Bodies_Physics_Blend[i] = curve_parsed_value;

				}
				//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, "Bodies_Physics_Blend " + FString::SanitizeFloat(Bodies_Physics_Blend[i]));

				
				if (Bodies_Physics_Blend[i] >= 1)
				{
					if (Physics_States[i] == false)
					{
						Autoblend_Reverse_Bools[i] = true;
					}
				}
				


			}




			Bodies_Physics_Blend[i] = FMath::Clamp<float>(Bodies_Physics_Blend[i], blend_min_value, 1);


			/*
			* Calculating the largest blend value of the whole skeleton to detected if any body is using physics.
			*/
			if (largest_blend_value < Bodies_Physics_Blend[i])
				largest_blend_value = Bodies_Physics_Blend[i];
		}



		Grab_Tasks_Pending = false;


		/*
		* This is the section where the Grab functions are queued and executed.
		* Only if Grab_Handle_Tasks_Queue is true, its executed.
		*/


		owning_skeleton->ForEachBodyBelow(Custom_Root_Bone, true, false, [=](FBodyInstance* BI)
		{
			int bone_index = BI->InstanceBoneIndex;


			BI->PhysicsBlendWeight = Bodies_Physics_Blend[bone_index]* Autoblendalpha;

			
			
			if (Autoblend_Reverse_Bools[bone_index] && Bodies_Physics_Blend[bone_index] == blend_min_value)
			{
				BI->SetInstanceSimulatePhysics(false);
			}

			//GEngine->AddOnScreenDebugMessage(-1, 5.1f, FColor::Red, "Grabbing Queue.. "+FString::SanitizeFloat(Bodies_Physics_Blend[bone_index]));



			if (Grab_Handle_Tasks_Queue[bone_index] == true && Grab_Handle_Locks[bone_index] == false)
			{
				if (BI->PhysicsBlendWeight == 0)
				{

					FTransform actual_bone_transform = owning_skeleton->GetBoneTransform(bone_index);
					handler_holder->physics_handle_array[bone_index]->GrabComponentAtLocationWithRotation(owning_skeleton, owning_skeleton->GetBoneName(bone_index), actual_bone_transform.GetLocation(), actual_bone_transform.Rotator());

					Grab_Handle_Locks[bone_index] = true;

					//handler_holder->physics_handle_bool_array[bone_index] = true;

					Grab_Handle_Tasks_Queue[bone_index] = false;

					Grab_Tasks_Pending = true;


				}

			}

		});

		if (Grab_Tasks_Pending == false)
		{

			if (Need_To_Remap_PhysicsStates == true)
			{

				owning_skeleton->ForEachBodyBelow(Root_Clamping_Bone, true, false, [=](FBodyInstance* BI)
				{
					int bone_index = BI->InstanceBoneIndex;

					if (Grab_Tasks_Pending == false && Need_To_Remap_PhysicsStates == true && BI->PhysicsBlendWeight == 0)
					{

						BI->SetInstanceSimulatePhysics(Remap_Physics_States_Queue[bone_index]);

						Remap_Physics_States_Queue[bone_index] = false;

					}
				});
			}


			if (!Remap_Physics_States_Queue.Contains(true))
				Need_To_Remap_PhysicsStates = false;

		}


		if (modify_physics_states == true)
		{
			owning_skeleton->ForEachBodyBelow(Custom_Root_Bone, true, false, [=](FBodyInstance* BI)
			{
				int bone_index = BI->InstanceBoneIndex;

				//
				// This section enables/disables the physics simulation depending on whether the physics blend has reached 0 or above 0.
				// Its an important section that helps with performance and disables physics when it isn't required.
				//

				if (Bodies_Physics_Hit_Bools[bone_index] == true && Physics_States[bone_index] == true)
				{
					if (BI->bSimulatePhysics == false && Bodies_Physics_Blend[bone_index] > blend_min_value)
					{
						BI->SetInstanceSimulatePhysics(true);
					}
				}
				else
				{
					if (BI->bSimulatePhysics == true && Bodies_Physics_Blend[bone_index] == blend_min_value)
					{
						BI->SetInstanceSimulatePhysics(false);

						//GEngine->AddOnScreenDebugMessage(-1, 5.1f, FColor::Red, "Turning off physics");

					}
				}

			});


		}
		else
		{

			owning_skeleton->ForEachBodyBelow(Custom_Root_Bone, true, false, [=](FBodyInstance* BI)
			{
				int bone_index = BI->InstanceBoneIndex;

				if (Physics_States[bone_index] == true && BI->bSimulatePhysics == false)
				{
					BI->SetInstanceSimulatePhysics(true,false);
				}

			});

			



		}

		//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, "get_up_timer "+FString::SanitizeFloat(get_up_timer));

		
		bool blending_unwanted_bodies_completed = true;

		for (int i = 0; i < Bodies_Physics_Blend.Num(); i++)
		{
			if (Bodies_Physics_Blend[i] > blend_min_value && Physics_States[i] == false)
			{
				blending_unwanted_bodies_completed = false;			
			}
		}

		if (blending_unwanted_bodies_completed && ragdoll_mode)
		{
			


			owning_skeleton->ForEachBodyBelow(Custom_Root_Bone, true, false, [=](FBodyInstance* BI)
			{
				int bone_index = BI->InstanceBoneIndex;

				//if (all_grabs_finished)
				{

					if (Physics_States[bone_index] == false && Bodies_Physics_Blend[bone_index] <= blend_min_value)
					{
						BI->SetInstanceSimulatePhysics(false);

					}
				}
			});

			ragdoll_mode = false;

		}
		


	}
	else
	{

		if (use_auto_blending_logic == true)
		{
			for (int i = 0; i < Bodies_Physics_Blend.Num(); i++)
			{

				Bodies_Physics_Blend[i] = 1;

			}
		}

	}







}

