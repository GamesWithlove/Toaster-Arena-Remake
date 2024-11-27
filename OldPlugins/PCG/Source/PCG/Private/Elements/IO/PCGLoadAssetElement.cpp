// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/IO/PCGLoadAssetElement.h"

#include "PCGModule.h"
#include "Helpers/PCGDynamicTrackingHelpers.h"

#include "AssetRegistry/AssetData.h"

UPCGLoadDataAssetSettings::UPCGLoadDataAssetSettings()
{
	Pins = Super::OutputPinProperties();
	bTagOutputsBasedOnOutputPins = true;
}

#if WITH_EDITOR
void UPCGLoadDataAssetSettings::GetStaticTrackedKeys(FPCGSelectionKeyToSettingsMap& OutKeysToSettings, TArray<TObjectPtr<const UPCGGraph>>& OutVisitedGraphs) const
{
	if (Asset.IsNull())
	{
		return;
	}

	FPCGSelectionKey Key = FPCGSelectionKey::CreateFromPath(Asset.ToSoftObjectPath());

	OutKeysToSettings.FindOrAdd(Key).Emplace(this, /*bCulling=*/false);
}

void UPCGLoadDataAssetSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property && PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UPCGLoadDataAssetSettings, Asset))
	{
		UpdateFromData();
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

EPCGChangeType UPCGLoadDataAssetSettings::GetChangeTypeForProperty(const FName& InPropertyName) const
{
	EPCGChangeType ChangeType = Super::GetChangeTypeForProperty(InPropertyName) | EPCGChangeType::Cosmetic;

	if (InPropertyName == GET_MEMBER_NAME_CHECKED(UPCGLoadDataAssetSettings, bLoadFromInput))
	{
		ChangeType |= EPCGChangeType::Structural;
	}

	return ChangeType;
}
#endif // WITH_EDITOR

FPCGElementPtr UPCGLoadDataAssetSettings::CreateElement() const
{
	return MakeShared<FPCGLoadDataAssetElement>();
}

TArray<FPCGPinProperties> UPCGLoadDataAssetSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;

	if (bLoadFromInput)
	{
		FPCGPinProperties& InputPin = PinProperties.Emplace_GetRef(PCGPinConstants::DefaultInputLabel, EPCGDataType::Param);
		InputPin.SetRequiredPin();
	}
	
	return PinProperties;
}

FString UPCGLoadDataAssetSettings::GetAdditionalTitleInformation() const
{
#if WITH_EDITOR
	if (bLoadFromInput || IsPropertyOverriddenByPin(GET_MEMBER_NAME_CHECKED(UPCGLoadDataAssetSettings, Asset)))
	{
		// If loading data from a specified input or from an overriden value, we shouldn't show the template asset name.
		return FString();
	}
	else
#endif // WITH_EDITOR
	{
		return AssetName.IsEmpty() ? Asset.ToSoftObjectPath().GetAssetName() : AssetName;
	}
}

EPCGDataType UPCGLoadDataAssetSettings::GetCurrentPinTypes(const UPCGPin* InPin) const
{
	// Implementation notes: the output pin types don't depend on the input pin types,
	// but they can change based on the asset selected, hence why they are dynamic, but we need to return the pin type as-is.
	check(InPin);
	return InPin->Properties.AllowedTypes;
}

void UPCGLoadDataAssetSettings::SetFromAsset(const FAssetData& InAsset)
{
	Asset = nullptr;

	if (const UClass* AssetClass = InAsset.GetClass())
	{
		if (AssetClass->IsChildOf(UPCGDataAsset::StaticClass()))
		{
			Asset = TSoftObjectPtr<UPCGDataAsset>(InAsset.GetSoftObjectPath());
		}
	}

	UpdateFromData();
	// TODO : notify?
}

void UPCGLoadDataAssetSettings::UpdateFromData()
{
	// Populate pins based on data present, in order, in the data collection.
	if (UPCGDataAsset* AssetData = Asset.LoadSynchronous())
	{
		TArray<FPCGPinProperties> NewPins;
		const FPCGDataCollection& Data = AssetData->Data;

		for (const FPCGTaggedData& TaggedData : Data.TaggedData)
		{
			if (!TaggedData.Data)
			{
				continue;
			}

			FPCGPinProperties* MatchingPin = NewPins.FindByPredicate([&TaggedData](const FPCGPinProperties& PinProperty) { return PinProperty.Label == TaggedData.Pin; });

			if (!MatchingPin)
			{
				NewPins.Emplace_GetRef(TaggedData.Pin, TaggedData.Data->GetDataType());
			}
			else
			{
				MatchingPin->AllowedTypes |= TaggedData.Data->GetDataType();
			}
		}

		Pins = NewPins;
		bTagOutputsBasedOnOutputPins = false;

		// Update rest of cached data (name, tooltip, color, ...)
		AssetName = AssetData->Name;
#if WITH_EDITOR
		AssetDescription = AssetData->Description;
		AssetColor = AssetData->Color;
#endif
	}
	else
	{
		Pins = Super::OutputPinProperties();
		bTagOutputsBasedOnOutputPins = true;

		AssetName = FString();
#if WITH_EDITOR
		AssetDescription = FText::GetEmpty();
		AssetColor = FLinearColor::White;
#endif
	}
}

bool FPCGLoadDataAssetElement::PrepareDataInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGLoadDataAssetElement::PrepareData);

	check(InContext);
	FPCGLoadDataAssetContext* Context = static_cast<FPCGLoadDataAssetContext*>(InContext);

	const UPCGLoadDataAssetSettings* Settings = Context->GetInputSettings<UPCGLoadDataAssetSettings>();
	check(Settings);

	return Context->InitializeAndRequestLoad(PCGPinConstants::DefaultInputLabel,
		Settings->AssetReferenceSelector,
		{ Settings->Asset.ToSoftObjectPath() },
		/*bPersistAllData=*/false,
		/*bSilenceErrorOnEmptyObjectPath*/!Settings->bWarnIfNoAsset,
		/*bSynchronousLoad=*/Settings->bSynchronousLoad);
}

bool FPCGLoadDataAssetElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGDataAssetElement::Execute);

	check(InContext);
	FPCGLoadDataAssetContext* Context = static_cast<FPCGLoadDataAssetContext*>(InContext);
	const UPCGLoadDataAssetSettings* Settings = Context->GetInputSettings<UPCGLoadDataAssetSettings>();
	check(Settings);

#if WITH_EDITOR
	if (Context->IsValueOverriden(GET_MEMBER_NAME_CHECKED(UPCGLoadDataAssetSettings, Asset)) || (Settings->bLoadFromInput && !Context->PathsToObjectsAndDataIndex.IsEmpty()))
	{
		FPCGDynamicTrackingHelper DynamicTracking;
		DynamicTracking.EnableAndInitialize(Context, Context->PathsToObjectsAndDataIndex.Num());
		for(const TTuple<FSoftObjectPath, int32, int32>& Path : Context->PathsToObjectsAndDataIndex)
		{
			DynamicTracking.AddToTracking(FPCGSelectionKey::CreateFromPath(Path.Get<0>()), /*bIsCulled=*/false);
		}

		DynamicTracking.Finalize(Context);
	}
#endif

	// At this point, the data should already be loaded
	for(const TTuple<FSoftObjectPath, int32, int32>& AssetPath : Context->PathsToObjectsAndDataIndex)
	{
		TSoftObjectPtr<UPCGDataAsset> Asset(AssetPath.Get<0>());
		UPCGDataAsset* AssetData = Asset.LoadSynchronous();
		if (AssetData)
		{
			const int TaggedDataOffset = Context->OutputData.TaggedData.Num();
			Context->OutputData.TaggedData.Append(AssetData->Data.TaggedData);

			if (Settings->bTagOutputsBasedOnOutputPins || Settings->InputIndexTag != NAME_None || Settings->DataIndexTag != NAME_None)
			{
				for (int TaggedDataIndex = TaggedDataOffset; TaggedDataIndex < Context->OutputData.TaggedData.Num(); ++TaggedDataIndex)
				{
					FPCGTaggedData& TaggedData = Context->OutputData.TaggedData[TaggedDataIndex];

					if (Settings->bTagOutputsBasedOnOutputPins && TaggedData.Pin != NAME_None)
					{
						TaggedData.Tags.Add(TaggedData.Pin.ToString());
					}

					if (Settings->InputIndexTag != NAME_None)
					{
						TaggedData.Tags.Add(FString::Format(TEXT("{0}:{1}"), { Settings->InputIndexTag.ToString(), AssetPath.Get<1>() }));
					}

					if (Settings->DataIndexTag != NAME_None)
					{
						TaggedData.Tags.Add(FString::Format(TEXT("{0}:{1}"), { Settings->DataIndexTag.ToString(), AssetPath.Get<2>() }));
					}
				}
			}
		}
	}

	return true;
}