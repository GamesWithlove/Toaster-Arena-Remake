// Copyright Qibo Pang 2022. All Rights Reserved.

#include "BackgroundBlurWithMaskSlot.h"
#include "ObjectEditorUtils.h"
#include "SBackgroundBlurWithMask.h"
#include "BackgroundBlurWithMask.h"

/////////////////////////////////////////////////////
// UBackgroundBlurWithMaskSlot

UBackgroundBlurWithMaskSlot::UBackgroundBlurWithMaskSlot(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Padding = FMargin(4, 2);

	HorizontalAlignment = HAlign_Fill;
	VerticalAlignment = VAlign_Fill;
}

void UBackgroundBlurWithMaskSlot::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	BackgroundBlur.Reset();
}

void UBackgroundBlurWithMaskSlot::BuildSlot(TSharedRef<SBackgroundBlurWithMask> InBackgroundBlur)
{
	BackgroundBlur = InBackgroundBlur;

	BackgroundBlur->SetPadding(Padding);
	BackgroundBlur->SetHAlign(HorizontalAlignment);
	BackgroundBlur->SetVAlign(VerticalAlignment);

	BackgroundBlur->SetContent(Content ? Content->TakeWidget() : SNullWidget::NullWidget);
}

void UBackgroundBlurWithMaskSlot::SetPadding(FMargin InPadding)
{
	CastChecked<UBackgroundBlurWithMask>(Parent)->SetPadding(InPadding);
}

void UBackgroundBlurWithMaskSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	CastChecked<UBackgroundBlurWithMask>(Parent)->SetHorizontalAlignment(InHorizontalAlignment);
}

void UBackgroundBlurWithMaskSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	CastChecked<UBackgroundBlurWithMask>(Parent)->SetVerticalAlignment(InVerticalAlignment);
}

void UBackgroundBlurWithMaskSlot::SynchronizeProperties()
{
	if ( BackgroundBlur.IsValid() )
	{
		SetPadding(Padding);
		SetHorizontalAlignment(HorizontalAlignment);
		SetVerticalAlignment(VerticalAlignment);
	}
}

#if WITH_EDITOR

void UBackgroundBlurWithMaskSlot::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	static bool IsReentrant = false;

	if ( !IsReentrant )
	{
		IsReentrant = true;

		if ( PropertyChangedEvent.Property )
		{
			static const FName PaddingName("Padding");
			static const FName HorizontalAlignmentName("HorizontalAlignment");
			static const FName VerticalAlignmentName("VerticalAlignment");

			FName PropertyName = PropertyChangedEvent.Property->GetFName();

			if ( UBackgroundBlurWithMask* ParentBackgroundBlur = CastChecked<UBackgroundBlurWithMask>(Parent) )
			{
				if (PropertyName == PaddingName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, PaddingName, ParentBackgroundBlur, PaddingName);
				}
				else if (PropertyName == HorizontalAlignmentName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, HorizontalAlignmentName, ParentBackgroundBlur, HorizontalAlignmentName);
				}
				else if (PropertyName == VerticalAlignmentName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, VerticalAlignmentName, ParentBackgroundBlur, VerticalAlignmentName);
				}
			}
		}

		IsReentrant = false;
	}
}

#endif
