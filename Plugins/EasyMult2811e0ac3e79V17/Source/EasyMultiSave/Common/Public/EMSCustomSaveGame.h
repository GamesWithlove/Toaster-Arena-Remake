//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "GameFramework/SaveGame.h"
#include "EMSCustomSaveGame.generated.h"

UCLASS(abstract)
class EASYMULTISAVE_API UEMSCustomSaveGame : public USaveGame
{
	GENERATED_BODY()

protected:

	inline virtual UWorld* GetWorld() const override
	{
		if (HasAnyFlags(RF_ClassDefaultObject))
		{
			return nullptr;
		}

		if (UObject* Outer = GetOuter())
		{
			return Outer->GetWorld();
		}

		return nullptr;
	}

public:

	/** The actual name of the custom save file. If empty it will use the class name. */
	UPROPERTY(EditDefaultsOnly, Category = "Files", meta = (DisplayName = "File Name"))
	FString SaveGameName;
	
	/** If you want to use the current save slot for the custom save file. */
	UPROPERTY(EditDefaultsOnly, Category = "Files")
	bool bUseSaveSlot = false;

public:

	//Temporary storage, used to access custom save objects from other slots than the current one
	FString SlotName;

};
