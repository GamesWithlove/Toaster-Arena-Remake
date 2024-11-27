#pragma once

#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EToasterFontTypes : uint8
{
	FONT_01 UMETA(DisplayName = "Regular"),
	FONT_02 UMETA(DisplayName = "Medium"),
	FONT_03 UMETA(DisplayName = "Bold"),
	FONT_04 UMETA(DisplayName = "Light"),
	FONT_05 UMETA(DisplayName = "Extralight"),
};