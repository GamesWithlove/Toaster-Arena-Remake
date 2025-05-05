/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCoreWeb Documentation: https://eeldev.com
*/

#include "SteamCoreWeb/SteamWebUtilities.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"
#include "SteamCoreWeb/SteamCoreWebSettings.h"

TArray<FSteamCoreJson> ParseJson_Internal(TSharedPtr<FJsonObject> Object)
{
	TArray<FSteamCoreJson> m_Result;

	for (auto It = Object->Values.CreateConstIterator(); It; ++It)
	{
		const auto Type = It->Value->Type;

		if (Type != EJson::Object)
		{
			if (Type != EJson::Array)
			{
				switch (Type)
				{
				case EJson::String:
					m_Result.Add(FSteamCoreJson(It.Key(), It.Value()->AsString()));
					break;
				case EJson::Number:
					m_Result.Add(FSteamCoreJson(It.Key(), It.Value()->AsNumber()));
					break;
				case EJson::Boolean:
					m_Result.Add(FSteamCoreJson(It.Key(), It.Value()->AsBool()));
					break;
				}
			}
			else if (Type == EJson::Array)
			{
				for (auto& Element : It.Value()->AsArray())
				{
					if (Element->Type == EJson::Object)
					{
						TArray<FSteamCoreJson> m_ReturnedData = ParseJson_Internal(Element->AsObject());

						for (auto Data : m_ReturnedData)
						{
							m_Result.Add(Data);
						}
					}
				}
			}
		}
		else if (It->Value->Type == EJson::Object)
		{
			TArray<FSteamCoreJson> m_ReturnedData = ParseJson_Internal(It->Value->AsObject());

			for (auto m_data : m_ReturnedData)
			{
				m_Result.Add(m_data);
			}
		}
	}

	return m_Result;
}

bool USteamWebUtilities::ParseJson(const FString& JSONString, TArray<FSteamCoreJson>& Data)
{
	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JSONString);

	if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
	{
		Data = ParseJson_Internal(JsonParsed);

		return true;
	}
	return false;
}

void USteamWebUtilities::FindJsonString(const FString& JSONString, FString Key, FString& Value, ESteamJsonResult& Result)
{
	Result = ESteamJsonResult::NotFound;

	TArray<FSteamCoreJson> Data;
	Key.RemoveSpacesInline();

	if (ParseJson(JSONString, Data))
	{
		for (auto& Element : Data)
		{
			if (Element.Key.Equals(Key, ESearchCase::IgnoreCase) && Element.Type == ESteamValueType::STRING)
			{
				Value = Element.String;

				Result = ESteamJsonResult::Found;
				return;
			}
		}
		if (Result == ESteamJsonResult::NotFound)
		{
			for (auto& Element : Data)
			{
				if (FindValueInString(Element.String, Key, Value))
				{
					Result = ESteamJsonResult::Found;
					return;
				}
			}
		}
	}
}

void USteamWebUtilities::FindJsonStrings(const FString& JSONString, FString Key, TArray<FString>& Values, ESteamJsonResult& Result)
{
	Result = ESteamJsonResult::NotFound;

	TArray<FSteamCoreJson> Data;
	Key.RemoveSpacesInline();

	if (ParseJson(JSONString, Data))
	{
		for (auto& Element : Data)
		{
			if (Element.Key.Equals(Key, ESearchCase::IgnoreCase) && Element.Type == ESteamValueType::STRING)
			{
				Values.Add(Element.String);
			}
		}

		Result = Values.Num() > 0 ? ESteamJsonResult::Found : ESteamJsonResult::NotFound;

		if (Result == ESteamJsonResult::NotFound)
		{
			for (auto& Element : Data)
			{
				TArray<FString> StringResult;

				if (FindValuesInString(Element.String, Key, StringResult))
				{
					for (int32 i = 0; i < StringResult.Num(); i++)
					{
						Values.Add(StringResult[i]);
					}
				}
			}
		}

		Result = Values.Num() > 0 ? ESteamJsonResult::Found : ESteamJsonResult::NotFound;
	}
}

void USteamWebUtilities::FindJsonBool(const FString& JSONString, FString Key, bool& bValue, ESteamJsonResult& Result)
{
	Result = ESteamJsonResult::NotFound;

	TArray<FSteamCoreJson> Data;
	Key.RemoveSpacesInline();

	if (ParseJson(JSONString, Data))
	{
		for (auto& Element : Data)
		{
			if (Element.Key.Equals(Key, ESearchCase::IgnoreCase) && Element.Type == ESteamValueType::BOOL)
			{
				bValue = Element.Bool;

				Result = ESteamJsonResult::Found;
				return;
			}
		}
	}
}

void USteamWebUtilities::FindJsonBools(const FString& JSONString, FString Key, TArray<bool>& bValues, ESteamJsonResult& Result)
{
	Result = ESteamJsonResult::NotFound;

	TArray<FSteamCoreJson> Data;
	Key.RemoveSpacesInline();

	if (ParseJson(JSONString, Data))
	{
		for (auto& Element : Data)
		{
			if (Element.Key.Equals(Key, ESearchCase::IgnoreCase) && Element.Type == ESteamValueType::BOOL)
			{
				bValues.Add(Element.Bool);
			}
		}
		Result = bValues.Num() > 0 ? ESteamJsonResult::Found : ESteamJsonResult::NotFound;
	}
}

void USteamWebUtilities::FindJsonNumber(const FString& JSONString, FString Key, int32& Value, ESteamJsonResult& Result)
{
	Result = ESteamJsonResult::NotFound;

	TArray<FSteamCoreJson> Data;
	Key.RemoveSpacesInline();

	if (ParseJson(JSONString, Data))
	{
		for (auto& Element : Data)
		{
			if (Element.Key.Equals(Key, ESearchCase::IgnoreCase) && Element.Type == ESteamValueType::NUMBER)
			{
				Value = Element.Number;

				Result = ESteamJsonResult::Found;
				return;
			}
		}
	}
}

void USteamWebUtilities::FindJsonNumbers(const FString& JSONString, FString Key, TArray<int32>& Values, ESteamJsonResult& Result)
{
	Result = ESteamJsonResult::NotFound;

	TArray<FSteamCoreJson> Data;
	Key.RemoveSpacesInline();

	if (ParseJson(JSONString, Data))
	{
		for (auto& Element : Data)
		{
			if (Element.Key.Equals(Key, ESearchCase::IgnoreCase) && Element.Type == ESteamValueType::NUMBER)
			{
				Values.Add(Element.Number);
			}
		}

		Result = Values.Num() > 0 ? ESteamJsonResult::Found : ESteamJsonResult::NotFound;
	}
}

FString USteamWebUtilities::GetProjectKey()
{
	return GetDefault<USteamCoreWebSettings>()->Key;
}

int32 USteamWebUtilities::GetProjectAppID()
{
	return GetDefault<USteamCoreWebSettings>()->AppID;
}

FString USteamWebUtilities::GetDevSteamID()
{
	return GetDefault<USteamCoreWebSettings>()->DevSteamID;
}

bool USteamWebUtilities::FindValueInString(const FString& String, const FString& Key, FString& OutString)
{
	TArray<FString> Values;
	FindValuesInString(String, Key, Values);

	if (Values.IsValidIndex(0))
	{
		OutString = Values[0];
		return true;
	}
	return false;
}

bool USteamWebUtilities::FindValuesInString(const FString& String, const FString& Key, TArray<FString>& OutStrings, int32 MaxResults)
{
	FString TheKey = Key;
	TheKey.ReplaceInline(TEXT(" "), TEXT(""));

	TArray<FString> ParsedString;
	String.ParseIntoArray(ParsedString, TEXT(","));

	for (int32 i = 0; i < ParsedString.Num(); i++)
	{
		if (ParsedString[i].Contains(Key))
		{
			FString KeyValue;
			FString StringValue;
			ParsedString[i].Split(":", &KeyValue, &StringValue, ESearchCase::IgnoreCase, ESearchDir::FromStart);
			KeyValue.ReplaceInline(TEXT(" "), TEXT(""));

			if (KeyValue.Len() != TheKey.Len())
			{
				// key didnt match, lets try stripping it in case it has funny characters
				KeyValue.ReplaceInline(TEXT("\""), TEXT(""));

				if (KeyValue.Len() != TheKey.Len())
				{
					KeyValue.ReplaceInline(TEXT("{"), TEXT(""));
				}
				if (KeyValue.Len() != TheKey.Len())
				{
					KeyValue.ReplaceInline(TEXT("}"), TEXT(""));
				}
				if (KeyValue.Len() != TheKey.Len())
				{
					KeyValue.ReplaceInline(TEXT("["), TEXT(""));
				}
				if (KeyValue.Len() != TheKey.Len())
				{
					KeyValue.ReplaceInline(TEXT("]"), TEXT(""));
				}

				if (KeyValue.Len() != TheKey.Len())
				{
					continue;
				}
			}

			StringValue.ReplaceInline(TEXT("\""), TEXT(""));
			OutStrings.Add(StringValue);

			if (MaxResults != INDEX_NONE)
			{
				if (OutStrings.Num() >= MaxResults)
				{
					break;
				}
			}
		}
	}

	return OutStrings.Num() > 0;
}
