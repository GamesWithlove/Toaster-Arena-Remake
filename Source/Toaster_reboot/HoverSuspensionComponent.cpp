/*

// Fill out your copyright notice in the Description page of Project Settings.


#include "HoverSuspensionComponent.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UHoverSuspensionComponent::UHoverSuspensionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHoverSuspensionComponent::BeginPlay()
{
	Super::BeginPlay();
	FMinLenght =  FRestLenght - FSpringtravelLenght;
	FMaxLenght = FRestLenght + FSpringtravelLenght;
	//const FName Tracetag("MyTraceTag");
	//LineTracecollisionQuery.TraceTag = Tracetag;
	//LineTracecollisionQuery.bDebugQuery = true;
	LineTracecollisionQuery.AddIgnoredActor(AParent);
	
	// ...
	
}


// Called every frame
void UHoverSuspensionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateHoverComponent(DeltaTime);
	// ...
}

//Hover physiccs
void UHoverSuspensionComponent::UpdateHoverComponent(float DeltaTime)
{
	if (bHover == true)
	{
		FHitResult outHit;
		FVector startTraceLoc = this->GetComponentLocation();
		FVector endTraceLoc = this->GetUpVector() *(FMaxLenght * -1 ) + startTraceLoc ;
		GetWorld()->LineTraceSingleByChannel(outHit,startTraceLoc,endTraceLoc,ECC_Camera,LineTracecollisionQuery,FCollisionResponseParams());
		float FPreviousSpringLenght = FSpringLenght;
		
		// Line trace + Physics impulse, does not account for Mass
		if (outHit.IsValidBlockingHit())
		{
			DrawDebugLine(GetWorld(),startTraceLoc,outHit.ImpactPoint,FColor::Red,false,0.1f,0,2.0f);
			float FcurrentSpringLength = outHit.Distance ;
			FSpringLenght = UKismetMathLibrary::FClamp(FcurrentSpringLength, FMinLenght, FMaxLenght);
			//float FSpringvelocity = (FPreviousSpringLenght - FSpringLenght/DeltaTime);
			float FSpringForce = (FRestLenght - FSpringLenght *FSpringForceConst);
		
			FVector FUpwardForce = BodyMesh->GetUpVector() + BodyMesh->GetMass() *FSpringForce;
			BodyMesh->AddForceAtLocation(FUpwardForce*-1,this->GetComponentLocation());
		}
		else
		{
			FSpringLenght = FMaxLenght;
		}
		return;
	}
	return;
}

*/