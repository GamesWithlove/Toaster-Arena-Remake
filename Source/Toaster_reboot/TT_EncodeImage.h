// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TT_EncodeImage.generated.h"

/**
 * 
 */
UCLASS()
class TOASTER_REBOOT_API UTT_EncodeImage : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	/**
	 *@Param ImageFilePath image file path
	 *@Return Base64 String of that image
	 *
	 *
	 */
	UFUNCTION(BlueprintCallable)
	static FString ConvertImageToBase64(const FString ImageFilePath);


	/**
 *@Param Source Base64 format of image
 *@Return Image texture 2d format
 *
 *
 */
	UFUNCTION(BlueprintCallable)
	static UTexture2D* ConvertBase64ToImage(const FString Source);
};
