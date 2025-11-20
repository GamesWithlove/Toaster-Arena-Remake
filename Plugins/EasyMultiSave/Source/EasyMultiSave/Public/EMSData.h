//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/World.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Serialization/BufferArchive.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "EMSData.generated.h"

class APlayerController;

DECLARE_LOG_CATEGORY_EXTERN(LogEasyMultiSave, Log, All);

#define EMS_VERSION_NUMBER 160

#define EMS_ENGINE_MIN_UE53 (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3)

#define EMS_SHORT_DELAY 0.1f

namespace EMS
{
	static const FName HasLoadedTag(TEXT("EMS_HasLoaded"));
	static const FName SkipSaveTag(TEXT("EMS_SkipSave"));
	static const FName PersistentTag(TEXT("EMS_Persistent"));
	static const FName SkipTransformTag(TEXT("EMS_SkipTransform"));
	static const FName PlayerPawnAsLevelActorTag(TEXT("EMS_PawnAsLevelActor"));

	static const FString Plus(TEXT("+"));
	static const FString Underscore(TEXT("_"));
	static const FString Slash(TEXT("/"));

	static const FString PlayerSuffix(TEXT("Player"));
	static const FString ActorSuffix(TEXT("Level"));
	static const FString SlotSuffix(TEXT("Slot"));
	static const FString ThumbSuffix(TEXT("Thumb"));

	static const FString RawObjectTag(TEXT("@raw"));

	static const FString SaveGamesFolder(TEXT("SaveGames/"));
	static const FString SaveType(TEXT(".sav"));

	static const FName PersistentActors(TEXT("VirtualPersistentActorLevel"));

	static constexpr TCHAR NativeWindowsSavePath[] = TEXT("%sSaveGames/%s.sav");

	static const FString ImgFormatPNG(TEXT("png"));
	static const FString ImgFormatJPG(TEXT("jpg"));

	static const FString VerPlugin(TEXT("EMS_"));
	static const FString VerGame(TEXT("SAVEGAME_"));
	static const FString VersionLogText = "Save File Version Check";

	//With each new UE package version, we will also need to change this tag
	#define EMS_PKG_TAG_SIZE 8
	static const uint8 UE_OBJECT_PACKAGE_TAG[EMS_PKG_TAG_SIZE] = { 0xAB, 0xCD, 0xEF, 0x12, 0x34, 0x56, 0x78, 0x9A };
	static const int UE_SAVEGAME_FILE_TYPE_TAG = 0x53415647;

	template <typename TArrayType>
	FORCEINLINE static bool ArrayEmpty(const TArrayType& InArray) { return InArray.Num() <= 0; }

	FORCEINLINE static bool EqualString(const FString& A, const FString& B) { return A.Equals(B, ESearchCase::IgnoreCase); }
}

UENUM()
enum class EUpdateActorResult: uint8
{
	RES_Success,
	RES_Skip,
	RES_ShouldSpawnNewActor,
};

UENUM()
enum class EDataLoadType : uint8
{
	DATA_Level,
	DATA_Player, 
	DATA_Object,
};

UENUM()
enum class EActorType : uint8
{
	AT_Runtime,           
	AT_Placed,           
	AT_LevelScript,       
	AT_PlayerActor,
	AT_PlayerPawn,
	AT_GameObject,
	AT_Persistent,
	AT_Destroyed,
};

UENUM()
enum class ESaveGameMode : uint8
{
	MODE_Player,
	MODE_Level,
	MODE_All,
};

UENUM()
enum class EAsyncCheckType : uint8
{
	CT_Both UMETA(DisplayName = "Both"),
	CT_Save UMETA(DisplayName = "Save Only"),
	CT_Load UMETA(DisplayName = "Load Only"),
};

UENUM(BlueprintType)
enum class ESaveErrorType : uint8
{
	ER_Player UMETA(DisplayName = "Player Actors"), 
	ER_Level  UMETA(DisplayName = "Level Actors"), 
};

UENUM()
enum class ELoadMethod: uint8
{
	/** Useful for small amounts of Actors. Blocks the game thread during load. */
	LM_Default   UMETA(DisplayName = "Default"),

	/** Useful large amounts of runtime spawned Actors. */
	LM_Deferred  UMETA(DisplayName = "Deferred"),

	/** Useful for large amounts of placed Actors.	*/
	LM_Thread   UMETA(DisplayName = "Multi-Thread"),
};

UENUM()
enum class EFileSaveMethod : uint8
{
	/** Each slot has it's own folder. */
	FM_Desktop  UMETA(DisplayName = "Desktop"),

	/** No folders. No Compression. Each slot has it's own files with '_SlotName' suffix. */
	FM_Console   UMETA(DisplayName = "Console"),
};

UENUM(BlueprintType, meta = (Bitflags))
enum class ESaveTypeFlags : uint8
{
	/** Save Player Controller, Pawn and Player State. */
	SF_Player		= 0		UMETA(DisplayName = "Player Actors"),

	/** Save Level Actors and Level Blueprints. */
	SF_Level		= 1		UMETA(DisplayName = "Level Actors"),
};

UENUM(BlueprintType, meta = (Bitflags))
enum class ELoadTypeFlags : uint8
{
	/** Load Player Controller, Pawn and Player State. */
	LF_Player		= 0		UMETA(DisplayName = "Player Actors"),

	/** Load Level Actors and Level Blueprints. */
	LF_Level		= 1		UMETA(DisplayName = "Level Actors"),
};

UENUM()
enum class EMultiLevelSaveMethod : uint8
{
	/** Multi Level Saving Disabled. */
	ML_Disabled   UMETA(DisplayName = "Disabled"),

	/** For multiple Persistent Levels only. */
	ML_Normal  UMETA(DisplayName = "Basic"),

	/** For one Persistent Level with World Partition or Streaming Sub-Levels. */
	ML_Stream  UMETA(DisplayName = "Streaming"),

	/** For multiple Persistent Levels with World Partition and/or Streaming Sub-Levels. */
	ML_Full  UMETA(DisplayName = "Full"),

};

UENUM()
enum class EThumbnailImageFormat : uint8
{
	/** Use high quality, but slow png compression. */
	Png,

	/** Use lower quality, but fast jpeg compression. */
	Jpeg,
};

UENUM(BlueprintType)
enum class ESaveFileCheckType : uint8
{
	/** Check if the save file version matches the predefined one in the project settings. */
	CheckForGame UMETA(DisplayName = "Save Game Version"),
};

UENUM()
enum class EOldPackageEngine : uint8
{
	/** Unreal Engine 4. Package Version 555. */
	EN_UE40 UMETA(DisplayName = "Unreal Engine 4"),

	/** Unreal Engine 5.0 - 5.3. Package Version 1009. */
	EN_UE50 UMETA(DisplayName = "Unreal Engine 5.0+"),

	/** Unreal Engine 5.4 and newer. Package Version 1012. */
	EN_UE54 UMETA(DisplayName = "Unreal Engine 5.4+"),
};

UENUM()
enum class EWorldPartitionMethod : uint8
{
	/** Automatic World Partition saving/loading is enabled. */
	Enabled,

	/** Automatic World Partition loading is enabled. Data persists in memory. Saving to disk must be done manually. */
	MemoryOnly,

	/** Automatic World Partition loading is enabled. All saving must be done manually. */
	LoadOnly,

	/** Automatic World Partition saving/loading is disabled. */
	Disabled,
};

UENUM()
enum class EWorldPartitionInit: uint8
{
	/** Automatically loads Level Actors on begin. */
	Default UMETA(DisplayName = "Default"),

	/** Will not automatically load the Level at the beginning. */
	Skip UMETA(DisplayName = "Skip Initial Load"),
};

UENUM()
enum class ELoadedStateMod : uint8
{
	/** The loaded state of the Actor is not changed. */
	NoModify UMETA(DisplayName = "Do Not Change"),

	/** Set the state of the Actor to unloaded. */
	Unloaded UMETA(DisplayName = "Unloaded"),

	/** Set the state of the Actor to loaded. */
	Loaded UMETA(DisplayName = "Loaded"),
};

#define ENUM_TO_FLAG(Enum) (1 << static_cast<uint8>(Enum)) 

/**
Save Game Data
**/

USTRUCT(BlueprintType)
struct FSaveSlotInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "SaveSlotInfo")
	FString Name;

	UPROPERTY(BlueprintReadOnly, Category = "SaveSlotInfo")
	FDateTime TimeStamp;

	UPROPERTY(BlueprintReadOnly, Category = "SaveSlotInfo")
	FName Level;

	UPROPERTY(BlueprintReadOnly, Category = "SaveSlotInfo")
	TArray<FString> Players;
};

USTRUCT(BlueprintType)
struct FRawObjectSaveData
{
	GENERATED_BODY()

	FRawObjectSaveData()
	{
		Object = nullptr;
		Id = FString();
	}

	UPROPERTY(BlueprintReadWrite, Category = "RawData")
	UObject* Object;

	UPROPERTY(BlueprintReadWrite, Category = "RawData")
	FString Id;

public:

	FORCEINLINE bool IsValidData() const
	{
		return !Id.IsEmpty() && IsValid(Object);
	}
};

/**
Save Game Archives
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

	FORCEINLINE bool operator ==(const FActorSaveData& A) const
	{
		return A.Name == Name;
	}
};

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

	FORCEINLINE bool operator ==(const FLevelScriptSaveData& A) const
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

	FORCEINLINE bool operator ==(const FLevelArchive& A) const
	{
		return A.Level == Level;
	}

	FORCEINLINE bool operator !=(const FLevelArchive& A) const
	{
		return A.Level != Level;
	}

	FORCEINLINE void ReplaceWith(const FLevelArchive& A)
	{
		//Mode is skipped here, since it is always persistent when using level stack.
		SavedActors = A.SavedActors;
		SavedScripts = A.SavedScripts;
		Level = A.Level;
	}

};

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

	FORCEINLINE void AddTo(const FLevelArchive& A)
	{
		Archives.Add(A);
	}
};

USTRUCT(BlueprintType)
struct FMultiLevelStreamingData
{
	GENERATED_BODY()

	TArray<FActorSaveData> ActorArray;
	TArray<FLevelScriptSaveData> ScriptArray;
	TMap<FName, FActorSaveData> ActorMap;

public:

	template <typename TSaveData, typename TSaveDataArray>
	void ReplaceOrAddToArray(const TSaveData& Data, TSaveDataArray& OuputArray);

	const FActorSaveData* FindActor(const AActor* Actor);

	void CopyActors(const TArray<FActorSaveData>& InData);
	void CopyTo(const FLevelArchive& A);
	void CopyFrom(FLevelArchive& A);

	FORCEINLINE bool HasData() const
	{
		return !EMS::ArrayEmpty(ActorArray) || !EMS::ArrayEmpty(ScriptArray);
	}

	FORCEINLINE bool HasLevelActors() const
	{
		return !EMS::ArrayEmpty(ActorArray);
	}
};

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

	FControllerSaveData SavedController;
	FPawnSaveData SavedPawn;
	FGameObjectSaveData SavedPlayerState;
	FName Level;

	friend FArchive& operator<<(FArchive& Ar, FPlayerArchive& PlayerArchive)
	{
		Ar << PlayerArchive.SavedController;
		Ar << PlayerArchive.SavedPawn;
		Ar << PlayerArchive.SavedPlayerState;
		Ar << PlayerArchive.Level;
		return Ar;
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

	FORCEINLINE void SetFromPlayerArchive(const FPlayerArchive& A)
	{
		Position = A.SavedPawn.Position;
		Rotation = A.SavedPawn.Rotation;
		ControlRotation = A.SavedController.Rotation;
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

	FORCEINLINE void ReplaceOrAdd(const FPlayerArchive& A)
	{
		PlayerArchive = A;

		FPlayerPositionArchive NewPos;
		NewPos.SetFromPlayerArchive(A);

		LevelPositions.Add(A.Level, NewPos);
	}

	FORCEINLINE bool IsEmpty() const
	{
		return EMS::ArrayEmpty(LevelPositions);
	}

	FORCEINLINE bool HasZeroPositions() const
	{
		return IsEmpty();
	}
};

struct FSaveGameArchive : public FObjectAndNameAsStringProxyArchive
{
	FSaveGameArchive(FArchive& InInnerArchive, const bool bSaveGame = true) : FObjectAndNameAsStringProxyArchive(InInnerArchive, true)
	{
		ArIsSaveGame = bSaveGame; //Consider only 'Save Game' variables
		ArNoDelta = true;  //Allow to save default values
	}
};

/**
Save Data Classes
**/

USTRUCT(BlueprintType)
struct FSaveVersionInfo
{
	GENERATED_BODY()

	FSaveVersionInfo()
	{
		Plugin = FString();
		Game = FString();
	}

	FSaveVersionInfo(const FString& InPlugin, const FString& InGame)
	{
		Plugin = InPlugin;
		Game = InGame;
	}

	friend FArchive& operator<<(FArchive& Ar, FSaveVersionInfo& VersionArchive)
	{
		Ar << VersionArchive.Plugin;
		Ar << VersionArchive.Game;
		return Ar;
	}

	bool operator!=(const FSaveVersionInfo& InInfo) const
	{
		return (EMS::EqualString(InInfo.Game, Game) && EMS::EqualString(InInfo.Plugin, Plugin)) == false;
	}

public:

	FString Plugin;
	FString Game;
};

class FSaveVersion
{

public:

	static FString GetGameVersion();
	static FSaveVersionInfo MakeSaveFileVersion();
	static bool IsSaveGameVersionEqual(const FSaveVersionInfo& SaveVersion);

	static FPackageFileVersion GetStaticOldPackageVersion();
	static bool RequiresPerObjectPackageTag(const UObject* Object);

	static void WriteObjectPackageTag(TArray<uint8>& Data);
	static bool CheckObjectPackageTag(const TArray<uint8>& Data);
};

class FSaveHelpers
{

public:

	static TArray<FString> GetDefaultSaveFiles(const FString& SaveGameName);

	static TArray<uint8> BytesFromString(const FString& String);
	static FString StringFromBytes(const TArray<uint8>& Bytes);

	static bool CompareIdentifiers(const TArray<uint8>& ArrayId, const FString& StringId);

	static void PruneSavedActors(const TMap<FName, const TWeakObjectPtr<AActor>>& InActorMap, TArray<FActorSaveData>& OutSaved);

	static bool HasSaveArchiveError(const FBufferArchive& CheckArchive, const ESaveErrorType ErrorType);
};

class FActorHelpers
{

public:

	static bool IsPlacedActor(const AActor* Actor);
	static bool IsPersistentActor(const AActor* Actor);
	static bool IsSkipTransform(const AActor* Actor);

	static bool IsLoaded(const AActor* Actor);
	static bool IsSkipSave(const AActor* Actor);

	static bool IsLevelActor(const EActorType& Type, const bool bIncludeScripts);
	static bool IsStreamRelevantActor(const EActorType& Type);

	static EActorType GetActorType(const AActor* Actor);
	static FName GetActorLevelName(const AActor* Actor);
	static FString GetFullActorName(const AActor* Actor);
	static FName GetWorldLevelName(const UWorld* InWorld);

	static bool IsRuntimeActor(const FActorSaveData& ActorData);
	static FName GetActorDataName(const FActorSaveData& ActorData);

	static bool IsMovable(const USceneComponent* SceneComp);
	static bool HasValidTransform(const FTransform& CheckTransform);
	static bool CanProcessActorTransform(const AActor* Actor);

	static bool AutoSaveLoadWorldPartition(const UWorld* InWorld = nullptr);
	
	static FString GetRawObjectID(const FRawObjectSaveData& Data);

	static bool CompareDistance(const FVector& VecA, const FVector& VecB, const APlayerController* PC);
};

class FSpawnHelpers
{

public:

	static UClass* StaticLoadSpawnClass(const FString& Class);
	static UClass* ResolveSpawnClass(const FString& InClass);
	static FActorSpawnParameters GetSpawnParams(const TArray<uint8>& NameData);

	static AActor* CheckForExistingActor(const UWorld* InWorld, const FActorSaveData& ActorArray);
};

class FStructHelpers
{

public:

	static void SerializeStruct(UObject* Object);
	static void SerializeScriptStruct(UStruct* ScriptStruct);
	static void SerializeArrayStruct(FArrayProperty* ArrayProp);
	static void SerializeMap(FMapProperty* MapProp);
};

class FSettingHelpers
{

public:

	static bool IsNormalMultiLevelSave();
	static bool IsStreamMultiLevelSave();
	static bool IsFullMultiLevelSave();
	static bool IsStackBasedMultiLevelSave();
	static bool IsContainingStreamMultiLevelSave();

	static bool IsConsoleFileSystem();

	static bool IsPersistentGameMode();
	static bool IsPersistentPlayer();

	static bool IsMultiThreadSaving();
	static bool IsMultiThreadLoading();
	static bool IsDeferredLoading();
};

class FStreamHelpers
{

public:

	static bool IsLevelStillStreaming(const UWorld* InWorld, const bool bLog = false);
	static bool IsWorldPartitionInit(const UWorld* InWorld);
};

class FSavePaths
{

public:

	static FString ValidateSaveName(const FString& SaveGameName);

	static FString GetThumbnailFormat();
	static FString GetThumbnailFileExtension();

#if PLATFORM_WINDOWS
	static void CheckForReadOnly(const FString& FullSavePath);
#endif

	static TArray<FString> GetConsoleSlotFiles(const TArray<FString>& SaveGameNames);
};

class FAsyncSaveHelpers
{

public:

	template<class T>
	static bool CheckLoadIterator(const T& It, const ESaveGameMode Mode, const bool bLog, const FString& DebugString);
	
	static bool IsAsyncSaveOrLoadTaskActive(const UWorld* InWorld, const ESaveGameMode Mode, const EAsyncCheckType CheckType, const bool bLog);
	static bool IsStreamAutoLoadActive(const ULevel* InLevel = nullptr);

	static ESaveGameMode GetMode(const int32 Data);
};

class FSaveThumbnails
{

public:

	static bool HasRenderTargetResource(UTextureRenderTarget2D* TextureRenderTarget);
	static bool CompressRenderTarget(UTextureRenderTarget2D* TexRT, FArchive& Ar);
	static bool ExportRenderTarget(UTextureRenderTarget2D* TexRT, const FString& FileName);
};