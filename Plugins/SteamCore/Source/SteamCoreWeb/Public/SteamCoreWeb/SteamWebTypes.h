/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCoreWeb Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Dom/JsonValue.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"
#include "Policies/CondensedJsonPrintPolicy.h"
#include "SteamWebTypes.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SteamCoreWebLog, Log, All);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamCoreWebCallback, const FString&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSteamCoreWebAsyncCallback, const FString&, data, bool, bWasSuccessful);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Global enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UENUM(BlueprintType, meta = (Bitflags))
enum class ESubsystemWeb : uint8
{
	SteamCoreWeb = 0 UMETA(Hidden),
	Apps,
	Broadcast,
	CheatReporting,
	Community,
	Econ,
	EconMarket,
	Economy,
	GameInventory,
	GameNotifications,
	GameServers,
	GameServerStats,
	Inventory,
	LobbyMatchmaking,
	Leaderboards,
	MicroTxn,
	News,
	PlayerService,
	PublishedFile,
	PublishedItemSearch,
	PublishedItemVoting,
	RemoteStorage,
	User,
	UserAuth,
	UserStats,
	Workshop
};

ENUM_CLASS_FLAGS(ESubsystemWeb)

enum class EVerb : uint8
{
	GET = 0,
	POST,
	PUT
};

UENUM(BlueprintType)
enum class ESteamValueType : uint8
{
	STRING,
	NUMBER,
	BOOL
};

UENUM(BlueprintType)
enum class ESteamJsonResult : uint8
{
	Found,
	NotFound,
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs 
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FSteamCoreJson
{
	GENERATED_BODY()
public:
	FSteamCoreJson()
		: Number(0)
		  , Bool(false)
		  , Type(ESteamValueType::BOOL)
	{
	}

	FSteamCoreJson(FString Key, FString value)
		: Key(Key)
		  , String(value)
		  , Number(0)
		  , Bool(false)
		  , Type(ESteamValueType::STRING)
	{
	}

	FSteamCoreJson(FString Key, double value)
		: Key(Key)
		  , String(LexToString(value))
		  , Number(value)
		  , Bool(false)
		  , Type(ESteamValueType::NUMBER)
	{
	}

	FSteamCoreJson(FString Key, bool value)
		: Key(Key)
		  , String(LexToString(value))
		  , Number(0)
		  , Bool(value)
		  , Type(ESteamValueType::BOOL)
	{
	}

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SteamCoreWeb")
	FString Key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SteamCoreWeb")
	FString String;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SteamCoreWeb")
	int32 Number;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SteamCoreWeb")
	bool Bool;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SteamCoreWeb")
	ESteamValueType Type;
};

struct FRequestString
{
public:
	FRequestString()
		: bFormatted(false)
	{
	}

	FRequestString(FString InKey)
		: bFormatted(false)
	{
		if (InKey.Len() > 0)
		{
			Key = InKey;
			Str.Append(FString::Printf(TEXT("?key=%s"), *InKey));
		}
	}

	virtual ~FRequestString()
	{
	}

public:
	void Add(FString InKey, FString InValue)
	{
		if (InKey.Len() == 0 || InValue.Len() == 0)
		{
			return;
		}
		bool bHasEntry = Str.Len() > 0;
		Str.Append(FString::Printf(TEXT("%s%s=%s"), bHasEntry ? TEXT("&") : TEXT("?"), *InKey, *InValue));
	}

	void Add(FString InKey, int32 InValue)
	{
		if (InKey.Len() == 0)
		{
			return;
		}
		bool bHasEntry = Str.Len() > 0;
		Str.Append(FString::Printf(TEXT("%s%s=%s"), bHasEntry ? TEXT("&") : TEXT("?"), *InKey, *LexToString(InValue)));
	}

	void Add(FString InKey, bool bData)
	{
		if (InKey.Len() == 0)
		{
			return;
		}
		bool bHasEntry = Str.Len() > 0;
		Str.Append(FString::Printf(TEXT("%s%s=%s"), bHasEntry ? TEXT("&") : TEXT("?"), *InKey, *LexToString(bData)));
	}

	void Add(FString InKey, TArray<uint8> Data)
	{
		if (InKey.Len() == 0 || Data.Num() == 0)
		{
			return;
		}
		bool bHasEntry = Str.Len() > 0;
		Str.Append(FString::Printf(TEXT("%s%s="), bHasEntry ? TEXT("&") : TEXT("?"), *InKey));
		for (int32 i = 0; i < Data.Num(); i++)
		{
			Str.AppendChar(Data[i]);
		}
	}

	void Add(FString InKey, TArray<int32> Data)
	{
		if (InKey.Len() == 0 || Data.Num() == 0)
		{
			return;
		}
		bool bHasEntry = Str.Len() > 0;
		for (int32 i = 0; i < Data.Num(); i++)
		{
			Str.Append(FString::Printf(TEXT("%s%s[%i]=%s"), bHasEntry ? TEXT("&") : TEXT("?"), *InKey, i, *LexToString(Data[i])));
		}
	}

	void Add(FString InKey, TArray<FString> Data)
	{
		if (InKey.Len() == 0 || Data.Num() == 0)
		{
			return;
		}
		bool bHasEntry = Str.Len() > 0;
		for (int32 i = 0; i < Data.Num(); i++)
		{
			Str.Append(FString::Printf(TEXT("%s%s[%i]=%s"), bHasEntry ? TEXT("&") : TEXT("?"), *InKey, i, *Data[i]));
		}
	}

	void Add(FString CustomString)
	{
		if (CustomString.Len() == 0)
		{
			return;
		}
		Str.Append(CustomString);
	}

	void AddNumberField(const FString& FieldName, double Number)
	{
		if (FieldName.Len() == 0)
		{
			return;
		}
		if (!Obj)
		{
			Obj = MakeShareable(new FJsonObject);
		}
		Obj->SetNumberField(FieldName, Number);
	}

	void AddStringField(const FString& FieldName, const FString& StringValue)
	{
		if (FieldName.Len() == 0 || StringValue.Len() == 0)
		{
			return;
		}
		if (!Obj)
		{
			Obj = MakeShareable(new FJsonObject);
		}
		Obj->SetStringField(FieldName, StringValue);
	}

	void AddBoolField(const FString& FieldName, bool bValue)
	{
		if (FieldName.Len() == 0)
		{
			return;
		}
		if (!Obj)
		{
			Obj = MakeShareable(new FJsonObject);
		}
		Obj->SetBoolField(FieldName, bValue);
	}

	void AddArrayField(const FString& FieldName, const TArray<TSharedPtr<FJsonValue>>& Arr)
	{
		if (FieldName.Len() == 0)
		{
			return;
		}
		if (!Obj)
		{
			Obj = MakeShareable(new FJsonObject);
		}
		Obj->SetArrayField(FieldName, Arr);
	}

public:
	FString Get()
	{
		if (Obj && !bFormatted)
		{
			const auto JsonWriter = TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR>>::Create(&JsonStr);
			FJsonSerializer::Serialize(Obj.ToSharedRef(), JsonWriter);
			Add("input_json", JsonStr);
			JsonWriter->Close();
			bFormatted = true;
		}

		return Str;
	}

	FString GetKey(bool bAsUrlFormat = true)
	{
		if (bAsUrlFormat)
		{
			return FString::Printf(TEXT("?key=%s"), *Key);
		}
		return Key;
	}

	bool IsJson() const { return Obj != nullptr; }
protected:
	FString Key;
	FString Str;
	FString JsonStr;
	TSharedPtr<FJsonObject> Obj;
	bool bFormatted;
};

struct FRequestURL
{
public:
	FRequestURL() = default;

	FRequestURL(FString interfaceName, FString functionName, FString requestString, int32 version = 1, bool bPublicAPI = false)
	{
		RequestURL = FString::Printf(TEXT("%s/%s/%s/v%i/%s"), bPublicAPI ? PublicURL : PartnerURL, *interfaceName, *functionName, version, *requestString);
	}

	virtual ~FRequestURL()
	{
	}

public:
	FString RequestURL;
	const TCHAR* PartnerURL = TEXT("https://partner.steam-api.com");
	const TCHAR* PublicURL = TEXT("https://api.steampowered.com");
public:
	operator FString() const { return RequestURL; }
	const TCHAR* operator*() const { return *RequestURL; }
};

USTRUCT(BlueprintType)
struct FWebAppsGetAppList
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	FString AppId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	FString Name;
};

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamCoreWebAppListCallback, const TArray<FWebAppsGetAppList>&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSteamCoreWebAppListAsyncCallback, const TArray<FWebAppsGetAppList>&, data, bool, bWasSuccessful);