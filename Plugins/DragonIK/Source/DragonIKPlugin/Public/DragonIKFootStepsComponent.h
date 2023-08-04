// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DragonIKFootStepsComponent.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCharacterFootStep,FName,bone_name,FTransform,foot_transform,float,height_difference,FHitResult,hit_info);


UCLASS(ClassGroup = (DragonIK), meta = (DisplayName = "Dragonik Footsteps Component", BlueprintSpawnableComponent))
//UCLASS()
class DRAGONIKPLUGIN_API UDragonIKFootStepsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDragonIKFootStepsComponent();



	UPROPERTY(BlueprintCallable, BlueprintAssignable)
		FCharacterFootStep OnCharacterFootStep;


	UFUNCTION(BlueprintImplementableEvent)
		void CallFootSteps(FName bone_name, FTransform foot_transform,float height_difference,FHitResult hit_info);


	FName bone_name_input = "None";
	FTransform foot_transform_input = FTransform::Identity;
	float height_difference_input = 0;
	FHitResult hit_info_input;


	bool allow_broadcast = false;



	/*
	*
	* This is a brand new mini feature that provides foot steps based on whenever the feets touch the ground. This can be used for foot sounds,VFX etc.
	* IMPORTAINT REQUIREMENT : The dragonik foot solver is needed to be connected and used in your character's animation blueprint. This component recycles the trace information already setup in the foot solver.
	* Enable "listen for foot steps" boolean parameter in the dragonik foot solver. That's it! Foot steps callback will start working
	* In this foot steps component, use the "On Character Foot Step" callback event for all your foot step needs.
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (DisplayName = "HOVER MOUSE HERE FOR TIPS!", PinHiddenByDefault))
		FName read_this = "A description on how to use the dragonik footsteps component";



	/*
	* Choose the appropriate foot socket/bone names here.
	* Order is important! The order should be in the same order used in the feet array of the foot solver.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (DisplayName = "Foot Socket Array", PinHiddenByDefault))
		TArray<FName> foot_socket;





	/*
	* Foot steps is invoked when the feet bone/socket enters this height in component space.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (DisplayName = "Foot Step Enter Height", PinHiddenByDefault))
		float foot_enter_height = 18;

	/*
	* Foot steps is reseted when the feet bone/socket exits this height in component space. This should always be a higher number than the foot enter height.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (DisplayName = "Foot Step Exit Height", PinHiddenByDefault))
		float foot_exit_height = 20;




	void SendInfoToDelegate(FName name, FTransform feet_transform_val, float height_difference_val, FHitResult hit_info_val);


	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (DisplayName = "Foot Step Detection tolerance", PinHiddenByDefault))
		float foot_step_detection_tolerance = 0.5f;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (DisplayName = "Approx Foot Height/Size", PinHiddenByDefault))
		float approx_foot_height = 10;
		*/


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//virtual void OnComponentDestroyed() override;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


		
};
