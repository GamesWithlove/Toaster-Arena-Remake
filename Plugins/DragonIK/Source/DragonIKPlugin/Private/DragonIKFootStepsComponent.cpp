/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "DragonIKFootStepsComponent.h"

// Sets default values for this component's properties
UDragonIKFootStepsComponent::UDragonIKFootStepsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;



	

}

/*
void UDragonIKFootStepsComponent::OnComponentDestroyed()
{
	// Don't forget to call parent function
	Super::OnComponentDestroyed();

	OnPlayerPickedUpItem.RemoveDynamic(this, &UDragonIKFootStepsComponent::ItemPickedUp);
}*/



// Called when the game starts
void UDragonIKFootStepsComponent::BeginPlay()
{
	Super::BeginPlay();

	OnCharacterFootStep.AddDynamic(this, &UDragonIKFootStepsComponent::CallFootSteps);

	/*
	if (OnCharacterFootStepItem.IsBound())
	{
		OnCharacterFootStepItem.Broadcast(pickedUpItem);
	}*/


}



void UDragonIKFootStepsComponent::SendInfoToDelegate(FName name,FTransform feet_transform_val,float height_difference_val,FHitResult hit_info_val)
{

	this->bone_name_input = name;

	this->foot_transform_input = feet_transform_val;

	this->height_difference_input = height_difference_val;

	this->hit_info_input = hit_info_val;


	this->allow_broadcast = true;

     


}

// Called every frame
void UDragonIKFootStepsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	if (allow_broadcast)
	{
		
		OnCharacterFootStep.Broadcast(bone_name_input, foot_transform_input, height_difference_input, hit_info_input);

		this->allow_broadcast = false;

	}

	//OnPlayerPickedUpItem.AddDynamic(this, &UActionComponent::ItemPickedUp);


}

