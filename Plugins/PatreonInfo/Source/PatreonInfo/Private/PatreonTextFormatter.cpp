// Copyright Green Forest Games. All Rights Reserved.

#include "PatreonTextFormatter.h"

#include "PatreonInfoSettings.h"

FString FPatreonTextFormatter::ParseTierDescription(const FString& RawString)
{
	FString ParsedString = RawString;

	const UPatreonInfoSettings* Settings = GetDefault<UPatreonInfoSettings>();
	if (ensure(Settings))
	{
		if (Settings->bFormatLists)
		{
			FormatListElements(ParsedString);
		}

		if (Settings->bStripEndTags)
		{
			RemoveEndTagsContent(ParsedString);
		}
	}

	return ParsedString;
}

void FPatreonTextFormatter::FormatListElements(FString& String)
{
	//const UPatreonInfoSettings* Settings = GetDefault<UPatreonInfoSettings>();
	const TCHAR ReplacementCharacter = TEXT('-'); // Settings->bReplaceBulletCharacterWithDash ? TEXT('-') : TEXT('�');

	int32 IndexUL = 0;
	while ((IndexUL = String.Find(TEXT("<ul>"), ESearchCase::IgnoreCase, ESearchDir::FromStart, IndexUL)) != INDEX_NONE)
	{
		String.RemoveAt(IndexUL, 4);

		int32 IndexLI = IndexUL;
		while ((IndexLI = String.Find(TEXT("<li>"), ESearchCase::IgnoreCase, ESearchDir::FromStart, IndexLI)) != INDEX_NONE)
		{
			String[IndexLI + 0] = *TEXT(" ");
			String[IndexLI + 1] = *TEXT(" ");
			String[IndexLI + 2] = ReplacementCharacter;
			String[IndexLI + 3] = *TEXT(" ");

			const int32 EndIndexLI = String.Find(TEXT("</li>"), ESearchCase::IgnoreCase, ESearchDir::FromStart, IndexLI);
			if (EndIndexLI == INDEX_NONE)
			{
				UE_LOG(LogTemp, Warning, TEXT("Closing character expected but not found, string probably malformed."));
				break;
			}

			String.RemoveAt(EndIndexLI, 5);
		}

		const int32 EndIndexUL = String.Find(TEXT("</ul>"), ESearchCase::IgnoreCase, ESearchDir::FromStart, IndexUL);
		if (EndIndexUL == INDEX_NONE)
		{
			UE_LOG(LogTemp, Warning, TEXT("Closing character expected but not found, string probably malformed."));
			break;
		}

		String.RemoveAt(EndIndexUL, 5);
	}
}

void FPatreonTextFormatter::RemoveEndTagsContent(FString& String)
{
	int32 Index = 0;
	while ((Index = String.Find(TEXT("</"), ESearchCase::IgnoreCase, ESearchDir::FromStart, Index)) != INDEX_NONE)
	{
		const int32 StartIndex = Index + 2;
		const int32 EndIndex = String.Find(TEXT(">"), ESearchCase::IgnoreCase, ESearchDir::FromStart, Index);
		if (EndIndex == INDEX_NONE)
		{
			UE_LOG(LogTemp, Warning, TEXT("Closing character expected but not found, string probably malformed."));
			break;
		}

		const int32 Length = EndIndex - StartIndex;
		String.RemoveAt(Index + 2, Length);

		Index++; // Prevent cyclic loop.
	}
}
