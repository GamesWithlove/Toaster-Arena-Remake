// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DragonIKPhysicsHolder.h"
#include "DragonIK_Library.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"

#include "Curves/CurveFloat.h"

#include "DragonIKWeaponPhysicsComponent.generated.h"

class ADragonIKPhysicsHolder;






/*
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EOrigin_Grab_DragonIK : uint8
{
	ENUM_Origin_Zero 	UMETA(DisplayName = "Grab origin is world origin"),
	ENUM_Origin_Hand 	UMETA(DisplayName = "Grab origin at dominant hand")

};
*/





UCLASS( ClassGroup=(DragonIK), meta=(DisplayName = "Dragonik Weapon Handler Component",BlueprintSpawnableComponent) )
class DRAGONIKPLUGIN_API UDragonIKWeaponPhysicsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	
	// Sets default values for this component's properties
	UDragonIKWeaponPhysicsComponent();

	TArray<FTransform> Raw_Animation_Transforms;

	USkeletalMeshComponent* owning_skeleton;

	

	UPhysicsHandleComponent* weapon_physics_handle;

	UPhysicsConstraintComponent* weapon_physics_constraint;

	bool physics_constraint_used = false;

	float arm_length = 0;


	UPrimitiveComponent* active_weapon_component;


	FTransform dominant_shoulder;
	FName dominant_shoulder_name;
	float Dynamic_Linear_strength = 0;
	FTransform Temp_Interp_Hand_Transform;



	FTransform dominant_hand_transform;

	FTransform Frozen_Hand_Transform = FTransform::Identity;
	float frozen_lerp_alpha = 1;

	FTransform last_saved_hand_transform;

	bool Weapon_Freeze_Bool = false;

	FTransform last_saved_weapon_transform;

	FTransform last_saved_relative_wep_transform;



	FName weapon_grabbed_bone = "None";

	TArray<bool> arm_grabbing_status;

	TArray<bool> arm_reset_queue_index;

	//TMap<FString, int32> handbone_array_map;
	TArray<FString> handbone_array_boneName;
	TArray<int> handbone_array_boneIndex;




	TArray<bool> should_override_hand_location;
	TArray<bool> should_override_hand_rotation;
	TArray<FTransform>	arm_override_transform;

	TArray<bool> Frozen_Elbow_Component_Status;





	/*
*
* This is a brand new feature that makes your weapon (gun,sword,apple,books etc) be physics driven but also make the arms to adapt to the collision reactions of the weapon using IK in the animation blueprint.
* There are two important elements to use this feature :-
* 1. The DragonIK Weapon handler component you add in your pawn BP
* 2. The DragonIK Weapon Arm IK Solver you add in your skeletal mesh's animation blueprint.
* Set up just your arm bone names in the hand array of your weapon arm IK solver
* Call the "first time initialization" function, then call the "grab weapon" function.
* Call the "Release weapon" to disconnect the feature.
* Physics is only applied on the weapon. The arms are purely driven by IK.
*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (DisplayName = "HOVER MOUSE HERE FOR TIPS!", PinHiddenByDefault))
		FName read_this = "A description on how to use the dragonik weapon handler component";





	/*
	* Keeping this 0 makes the weapon to only move within the maximum length of the arm from the shoulder to the hand.
	* A higher value makes the weapon to move even outside of the arm range.
	* A negative value makes the weapon movement range to be even smaller, and move inwards.
	*/
	UPROPERTY(EditAnywhere, Category = CoreInput, meta = (DisplayName = "Max Arm Length Percent"))
		float Max_Arm_Length_Percent = 0.96f;




	/*
	* Make sure this tag is of the same value as the tag value in the physanim info relayer.
	* This tag info is used to help make the physanim relayer determine the correct component to relay the animation data into.
	*/
	UPROPERTY(EditAnywhere, Category = CoreInput, meta = (DisplayName = "PhysWeapon component tag"))
		int physanim_tag_index = 1;


	/*
	* This value will only be affected after the first initialization or after each new "grab".
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Linear Strength"))
		int Linear_Strength = 500;


	/*
* This value will only be affected after the first initialization or after each new "grab".
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Angular Strength"))
		int Angular_Strength = 500;

	/*
* This value will only be affected after the first initialization or after each new "grab".
*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Linear Damp"))
		int Linear_Damp = 50;


	/*
* This value will only be affected after the first initialization or after each new "grab".
*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Angular Damp"))
		int Angular_Damp = 50;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Interpolation Speed"))
		int Interpolation_Speed = 10;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreInput, meta = (DisplayName = "Unfreeze Interpolation Speed"))
	 float unfreeze_speed = 1;


	UPROPERTY(BlueprintReadOnly, Category = CoreInput, meta = (DisplayName = "Is Weapon Grabbed ?", PinHiddenByDefault))
		bool is_grabbing = false;

		//bool Is_Weapon_Grabbed = false;



	bool this_should_override_weapon_transform = false;
	FTransform overrided_weapon_transform = FTransform::Identity;

	bool perform_grab_weapon = false;

	bool Wep_Offset_Calculated = false;

	bool perform_physics_simulation = false;


	float grab_counter = 0;

	//bool physics_welded_weapon = false;


	//bool is_grabbing = false;











//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Weapon grab origin", PinHiddenByDefault))
//		EOrigin_Grab_DragonIK grab_origin_type = EOrigin_Grab_DragonIK::ENUM_Origin_Hand;





protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	virtual void OnComponentDestroyed(bool bDestroyingHierarchy);


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	/*
	* Only needed to be called once.
	* The very first function to be called before anything else can work!
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "First Time Initialization (WeaponComp)"))
	void FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);



	/*
	* Grab the weapon and activate the corresponding arms IK
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Grab Weapon"))
	void Grab_Weapon(UPrimitiveComponent* weapon_mesh_input, FName grabbed_bone, bool simulate_physics=true, bool use_gravity = false);


	/*
	* Release the weapon and deactivate the corresponding arms IK
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Release Weapon"))
	void Release_Weapon(bool should_simulatephysics, bool use_gravity = true,bool bKeep_Attachment = true);


	/*
	* Keep the weapon holding still held and active, but virtually release the hand
	* Use the hand array index corresponding to the hand array from the WeaponArmSolver in your animbp
	*/
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Release Hand Only"))
		void Release_Hand_Only(FName hand_bone);

/*
 * Along with virtually releasing the had, position the transform of the hand and control it.
 * The weapon physics and it's position stays the same until release weapon is called.
 */
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Override Hand Transform"))
		void Release_Hand_Plus_Override(FName hand_bone,FTransform hand_transform, bool override_hand_location, bool override_hand_rotation);



	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Override Weapon Transform"))
	void Weapon_Transform_Override(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform);



	
	
/*
 * Attach the hand back to the weapon
 * Call the arm position recalibrate if you want the hand to go back to the last grabbed position or use the existing position as the new grab position
 */
	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Attach Hand Only"))
		void Attach_Hand_Only(FName hand_bone, bool arm_position_recalibrate);


	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Freeze Weapon Transform"))
	    void Freeze_Elbows_Function(FName hand_bone);


	UFUNCTION(BlueprintCallable, Category = DragonIK, meta = (DisplayName = "Un-Freeze Weapon Transform"))
	     void Unfreeze_Elbows_Function(FName hand_bone);

	


	void ModifyWeaponTransform();


	void SetWeaponPhysicsBlendWeight(float InWeight);



	void DelayedGrabEvent();


		


};
