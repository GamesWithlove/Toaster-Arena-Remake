/*
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDetailGroup.h"
#include "Components/SceneComponent.h"
#include "HoverSuspensionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TOASTER_REBOOT_API UHoverSuspensionComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	//Exposed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Hover")
	bool bHover = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Hover")
	UStaticMeshComponent* BodyMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Hover")
	float FRestLenght = 50.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Hover")
	AActor * AParent = GetOwner();




	// Sets default values for this component's properties
	UHoverSuspensionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	// Private functions
	float FMinLenght = 0.0f;
	float FMaxLenght = 0.0f;
	FCollisionQueryParams LineTracecollisionQuery;
	float FSpringLenght = 0.0f;

	void UpdateHoverComponent(float DeltaTime);
};

