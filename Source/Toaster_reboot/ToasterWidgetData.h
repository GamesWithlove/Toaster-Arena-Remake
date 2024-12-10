#pragma once

#include "CoreMinimal.h"
#include "CommonUI/Public/CommonTextBlock.h"
#include "ToasterWidgetData.generated.h"

// UENUM(BlueprintType)
// enum class EToasterFontTypes : uint8
// {
//     Font_01 UMETA(DisplayName = "Regular"),
//     Font_02 UMETA(DisplayName = "Medium"),
//     Font_03 UMETA(DisplayName = "Bold"),
//     Font_04 UMETA(DisplayName = "Light"),
//     Font_05 UMETA(DisplayName = "Extralight"),
// };

USTRUCT(BlueprintType)
struct FToasterWidgetData
{
    
    GENERATED_BODY()

public:

// BUTTONS

UPROPERTY(EditAnywhere, BlueprintReadWrite)
UCommonTextStyle* TextBlock = nullptr;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
FText Text;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
int32 FontSize;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Icon")
class USoundCue* ClickedSound;
    
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
ETextTransformPolicy TransformPolicy; 

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Style|Properties")
int32 Index;

    //Commented this thing because it gives compilation issues, not sure why 
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

    FToasterWidgetData()
        : Text(FText::FromString(TEXT("Button"))),
          FontSize(18),
          TransformPolicy(ETextTransformPolicy::None),
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
          URLString(TEXT("URL"))
    {
    }
};