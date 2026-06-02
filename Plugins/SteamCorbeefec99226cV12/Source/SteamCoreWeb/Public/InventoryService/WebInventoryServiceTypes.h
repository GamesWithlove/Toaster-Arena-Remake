/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/IInventoryService
*/

#pragma once

#include "WebInventoryServiceTypes.generated.h"

UENUM(Blueprintable)
enum class EModifyItemPropertyType : uint8
{
	STRING,
	BOOL,
	INT,
	FLOAT,
	REMOVE
};

USTRUCT(BlueprintType)
struct FModifyItemsItem
{
	GENERATED_BODY()

public:
	FModifyItemsItem()
		: ModifyItemPropertyType(EModifyItemPropertyType::INT)
		, PropertyValueBool(false)
		, PropertyValueInt(0)
		, PropertyValueFloat(0)
		, PropertyValueRemove(false)
	{
	}

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data") 
	FString ItemId;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	FString PropertyName;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	EModifyItemPropertyType ModifyItemPropertyType;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	FString PropertyValueString;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	bool PropertyValueBool;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	int32 PropertyValueInt;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	int32 PropertyValueFloat;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	bool PropertyValueRemove;
};

