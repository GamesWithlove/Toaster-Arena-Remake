// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ToasterUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class TOASTER_REBOOT_API UToasterUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:  
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "User Widget")
	FString WidgetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "User Widget")
	int WidgetID;
};