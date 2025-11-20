//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "EMSData.h"
#include "EMSCompSaveInterface.generated.h"

UINTERFACE(Category = "Easy Multi Save", BlueprintType, meta = (DisplayName = "EMS Component Save Interface"))
class UEMSCompSaveInterface : public UInterface
{
	GENERATED_BODY()
};

class EASYMULTISAVE_API IEMSCompSaveInterface
{
	GENERATED_BODY()

public:

	/**Executed after the Component has been loaded.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ComponentLoaded();

	/**Executed before the Component is saved.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ComponentPreSave();
};
