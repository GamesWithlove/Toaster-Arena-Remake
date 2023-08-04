/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "DragonIKPhysicsHolder.h"






// Sets default values
ADragonIKPhysicsHolder::ADragonIKPhysicsHolder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;





}




void ADragonIKPhysicsHolder::AddHandleComponents()
{


}



// Called when the game starts or when spawned
void ADragonIKPhysicsHolder::BeginPlay()
{
	Super::BeginPlay();
	

	

}

// Called every frame
void ADragonIKPhysicsHolder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// && holder_initialized == true
	if (connected_actor == NULL )
	{
		this->Destroy();
	}


}

