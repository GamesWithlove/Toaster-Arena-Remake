// Copyright Green Forest Games. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
class FPatreonTextFormatter
{
public:
	static FString ParseTierDescription(const FString& RawString);

private:
	static void FormatListElements(FString& String);
	static void RemoveEndTagsContent(FString& String);
};
