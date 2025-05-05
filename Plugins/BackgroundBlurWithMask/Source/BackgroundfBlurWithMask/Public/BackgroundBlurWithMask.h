// Copyright Qibo Pang 2022. All Rights Reserved.

#pragma once

// Core
#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "Tickable.h"

// Misc
#include "SBackgroundBlurWithMask.h"

#include "BackgroundBlurWithMaskDefine.h"

// Generated.h
#include "BackgroundBlurWithMask.generated.h"

class UTextureRenderTarget2D;

/**
* A background blur with mask is a container widget that can contain one child widget.
* A mask texture can be applied to control the blur effect region..
*
* * Single Child
* * Blur Effect
*/
UCLASS(meta=(DisplayName="Background Blur With Mask"))
class BACKGROUNDBLURWITHMASK_API UBackgroundBlurWithMask : public UContentWidget, public FTickableGameObject
{
	GENERATED_UCLASS_BODY()

public:
	/** The padding area between the slot and the content it contains. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Content")
		FMargin Padding;

	/** The alignment of the content horizontally. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Content")
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	/** The alignment of the content vertically. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Content")
		TEnumAsByte<EVerticalAlignment> VerticalAlignment;

	/** True to modulate the strength of the blur based on the widget alpha. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		bool bApplyAlphaToBlur;

	/**
	 * How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the gpu.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance, meta = (ClampMin = 0, ClampMax = 100))
		float BlurStrength;

	/** True to control blur region using a mask material. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		bool bUseMaskMaterial = false;

	/**
	 * Mask texture to control blur region.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance, meta = (EditCondition = "!bUseMaskMaterial"))
		UTexture2D* MaskTexture;

	/**
	 * Mask material setting.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance, meta = (EditCondition = "bUseMaskMaterial"))
		FMaskMaterialSetting MaskMaterialSetting;

	/**
	 * Which texture channel is used for background blur masking
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		TEnumAsByte <EMaskTextureChannel> MaskTextureChannel = EMaskTextureChannel::A;

	/** Whether or not the radius should be computed automatically or if it should use the radius */
	UPROPERTY()
		bool bOverrideAutoRadiusCalculation;

	/**
	 * This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur
	 * A larger value is more costly but allows for stronger blurs.
	 */
	UPROPERTY(EditAnywhere, AdvancedDisplay, BlueprintReadOnly, Category = Appearance, meta = (ClampMin = 0, ClampMax = 255, EditCondition = "bOverrideAutoRadiusCalculation"))
		int32 BlurRadius;

	/**
	 * An image to draw instead of applying a blur when low quality override mode is enabled.
	 * You can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1.
	 * This is usually done in the project's scalability settings
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		FSlateBrush LowQualityFallbackBrush;

public:
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual const FText GetPaletteCategory() override;
#endif

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetPadding(FMargin InPadding);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetBlurRadius(int32 InBlurRadius);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetUseMaskMaterial(bool bInUseMaskMaterial);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetMaskTexture(UTexture2D* InMaskTexture);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetMaskMaterialSetting(const FMaskMaterialSetting& InMaskMaterialSetting);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetMaskTextureChannel(EMaskTextureChannel InMaskTextureChannel);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		virtual void SetBlurStrength(float InStrength);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetLowQualityFallbackBrush(const FSlateBrush& InBrush);

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void RedrawMaskMaterial();

	UFUNCTION(BlueprintCallable, Category = "Appearance")
		UTexture* GetMaskTextureInUse() const;

	/** UObject interface */
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	// FTickableGameObject begin
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual bool IsTickableWhenPaused() const override { return true; }
	virtual bool IsTickableInEditor() const override { return true; }
	virtual ETickableTickType GetTickableTickType() const override;
	virtual bool IsTickable() const override;
	// FTickableGameObject end
protected:
	/** UWidget interface */
	virtual UClass* GetSlotClass() const override;
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void SynchronizeProperties() override;

	/** UPanelWidget interface */
	virtual void OnSlotAdded(UPanelSlot* Slot) override;
	virtual void OnSlotRemoved(UPanelSlot* Slot) override;

protected:
	TSharedPtr<class SBackgroundBlurWithMask> MyBackgroundBlur;

	UPROPERTY(Transient)
		TObjectPtr<UTextureRenderTarget2D> MaskMaterialRenderTarget = nullptr;

};
