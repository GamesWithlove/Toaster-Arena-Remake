//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#include "EMSData.h"
#include "EMSActors.h"
#include "EMSVersion.h"
#include "EMSPaths.h"
#include "EMSPluginSettings.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"

DEFINE_LOG_CATEGORY(LogEasyMultiSave);

/**
FSaveHelpers
**/

FString FSaveHelpers::GetRawObjectID(const FRawObjectSaveData& Data)
{
	return Data.Id + EMS::RawObjectTag;
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

bool FSaveHelpers::HasSaveArchiveError(const FBufferArchive& CheckArchive, ESaveErrorType ErrorType)
{
	FString ErrorString;
	if (ErrorType == ESaveErrorType::ER_Player)
	{
		ErrorString = EMS::PlayerSuffix;
	}
	else if (ErrorType == ESaveErrorType::ER_Level)
	{
		ErrorString = EMS::ActorSuffix;
	}
	else if (ErrorType == ESaveErrorType::ER_Object)
	{
		ErrorString = "Object(Slot Info or Custom Save)";
	}
	else if (ErrorType == ESaveErrorType::ER_Collection)
	{
		ErrorString = "Object Collection";
	}

	if (CheckArchive.IsCriticalError())
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("%s data contains critical errors and was not saved."), *ErrorString);
		return true;
	}

	if (CheckArchive.IsError())
	{
		UE_LOG(LogEasyMultiSave, Error, TEXT("%s data contains errors and was not saved."), *ErrorString);
		return true;
	}

	return false;
}

void FSaveHelpers::ExtractPlayerNames(const UWorld* InWorld, TArray<FString>& OutPlayerNames)
{
	if (!InWorld)
	{
		return;
	}

	if (const AGameStateBase* GameState = InWorld->GetGameState())
	{
		const TArray<APlayerState*> Players = GameState->PlayerArray;
		if (!EMS::ArrayEmpty(Players))
		{
			for (const APlayerState* PlayerState : Players)
			{
				OutPlayerNames.Add(PlayerState->GetPlayerName());
			}
		}
	}
}


void FSaveHelpers::ResetObjectToDefaults(UObject* ObjectToReset, const bool bMustBeSaveGame)
{
	if (!ObjectToReset)
	{
		return;
	}

	const UObject* DefaultObject = ObjectToReset->GetClass()->GetDefaultObject();
	if (!DefaultObject)
	{
		return;
	}

	for (TFieldIterator<FProperty> It(ObjectToReset->GetClass()); It; ++It)
	{
		FProperty* Property = *It;
		if (Property)
		{
			const bool bIsSaveGame = !bMustBeSaveGame || Property->HasAnyPropertyFlags(CPF_SaveGame);

			//Skips transient variables
			if (Property->HasAnyPropertyFlags(CPF_Edit) && !Property->HasAnyPropertyFlags(CPF_Transient) && bIsSaveGame)
			{
				void* Dest = Property->ContainerPtrToValuePtr<void>(ObjectToReset);
				const void* Src = Property->ContainerPtrToValuePtr<void>(DefaultObject);
				Property->CopyCompleteValue(Dest, Src);
			}
		}
	}
}

/**
FActorInitContext
**/

void FActorInitContext::ApplyLoadStateTag() const
{
	if (!Actor)
	{
		return;
	}

	if (bIsLoading)
	{
		//Remove loaded tags on full reload
		if (bFullReload)
		{
			Actor->Tags.Remove(EMS::HasLoadedTag);
		}
	}
	else
	{
		//Mark as loaded to prevent redundant reloads after an Actor was saved
		Actor->Tags.Add(EMS::HasLoadedTag);
	}
}

/**
FStructHelpers
**/

void FStructHelpers::SerializeStruct(const UObject* Object)
{
	//Need to check here as this function might be called directly for UObjects 
	if (!UEMSPluginSettings::Get()->bAutoSaveStructs)
	{
		return;
	}

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

void FStructHelpers::SerializeMap(const FMapProperty* MapProp)
{
	FProperty* ValueProp = MapProp->ValueProp;
	if (ValueProp)
	{
		ValueProp->SetPropertyFlags(CPF_SaveGame);

		const FStructProperty* ValueStructProp = CastField<FStructProperty>(ValueProp);
		if (ValueStructProp)
		{
			SerializeScriptStruct(ValueStructProp->Struct);
		}
	}
}

void FStructHelpers::SerializeArrayStruct(const FArrayProperty* ArrayProp)
{
	const FProperty* InnerProperty = ArrayProp->Inner;
	if (InnerProperty)
	{
		//Here we finally get to the structproperty, wich hides in the Array->Inner
		const FStructProperty* ArrayStructProp = CastField<FStructProperty>(InnerProperty);
		if (ArrayStructProp)
		{
			SerializeScriptStruct(ArrayStructProp->Struct);
		}
	}
}

void FStructHelpers::SerializeScriptStruct(const UStruct* ScriptStruct)
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
FMultiLevelStreamingData
**/

template <typename TSaveData, typename TSaveDataArray>
void FMultiLevelStreamingData::ReplaceOrAddToArray(const TSaveData& Data, TSaveDataArray& OuputArray)
{
	//This will replace an existing element or add a new one. 
	const uint32 Index =  OuputArray.IndexOfByKey(Data);
	if (Index != INDEX_NONE)
	{
		OuputArray[Index] = Data;
	}
	else
	{
		OuputArray.Add(Data);
	}
}

void FMultiLevelStreamingData::CopyActors(const TArray<FActorSaveData>& InData)
{
	for (const FActorSaveData& ActorData : InData)
	{
		//We only add stream relevant actors. All Actor types are stored in the SavedActors array.
		const EActorType Type = EActorType(ActorData.Type);
		if (FActorHelpers::IsMultiLevelStreamRelevant(Type))
		{
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
FSaveGameArchive
**/

FArchive& FSaveGameArchive::operator<<(UObject*& Obj)
{
	if (IsSaving())
	{
		FSoftObjectPath SoftPath(Obj);
		return CleanSoftObjectPath(SoftPath);
	}
	else if (IsLoading())
	{
		//Read the raw path from disk
		FSoftObjectPath SoftPath;

		//New version just uses the built-in function
		if (ObjectVersion >= EMS::OBJECT_INST_VERSION_2)
		{
			SoftPath.SerializePath(*this);
		}
		else
		{
			//Support legacy pointers that do not use SerializePath()
			FString LegacyPath;
			*this << LegacyPath;
			SoftPath = FSoftObjectPath(LegacyPath);
		}

		//Apply Redirects 
		SoftPath = FRedirectHelpers::ResolveLevelPath(SoftPath);

		//PIE Fixup
		FixupForPIE(SoftPath);

		//Resolve using SoftPtr logic for both Soft and Hard refs identically
		FSoftObjectPtr SoftPtr(SoftPath);
		Obj = SoftPtr.LoadSynchronous();

		return *this;
	}

	return FObjectAndNameAsStringProxyArchive::operator<<(Obj);
}

FArchive& FSaveGameArchive::operator<<(FSoftObjectPtr& Value)
{
	if (IsSaving())
	{
		FSoftObjectPath Path = Value.ToSoftObjectPath();
		return CleanSoftObjectPath(Path);
	}
	else if (IsLoading())
	{
		//Load and apply redirects
		FObjectAndNameAsStringProxyArchive::operator<<(Value);

		FSoftObjectPath SoftPath = Value.ToSoftObjectPath();
		SoftPath = FRedirectHelpers::ResolveLevelPath(SoftPath);

		//PIE Fixup
		FixupForPIE(SoftPath);

		Value = FSoftObjectPtr(SoftPath);

		return *this;
	}

	return FObjectAndNameAsStringProxyArchive::operator<<(Value);
}

FArchive& FSaveGameArchive::operator<<(FSoftObjectPath& Value)
{
	if (IsSaving())
	{
		return CleanSoftObjectPath(Value);
	}
	else if (IsLoading())
	{
		//Load and apply redirects
		FObjectAndNameAsStringProxyArchive::operator<<(Value);
		Value = FRedirectHelpers::ResolveLevelPath(Value);

		//PIE Fixup
		FixupForPIE(Value);

		return *this;
	}

	return FObjectAndNameAsStringProxyArchive::operator<<(Value);
}

FArchive& FSaveGameArchive::CleanSoftObjectPath(FSoftObjectPath& Path)
{
	FString PathString = Path.ToString();

#if WITH_EDITOR
	//Remove any PIE prefixes 
	FEditorPaths::StripRefPIEPrefix(PathString);
	Path = FSoftObjectPath(PathString);
#endif

	//From EMS::OBJECT_INST_VERSION_2, we use the built-in function
	Path.SerializePath(*this);

	return *this;
}

void FSaveGameArchive::FixupForPIE(FSoftObjectPath& Path)
{
	/*
	Loading PIE Fixup(Editor Only)
	This is important, so we get the PIE prefix from non-resolved refs in the editor.
	But still remain compatible between editor and packaged builds.
	*/
#if WITH_EDITOR
	if (GIsPlayInEditorWorld)
	{
		Path.FixupForPIE();
	}
#endif

}

