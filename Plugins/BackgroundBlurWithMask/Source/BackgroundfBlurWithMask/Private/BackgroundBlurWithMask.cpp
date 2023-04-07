// Copyright Qibo Pang 2022. All Rights Reserved.


#include "BackgroundBlurWithMask.h"
#include "HAL/IConsoleManager.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Rendering/RenderingCommon.h"
#include "Rendering/DrawElements.h"
#include "Brushes/SlateNoResource.h"
#include "BackgroundBlurWithMaskSlot.h"
#include "UObject/EditorObjectVersion.h"
#include "ObjectEditorUtils.h"
#include "Engine/Texture2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/Engine.h"
#include "Kismet/KismetRenderingLibrary.h"

#define LOCTEXT_NAMESPACE "BackgroundBlurWithMask"

UBackgroundBlurWithMask::UBackgroundBlurWithMask(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, Padding(0.f, 0.f)
	, bApplyAlphaToBlur(true)
	, BlurStrength(0.f)
	, bUseMaskMaterial(false)
	, bOverrideAutoRadiusCalculation(false)
	, BlurRadius(0)
	, LowQualityFallbackBrush(FSlateNoResource())
{
	bIsVariable = false;
	Visibility = ESlateVisibility::SelfHitTestInvisible;
}

void UBackgroundBlurWithMask::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyBackgroundBlur.Reset();
}

UClass* UBackgroundBlurWithMask::GetSlotClass() const
{
	return UBackgroundBlurWithMaskSlot::StaticClass();
}

TSharedRef<SWidget> UBackgroundBlurWithMask::RebuildWidget()
{
	MyBackgroundBlur = SNew(SBackgroundBlurWithMask);

	if (GetChildrenCount() > 0)
	{
		Cast<UBackgroundBlurWithMaskSlot>(GetContentSlot())->BuildSlot(MyBackgroundBlur.ToSharedRef());
	}

	return MyBackgroundBlur.ToSharedRef();
}

void UBackgroundBlurWithMask::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetPadding(Padding);
		MyBackgroundBlur->SetHAlign(HorizontalAlignment);
		MyBackgroundBlur->SetVAlign(VerticalAlignment);

		MyBackgroundBlur->SetApplyAlphaToBlur(bApplyAlphaToBlur);
		MyBackgroundBlur->SetBlurRadius(bOverrideAutoRadiusCalculation ? BlurRadius : TOptional<int32>());
		MyBackgroundBlur->SetBlurStrength(BlurStrength);
		MyBackgroundBlur->SetLowQualityBackgroundBrush(&LowQualityFallbackBrush);

		MyBackgroundBlur->SetMaskTexture(bUseMaskMaterial ? (UTexture*)MaskMaterialRenderTarget : MaskTexture);
		MyBackgroundBlur->SetMaskTextureChannel(MaskTextureChannel);

		MyBackgroundBlur->SetMaskRevertAlpha(bUseMaskMaterial);
	}
}

void UBackgroundBlurWithMask::OnSlotAdded(UPanelSlot* InSlot)
{
	UBackgroundBlurWithMaskSlot* BackgroundBlurSlot = CastChecked<UBackgroundBlurWithMaskSlot>(InSlot);
	BackgroundBlurSlot->Padding = Padding;
	BackgroundBlurSlot->HorizontalAlignment = HorizontalAlignment;
	BackgroundBlurSlot->VerticalAlignment = VerticalAlignment;

	// Add the child to the live slot if it already exists
	if (MyBackgroundBlur.IsValid())
	{
		// Construct the underlying slot
		BackgroundBlurSlot->BuildSlot(MyBackgroundBlur.ToSharedRef());
	}
}

void UBackgroundBlurWithMask::OnSlotRemoved(UPanelSlot* InSlot)
{
	// Remove the widget from the live slot if it exists.
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetContent(SNullWidget::NullWidget);
	}
}

void UBackgroundBlurWithMask::SetPadding(FMargin InPadding)
{
	Padding = InPadding;
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetPadding(InPadding);
	}
}

void UBackgroundBlurWithMask::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	HorizontalAlignment = InHorizontalAlignment;
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetHAlign(InHorizontalAlignment);
	}
}

void UBackgroundBlurWithMask::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	VerticalAlignment = InVerticalAlignment;
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetVAlign(InVerticalAlignment);
	}
}

void UBackgroundBlurWithMask::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	bApplyAlphaToBlur = bInApplyAlphaToBlur;
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetApplyAlphaToBlur(bInApplyAlphaToBlur);
	}
}

void UBackgroundBlurWithMask::SetBlurRadius(int32 InBlurRadius)
{
	BlurRadius = InBlurRadius;
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetBlurRadius(InBlurRadius);
	}
}

void UBackgroundBlurWithMask::SetBlurStrength(float InStrength)
{
	BlurStrength = InStrength;
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetBlurStrength(InStrength);
	}
}

void UBackgroundBlurWithMask::SetMaskTexture(UTexture2D* InMaskTexture)
{
	MaskTexture = InMaskTexture;
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetMaskTexture(InMaskTexture);
	}
}

void UBackgroundBlurWithMask::SetUseMaskMaterial(bool bInUseMaskMaterial)
{
	bUseMaskMaterial = bInUseMaskMaterial;

	if (bUseMaskMaterial)
	{
		RedrawMaskMaterial();
		if (MyBackgroundBlur.IsValid())
		{
			MyBackgroundBlur->SetMaskTexture(MaskMaterialRenderTarget);
			MyBackgroundBlur->SetMaskRevertAlpha(true);
		}
	}
	else
	{
		if (MyBackgroundBlur.IsValid())
		{
			MyBackgroundBlur->SetMaskTexture(MaskTexture);
			MyBackgroundBlur->SetMaskRevertAlpha(false);
		}
	}
}

void UBackgroundBlurWithMask::SetMaskMaterialSetting(const FMaskMaterialSetting& InMaskMaterialSetting)
{
	if (MaskMaterialSetting != InMaskMaterialSetting)
	{
		MaskMaterialSetting = InMaskMaterialSetting;
		RedrawMaskMaterial();

		if (MyBackgroundBlur.IsValid() && bUseMaskMaterial)
		{
			MyBackgroundBlur->SetMaskTexture(MaskMaterialRenderTarget);
			MyBackgroundBlur->SetMaskRevertAlpha(true);
		}
	}
}

void UBackgroundBlurWithMask::SetMaskTextureChannel(EMaskTextureChannel InMaskTextureChannel)
{
	MaskTextureChannel = InMaskTextureChannel;
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetMaskTextureChannel(InMaskTextureChannel);
	}
}
void UBackgroundBlurWithMask::SetLowQualityFallbackBrush(const FSlateBrush& InBrush)
{
	LowQualityFallbackBrush = InBrush;
	if (MyBackgroundBlur.IsValid())
	{
		MyBackgroundBlur->SetLowQualityBackgroundBrush(&LowQualityFallbackBrush);
	}
}

TStatId UBackgroundBlurWithMask::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UBackgroundBlurWithMask, STATGROUP_Tickables);
}

ETickableTickType UBackgroundBlurWithMask::GetTickableTickType() const
{
	return HasAnyFlags(RF_ClassDefaultObject) ? ETickableTickType::Never : ETickableTickType::Always;
}

bool UBackgroundBlurWithMask::IsTickable() const
{
	return (HasAnyFlags(RF_ClassDefaultObject) == false) 
		&& bUseMaskMaterial;
}

void UBackgroundBlurWithMask::Tick(float DeltaTime)
{
	if (bUseMaskMaterial 
		&& (MaskMaterialSetting.RedrawMethod == EMaskMaterialRedrawMethod::RedrawEveryFrame || !MaskMaterialRenderTarget)
		&& MaskMaterialSetting.MaskMaterial)
	{
		RedrawMaskMaterial();
	}
}

void UBackgroundBlurWithMask::RedrawMaskMaterial()
{
	if (!MaskMaterialRenderTarget)
	{
		MaskMaterialRenderTarget = NewObject<UTextureRenderTarget2D>();
		MaskMaterialRenderTarget->ClearColor = FLinearColor::Transparent;
		MaskMaterialRenderTarget->TargetGamma = 0.0f;// 2.2f;
		MaskMaterialRenderTarget->SRGB = false;

		FIntPoint RenderTargetSize = MaskMaterialSetting.ToTextureSize;
		MaskMaterialRenderTarget->InitCustomFormat(RenderTargetSize.X, RenderTargetSize.Y, EPixelFormat::PF_B8G8R8A8, false);
		
		//MaskMaterialRenderTarget = LoadObject<UTextureRenderTarget2D>(nullptr, TEXT("/BackgroundBlurWithMask/RT_Test.RT_Test"), nullptr, LOAD_None, nullptr);
		/*if (MaskMaterialRenderTarget)
		{
			MaskMaterialRenderTarget->ResizeTarget(RenderTargetSize.X, RenderTargetSize.Y);
		}*/
		
		if (MyBackgroundBlur.IsValid() && bUseMaskMaterial)
		{
			MyBackgroundBlur->SetMaskTexture(MaskMaterialRenderTarget);
			MyBackgroundBlur->SetMaskRevertAlpha(true);
		}
	}

	UWorld* World = GEngine->GetWorldFromContextObject(this, EGetWorldErrorMode::ReturnNull);
	if (MaskMaterialRenderTarget 
		&& MaskMaterialSetting.MaskMaterial 
		&& World)
	{
		// Clear
		UKismetRenderingLibrary::ClearRenderTarget2D(this, MaskMaterialRenderTarget, FLinearColor::Black);

		// Draw
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, MaskMaterialRenderTarget, MaskMaterialSetting.MaskMaterial);
	}
}

UTexture* UBackgroundBlurWithMask::GetMaskTextureInUse() const
{
	return bUseMaskMaterial ? (UTexture*)MaskMaterialRenderTarget : MaskTexture;
}

void UBackgroundBlurWithMask::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	Ar.UsingCustomVersion(FEditorObjectVersion::GUID);
}

void UBackgroundBlurWithMask::PostLoad()
{
	Super::PostLoad();

	if (GetLinkerCustomVersion(FEditorObjectVersion::GUID) < FEditorObjectVersion::AddedBackgroundBlurContentSlot)
	{
		//Convert existing slot to new background blur slot slot.
		if (UPanelSlot* PanelSlot = GetContentSlot())
		{
			if (PanelSlot->IsA<UBackgroundBlurWithMaskSlot>() == false)
			{
				UBackgroundBlurWithMaskSlot* BlurSlot = NewObject<UBackgroundBlurWithMaskSlot>(this);
				BlurSlot->Content = PanelSlot->Content;
				BlurSlot->Content->Slot = BlurSlot;
				BlurSlot->Parent = this;
				Slots[0] = BlurSlot;

				// We don't want anyone considering this panel slot for anything, so mark it pending kill.  Otherwise
				// it will confuse the pass we do when doing template validation when it finds it outered to the blur widget.
				PanelSlot->MarkPendingKill();
			}
		}
	}
}

#if WITH_EDITOR

void UBackgroundBlurWithMask::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	static bool IsReentrant = false;

	if (!IsReentrant)
	{
		IsReentrant = true;

		if (PropertyChangedEvent.Property)
		{
			static const FName PaddingName("Padding");
			static const FName HorizontalAlignmentName("HorizontalAlignment");
			static const FName VerticalAlignmentName("VerticalAlignment");

			FName PropertyName = PropertyChangedEvent.Property->GetFName();

			if (UBackgroundBlurWithMaskSlot* BlurSlot = Cast<UBackgroundBlurWithMaskSlot>(GetContentSlot()))
			{
				if (PropertyName == PaddingName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, PaddingName, BlurSlot, PaddingName);
				}
				else if (PropertyName == HorizontalAlignmentName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, HorizontalAlignmentName, BlurSlot, HorizontalAlignmentName);
				}
				else if (PropertyName == VerticalAlignmentName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, VerticalAlignmentName, BlurSlot, VerticalAlignmentName);
				}
			}
		}

		IsReentrant = false;
	}
}

const FText UBackgroundBlurWithMask::GetPaletteCategory()
{
	return LOCTEXT("SpecialFX", "Special Effects");
}

#endif


#undef LOCTEXT_NAMESPACE


