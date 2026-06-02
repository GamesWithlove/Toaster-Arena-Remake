//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMSCompSaveInterface.generated.h"

UINTERFACE(Category = "Easy Multi Save", BlueprintType, meta = (DisplayName = "EMS Component Save Interface"))
class EASYMULTISAVE_API UEMSCompSaveInterface : public UInterface
{
	GENERATED_BODY()
};

class EASYMULTISAVE_API IEMSCompSaveInterface
{
	GENERATED_BODY()

public:

	/**Executed before the Component is saved.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ComponentPreSave();
	virtual void ComponentPreSave_Implementation() {}

	/**Executed after the Component has been saved.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ComponentSaved();
	virtual void ComponentSaved_Implementation() {}

	/**Executed right before the Component is loaded.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ComponentPreLoad();
	virtual void ComponentPreLoad_Implementation() {}

	/**Executed after the Component has been loaded.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ComponentLoaded();
	virtual void ComponentLoaded_Implementation() {}

};
