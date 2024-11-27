// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/IO/PCGSaveAssetElement.h"

#include "PCGAssetExporterUtils.h"
#include "PCGModule.h"

#include "AssetRegistry/AssetData.h"

bool UPCGDataCollectionExporter::ExportAsset(const FString& PackageName, UPCGDataAsset* Asset)
{
	// Relies on default behavior to duplicate if needed
	Asset->Data = Data;
#if WITH_EDITOR
	Asset->Description = FText::FromString(AssetDescription);
	Asset->Color = AssetColor;
#endif
	return true;
}

UPackage* UPCGDataCollectionExporter::UpdateAsset(const FAssetData& PCGAsset)
{
	return nullptr;
}

UPCGSaveDataAssetSettings::UPCGSaveDataAssetSettings()
{
	Pins = Super::InputPinProperties();
}

FPCGElementPtr UPCGSaveDataAssetSettings::CreateElement() const
{
	return MakeShared<FPCGSaveDataAssetElement>();
}

bool FPCGSaveDataAssetElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGSaveDataAssetElement::Execute);
	check(Context);
	const UPCGSaveDataAssetSettings* Settings = Context->GetInputSettings<UPCGSaveDataAssetSettings>();
	check(Settings);

	UPCGDataCollectionExporter* Exporter = nullptr;

	if (Settings->CustomDataCollectionExporterClass)
	{
		Exporter = NewObject<UPCGDataCollectionExporter>(GetTransientPackage(), Settings->CustomDataCollectionExporterClass);
	}
	
	if (!Exporter)
	{
		Exporter = NewObject<UPCGDataCollectionExporter>();
	}

	TArray<FPCGPinProperties> InputPins = Settings->InputPinProperties();

	check(Exporter);
	// Implementation note: we can't simply copy the input wholesale because this will also gather overrides if any.
	for (const FPCGTaggedData& TaggedData : Context->InputData.TaggedData)
	{
		// Accept data if its pin matches any of the actual input pins
		if (InputPins.FindByPredicate([&TaggedData](const FPCGPinProperties& Pin) { return TaggedData.Pin == Pin.Label; }))
		{
			Exporter->Data.TaggedData.Add(TaggedData);
		}
	}

#if WITH_EDITOR
	Exporter->AssetDescription = Settings->AssetDescription;
	Exporter->AssetColor = Settings->AssetColor;
#endif

	UPCGAssetExporterUtils::CreateAsset(Exporter, Settings->Params, Context);

	return true;
}