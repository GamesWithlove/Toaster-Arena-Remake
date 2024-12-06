// Copyright TEKHaven. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ToasterFontTypes.h"
#include "ToasterWidgetData.generated.h"
class USoundCue;
/**
 * 
 */
USTRUCT(BlueprintType)
struct FToasterWidgetData
{
    
    GENERATED_BODY()

public:

// BUTTONS

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
FText Text;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
int32 FontSize;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
EToasterFontTypes Typeface; // Add your own class here, and define in the constructor below in line 98

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Icon")
USoundCue* ClickedSound;
 

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
ETextTransformPolicy TransformPolicy; // Add your own class here, and define in the constructor below in line 98

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
int32 Index;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
EHorizTextAligment HorizTextAligment;

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

    FToasterWidgetData()
        : Text(FText::FromString(TEXT("HI IM A TEXT IN THIS TEXT VARIABLE FOR A BUTTON XD"))),
          FontSize(0),
          ClickedSound(),
          Index(0),
          IsDisabled(false),
          IsBackButton(false),
          IsDropDown(false),
          CanLaunchURL(false),
          UseTextGradient(false),
          ScaleButtonOnHover(false),
          UseIcon(false),
          UseIconDivider(false),
          OverrideIconSize(false),
          UseButtonDividers(false),
          UseButtonBackground(false),
          UseButtonBorders(false),
          IconTexture(nullptr),
          IconHeightOverride(0.0f),
          IconWidthOverride(0.0f),
          DividersMargin(0.0f),
          URLString(TEXT("URLHERE"))
    {
    }
};