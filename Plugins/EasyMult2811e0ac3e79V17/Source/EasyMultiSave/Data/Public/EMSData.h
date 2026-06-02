//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSTypes.h"
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "Serialization/BufferArchive.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Hash/xxhash.h"
#include "EMSData.generated.h"

class FMemoryReader;
class UWorld;
class AActor;

/**
Save Slots
**/

USTRUCT(BlueprintType)
struct FSaveSlotInfo
{
	GENERATED_BODY()

	//The name of the save slot, used to identify the save file.
	UPROPERTY(SaveGame, BlueprintReadOnly, Category = "SaveSlotInfo")
	FString Name;

	//The timestamp of when the save slot was last updated.
	UPROPERTY(SaveGame, BlueprintReadOnly, Category = "SaveSlotInfo")
	FDateTime TimeStamp;

	//The name of the current level associated with this save slot.
	UPROPERTY(SaveGame, BlueprintReadOnly, Category = "SaveSlotInfo")
	FName Level;

	//List of persistent level names in this save slot. Only valid with Multi-Level saving.
	UPROPERTY(SaveGame, BlueprintReadOnly, Category = "SaveSlotInfo")
	TArray<FName> Levels;

	//Optional custom level name that you can set individually, empty by default. 
	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "SaveSlotInfo")
	FName CustomLevel;

	//List of player names associated with this save slot.
	UPROPERTY(SaveGame, BlueprintReadOnly, Category = "SaveSlotInfo")
	TArray<FString> Players;
};


/**
Generic Save Archives
**/

USTRUCT()
struct FComponentSaveData
{
	GENERATED_BODY()

	TArray<uint8> Name;
	FTransform Transform;
	TArray<uint8> Data;

	friend FArchive& operator<<(FArchive& Ar, FComponentSaveData& ComponentData)
	{
		Ar << ComponentData.Name;
		Ar << ComponentData.Transform;
		Ar << ComponentData.Data;
		return Ar;
	}
};

USTRUCT()
struct FGameObjectSaveData
{
	GENERATED_BODY()

	TArray<uint8> Data;
	TArray<FComponentSaveData> Components;

	friend FArchive& operator<<(FArchive& Ar, FGameObjectSaveData& GameObjectData)
	{
		Ar << GameObjectData.Data;
		Ar << GameObjectData.Components;
		return Ar;
	}
};

USTRUCT()
struct FActorSaveData
{
	GENERATED_BODY()

	TArray<uint8> Class;     
	TArray<uint8> Name;
	FTransform Transform;  
	uint8 Type;
	FGameObjectSaveData SaveData;

	friend FArchive& operator<<(FArchive& Ar, FActorSaveData& ActorData)
	{
		Ar << ActorData.Class;
		Ar << ActorData.Name;
		Ar << ActorData.Transform;
		Ar << ActorData.Type;
		Ar << ActorData.SaveData;
		return Ar;
	}

	inline bool operator ==(const FActorSaveData& A) const
	{
		return A.Name == Name;
	}
};

inline uint32 GetTypeHash(const FActorSaveData& Data)
{
	return GetTypeHash(Data.Name);
}

/**
Level Save Archives
**/

USTRUCT()
struct FLevelScriptSaveData
{
	GENERATED_BODY()

	FName Name;
	FGameObjectSaveData SaveData;

	friend FArchive& operator<<(FArchive& Ar, FLevelScriptSaveData& ScriptData)
	{
		Ar << ScriptData.Name;
		Ar << ScriptData.SaveData;
		return Ar;
	}

	inline bool operator ==(const FLevelScriptSaveData& A) const
	{
		return A.Name == Name;
	}
};

USTRUCT()
struct FLevelArchive
{
	GENERATED_BODY()

	TArray<FActorSaveData> SavedActors;
	TArray<FLevelScriptSaveData> SavedScripts;
	FGameObjectSaveData SavedGameMode;
	FGameObjectSaveData SavedGameState;
	FName Level;

	friend FArchive& operator<<(FArchive& Ar, FLevelArchive& LevelArchive)
	{
		Ar << LevelArchive.SavedActors;
		Ar << LevelArchive.SavedScripts;
		Ar << LevelArchive.SavedGameMode;
		Ar << LevelArchive.SavedGameState;
		Ar << LevelArchive.Level;
		return Ar;
	}

	inline bool operator ==(const FLevelArchive& A) const
	{
		return A.Level == Level;
	}

	inline bool operator !=(const FLevelArchive& A) const
	{
		return A.Level != Level;
	}

	inline void ReplaceWith(const FLevelArchive& A)
	{
		//Mode is skipped here, since it is always persistent when using level stack.
		SavedActors = A.SavedActors;
		SavedScripts = A.SavedScripts;
		Level = A.Level;
	}

};

/**
Actor Byte Key
Used to find Actors by ID
**/

USTRUCT()
struct FActorByteKey
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<uint8> Bytes;

public:

	FActorByteKey() = default;

	explicit FActorByteKey(const TArray<uint8>& InBytes)
		: Bytes(InBytes)
	{
	}

	bool operator==(const FActorByteKey& Other) const
	{
		return Bytes == Other.Bytes;
	}

	//Generate a hash directly from the byte buffer
	friend uint32 GetTypeHash(const FActorByteKey& Key)
	{
		return EMS::GetHash(Key.Bytes.GetData(), Key.Bytes.Num());
	}
};

/**
Multi-Level Archives
**/

USTRUCT()
struct FLevelStackArchive
{
	GENERATED_BODY()

	TArray<FLevelArchive> Archives;

	FGameObjectSaveData SavedGameMode;
	FGameObjectSaveData SavedGameState;

	friend FArchive& operator<<(FArchive& Ar, FLevelStackArchive& StackedArchive)
	{
		Ar << StackedArchive.Archives;
		Ar << StackedArchive.SavedGameMode;
		Ar << StackedArchive.SavedGameState;
		return Ar;
	}

	inline void AddTo(const FLevelArchive& A)
	{
		Archives.Add(A);
	}
};

USTRUCT()
struct FMultiLevelStreamingData
{
	GENERATED_BODY()

	TArray<FActorSaveData> ActorArray;
	TArray<FLevelScriptSaveData> ScriptArray;

public:

	void CopyTo(const FLevelArchive& A);
	void CopyFrom(FLevelArchive& A);

	inline bool HasData() const
	{
		return !EMS::ArrayEmpty(ActorArray) || !EMS::ArrayEmpty(ScriptArray);
	}

	inline bool HasLevelActors() const
	{
		return !EMS::ArrayEmpty(ActorArray);
	}

private:

	template <typename TSaveData, typename TSaveDataArray>
	void ReplaceOrAddToArray(const TSaveData& Data, TSaveDataArray& OuputArray);

	void CopyActors(const TArray<FActorSaveData>& InData);
};

/**
Player Save Archives
**/

USTRUCT()
struct FPawnSaveData
{
	GENERATED_BODY()

	FVector Position;
	FRotator Rotation;
	FGameObjectSaveData SaveData;

	friend FArchive& operator<<(FArchive& Ar, FPawnSaveData& PawnData)
	{
		Ar << PawnData.Position;
		Ar << PawnData.Rotation;
		Ar << PawnData.SaveData;
		return Ar;
	}
};

USTRUCT()
struct FControllerSaveData
{
	GENERATED_BODY()

	FRotator Rotation;
	FGameObjectSaveData SaveData;

	friend FArchive& operator<<(FArchive& Ar, FControllerSaveData& ControllerData)
	{
		Ar << ControllerData.Rotation;
		Ar << ControllerData.SaveData;
		return Ar;
	}
};

USTRUCT()
struct FPlayerArchive
{
	GENERATED_BODY()

	FControllerSaveData Controller;
	FPawnSaveData Pawn;
	FGameObjectSaveData State;
	FName Level;

	friend FArchive& operator<<(FArchive& Ar, FPlayerArchive& PlayerArchive)
	{
		Ar << PlayerArchive.Controller;
		Ar << PlayerArchive.Pawn;
		Ar << PlayerArchive.State;
		Ar << PlayerArchive.Level;
		return Ar;
	}

public:

	inline void ClearPosition()
	{
		Pawn.Position = FVector::ZeroVector;
		Pawn.Rotation = FRotator::ZeroRotator;
		Controller.Rotation = FRotator::ZeroRotator;
	}

	inline void UnpackPlayer(const FPlayerArchive& PlayerArchive)
	{
		Controller = PlayerArchive.Controller;
		Pawn = PlayerArchive.Pawn;
		State = PlayerArchive.State;
	}

	inline bool HasPlayerState() const
	{
		return !EMS::ArrayEmpty(State.Data);
	}

	inline TArray<FComponentSaveData> GetControllerComps() const
	{
		return Controller.SaveData.Components;
	}

	inline TArray<FComponentSaveData> GetPawnComps() const
	{
		return Pawn.SaveData.Components;
	}

	inline TArray<FComponentSaveData> GetStateComps() const
	{
		return State.Components;
	}
};

USTRUCT()
struct FPlayerPositionArchive
{
	GENERATED_BODY()

	FVector Position;
	FRotator Rotation;
	FRotator ControlRotation;

	friend FArchive& operator<<(FArchive& Ar, FPlayerPositionArchive& PosArchive)
	{
		Ar << PosArchive.Position;
		Ar << PosArchive.Rotation;
		Ar << PosArchive.ControlRotation;
		return Ar;
	}

public:

	inline void CopyFromPlayerArchive(const FPlayerArchive& A)
	{
		Position = A.Pawn.Position;
		Rotation = A.Pawn.Rotation;
		ControlRotation = A.Controller.Rotation;
	}

	inline void CopyToPlayerArchive(FPlayerArchive& A)
	{
		A.Pawn.Position = Position;
		A.Pawn.Rotation = Rotation;
		A.Controller.Rotation = ControlRotation;
	}
};

USTRUCT()
struct FPlayerStackArchive
{
	GENERATED_BODY()

	FPlayerArchive PlayerArchive;
	TMap<FName, FPlayerPositionArchive> LevelPositions;

	friend FArchive& operator<<(FArchive& Ar, FPlayerStackArchive& StackedArchive)
	{
		//Level from PlayerArchive is obsolete in this case.
		Ar << StackedArchive.PlayerArchive;
		Ar << StackedArchive.LevelPositions;
		return Ar;
	}

public:

	inline void ReplaceOrAdd(const FPlayerArchive& A)
	{
		PlayerArchive = A;

		FPlayerPositionArchive NewPos;
		NewPos.CopyFromPlayerArchive(A);

		LevelPositions.Add(A.Level, NewPos);
	}

	inline bool IsEmpty() const
	{
		return EMS::ArrayEmpty(LevelPositions);
	}

	inline bool HasZeroPositions() const
	{
		return IsEmpty();
	}
};

/**
Object Specific Archives
**/

struct FCustomSaveInfo
{
	bool bValid = false;
	bool bUseSlot = false;
	FString CustomSaveName;
	FString SlotName;
	FString SaveFile;
	FString CachedRefName;
};

USTRUCT(BlueprintType)
struct FRawObjectSaveData
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "RawData")
	TObjectPtr<UObject> Object;

	UPROPERTY(BlueprintReadWrite, Category = "RawData")
	FString Id;

public:

	FRawObjectSaveData() = default;

	FRawObjectSaveData(TObjectPtr<UObject> InObj, const FString& InId)
	{
		Object = InObj;
		Id = InId;
	}

public:

	inline bool IsValidData() const
	{
		return !Id.IsEmpty() && IsValid(Object);
	}
};

struct FSaveObjects
{
	//Wrapper struct for single or multi-object saves apart from Actors

private:

	TArray<FRawObjectSaveData> Data;

public:

	FSaveObjects() = default;

	FSaveObjects(TObjectPtr<UObject> Obj, const FString& Id = FString())
	{
		if (Obj)
		{
			Data.Emplace(Obj, Id);
		}
	}

	FSaveObjects(const TArray<FRawObjectSaveData>& InData)
	{
		Data = InData;
	}

public:

	inline void AddFromRaw(const TArray<FRawObjectSaveData>& InObjects)
	{
		const int32 NewCount = InObjects.Num();
		Data.Reserve(Data.Num() + NewCount);

		for (const FRawObjectSaveData& Entry : InObjects)
		{
			if (Entry.IsValidData())
			{
				Data.Add(Entry);
			}
		}
	}

	inline const TArray<FRawObjectSaveData>& GetRawData() const
	{
		return Data;
	}

	inline UObject* GetFirst() const
	{
		//For single object use(Custom, Slot)
		return Data.Num() > 0 ? Data[0].Object.Get() : nullptr;
	}

	inline UObject* GetById(const FString& Id) const
	{
		if (Id.IsEmpty())
		{
			return nullptr;
		}

		for (const FRawObjectSaveData& Entry : Data)
		{
			if (Entry.Id == Id)
			{
				return Entry.Object.Get();
			}
		}

		return nullptr;
	}
};

/**
Load and Save Context Structs to hold data
**/

struct FLoadArchiveContext
{
	//Wrapper struct to pass around for archive loading.

public:

	const EDataLoadType LoadType;
	const bool bReadVersion;
	const FString SavePath;

private:

	const FSaveObjects Objects;

public:

	FLoadArchiveContext(const FString& InPath, const EDataLoadType InLoadType, const FSaveObjects& InObjects, const bool bInReadVersion = false)
		: LoadType(InLoadType)
		, bReadVersion(bInReadVersion)
		, SavePath(InPath)
		, Objects(InObjects)
	{
	}

	FLoadArchiveContext(const FString& InPath, const EDataLoadType InLoadType)
		: LoadType(InLoadType)
		, bReadVersion(false)
		, SavePath(InPath)
		, Objects(FSaveObjects())
	{
	}

public:

	inline const FSaveObjects& GetObjects() const
	{
		return Objects;
	}

	inline UObject* GetSingleObject() const
	{
		return Objects.GetFirst();
	}
};


USTRUCT()
struct FActorInitContext
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TObjectPtr<AActor> Actor = nullptr;

	bool bIsLoading = false;
	bool bFullReload = false;

public:

	FActorInitContext() = default;

	//Without actor
	explicit FActorInitContext(const bool bInIsLoading, const bool bInFullReload)
		: Actor(nullptr)
		, bIsLoading(bInIsLoading)
		, bFullReload(bInFullReload)
	{
	}

	//With actor
	explicit FActorInitContext(AActor* InActor, const bool bInIsLoading, const bool bInFullReload)
		: Actor(InActor)
		, bIsLoading(bInIsLoading)
		, bFullReload(bInFullReload)
	{
	}

	explicit FActorInitContext(AActor* InActor, const FActorInitContext& Base)
		: Actor(InActor)
		, bIsLoading(Base.bIsLoading)
		, bFullReload(Base.bFullReload)
	{
	}

public:

	void ApplyLoadStateTag() const;
};


/**
Save Data Helpers
**/

class EASYMULTISAVE_API FSaveHelpers
{

public:

	static FString GetRawObjectID(const FRawObjectSaveData& Data);

	static TArray<uint8> BytesFromString(const FString& String);
	static FString StringFromBytes(const TArray<uint8>& Bytes);

	static bool CompareIdentifiers(const TArray<uint8>& ArrayId, const FString& StringId);
	static bool HasSaveArchiveError(const FBufferArchive& CheckArchive, const ESaveErrorType ErrorType);
	static void ExtractPlayerNames(const UWorld* InWorld, TArray<FString>& OutPlayerNames);

	static void ResetObjectToDefaults(UObject* ObjectToReset, const bool bMustBeSaveGame);
};

class EASYMULTISAVE_API FStructHelpers
{

public:

	static void SerializeStruct(const UObject* Object);
	static void SerializeScriptStruct(const UStruct* ScriptStruct);
	static void SerializeArrayStruct(const FArrayProperty* ArrayProp);
	static void SerializeMap(const FMapProperty* MapProp);
};

/**
Save Game Archive
**/

struct FSaveGameArchive : public FObjectAndNameAsStringProxyArchive
{

private:
	uint32 ObjectVersion = 0;

public:

	FSaveGameArchive(FArchive& InArchive, const ESaveObjectType InType, const uint32 InVersion) : FObjectAndNameAsStringProxyArchive(InArchive, true)
	{
		ObjectVersion = InVersion;

		//Consider only 'Save Game' variables.
		ArIsSaveGame = (InType == ESaveObjectType::SaveGameOnly);

		//Allow to save default values.
		ArNoDelta = true;
	}

	FArchive& operator<<(UObject*& Obj) override;
	FArchive& operator<<(FSoftObjectPtr& Value) override;
	FArchive& operator<<(FSoftObjectPath& Value) override;

private:
	FArchive& CleanSoftObjectPath(FSoftObjectPath& Path);
	void FixupForPIE(FSoftObjectPath& Path);
};