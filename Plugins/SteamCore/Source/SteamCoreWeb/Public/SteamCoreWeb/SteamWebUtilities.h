/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCoreWeb Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Package.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamWebTypes.h"
#include "SteamWebUtilities.generated.h"
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam Utilities Class
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
template <typename TEnum>
static FORCEINLINE FString GetSteamCoreWebEnumAsString(const FString& name, TEnum val)
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *name, true);
	if (!EnumPtr)
	{
		return "";
	}

	return EnumPtr->GetNameStringByValue(static_cast<int64>(val));
}

UCLASS(abstract)
class STEAMCOREWEB_API USteamWebUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/**
	* Parse JSON Result
	*
	* @param	JSONString	JsonString from Steam WEB Api
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Utilities")
	static bool ParseJson(const FString& JSONString, TArray<FSteamCoreJson>& Data);

	/**
	* Try finding a string value from a JsonResult
	*
	* @param	JSONString		JsonString from Steam WEB Api
	* @param	key				The key that contains the value (NOT case sensitive)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Utilities", meta = (ExpandEnumAsExecs = result))
	static void FindJsonString(const FString& JSONString, FString Key, FString& Value, ESteamJsonResult& Result);

	/**
	* Try finding an array of string values from a JsonResult
	*
	* @param	JSONString		JsonString from Steam WEB Api
	* @param	key				The key that contains the value (NOT case sensitive)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Utilities", meta = (ExpandEnumAsExecs = result))
	static void FindJsonStrings(const FString& JSONString, FString Key, TArray<FString>& Values, ESteamJsonResult& Result);

	/**
	* Try finding a bool value from a JsonResult
	*
	* @param	JSONString		JsonString from Steam WEB Api
	* @param	key				The key that contains the value (NOT case sensitive)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Utilities", meta = (ExpandEnumAsExecs = result))
	static void FindJsonBool(const FString& JSONString, FString Key, bool& bValue, ESteamJsonResult& Result);

	/**
	* Try finding an array of bool values from a JsonResult
	*
	* @param	JSONString		JsonString from Steam WEB Api
	* @param	key				The key that contains the value (NOT case sensitive)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Utilities", meta = (ExpandEnumAsExecs = result))
	static void FindJsonBools(const FString& JSONString, FString Key, TArray<bool>& bValues, ESteamJsonResult& Result);

	/**
	* Try finding a number value from a JsonResult
	*
	* @param	JSONString		JsonString from Steam WEB Api
	* @param	key				The key that contains the value (NOT case sensitive)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Utilities", meta = (ExpandEnumAsExecs = result))
	static void FindJsonNumber(const FString& JSONString, FString Key, int32& Value, ESteamJsonResult& Result);

	/**
	* Try finding an array of number values from a JsonResult
	*
	* @param	JSONString		JsonString from Steam WEB Api
	* @param	key				The key that contains the value (NOT case sensitive)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|Utilities", meta = (ExpandEnumAsExecs = result))
	static void FindJsonNumbers(const FString& JSONString, FString Key, TArray<int32>& Values, ESteamJsonResult& Result);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCoreWeb|Utilities")
	static FString GetProjectKey();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCoreWeb|Utilities")
	static int32 GetProjectAppID();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCoreWeb|Utilities")
	static FString GetDevSteamID();

private:
	/*
	Find a value in string, returns the value index in the string
	*/
	static bool FindValueInString(const FString& String, const FString& key, FString& OutString);
	static bool FindValuesInString(const FString& String, const FString& Key, TArray<FString>& OutStrings, int32 MaxResults = INDEX_NONE);
};
