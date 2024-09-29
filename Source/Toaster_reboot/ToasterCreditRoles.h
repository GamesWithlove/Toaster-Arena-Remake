#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EToasterCreditRoles : uint8
{
	DEVROLE_01 UMETA(DisplayName = "Lead Developer"),
	DEVROLE_02 UMETA(DisplayName = "Programming"),
	DEVROLE_03 UMETA(DisplayName = "3D Art"),
	DEVROLE_04 UMETA(DisplayName = "3D Animation"),
	DEVROLE_05 UMETA(DisplayName = "Level Design"),
	DEVROLE_06 UMETA(DisplayName = "User Interface"),
	DEVROLE_07 UMETA(DisplayName = "Visual Effects"),
	DEVROLE_08 UMETA(DisplayName = "2D Art"),
	DEVROLE_09 UMETA(DisplayName = "Sound Production"),
	DEVROLE_10 UMETA(DisplayName = "Music Production"),
	DEVROLE_11 UMETA(DisplayName = "Voice Acting"),
};
