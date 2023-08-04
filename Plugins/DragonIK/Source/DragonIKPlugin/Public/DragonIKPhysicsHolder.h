// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/SphereComponent.h"
#include "BoneContainer.h"

#include "DragonIKPhysicsHolder.generated.h"









UCLASS()
class DRAGONIKPLUGIN_API ADragonIKPhysicsHolder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADragonIKPhysicsHolder();




	//UPROPERTY(VisibleDefaultsOnly, Category = PhysicHandle)
	TArray<UPhysicsHandleComponent*> physics_handle_array;

	//TArray<bool> physics_handle_bool_array;


	//TArray<USphereComponent*> box_shadow_array;

	//bool holder_initialized = false;



	UPROPERTY(EditAnywhere, Category = DisplaySettings, meta = (DisplayName = "Connected Actor"))
	AActor* connected_actor;



	//UPROPERTY(VisibleDefaultsOnly, Category = PhysicHandle)
		//UPhysicsHandleComponent* physics_handle_ref2;


	void AddHandleComponents();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
