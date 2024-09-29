// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ToasterCreditRoles.h"
#include "ToasterCreditsData.generated.h"

USTRUCT(BlueprintType)
struct TOASTER_REBOOT_API FToasterCreditsData : public FTableRowBase
{
public:
	GENERATED_USTRUCT_BODY()
	
	// Developers
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Credits Data")
	EToasterCreditRoles DeveloperRole;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Credits Data")
	TArray<FName> DeveloperName;

	
	FToasterCreditsData();
	~FToasterCreditsData();
};
