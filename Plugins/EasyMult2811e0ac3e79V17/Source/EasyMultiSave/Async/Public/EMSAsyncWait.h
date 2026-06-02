//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSTypes.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncWait.generated.h"

class UEMSObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncWaitOutputPin);

UCLASS()
class EASYMULTISAVE_API UEMSAsyncWait : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

protected:
	UEMSAsyncWait();

public:

	UPROPERTY(BlueprintAssignable)
	FAsyncWaitOutputPin OnCompleted;
	
private:

	UPROPERTY()
	TObjectPtr<UEMSObject> EMS;

	UPROPERTY()
	TSoftObjectPtr<AActor> TargetActor;

	EAsyncCheckType Type;

	uint8 bSaveOrLoadTaskWasActive :1;
	uint8 bTimeoutTriggered : 1;
	uint8 bCompleted : 1;
	
	uint32 CheckCounter;

	FTimerHandle WaitTimerHandle;

public:

	/**
	* Wait until SaveGameActors or LoadGameActors have been completed.
	* For example, this is useful if you want access loaded variables in a BeginPlay event instead of ActorLoaded.
	* 
	* @param CheckType - The type of Async operation to wait for.
	* @param CheckActor - If set, this will only check if one particular Actor is in it's loaded state. Overrides CheckType.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Actors",
		meta = (DisplayName = "Wait For Save or Load Completed", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", AdvancedDisplay = "CheckActor"))
	static UEMSAsyncWait* AsyncWaitForOperation(UObject* WorldContextObject, EAsyncCheckType CheckType = EAsyncCheckType::CT_Load, TSoftObjectPtr<AActor> CheckActor = nullptr);

	void Activate() override;

private:

	void StartWaitTask();
	void CompleteWaitTask();
	void ForceProceed();

};
