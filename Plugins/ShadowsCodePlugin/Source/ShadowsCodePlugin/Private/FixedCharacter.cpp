// Fill out your copyright notice in the Description page of Project Settings.


#include "FixedCharacter.h"

// Sets default values
AFixedCharacter::AFixedCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFixedCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFixedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

void AFixedCharacter::GetActorEyesViewPoint(FVector& Location, FRotator& Rotation) const
{
	FTransform T = GetAIEyesTransform();
	Location = T.GetLocation();
	Rotation = T.Rotator();
}

// Called to bind functionality to input
void AFixedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}




