//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMSActorSaveInterface.generated.h"

class UActorComponent;

UINTERFACE(Category = "Easy Multi Save", BlueprintType, meta = (DisplayName = "EMS Actor Save Interface"))
class EASYMULTISAVE_API UEMSActorSaveInterface : public UInterface
{
	GENERATED_BODY()
};

class EASYMULTISAVE_API IEMSActorSaveInterface
{
	GENERATED_BODY()

public:
	
	/**Executed before the Actor and all of it's components are saved.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ActorPreSave();
	virtual void ActorPreSave_Implementation() {}

	/**Executed when the Actor and all of it's components have been saved.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ActorSaved();
	virtual void ActorSaved_Implementation() {}

	/**Executed right before the Actor and all of it's components are loaded.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ActorPreLoad();
	virtual void ActorPreLoad_Implementation() {}

	/**Executed after the Actor and all of it's components have been loaded.*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ActorLoaded();
	virtual void ActorLoaded_Implementation() {}

	/**
	* (Not Level Blueprints) Holds the array of components that you want to save for the Actor.
	* This function is not relevant for Level Blueprints, as they cannot have components.
	*
	* @param Components - The Components that you want to save with the Actor.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Easy Multi Save")
	void ComponentsToSave(TArray<UActorComponent*>& Components);
	virtual void ComponentsToSave_Implementation(TArray<UActorComponent*>& Components) {}

};

