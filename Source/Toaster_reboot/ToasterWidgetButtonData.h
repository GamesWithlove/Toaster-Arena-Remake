// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundCue.h"
#include "ToasterWidgetButtonData.generated.h"

USTRUCT(BlueprintType)
struct TOASTER_REBOOT_API FToasterWidgetButtonData

{
	GENERATED_USTRUCT_BODY()

	// BUTTON PROPERTIES
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	FText ButtonText = FText::FromString(TEXT("Button Text"));

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	int32 FontSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	USoundCue* ClickedSound;

	// Button switchers
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	bool IsDisabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	bool IsBackButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	bool IsDropDown;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	bool CanLaunchURL;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Style")
	bool UseTextGradient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Style")
	bool ScaleButtonOnHover;

	// Icon switchers
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Icon")
	bool UseIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Icon")
	bool UseIconDivider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Icon")
	bool OverrideIconSize;

	// Button style
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Style")
	bool UseButtonDividers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Style")
	bool UseButtonBackground;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Style")
	bool UseButtonBorders;

	// Button icon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Icon")
	TSoftObjectPtr<UTexture2D> IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Icon")
	float IconHeightOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Icon")
	float IconWidthOverride;

	// Button dividers
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Style")
	FMargin DividersMargin;

	// Button URL
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|URL")
	FString URLString;
	
	
	FToasterWidgetButtonData();
	~FToasterWidgetButtonData();
};
