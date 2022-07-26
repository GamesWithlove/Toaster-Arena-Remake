// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Curves/CurveVector.h"
#include "ReplayStructs.generated.h"


class UReplayDataObject;
class UCurveVector;
class FNetworkGUID;

USTRUCT(BlueprintType)
struct FReplayInfo
{
	GENERATED_USTRUCT_BODY()

public:
	//The UI name of the replay
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString FriendlyName;
	//The actual name of the replay on disk
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString ActualName;
	//The date the replay was recorded
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FDateTime RecordDate;
	//The length of the replay in milliseconds
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
	    int32 LengthInMS;
	//The size of the replay in Mb
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		float SizeInMb;

};



USTRUCT(BlueprintType)
struct FBlendSettings
{
	GENERATED_USTRUCT_BODY()

public:
	//The time taken to blend
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
	float BlendTime = 0.2;
	//Cubic, Linear etc functions for blending
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
	TEnumAsByte<EViewTargetBlendFunction> BlendFunction = EViewTargetBlendFunction::VTBlend_Linear;
	///Exponent used by certain blend functions to control the blend
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
	float BlendExponent = 0;
	//If true, lock outgoing view target to last frame's camera position for the remainder of the blend
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
	bool bLockOutgoing = false;

};

USTRUCT(BlueprintType)
struct FReplayEvent
{
	GENERATED_USTRUCT_BODY()

public:
	//The Event ID
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
	FString EventID;
	//The group this event belongs to 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
	FString Group;
	// The time the event was added at in milliseconds
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
	int32 TimeInMs;
	//The event data
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = Replay)
	UReplayDataObject* Data;

};

USTRUCT(BlueprintType)
struct FReplayBoolData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		bool Value;

	FORCEINLINE bool operator<(const FReplayBoolData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayBoolData& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayByteData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		TArray<uint8> Value;

	FORCEINLINE bool operator<(const FReplayByteData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayByteData& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayIntData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		int Value;

	FORCEINLINE bool operator<(const FReplayIntData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayIntData& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayInt64Data
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		int64 Value;

	FORCEINLINE bool operator<(const FReplayInt64Data& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayInt64Data& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayFloatData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		float Value;

	FORCEINLINE bool operator<(const FReplayFloatData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayFloatData& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayNameData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FName Value;

	FORCEINLINE bool operator<(const FReplayNameData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayNameData& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayStringData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Value;

	FORCEINLINE bool operator<(const FReplayStringData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayStringData& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayTextData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FText Value;

	FORCEINLINE bool operator<(const FReplayTextData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayTextData& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayVectorData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FVector Value;

	FORCEINLINE bool operator<(const FReplayVectorData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayVectorData& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayRotatorData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FRotator Value;

	FORCEINLINE bool operator<(const FReplayRotatorData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayRotatorData& Other) const
	{
		return Name == Other.Name;
	}
};

USTRUCT(BlueprintType)
struct FReplayTransformData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FTransform Value;

	FORCEINLINE bool operator<(const FReplayTransformData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayTransformData& Other) const
	{
		return Name == Other.Name;
	}
	
};

USTRUCT(BlueprintType)
struct FReplayObjectData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Replay)
		UObject* Value;

	FORCEINLINE bool operator<(const FReplayObjectData& Other) const
	{
		return Name < Other.Name;
	}

	FORCEINLINE bool operator==(const FReplayObjectData& Other) const
	{
		return Name == Other.Name;
	}
	
};