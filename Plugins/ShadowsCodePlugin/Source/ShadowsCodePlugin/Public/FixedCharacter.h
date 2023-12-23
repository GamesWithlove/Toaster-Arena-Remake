// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FixedCharacter.generated.h"

UCLASS()
class SHADOWSCODEPLUGIN_API AFixedCharacter : public ACharacter //, public IAISightTargetInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFixedCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		FName AIPerceptionSocketLocationSocket = (TEXT("None"));

	// Override for AI Perception "Eye" Location
	void GetActorEyesViewPoint(FVector& Location, FRotator& Rotation) const override;

	// AI Eyes function
	UFUNCTION(BlueprintImplementableEvent, Category = AI)
		FTransform GetAIEyesTransform() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
