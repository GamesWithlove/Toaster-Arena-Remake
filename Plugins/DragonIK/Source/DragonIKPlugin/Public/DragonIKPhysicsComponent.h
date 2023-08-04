// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DragonIKPhysicsHolder.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Curves/CurveFloat.h"

#include "DragonIKPhysicsComponent.generated.h"

class ADragonIKPhysicsHolder;








USTRUCT(BlueprintType)
struct FDragonData_PhysicsParentRelationship
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Child Bone Name", PinHiddenByDefault))
		FName child_bone_name = "None";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Parent Bone Name", PinHiddenByDefault))
		FName parent_bone_name = "None";

};







USTRUCT(BlueprintType)
struct FDragonData_PhysicsHandleMultiplier
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Bone Name", PinHiddenByDefault))
		FName bone_name = "None";

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Bone Handle Strength Multiplier", PinHiddenByDefault))
			float bone_strength = 1;

};




UCLASS( ClassGroup=(DragonIK), meta=(DisplayName = "Dragonik Physanim Component",BlueprintSpawnableComponent) )
class DRAGONIKPLUGIN_API UDragonIKPhysicsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	
	// Sets default values for this component's properties
	UDragonIKPhysicsComponent();

	TArray<FTransform> Raw_Animation_Transforms;

	USkeletalMeshComponent* owning_skeleton;

	


	ADragonIKPhysicsHolder* handler_holder;


	/*
	* Make sure this tag is of the same value as the tag value in the physanim info relayer.
	* This tag info is used to help make the physanim relayer determine the correct component to relay the animation data into.
	*/
	UPROPERTY(EditAnywhere, Category = CoreInput, meta = (DisplayName = "Physanim component tag"))
		int physanim_tag_index = 1;


	/*
	* This is the common parent physics body/bone that holds all other physics bodies together.
	* This is typically the "pelvis" body when it comes to humans. Same goes for most animals.
	*/
	UPROPERTY(EditAnywhere, Category = CoreInput, meta = (DisplayName = "Common Root Physics Bone (Eg:- Pelvis bone for Mannequin)"))
		FName Custom_Root_Bone = "pelvis";

	
	/*
	* - This is the most important input. All the bones typed here will have physical animation working.
	* - For best performance, only the core bones of a character needed physical animation influence.
	* - These core bones could be the tips of the limb bones such as the hands,head,legs,tails etc along with the bones that holds other limbs together
	* such as pelvis,chest etc.
	*/
	UPROPERTY(EditAnywhere, Category = CoreInput, meta = (DisplayName = "Individual Bone Selection"))
		TArray<FName> individual_bone_selection;



	TArray<FTransform> control_bone_relative_transforms;


	
	
	//UPROPERTY(EditAnywhere, Category = CoreInput, meta = (DisplayName = "Common Root Physics Bone (Eg:- Pelvis bone for Mannequin)"))
		FName Root_Clamping_Bone = "None";



		float saved_mass_kg = 10;














	float slight_delay_counter = 0;


	/*
	* This is an optional bone input.
	* When the body of a character faces collision, then physical animation is usually enabled for the entire body during those collisions.
	* This input lets the character only use physical animation for a limited chain of bones, a chain stopped by any of the influence stopping bones.
	* Eg:- If you use spine_03 here, and when the mannequin touches an object using the hands, then physics and physical animation is only influenced for all the bones between the hand bone and the spine_03 bone.
	*/
	UPROPERTY(EditAnywhere, Category = CoreInput, meta = (DisplayName = "Influence Stopping Bones"))
		TArray<FName> Influence_Stopping_Bones;


	/*
	* This is an optional input.
	* If any body parts need stronger or weaker physical animation compared to the rest of the body, you can list them here.
	* The bone strength value proportionaly multiplies the linear strength and angular strength of that particular body.
	*/
	UPROPERTY(EditAnywhere, Category = CoreInput, meta = (DisplayName = "Override Handle Strength Multiplier (Per bone)"))
		TArray<FDragonData_PhysicsHandleMultiplier> Override_Handle_Strength_Multiplier;






		


	//UPROPERTY(EditAnywhere, Category = Input, meta = (DisplayName = "Parent_Bone_Map"))
	TArray<FName> Parent_Bone_Map;


	//UPROPERTY(EditAnywhere, Category = Input, meta = (DisplayName = "Last Second Parent_Bone_Map"))
		TArray<FName> Last_Second_Parent_Bone_Map;


	TArray<TArray<int>> bone_to_bone_map;


	/*
	* This value will only be affected after the first initialization or after each new "grab".
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Linear Strength"))
		int Linear_Strength = 1000;


	/*
* This value will only be affected after the first initialization or after each new "grab".
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Angular Strength"))
		int Angular_Strength = 1000;


	/*
* This value will only be affected after the first initialization or after each new "grab".
*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Linear Damp"))
		int Linear_Damp = 5;


	/*
* This value will only be affected after the first initialization or after each new "grab".
*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Angular Damp"))
		int Angular_Damp = 5;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Interpolation Speed"))
		int Interpolation_Speed = 10;








	/*
	* This is a special optional additional feature.
	* You can make one physics body get affected by the positional/rotational change of another physics body. Such as a parent child relationship.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ParentChildCustomLinking, meta = (DisplayName = "(optional) Use custom Parent-Child body mapping ?"))
		bool parent_child_ragdoll_state = false;

	/*
	* Set the child-parent relationship between physics bodies here.
	* Eg:- If you set the child as the head bone and the parent as the spine_03 bone in the mannequin, then any pushback of the spine_03 body will proportionally
	* alter the transforms of the head bone.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ParentChildCustomLinking, meta = (DisplayName = "(optional) Child-Parent physics relationship", EditCondition = "parent_child_ragdoll_state"))
		TMap<FName, FName> Parent_Child_Connection_Array;







	/*
	* Let the component auto handle the physics blending whether the body is in a hit state or an non-hit state.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Use Auto Blending and Hit Logic ?"))
		bool use_auto_blending_logic = true;



	/* You can optionally modify this during runtime 
	* This is an alpha value that multiplies with the physics blending alpha during the auto blending logic
	* Ignored when in ragdoll or active-ragdoll mode
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Auto blend alpha multiplier"))
		float Autoblendalpha = 1;



	bool is_released = false;


	/*
	* An additional optional function that works in tandem with the auto blending logic
	* Let the component also turn off/on physics simulation whenever it is not hitting any physics object.
	* This will preserve performance, but can make physics turned off all the time if the onHit() doesnt register any hits from the mesh.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Modify physics simulation during gameplay for saving performance ?", EditCondition = "use_auto_blending_logic"))
		bool modify_physics_states = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Hit Enable Speed", EditCondition = "use_auto_blending_logic"))
		float Hit_Enable_Speed = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Hit Disable Speed", EditCondition = "use_auto_blending_logic"))
		float Hit_Disable_Speed = 5;



//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (DisplayName = "Modify physics simulation during gameplay for performance ?"))
//		bool modify_physics_states = true;



	/*
	* After a collision, how long should physical animation persist until it goes back to the animated state ? 
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Delay in secs until blending starts going down ?", EditCondition = "use_auto_blending_logic"))
		float hit_delay_time = 1.0f;





	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Delay for switching ragdoll off after regrab"))
	//	float delay_until_ragdoll_off = 1;



	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Ragdoll exit speed ?", EditCondition = "use_auto_blending_logic"))
	//	float get_up_speed = 5;


	float temporary_disable_speed = 5;








	/*
	* This is the physics body alpha over time whenever the character tries to transition from ragdoll to physanim animations.
	* Useful for getup animations.
	*/
	UPROPERTY(EditAnywhere, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Ragdoll to Physanim alpha blend curve over time", PinHiddenByDefault))
		FRuntimeFloatCurve Physanim_Enter_Curve;



	/*
	* This can be ticked to on/off depending on whether partial blending of a physics body leads to strange results.
	* This input was made because of one particular instance where a character's head and hands were flying so far out of it's position whenever it reacts to a hit, while using a strict influence stopping bones input
	* Blending to absolute zero can have some minor performance boost compared to blending to a value near zero.
	* But you will likely not feel any difference at all for most types of rigs. Only toggle this if you feel something is obviously off!
	*/
	UPROPERTY(EditAnywhere, Category = AlphaAndPhysicsManagement, meta = (DisplayName = "Allow physics auto blend to reach absolute zero value ?", PinHiddenByDefault))
	 bool blend_to_zero = false;


	float blend_min_value = 0;




	float get_up_timer = 0;

	bool ragdoll_mode = false;

	bool ragdoll_lock = false;


	int tick_counter = 0;





	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (DisplayName = "Bodies_Physics_Blend"))
		TArray<float> Bodies_Physics_Blend;

	TArray<float> Extra_Bone_Delay_Array;


	TArray<bool> Bodies_Physics_Hit_Bools;


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (DisplayName = "Grab_Handle_Tasks_Queue"))
	TArray<bool> Grab_Handle_Tasks_Queue;

	TArray<bool> Remap_Physics_States_Queue;

	TArray<bool> Physics_States;

	TArray<bool> Grab_Handle_Locks;

	TArray<bool> Autoblend_Reverse_Bools;



	bool component_grabbing_state = false;



	bool Grab_Tasks_Pending = false;

	bool Need_To_Remap_PhysicsStates = false;

	float largest_blend_value = 0;

	FString test_debug = "None";


	FTransform relative_mesh_transform;
	USceneComponent* mesh_parent_reference;
	//bool bring_mesh_back_in_place = false;

	bool active_ragdoll = false;



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "First Time Initialization"))
	void FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);


	void SetSkeletonInput(USkeletalMeshComponent* skeleton_input);
	void CreateAllHandles();

	//UFUNCTION(BlueprintCallable, Category = Input, meta = (DisplayName = "Grab all handles"))
	void GrabAllHandles();



	/*
	* This is for re-grabbing all the physics handles managed by the physanim component.
	* Only needed to be called if the physanim was ever released.
	* Enable exit ragdoll to true only if you are doing get up animations after a ragdoll. Exit ragdoll parameter can be ignored otherwise.
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Re-Grab all handles"))
		void ReGrabAllHandles(bool exit_ragdoll);



	//UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Execute Animated Ragdoll"))
	//	void ExecuteAnimatedRagdoll();


	void CalculateParentInfluenceBones();

	//UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Update Handle Transforms"))
	void ModifyAllHandleTransforms();

	/*
	* Call this whenever the character detects a hit.
	* It can be called anywhere, typically its called at the end of the onComponentHit or a line trace hits.
	* The optional override hit bone name is only used if the "Bone Name" value of the hit struct is an invalid value.This is useful
	* in UE 4.27 because "Bone Name" is not editable in the hit struct at the blueprint level. This parameter is ignored otherwise.
	*
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "DragonIK PhysAnims onHitCallback"))
	void OnHitCallback(const FHitResult& Hit, FName Optional_Override_Hit_Bone_Name, FVector& hit_location, FVector& hit_impulse_direction, FName& hit_bone_name);


	/*
	* This need to be called after you simualte your physics.
	* This is to cache the details of the bodies that is under physics simulation.
	* This cached data is needed for calculating the auto-blending and auto-toggling of physics simulation.
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Cache Simulation State (Call this after simulating physics)"))
	void CacheSimulationStates();


	FName GetLastSecondParentBone(FName ChildBoneIndex, FName ParentBoneIndex);

	bool BoneIsChildOf(FName ChildBoneIndex, FName ParentBoneIndex);


	/*
	* Call this when you want to turn off physical animations.
	* Enable the go ragdoll parameter if you also want to safely go into ragdoll state.
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Release all handles"))
	void ReleaseAllHandles(bool go_ragdoll);


	/*
	* Call this to safely alter the linear strength,angular strength and damping of the physanim.
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Update Physanim Data"))
	void UpdatePhysanimData(int LinearStrength, int AngularStrength, int LinearDamp, int AngularDamp);



	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Set Interpolation"))
		void SetInterpolation(int inter_value);


	/*
	* Call this to override the transform of an individual physics handle driving a specific bone.
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Override Bone Handle Transform"))
		void Control_Bone_Handle(FName bone_name, FTransform override_transform, bool enable);


	/*
	* Call this if you want to dynamically alter and reset the core bone inputs anytime during gameplay.
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Modify & Reset Bone Settings"))
		void Modify_Reset_Bone_Info(TArray<FName> bone_list);




	
	/*
	* Character will ragdoll with physical animation attribute by simply calling this function.
	* The pelvis mass override needs to be a high number to ensure the character doesn't slow fall due to the physanim handles from the arms/legs slowing down the pelvis.
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Perform Active Ragdoll"))
	void PerformActiveRagdoll(float pelvis_mass_override = 1000);




	bool IsParentBone(const FName& PotentialParent, const FName& Child);

	TMap<FName, FName> MapParentChildRelationships(const TArray<FName>& BoneNames);


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ParentChildCustomLinking, meta = (DisplayName = "active_ragdoll_tmap"))
	TMap<FName, FName> active_ragdoll_tmap;


	void UpdateBodyBlends();



	//UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Exit Ragdoll into Animation"))
		void Physanim_Safe_Exit_Ragdoll();





	TArray<FTransform> custom_override_transforms;	
	TArray<bool> custom_override_bool;



		
};
