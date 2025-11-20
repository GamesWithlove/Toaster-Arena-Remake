//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  


#include "EMSData.h"
#include "EMSPluginSettings.h"
#include "EMSAsyncLoadGame.h"
#include "EMSAsyncSaveGame.h"
#include "EMSAsyncStream.h"
#include "Misc/Paths.h"
#include "Engine/Level.h"
#include "Engine/LevelScriptActor.h"
#include "Engine/LevelStreaming.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/PlayerController.h"
#include "Async/TaskGraphInterfaces.h"
#include "UObject/UObjectIterator.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFileManager.h"
#include "ImageUtils.h"

/**
FSaveVersion
**/

FString FSaveVersion::GetGameVersion()
{
	const FString CustomVersion = FString::FromInt(UEMSPluginSettings::Get()->SaveGameVersion);
	return CustomVersion;
}

FSaveVersionInfo FSaveVersion::MakeSaveFileVersion()
{
	const FString EmsVersion = EMS::VerPlugin + VERSION_STRINGIFY(EMS_VERSION_NUMBER);
	const FString GameVersion = EMS::VerGame + GetGameVersion();
	const FSaveVersionInfo Info = FSaveVersionInfo(EmsVersion, GameVersion);

	return Info;
}

bool FSaveVersion::IsSaveGameVersionEqual(const FSaveVersionInfo& SaveVersion)
{
	const FString GameVersion = EMS::VerGame + GetGameVersion();
	return EMS::EqualString(SaveVersion.Game, GameVersion);
}

FPackageFileVersion FSaveVersion::GetStaticOldPackageVersion()
{
	//Check hardcoded package file versions. Print with GPackageFileUEVersion.ToValue()

	uint32 StaticPackageVersion = 1009;

	if (UEMSPluginSettings::Get()->MigratedSaveEngineVersion == EOldPackageEngine::EN_UE40)
	{
		StaticPackageVersion = 555;
	}
	else if (UEMSPluginSettings::Get()->MigratedSaveEngineVersion == EOldPackageEngine::EN_UE54)
	{
		StaticPackageVersion = 1012;
	}

	return FPackageFileVersion(StaticPackageVersion, EUnrealEngineObjectUE5Version(StaticPackageVersion));
}

 bool FSaveVersion::RequiresPerObjectPackageTag(const UObject* Object)
{
	if (!UEMSPluginSettings::Get()->bMigratedSaveActorVersionCheck)
	{
		return false;
	}

	if (FSettingHelpers::IsStackBasedMultiLevelSave() || FSettingHelpers::IsStreamMultiLevelSave())
	{
		if (const AActor* Actor = Cast<AActor>(Object))
		{
			const EActorType Type = FActorHelpers::GetActorType(Actor);
			if (FActorHelpers::IsLevelActor(Type, true))
			{
				return true;
			}
		}
		else
		{
			//This is for components. 
			return true;
		}
	}

	return false;
}

 void FSaveVersion::WriteObjectPackageTag(TArray<uint8>& Data)
 {
	 const uint8* DataTag = EMS::UE_OBJECT_PACKAGE_TAG;
	 Data.Append(DataTag, EMS_PKG_TAG_SIZE);
 }

 bool FSaveVersion::CheckObjectPackageTag(const TArray<uint8>& Data)
 {
	 const uint8* DataTag = EMS::UE_OBJECT_PACKAGE_TAG;
	 uint8 Len = EMS_PKG_TAG_SIZE;

	 if (Data.Num() < Len)
	 {
		 return false;
	 }

	 // Compare the tag at the end of the array
	 for (int32 i = 0; i < Len; ++i)
	 {
		 if (Data[Data.Num() - Len + i] != DataTag[i])
		 {
			 return false;
		 }
	 }

	 return true;
 }

/**
FSaveHelpers
**/

TArray<FString> FSaveHelpers::GetDefaultSaveFiles(const FString& SaveGameName)
{
	TArray<FString> AllFiles;

	using namespace EMS;
	{
		const FString PlayerFile = SaveGameName + Underscore + PlayerSuffix;
		const FString LevelFile = SaveGameName + Underscore + ActorSuffix;
		const FString SlotFile = SaveGameName + Underscore + SlotSuffix;
		const FString ThumbFile = SaveGameName + Underscore + ThumbSuffix;

		AllFiles.Add(PlayerFile);
		AllFiles.Add(LevelFile);
		AllFiles.Add(SlotFile);
		AllFiles.Add(ThumbFile);
	}

	return AllFiles;
}

TArray<uint8> FSaveHelpers::BytesFromString(const FString& String)
{
	const uint32 Size = String.Len();

	TArray<uint8> Bytes;
	Bytes.SetNumUninitialized(Size);
	StringToBytes(String, Bytes.GetData(), Size);

	return Bytes;
}

FString FSaveHelpers::StringFromBytes(const TArray<uint8>& Bytes)
{
	return BytesToString(Bytes.GetData(), Bytes.Num());
}

bool FSaveHelpers::CompareIdentifiers(const TArray<uint8>& ArrayId, const FString& StringId)
{
	if (StringId.Len() != ArrayId.Num())
	{
		return false;
	}

	return ArrayId == BytesFromString(StringId);
}

void FSaveHelpers::PruneSavedActors(const TMap<FName, const TWeakObjectPtr<AActor>>& InActorMap, TArray<FActorSaveData>& OutSaved)
{
	//Reverse iterate through the array and remove unloaded placed Actors
	for (int32 i = OutSaved.Num() - 1; i >= 0; --i)
	{
		const FActorSaveData ActorArray = OutSaved[i];
		const FName ActorName = FActorHelpers::GetActorDataName(ActorArray);
		const TWeakObjectPtr<AActor> ActorPtr = InActorMap.FindRef(ActorName);

		if (!ActorPtr.IsValid(false, true))
		{
			const EActorType Type = EActorType(ActorArray.Type);
			if (FActorHelpers::IsStreamRelevantActor(Type))
			{
				OutSaved.RemoveAtSwap(i, 1, false);
			}
		}
	}
}

bool FSaveHelpers::HasSaveArchiveError(const FBufferArchive& CheckArchive, ESaveErrorType ErrorType)
{
	FString ErrorString = FString();
	if (ErrorType == ESaveErrorType::ER_Player)
	{
		ErrorString = "Player";
	}
	else if (ErrorType == ESaveErrorType::ER_Level)
	{
		ErrorString = "Level";
	}

	if (CheckArchive.IsCriticalError())
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("%s Data contains critical errors and was not saved."), *ErrorString);
		return true;
	}

	if (CheckArchive.IsError())
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("%s Data contains errors and was not saved."), *ErrorString);
		return true;
	}

	return false;
}

/**
FActorHelpers
**/

FName FActorHelpers::GetActorLevelName(const AActor* Actor)
{
	return Actor->GetLevel()->GetOuter()->GetFName();
}

FString FActorHelpers::GetFullActorName(const AActor* Actor)
{
	const FString ActorName = Actor->GetName();

	//World Partition has own unique Actor Ids
	if (AutoSaveLoadWorldPartition())
	{
		return ActorName;
	}

	//This is only valid for placed Actors. Runtime Actors are always in the persistent.
	//Can't use GetActorType here, since it would crash Multi-Thread loading.
	if (IsPlacedActor(Actor))
	{
		const FName LevelName = FActorHelpers::GetActorLevelName(Actor);
		const FString LevelString = LevelName.ToString();

		const bool bAlreadyHas = ActorName.Contains(LevelString);
		if (bAlreadyHas)
		{
			return ActorName;
		}
		else
		{
			return LevelString + EMS::Underscore + ActorName;
		}
	}

	return ActorName;
}

FName FActorHelpers::GetWorldLevelName(const UWorld* InWorld)
{
	if (!InWorld)
	{
		return NAME_None;
	}

	//Get full path without PIE prefixes

	FString LevelName = InWorld->GetOuter()->GetName();
	const FString Prefix = InWorld->StreamingLevelsPrefix;

	const int Index = LevelName.Find(Prefix);
	const int Count = Prefix.Len();

	LevelName.RemoveAt(Index, Count);

	return FName(*LevelName);
}

FName FActorHelpers::GetActorDataName(const FActorSaveData& ActorData)
{
	const FString ActorStr = FSaveHelpers::StringFromBytes(ActorData.Name);
	const FName ActorName(*ActorStr);
	return ActorName;
}

bool FActorHelpers::IsRuntimeActor(const FActorSaveData& ActorData)
{
	return ActorData.Type == uint8(EActorType::AT_Runtime) || ActorData.Type == uint8(EActorType::AT_Persistent);
}

bool FActorHelpers::IsMovable(const USceneComponent* SceneComp)
{
	if (SceneComp != nullptr)
	{
		return SceneComp->Mobility == EComponentMobility::Movable;
	}

	return false;
}

bool FActorHelpers::HasValidTransform(const FTransform& CheckTransform)
{
	return CheckTransform.IsValid() && CheckTransform.GetLocation() != FVector::ZeroVector;
}

bool FActorHelpers::CanProcessActorTransform(const AActor* Actor)
{
	return IsMovable(Actor->GetRootComponent()) && !IsSkipTransform(Actor) && Actor->GetAttachParentActor() == nullptr;
}

bool FActorHelpers::IsPlacedActor(const AActor* Actor)
{
	return Actor->IsNetStartupActor();
}

 bool FActorHelpers::IsPersistentActor(const AActor* Actor)
{
	return Actor->ActorHasTag(EMS::PersistentTag);
}

bool FActorHelpers::IsSkipTransform(const AActor* Actor)
{
	return Actor->ActorHasTag(EMS::SkipTransformTag);
}

bool FActorHelpers::IsLoaded(const AActor* Actor)
{
	return Actor->ActorHasTag(EMS::HasLoadedTag);
}

bool FActorHelpers::IsSkipSave(const AActor* Actor)
{
	return Actor->ActorHasTag(EMS::SkipSaveTag);
}

bool FActorHelpers::IsLevelActor(const EActorType& Type, const bool bIncludeScripts)
{
	if (bIncludeScripts && Type == EActorType::AT_LevelScript)
	{
		return true;
	}

	return Type == EActorType::AT_Placed || Type == EActorType::AT_Runtime || Type == EActorType::AT_Persistent || Type == EActorType::AT_Destroyed;
}

bool FActorHelpers::IsStreamRelevantActor(const EActorType& Type)
{
	return Type == EActorType::AT_Placed || Type == EActorType::AT_Destroyed;
}

bool FActorHelpers::AutoSaveLoadWorldPartition(const UWorld* InWorld)
{
	if (UEMSPluginSettings::Get()->WorldPartitionSaving == EWorldPartitionMethod::Disabled)
	{
		return false;
	}

	if (InWorld)
	{
		if (FSettingHelpers::IsContainingStreamMultiLevelSave() && InWorld->GetWorldPartition())
		{
			return true;
		}
	}

	return false;
}

FString FActorHelpers::GetRawObjectID(const FRawObjectSaveData& Data)
{
	return Data.Id + EMS::RawObjectTag;
}

bool FActorHelpers::CompareDistance(const FVector& VecA, const FVector& VecB, const APlayerController* PC)
{
	if (PC && PC->PlayerCameraManager)
	{
		const FVector CameraLoc = PC->PlayerCameraManager->GetCameraLocation();
		const float DistA = FVector::Dist(VecA, CameraLoc);
		const float DistB = FVector::Dist(VecB, CameraLoc);
		return DistA < DistB;
	}

	return false;
}

EActorType FActorHelpers::GetActorType(const AActor* Actor)
{
	//Runtime spawned
	if (!IsValid(Actor))
	{
		return EActorType::AT_Runtime;
	}

	//Check if the actor is a Pawn and is controlled by a player
	if (const APawn* Pawn = Cast<APawn>(Actor))
	{
		if (Pawn->IsPlayerControlled())
		{
			return EActorType::AT_PlayerPawn;
		}
	}

	if (Cast<APlayerController>(Actor) || Cast<APlayerState>(Actor))
	{
		return EActorType::AT_PlayerActor;
	}

	if (Cast<ALevelScriptActor>(Actor))
	{
		return EActorType::AT_LevelScript;
	}

	if (Cast<AGameModeBase>(Actor) || Cast<AGameStateBase>(Actor))
	{
		return EActorType::AT_GameObject;
	}

	if (IsPersistentActor(Actor))
	{
		return EActorType::AT_Persistent;
	}

	if (IsPlacedActor(Actor))
	{
		return EActorType::AT_Placed;
	}

	return EActorType::AT_Runtime;
}

/**
FSpawnHelpers
**/

UClass* FSpawnHelpers::StaticLoadSpawnClass(const FString& Class)
{
	//Resolve directly
	UClass* ResolvedClass = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), nullptr, *Class, nullptr, LOAD_None, nullptr));
	if (ResolvedClass)
	{
		return ResolvedClass;
	}

	//Check for Redirects
	auto Redirectors = UEMSPluginSettings::Get()->RuntimeClasses;
	if (!Redirectors.IsEmpty())
	{
		const FSoftClassPath* RedirectedClass = Redirectors.Find(Class);
		if (RedirectedClass)
		{
			return RedirectedClass->TryLoadClass<AActor>();
		}
	}

	return nullptr;
}

UClass* FSpawnHelpers::ResolveSpawnClass(const FString& InClass)
{
	if (InClass.IsEmpty())
	{
		return nullptr;
	}

	UClass* SpawnClass = FindObject<UClass>(nullptr, *InClass);
	if (!SpawnClass)
	{
		if (!IsInGameThread())
		{
			FGraphEventRef GraphEvent = FFunctionGraphTask::CreateAndDispatchWhenReady([InClass, &SpawnClass]()
			{
				SpawnClass = FSpawnHelpers::StaticLoadSpawnClass(InClass);

			}, TStatId(), nullptr, ENamedThreads::GameThread);

			//Wait for the task to complete
			if (GraphEvent.IsValid())
			{
				GraphEvent->Wait();
			}
		}
		else
		{
			SpawnClass = FSpawnHelpers::StaticLoadSpawnClass(InClass);
		}
	}

	return SpawnClass;
}

FActorSpawnParameters FSpawnHelpers::GetSpawnParams(const TArray<uint8>& NameData)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Name = FName(*FSaveHelpers::StringFromBytes(NameData));
	SpawnParams.NameMode = FActorSpawnParameters::ESpawnActorNameMode::Requested;
	return SpawnParams;
}

AActor* FSpawnHelpers::CheckForExistingActor(const UWorld* InWorld, const FActorSaveData& ActorArray)
{
	if (InWorld && InWorld->PersistentLevel)
	{
		const FName LoadedActorName(*FSaveHelpers::StringFromBytes(ActorArray.Name));
		AActor* NewLevelActor = Cast<AActor>(StaticFindObjectFast(nullptr, InWorld->PersistentLevel, LoadedActorName));
		if (NewLevelActor)
		{
			if (!FActorHelpers::IsLoaded(NewLevelActor))
			{
				return NewLevelActor;
			}
		}
	}

	return nullptr;
}

/**
FMultiLevelStreamingData
**/

template <typename TSaveData, typename TSaveDataArray>
void FMultiLevelStreamingData::ReplaceOrAddToArray(const TSaveData& Data, TSaveDataArray& OuputArray)
{
	//This will replace an existing element or add a new one. 
	const uint32 Index = OuputArray.Find(Data);
	if (Index != INDEX_NONE)
	{
		OuputArray[Index] = Data;
	}
	else
	{
		OuputArray.Add(Data);
	}
}

const FActorSaveData* FMultiLevelStreamingData::FindActor(const AActor* Actor)
{
	if (FSettingHelpers::IsMultiThreadLoading())
	{
		//Use TArray comparsion. Faster on Background-Thread
		for (const FActorSaveData& ActorData : ActorArray)
		{
			if (FSaveHelpers::CompareIdentifiers(ActorData.Name, FActorHelpers::GetFullActorName(Actor)))
			{
				return &ActorData;
			}
		}
	}
	else
	{
		//Use TMap lookup. Faster on Game-Thread
		const FName ActorKey(FActorHelpers::GetFullActorName(Actor));
		const FActorSaveData* ActorDataPtr = ActorMap.Find(ActorKey);

		return ActorDataPtr;
	}

	return nullptr;
}

void FMultiLevelStreamingData::CopyActors(const TArray<FActorSaveData>& InData)
{
	for (const FActorSaveData& ActorData : InData)
	{
		//We only add placed actors. All Actor types are stored in the SavedActors array.
		if (FActorHelpers::IsStreamRelevantActor(EActorType(ActorData.Type)))
		{
			const FName ActorKey(FSaveHelpers::StringFromBytes(ActorData.Name));
			ActorMap.Add(ActorKey, ActorData);
			ReplaceOrAddToArray(ActorData, ActorArray);
		}
	}
}

void FMultiLevelStreamingData::CopyTo(const FLevelArchive& A)
{
	CopyActors(A.SavedActors);

	for (const FLevelScriptSaveData& ScriptData : A.SavedScripts)
	{
		ReplaceOrAddToArray(ScriptData, ScriptArray);
	}
}

void FMultiLevelStreamingData::CopyFrom(FLevelArchive& A)
{
	const uint32 NumActors = A.SavedActors.Num() + ActorArray.Num();
	A.SavedActors.Reserve(NumActors);

	for (const FActorSaveData& ActorData : ActorArray)
	{
		ReplaceOrAddToArray(ActorData, A.SavedActors);
	}

	const uint32 NumScripts = A.SavedScripts.Num() + ScriptArray.Num();
	A.SavedScripts.Reserve(NumScripts);

	for (const FLevelScriptSaveData& ScriptData : ScriptArray)
	{
		ReplaceOrAddToArray(ScriptData, A.SavedScripts);
	}
}

/**
FStructHelpers
**/

void FStructHelpers::SerializeStruct(UObject* Object)
{
	//Non-array struct vars.
	for (TFieldIterator<FStructProperty> ObjectStruct(Object->GetClass()); ObjectStruct; ++ObjectStruct)
	{
		if (ObjectStruct && ObjectStruct->GetPropertyFlags() & CPF_SaveGame)
		{
			SerializeScriptStruct(ObjectStruct->Struct);
		}
	}

	//Struct-Arrays are cast as Arrays, not structs, so we work around it.
	for (TFieldIterator<FArrayProperty> ArrayProp(Object->GetClass()); ArrayProp; ++ArrayProp)
	{
		if (ArrayProp && ArrayProp->GetPropertyFlags() & CPF_SaveGame)
		{
			SerializeArrayStruct(*ArrayProp);
		}
	}

	//Map Properties
	for (TFieldIterator<FMapProperty> MapProp(Object->GetClass()); MapProp; ++MapProp)
	{
		if (MapProp && MapProp->GetPropertyFlags() & CPF_SaveGame)
		{
			SerializeMap(*MapProp);
		}
	}
}

void FStructHelpers::SerializeMap(FMapProperty* MapProp)
{
	FProperty* ValueProp = MapProp->ValueProp;
	if (ValueProp)
	{
		ValueProp->SetPropertyFlags(CPF_SaveGame);

		FStructProperty* ValueStructProp = CastField<FStructProperty>(ValueProp);
		if (ValueStructProp)
		{
			SerializeScriptStruct(ValueStructProp->Struct);
		}
	}
}

void FStructHelpers::SerializeArrayStruct(FArrayProperty* ArrayProp)
{
	FProperty* InnerProperty = ArrayProp->Inner;
	if (InnerProperty)
	{
		//Here we finally get to the structproperty, wich hides in the Array->Inner
		FStructProperty* ArrayStructProp = CastField<FStructProperty>(InnerProperty);
		if (ArrayStructProp)
		{
			SerializeScriptStruct(ArrayStructProp->Struct);
		}
	}
}

void FStructHelpers::SerializeScriptStruct(UStruct* ScriptStruct)
{
	if (ScriptStruct)
	{
		for (TFieldIterator<FProperty> Prop(ScriptStruct); Prop; ++Prop)
		{
			if (Prop)
			{
				Prop->SetPropertyFlags(CPF_SaveGame);

				//Recursive Array
				FArrayProperty* ArrayProp = CastField<FArrayProperty>(*Prop);
				if (ArrayProp)
				{
					SerializeArrayStruct(ArrayProp);
				}

				//Recursive Struct
				FStructProperty* StructProp = CastField<FStructProperty>(*Prop);
				if (StructProp)
				{
					SerializeScriptStruct(StructProp->Struct);
				}

				//Recursive Map
				FMapProperty* MapProp = CastField<FMapProperty>(*Prop);
				if (MapProp)
				{
					SerializeMap(MapProp);
				}
			}
		}
	}
}

/**
FSettingHelpers
**/

bool FSettingHelpers::IsNormalMultiLevelSave()
{
	return UEMSPluginSettings::Get()->MultiLevelSaving == EMultiLevelSaveMethod::ML_Normal;
}

bool FSettingHelpers::IsStreamMultiLevelSave()
{
	return UEMSPluginSettings::Get()->MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream;
}

bool FSettingHelpers::IsFullMultiLevelSave()
{
	return UEMSPluginSettings::Get()->MultiLevelSaving == EMultiLevelSaveMethod::ML_Full;
}

bool FSettingHelpers::IsStackBasedMultiLevelSave()
{
	return IsFullMultiLevelSave() || IsNormalMultiLevelSave();
}

bool FSettingHelpers::IsContainingStreamMultiLevelSave()
{
	return IsFullMultiLevelSave() || IsStreamMultiLevelSave();
}

bool FSettingHelpers::IsConsoleFileSystem()
{
	return UEMSPluginSettings::Get()->FileSaveMethod == EFileSaveMethod::FM_Console;
}

bool FSettingHelpers::IsPersistentGameMode()
{
	return UEMSPluginSettings::Get()->bPersistentGameMode 
		&& UEMSPluginSettings::Get()->MultiLevelSaving == EMultiLevelSaveMethod::ML_Disabled;
}

bool FSettingHelpers::IsPersistentPlayer()
{
	return UEMSPluginSettings::Get()->bPersistentPlayer
		&& UEMSPluginSettings::Get()->MultiLevelSaving == EMultiLevelSaveMethod::ML_Disabled;
}

bool FSettingHelpers::IsMultiThreadSaving()
{
	return UEMSPluginSettings::Get()->bMultiThreadSaving && FPlatformProcess::SupportsMultithreading();
}

bool FSettingHelpers::IsMultiThreadLoading()
{
	return UEMSPluginSettings::Get()->LoadMethod == ELoadMethod::LM_Thread && FPlatformProcess::SupportsMultithreading();
}

bool FSettingHelpers::IsDeferredLoading()
{
	return UEMSPluginSettings::Get()->LoadMethod == ELoadMethod::LM_Deferred;
}

/**
FStreamHelpers
**/

bool FStreamHelpers::IsLevelStillStreaming(const UWorld* InWorld, const bool bLog)
{
	if (!IsValid(InWorld))
	{
		return false;
	}

	for (const ULevelStreaming* StreamingLevel : InWorld->GetStreamingLevels())
	{
		if (!StreamingLevel)
		{
			continue;
		}

		const ELevelStreamingState StreamingState = StreamingLevel->GetLevelStreamingState();

		//May need a better way to handle fail cases.
		if (StreamingState == ELevelStreamingState::FailedToLoad 
			|| StreamingState == ELevelStreamingState::Removed
			|| StreamingState == ELevelStreamingState::Unloaded)
		{
			return false;
		}

		//All other states will block the accumulated save and (mostly initial)load operation.
		if (StreamingState != ELevelStreamingState::LoadedVisible)
		{
			if (bLog)
			{
				UE_LOG(LogEasyMultiSave, Warning, TEXT("Async save or load attempt while level streaming is active. Operation was canceled."));
			}

			return true;
		}
	}

	return false;
}

bool FStreamHelpers::IsWorldPartitionInit(const UWorld* InWorld)
{
	return InWorld->TimeSeconds < UEMSPluginSettings::Get()->WorldPartitionInitTime;
}

/**
FSavePaths
**/

FString FSavePaths::ValidateSaveName(const FString& SaveGameName)
{
	FString CurrentSave = SaveGameName;
	CurrentSave = CurrentSave.Replace(TEXT(" "), *EMS::Underscore);
	CurrentSave = CurrentSave.Replace(TEXT("."), *EMS::Underscore);

	return FPaths::MakeValidFileName(*CurrentSave);
}

FString FSavePaths::GetThumbnailFormat()
{
	if (UEMSPluginSettings::Get()->ThumbnailFormat == EThumbnailImageFormat::Png)
	{
		return EMS::ImgFormatPNG;
	}

	return EMS::ImgFormatJPG;
}

FString FSavePaths::GetThumbnailFileExtension()
{
	if (FSettingHelpers::IsConsoleFileSystem())
	{
		return EMS::SaveType;
	}

	return TEXT(".") + GetThumbnailFormat();
}

#if PLATFORM_WINDOWS
void FSavePaths::CheckForReadOnly(const FString& FullSavePath)
{
	const FString NativePath = FString::Printf(EMS::NativeWindowsSavePath, *FPaths::ProjectSavedDir(), *FullSavePath);
	const bool bReadOnly = IFileManager::Get().IsReadOnly(*NativePath);
	if (bReadOnly)
	{
		FPlatformFileManager::Get().GetPlatformFile().SetReadOnly(*NativePath, false);
		UE_LOG(LogEasyMultiSave, Warning, TEXT("File access read only was set to false: %s"), *NativePath);
	}
}
#endif

TArray<FString> FSavePaths::GetConsoleSlotFiles(const TArray<FString>& SaveGameNames)
{
	const FString FullSlotSuffix = EMS::Underscore + EMS::SlotSuffix;

	//Filter out slots
	TArray<FString> SlotNames;
	for (const FString& ActualFileName : SaveGameNames)
	{
		const bool bIsActualSlot = ActualFileName.Contains(FullSlotSuffix);
		if (bIsActualSlot)
		{
			//Get actual name without suffix
			const int32 Index = ActualFileName.Find(FullSlotSuffix, ESearchCase::IgnoreCase, ESearchDir::FromEnd, INDEX_NONE);
			const int32 Count = FullSlotSuffix.Len();

			FString ReducedFileName = ActualFileName;
			ReducedFileName.RemoveAt(Index, Count);
			SlotNames.Add(ReducedFileName);
		}
	}

	return SlotNames;
}

/**
Async Node Helper Functions
**/

template<class T>
bool FAsyncSaveHelpers::CheckLoadIterator(const T& It, const ESaveGameMode Mode, const bool bLog, const FString& DebugString)
{
	if (It && It->IsActive() && (It->Mode == Mode || Mode == ESaveGameMode::MODE_All))
	{
		if (bLog)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("%s is active while trying to save or load."), *DebugString);
		}

		return true;
	}

	return false;
}

bool FAsyncSaveHelpers::IsAsyncSaveOrLoadTaskActive(const UWorld* InWorld, const ESaveGameMode Mode, const EAsyncCheckType CheckType, const bool bLog)
{
	//This will prevent the functions from being executed at all during pause.
	if (InWorld->IsPaused())
	{
		if (bLog)
		{
			UE_LOG(LogEasyMultiSave, Warning, TEXT("Async save or load called during pause. Operation was canceled."));
		}

		return true;
	}

	if (CheckType == EAsyncCheckType::CT_Both || CheckType == EAsyncCheckType::CT_Load)
	{
		for (TObjectIterator<UEMSAsyncLoadGame> It; It; ++It)
		{
			if (CheckLoadIterator(It, Mode, bLog, "Load Game Actors"))
			{
				return true;
			}
		}

		for (TObjectIterator<UEMSAsyncStream> It; It; ++It)
		{
			if (CheckLoadIterator(It, Mode, bLog, "Load Stream Level Actors"))
			{
				return true;
			}
		}
	}

	if (CheckType == EAsyncCheckType::CT_Both || CheckType == EAsyncCheckType::CT_Save)
	{
		for (TObjectIterator<UEMSAsyncSaveGame> It; It; ++It)
		{
			if (CheckLoadIterator(It, Mode, bLog, "Save Game Actors"))
			{
				return true;
			}
		}
	}

	return false;
}

bool FAsyncSaveHelpers::IsStreamAutoLoadActive(const ULevel* InLevel)
{
	for (TObjectIterator<UEMSAsyncStream> It; It; ++It)
	{
		if (It && It->IsActive() && (InLevel == nullptr || It->StreamingLevel == InLevel))
		{
			return true;
		}
	}

	return false;
}

ESaveGameMode FAsyncSaveHelpers::GetMode(const int32 Data)
{
	if (Data & ENUM_TO_FLAG(ESaveTypeFlags::SF_Player))
	{
		if (Data & ENUM_TO_FLAG(ESaveTypeFlags::SF_Level))
		{
			return ESaveGameMode::MODE_All;
		}
		else
		{
			return ESaveGameMode::MODE_Player;
		}
	}

	return ESaveGameMode::MODE_Level;
}

/**
Thumbnail Functions
**/

bool FSaveThumbnails::HasRenderTargetResource(UTextureRenderTarget2D* TextureRenderTarget)
{
	return TextureRenderTarget->GetResource() != nullptr;
}

bool FSaveThumbnails::CompressRenderTarget(UTextureRenderTarget2D* TexRT, FArchive& Ar)
{
	FImage Image;
	if (!FImageUtils::GetRenderTargetImage(TexRT, Image))
	{
		return false;
	}

	TArray64<uint8> CompressedData;
	if (!FImageUtils::CompressImage(CompressedData, *FSavePaths::GetThumbnailFormat(), Image, 90))
	{
		return false;
	}

	Ar.Serialize((void*)CompressedData.GetData(), CompressedData.GetAllocatedSize());

	return true;
}

bool FSaveThumbnails::ExportRenderTarget(UTextureRenderTarget2D* TexRT, const FString& FileName)
{
	FArchive* Ar = IFileManager::Get().CreateFileWriter(*FileName);
	if (Ar)
	{
		FBufferArchive Buffer;
		if (CompressRenderTarget(TexRT, Buffer))
		{
			Ar->Serialize(const_cast<uint8*>(Buffer.GetData()), Buffer.Num());
			delete Ar;

			return true;
		}
	}

	return false;
}