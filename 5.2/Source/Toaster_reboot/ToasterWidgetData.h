// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundCue.h"
#include "ToasterFontTypes.h"
#include "ToasterWidgetData.generated.h"

USTRUCT(BlueprintType)
struct TOASTER_REBOOT_API FToasterWidgetData

{
	GENERATED_USTRUCT_BODY()

	// BUTTONS
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	FText Text = FText::FromString(TEXT("Text"));

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	int32 FontSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	EToasterFontTypes Typeface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	USoundCue* ClickedSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	ETextTransformPolicy TransformPolicy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	int32 Index;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
	//EHorizTextAligment HorizTextAligment;

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
	
	
	FToasterWidgetData();
	~FToasterWidgetData();
};
