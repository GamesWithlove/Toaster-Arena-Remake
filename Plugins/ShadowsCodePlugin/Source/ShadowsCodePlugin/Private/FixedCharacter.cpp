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



/*bool AFixedCharacter::CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor, const bool* bWasVisible, int32* UserData) const
{
	static const FName NAME_AILineOfSight = FName(TEXT("TestPawnLineOfSight"));
	FHitResult HitResults;
	FVector SightTargetLocation = GetMesh()->GetSocketLocation(AIPerceptionSocketLocationSocket);

	const bool bHitSocket = GetWorld()->LineTraceSingleByChannel(HitResults, ObserverLocation, SightTargetLocation, ECC_Visibility, FCollisionQueryParams(NAME_AILineOfSight, false, IgnoreActor));

	NumberOfLoSChecksPerformed++;
	//if (bHitSocket == false || (IsValid(HitResults.GetActor())) && IsOwnedBy(HitResults.GetActor()))
	//if (bHitSocket == false || (IsValid(HitResults.GetActor())) && IsOwnedBy(this))
	if (bHitSocket == false || (IsValid(HitResults.GetActor())) && IsOwnedBy(this))
	{

		OutSeenLocation = SightTargetLocation;
		OutSightStrength = 1;
		return true;


	}

	const bool bHit = GetWorld()->LineTraceSingleByChannel(HitResults, ObserverLocation,GetActorLocation(), ECC_Visibility, FCollisionQueryParams(NAME_AILineOfSight, false, IgnoreActor));

	NumberOfLoSChecksPerformed++;

	if (bHit == false || (IsValid(HitResults.GetActor())) && IsOwnedBy(this))
	{

		OutSeenLocation = GetActorLocation();
		OutSightStrength = 1;
		return true;

	}
	OutSightStrength = 0;


	return false;
}

*/

// Called every frame
void AFixedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}



// Called to bind functionality to input
void AFixedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}




