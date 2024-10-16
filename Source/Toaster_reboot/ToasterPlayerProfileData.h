#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "ToasterPlayerProfileData.generated.h"

USTRUCT(BlueprintType)
	struct TOASTER_REBOOT_API FToasterPlayerProfileData : public FTableRowBase
	{
	public:
		GENERATED_USTRUCT_BODY()
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization Data")
		TSoftObjectPtr<UTexture2D> PlayerBadge;
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization Data")
		FName PlayerTag;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization Data")
		bool IsLocked;
	};
