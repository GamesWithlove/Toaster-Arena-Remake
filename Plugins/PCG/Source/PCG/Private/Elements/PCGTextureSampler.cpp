// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGTextureSampler.h"

#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGCrc.h"
#include "PCGSubsystem.h"
#include "Helpers/PCGBlueprintHelpers.h"
#include "Helpers/PCGDynamicTrackingHelpers.h"
#include "Helpers/PCGHelpers.h"
#include "Helpers/PCGSettingsHelpers.h"

#include "Engine/Texture.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DArray.h"
#include "GameFramework/Actor.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGTextureSampler)

#define LOCTEXT_NAMESPACE "PCGTextureSamplerElement"

#if WITH_EDITOR
void UPCGTextureSamplerSettings::GetStaticTrackedKeys(FPCGSelectionKeyToSettingsMap& OutKeysToSettings, TArray<TObjectPtr<const UPCGGraph>>& OutVisitedGraphs) const
{
	if (IsPropertyOverriddenByPin(GET_MEMBER_NAME_CHECKED(UPCGTextureSamplerSettings, Texture)) || Texture.IsNull())
	{
		// Dynamic tracking or null settings
		return;
	}

	FPCGSelectionKey Key = FPCGSelectionKey::CreateFromPath(Texture.ToSoftObjectPath());

	OutKeysToSettings.FindOrAdd(Key).Emplace(this, /*bCulling=*/false);
}

void UPCGTextureSamplerSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) 
{
	if (PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyChangedEvent.Property->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UPCGTextureSamplerSettings, Texture))
		{
			UpdateDisplayTextureArrayIndex();
		} 
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UPCGTextureSamplerSettings::PostLoad()
{
	Super::PostLoad();

#if WITH_EDITOR
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	if (DensityFunction != EPCGTextureDensityFunction::Multiply)
	{
		bUseDensitySourceChannel = false;
	}
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
#endif

	UpdateDisplayTextureArrayIndex();
}
#endif

#if WITH_EDITOR
FText UPCGTextureSamplerSettings::GetNodeTooltipText() const
{
	return LOCTEXT("NodeTooltip", "Generates points by sampling the given texture.\n"
		"If the texture is CPU-accessible, the sampler will prefer the CPU version of the texture.\n"
		"Otherwise, the texture will be read back from the GPU if one is present.");
}
#endif // WITH_EDITOR

TArray<FPCGPinProperties> UPCGTextureSamplerSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> Properties;
	Properties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Texture);

	return Properties;
}

FPCGElementPtr UPCGTextureSamplerSettings::CreateElement() const
{
	return MakeShared<FPCGTextureSamplerElement>();
}

PRAGMA_DISABLE_DEPRECATION_WARNINGS
EPCGTextureDensityFunction UPCGTextureSamplerSettings::GetDensityFunctionEquivalent() const
{
	return bUseDensitySourceChannel ? EPCGTextureDensityFunction::Multiply : EPCGTextureDensityFunction::Ignore;
}

void UPCGTextureSamplerSettings::SetDensityFunctionEquivalent(EPCGTextureDensityFunction InDensityFunction)
{
	bUseDensitySourceChannel = (InDensityFunction != EPCGTextureDensityFunction::Ignore);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS

#if WITH_EDITOR
void UPCGTextureSamplerSettings::UpdateDisplayTextureArrayIndex()
{
	UTexture* NewTexture = Texture.LoadSynchronous();
	bDisplayTextureArrayIndex = NewTexture && NewTexture->IsA<UTexture2DArray>();
}
#endif

void FPCGTextureSamplerContext::AddExtraStructReferencedObjects(FReferenceCollector& Collector)
{
	if (TextureData)
	{
		Collector.AddReferencedObject(TextureData);
	}
}

bool FPCGTextureSamplerElement::PrepareDataInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGTextureSamplerElement::Execute);

	FPCGTextureSamplerContext* Context = static_cast<FPCGTextureSamplerContext*>(InContext);
	check(Context);

	const UPCGTextureSamplerSettings* Settings = Context->GetInputSettings<UPCGTextureSamplerSettings>();
	check(Settings);

	if (Settings->Texture.IsNull())
	{
		return true;
	}

	if (!Context->WasLoadRequested())
	{
		return Context->RequestResourceLoad(Context, { Settings->Texture.ToSoftObjectPath() }, !Settings->bSynchronousLoad);
	}

	return true;
}

bool FPCGTextureSamplerElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGTextureSamplerElement::Execute);

	FPCGTextureSamplerContext* Context = static_cast<FPCGTextureSamplerContext*>(InContext);
	check(Context);

	if (Context->bIsPaused)
	{
		return false;
	}

	if (Context->bTextureReadbackDone)
	{
		return true;
	}

	const UPCGTextureSamplerSettings* Settings = Context->GetInputSettings<UPCGTextureSamplerSettings>();
	check(Settings);

	if (Settings->Texture.IsNull())
	{
		return true;
	}

	UTexture* Texture = Settings->Texture.Get();

	if (!Texture)
	{
		PCGE_LOG(Error, GraphAndLog, FText::Format(LOCTEXT("CouldNotResolveTexture", "Texture at path '{0}' could not be loaded"), FText::FromString(Settings->Texture.ToString())));
		return true;
	}

	uint32 TextureArrayIndex = 0;

	if (UTexture2DArray* TextureArray = Cast<UTexture2DArray>(Texture))
	{
#if WITH_EDITOR
		const int32 ArraySize = TextureArray->SourceTextures.Num();
#else
		const int32 ArraySize = TextureArray->GetArraySize();
#endif

		if (Settings->TextureArrayIndex >= 0 && Settings->TextureArrayIndex < ArraySize)
		{
			TextureArrayIndex = Settings->TextureArrayIndex;
		}
		else
		{
			PCGE_LOG(Error, GraphAndLog, FText::Format(LOCTEXT("InvalidTextureIndex", "Array index {0} was out of bounds for TextureArray at path '{1}'."), Settings->TextureArrayIndex, FText::FromString(Settings->Texture.ToString())));
			return true;
		}
	}
	else if (!Texture->IsA<UTexture2D>())
	{
		PCGE_LOG(Error, GraphAndLog, FText::Format(LOCTEXT("InvalidTextureType", "Texture at path '{0}' is not a valid type. Must be UTexture2D or UTexture2DArray."), FText::FromString(Settings->Texture.ToString())));
		return true;
	}

	const FTransform& Transform = Settings->Transform;
#if WITH_EDITOR
	const bool bForceEditorOnlyCPUSampling = Settings->bForceEditorOnlyCPUSampling;
#else
	const bool bForceEditorOnlyCPUSampling = false;
#endif

	// Texture data can take some frames to prepare, so we poll it once per frame until it is done.
	// TODO - review other similar cases and consider adding helpers/abstractions to support this.
	UPCGTextureData* TextureData = nullptr;
	if (Context->TextureData)
	{
		TextureData = Context->TextureData.Get();
	}
	else
	{
		TextureData = FPCGContext::NewObject_AnyThread<UPCGTextureData>(Context);
		Context->TextureData = TextureData;

		AActor* OriginalActor = UPCGBlueprintHelpers::GetOriginalComponent(*Context)->GetOwner();

		if (Settings->bUseAbsoluteTransform)
		{
			Context->Transform = Transform;
		}
		else
		{
			FTransform OriginalActorTransform = OriginalActor->GetTransform();
			Context->Transform = Transform * OriginalActorTransform;

			FBox OriginalActorLocalBounds = PCGHelpers::GetActorLocalBounds(OriginalActor);
			Context->Transform.SetScale3D(Context->Transform.GetScale3D() * 0.5 * (OriginalActorLocalBounds.Max - OriginalActorLocalBounds.Min));
		}
	}

	if (!ensure(TextureData))
	{
		PCGE_LOG_C(Error, LogOnly, Context, LOCTEXT("TextureDataInitFailed", "Failed to initialize texture data."));
		return true;
	}

	if (!TextureData->IsSuccessfullyInitialized())
	{
		if (!TextureData->Initialize(Texture, TextureArrayIndex, Context->Transform, bForceEditorOnlyCPUSampling))
		{
			// Initialization not complete. Could be waiting on async texture processing or for GPU readback. Sleep until next frame.
			Context->bIsPaused = true;
			Context->SourceComponent->GetSubsystem()->RegisterBeginTickAction([ContextHandle = Context->GetOrCreateHandle()]()
			{
				if (FPCGTextureSamplerContext* ContextPtr = FPCGContext::GetContextFromHandle<FPCGTextureSamplerContext>(ContextHandle))
				{
					ContextPtr->bIsPaused = false;
				}
			});

			return false;
		}

		if (!TextureData->IsSuccessfullyInitialized())
		{
			PCGE_LOG(Warning, LogOnly, LOCTEXT("TextureInitFailed", "Data could not be retrieved for this texture, initialization failed."));
			Context->OutputData.TaggedData.Empty();
			return true;
		}
	}

	// Commit to adding texture data.
	Context->OutputData.TaggedData.Emplace_GetRef().Data = TextureData;

	TextureData->bUseDensitySourceChannel = Settings->bUseDensitySourceChannel;
	TextureData->ColorChannel = Settings->ColorChannel;
	TextureData->Filter = Settings->Filter;
	TextureData->TexelSize = Settings->TexelSize;
	TextureData->bUseAdvancedTiling = Settings->bUseAdvancedTiling;
	TextureData->Tiling = Settings->Tiling;
	TextureData->CenterOffset = Settings->CenterOffset;
	TextureData->Rotation = Settings->Rotation;
	TextureData->bUseTileBounds = Settings->bUseTileBounds;
	TextureData->TileBounds = FBox2D(Settings->TileBoundsMin, Settings->TileBoundsMax);

#if WITH_EDITOR
	// If we have an override, register for dynamic tracking.
	if (Context->IsValueOverriden(GET_MEMBER_NAME_CHECKED(UPCGTextureSamplerSettings, Texture)))
	{
		FPCGDynamicTrackingHelper::AddSingleDynamicTrackingKey(Context, FPCGSelectionKey::CreateFromPath(Texture), /*bIsCulled=*/false);
	}
#endif // WITH_EDITOR

	return true;
}

FPCGContext* FPCGTextureSamplerElement::CreateContext()
{
	return new FPCGTextureSamplerContext();
}

void UPCGTextureSamplerSettings::SetTexture(TSoftObjectPtr<UTexture> InTexture)
{
	Texture = InTexture;

#if WITH_EDITOR
	UpdateDisplayTextureArrayIndex();
#endif // WITH_EDITOR
}

void FPCGTextureSamplerElement::GetDependenciesCrc(const FPCGDataCollection& InInput, const UPCGSettings* InSettings, UPCGComponent* InComponent, FPCGCrc& OutCrc) const
{
	FPCGCrc Crc;
	IPCGElement::GetDependenciesCrc(InInput, InSettings, InComponent, Crc);

	if (const UPCGTextureSamplerSettings* Settings = Cast<UPCGTextureSamplerSettings>(InSettings))
	{
		// If not using absolute transform, depend on actor transform and bounds, and therefore take dependency on actor data.
		bool bUseAbsoluteTransform;
		PCGSettingsHelpers::GetOverrideValue(InInput, Settings, GET_MEMBER_NAME_CHECKED(UPCGTextureSamplerSettings, bUseAbsoluteTransform), Settings->bUseAbsoluteTransform, bUseAbsoluteTransform);
		if (!bUseAbsoluteTransform && InComponent)
		{
			if (const UPCGData* Data = InComponent->GetActorPCGData())
			{
				Crc.Combine(Data->GetOrComputeCrc(/*bFullDataCrc=*/false));
			}
		}
	}

	OutCrc = Crc;
}

#undef LOCTEXT_NAMESPACE
