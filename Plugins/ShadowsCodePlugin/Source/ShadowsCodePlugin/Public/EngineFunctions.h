// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EngineFunctions.generated.h"

/**
 * 
 */
UCLASS()
class SHADOWSCODEPLUGIN_API UEngineFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	 UFUNCTION(BluePrintCallable, BlueprintPure, Category = "WorldState", meta = (DisplayName = "IsTearingDown", DefaultToSelf = caller, HidePin = caller))
		static void K2_IsTearingDown(UObject * caller, bool& isTearingDown)
	{
		isTearingDown = caller->GetWorld()->bIsTearingDown;
	}
	

	//Validate if montage has same bones
	UFUNCTION(BluePrintCallable,BlueprintPure, Category = "SkeletalMisc", meta = (DisplayName = "ValidateMontageBones",HidePin = "target", DefaultToSelf = "EngineFunctions"))
		static bool ValidateMontage(UAnimMontage* Montage, USkeleton* VSkeleton)
		{
			bool bvalid = false;
			USkeleton* TargetSkeleton = Montage->GetSkeleton();
			
			if (TargetSkeleton == VSkeleton)
			{
				UE_LOG(LogTemp, Log, TEXT("Montage uses the target skeleton."));
				bvalid = true;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Montage skeleton does not match."));
				bvalid = false;
			}

			return bvalid;
		
		}


	


};
