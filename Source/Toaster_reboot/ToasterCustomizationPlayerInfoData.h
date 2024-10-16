#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "ToasterCustomizationPlayerInfoData.generated.h"

	USTRUCT(BlueprintType)
	struct TOASTER_REBOOT_API FToasterCustomizationPlayerInfoData : public FTableRowBase
	{
	public:
		GENERATED_USTRUCT_BODY()
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization Data")
		TSoftObjectPtr<UTexture2D> PlayerBadge;
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization Data")
		FName PlayerTag;

	

	};
