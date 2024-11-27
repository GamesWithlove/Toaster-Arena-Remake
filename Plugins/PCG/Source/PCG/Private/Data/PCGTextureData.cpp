// Copyright Epic Games, Inc. All Rights Reserved.

#include "Data/PCGTextureData.h"

#include "PCGContext.h"
#include "PCGTextureReadback.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"

#include "RHIStaticStates.h"
#include "TextureResource.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DArray.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGTextureData)

namespace PCGTextureSamplingHelpers
{
	TOptional<bool> IsTextureCPUAccessible(UTexture2D* Texture)
	{
		if (!Texture)
		{
			return false;
		}

#if WITH_EDITOR
		if (!Texture->IsAsyncCacheComplete())
		{
			return {};
		}
#endif

		FTexturePlatformData* PlatformData = Texture ? Texture->GetPlatformData() : nullptr;

		return PlatformData && PlatformData->GetHasCpuCopy();
	}

	TOptional<bool> CanGPUTextureBeCPUAccessed(UTexture2D* Texture)
	{
		// SRGB textures need to be GPU sampled.
		if (!Texture || Texture->SRGB)
		{
			return false;
		}

#if WITH_EDITOR
		if (!Texture->IsAsyncCacheComplete())
		{
			return {};
		}
#endif

		FTexturePlatformData* PlatformData = Texture->GetPlatformData();

		// If a CPU copy is available, this is a CPU texture and not a GPU texture, so we return false.
		if (!PlatformData || PlatformData->GetHasCpuCopy())
		{
			return false;
		}

		return PlatformData->Mips.Num() == 1 && PlatformData->PixelFormat == PF_B8G8R8A8;
	}

	template<typename ValueType>
	ValueType SampleInternal(FVector2D PositionLocalSpace,
		int32 Width,
		int32 Height,
		EPCGTextureFilter Filter,
		TFunctionRef<ValueType(int32 Index)> SamplingFunction)
	{
		const double TexelX = PositionLocalSpace.X * Width;
		const double TexelY = PositionLocalSpace.Y * Height;

		ValueType Result{};

		if (Filter == EPCGTextureFilter::Point)
		{
			const int32 X = FMath::Clamp(FMath::FloorToInt(TexelX), 0, Width - 1);
			const int32 Y = FMath::Clamp(FMath::FloorToInt(TexelY), 0, Height - 1);

			Result = SamplingFunction(X + Y * Width);
		}
		else if (Filter == EPCGTextureFilter::Bilinear)
		{
			// Accounts for texel values being at texel centers
			const double TexelXOffset = TexelX - 0.5;
			const double TexelYOffset = TexelY - 0.5;

			const int32 X0 = FMath::Clamp(FMath::FloorToInt(TexelXOffset), 0, Width - 1);
			const int32 X1 = FMath::Min(X0 + 1, Width - 1);
			const int32 Y0 = FMath::Clamp(FMath::FloorToInt(TexelYOffset), 0, Height - 1);
			const int32 Y1 = FMath::Min(Y0 + 1, Height - 1);

			const ValueType SampleX0Y0 = SamplingFunction(X0 + Y0 * Width);
			const ValueType SampleX1Y0 = SamplingFunction(X1 + Y0 * Width);
			const ValueType SampleX0Y1 = SamplingFunction(X0 + Y1 * Width);
			const ValueType SampleX1Y1 = SamplingFunction(X1 + Y1 * Width);

			Result = FMath::BiLerp(SampleX0Y0, SampleX1Y0, SampleX0Y1, SampleX1Y1, TexelXOffset - X0, TexelYOffset - Y0);
		}
		else
		{
			ensureMsgf(false, TEXT("Unrecognized PCG texture filtering mode."));
		}

		return Result;
	}

	template<typename ValueType>
	bool Sample(const FVector2D& InPosition,
		const FBox2D& InSurface,
		const UPCGBaseTextureData* InTextureData,
		int32 Width,
		int32 Height,
		ValueType& SampledValue,
		TFunctionRef<ValueType(int32 Index)> SamplingFunction)
	{
		check(Width > 0 && Height > 0);
		if (Width <= 0 || Height <= 0 || InSurface.GetSize().SquaredLength() <= 0)
		{
			return false;
		}

		check(InTextureData);

		const FVector2D LocalSpacePos = (InPosition - InSurface.Min) / InSurface.GetSize();
		FVector2D Pos = FVector2D::ZeroVector;
		if (!InTextureData->bUseAdvancedTiling)
		{
			Pos.X = FMath::Clamp(LocalSpacePos.X, 0.0, 1.0);
			Pos.Y = FMath::Clamp(LocalSpacePos.Y, 0.0, 1.0);
		}
		else
		{
			// Conceptually, we are building "tiles" in texture space with the origin being in the middle of the [0, 0] tile.
			// The offset is given in a ratio of [0, 1], applied "before" scaling & rotation.
			// Rotation is done around the center given, where the center is (0.5, 0.5) + offset
			// Scaling controls the horizon of tiles, and the tile selection is done through min-max bounds, in tile space,
			// with the origin tile being from -0.5 to 0.5.
			const FRotator Rotation = FRotator(0.0, -InTextureData->Rotation, 0.0);
			FVector Scale = FVector(InTextureData->Tiling, 1.0);
			Scale.X = ((FMath::Abs(Scale.X) > SMALL_NUMBER) ? (1.0 / Scale.X) : 0.0);
			Scale.Y = ((FMath::Abs(Scale.Y) > SMALL_NUMBER) ? (1.0 / Scale.Y) : 0.0);
			const FVector Translation = FVector(0.5 + InTextureData->CenterOffset.X, 0.5 + InTextureData->CenterOffset.Y, 0);

			FTransform Transform = FTransform(Rotation, Translation, Scale);

			// Transform to tile-space
			const FVector2D SamplePosition = FVector2D(Transform.InverseTransformPosition(FVector(LocalSpacePos, 0.f)));

			if (InTextureData->bUseTileBounds && !InTextureData->TileBounds.IsInsideOrOn(SamplePosition))
			{
				return false;
			}

			FVector::FReal X = FMath::Frac(SamplePosition.X + 0.5);
			FVector::FReal Y = FMath::Frac(SamplePosition.Y + 0.5);

			Pos = FVector2D(X, Y);
		}

		SampledValue = SampleInternal(Pos, Width, Height, InTextureData->Filter, SamplingFunction);
		return true;
	}

	float SampleFloatChannel(const FLinearColor& InColor, EPCGTextureColorChannel ColorChannel)
	{
		switch (ColorChannel)
		{
		case EPCGTextureColorChannel::Red:
			return InColor.R;
		case EPCGTextureColorChannel::Green:
			return InColor.G;
		case EPCGTextureColorChannel::Blue:
			return InColor.B;
		case EPCGTextureColorChannel::Alpha:
		default:
			return InColor.A;
		}
	}
}

void UPCGBaseTextureData::PostLoad()
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
}

PRAGMA_DISABLE_DEPRECATION_WARNINGS
EPCGTextureDensityFunction UPCGBaseTextureData::GetDensityFunctionEquivalent() const
{
	return bUseDensitySourceChannel ? EPCGTextureDensityFunction::Multiply : EPCGTextureDensityFunction::Ignore;
}

void UPCGBaseTextureData::SetDensityFunctionEquivalent(EPCGTextureDensityFunction InDensityFunction)
{
	bUseDensitySourceChannel = (InDensityFunction != EPCGTextureDensityFunction::Ignore);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS

FBox UPCGBaseTextureData::GetBounds() const
{
	return Bounds;
}

FBox UPCGBaseTextureData::GetStrictBounds() const
{
	return Bounds;
}

bool UPCGBaseTextureData::SamplePoint(const FTransform& InTransform, const FBox& InBounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const
{
	// TODO: add metadata support
	// TODO: add sampling along the bounds

	// TODO: needs unpicking of sample vs projection. I believe the below is a projection.. But semantics are slightly different.
	// 1 - We have some information telling us the 'z' size of the surface allowing us to reject points that would be too far from the surface, maybe including some density falloff by distance
	// 2 - We suppose that the surface has an infinite 'z' size, in which case the sampling is basically the same as the sampling, except that it does not change the position
	// 3 - The surface is infinitesimal - we'll return something if and only if the point overlaps with the projected position

	if (!IsValid())
	{
		return false;
	}

	// Compute transform
	// TODO: embed local bounds center offset at this time?
	OutPoint.Transform = InTransform;
	FVector PointPositionInLocalSpace = Transform.InverseTransformPosition(InTransform.GetLocation());
	OutPoint.Transform.SetLocation(Transform.TransformPosition(PointPositionInLocalSpace));
	OutPoint.SetLocalBounds(InBounds); // TODO: should set Min.Z = Max.Z = 0;

	// Compute density & color (& metadata)
	// TODO: sample in the bounds given, not only on a single pixel
	FVector2D Position2D(PointPositionInLocalSpace.X, PointPositionInLocalSpace.Y);
	FBox2D Surface(FVector2D(-1.0f, -1.0f), FVector2D(1.0f, 1.0f));

	FLinearColor Color = FLinearColor(EForceInit::ForceInit);
	if (PCGTextureSamplingHelpers::Sample<FLinearColor>(Position2D, Surface, this, Width, Height, Color, [this](int32 Index) { return ColorData[Index]; }))
	{
		OutPoint.Color = Color;
		OutPoint.Density = bUseDensitySourceChannel ? PCGTextureSamplingHelpers::SampleFloatChannel(Color, ColorChannel) : 1.0f;
		return OutPoint.Density > 0 || bKeepZeroDensityPoints;
	}
	else
	{
		return false;
	}
}

const UPCGPointData* UPCGBaseTextureData::CreatePointData(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGBaseTextureData::CreatePointData);
	// TODO: this is a trivial implementation
	// A better sampler would allow to sample a fixed number of points in either direction
	// or based on a given texel size
	FBox2D LocalSurfaceBounds(FVector2D(-1.0f, -1.0f), FVector2D(1.0f, 1.0f));

	UPCGPointData* Data = FPCGContext::NewObject_AnyThread<UPCGPointData>(Context);
	Data->InitializeFromData(this);

	// Early out for invalid data
	if (!IsValid())
	{
		UE_LOG(LogPCG, Error, TEXT("Texture data does not have valid sizes - will return empty data"));
		return Data;
	}

	TArray<FPCGPoint>& Points = Data->GetMutablePoints();

	// Map target texel size to the current physical size of the texture data.
	const FVector::FReal XSize = 2.0 * Transform.GetScale3D().X;
	const FVector::FReal YSize = 2.0 * Transform.GetScale3D().Y;

	const int32 XCount = FMath::Floor(XSize / TexelSize);
	const int32 YCount = FMath::Floor(YSize / TexelSize);
	const int32 PointCount = XCount * YCount;

	if (PointCount <= 0)
	{
		UE_LOG(LogPCG, Warning, TEXT("Texture data has a texel size larger than its data - will return empty data"));
		return Data;
	}

	const FBox2D Surface(FVector2D(-1.0f, -1.0f), FVector2D(1.0f, 1.0f));

	FPCGAsync::AsyncPointProcessing(Context, PointCount, Points, [this, XCount, YCount, &Surface](int32 Index, FPCGPoint& OutPoint)
	{
		const int X = (Index % XCount);
		const int Y = (Index / YCount);

		// TODO: we should have a 0.5 bias here
		FVector2D LocalCoordinate((2.0 * X + 0.5) / XCount - 1.0, (2.0 * Y + 0.5) / YCount - 1.0);
		FLinearColor Color = FLinearColor(EForceInit::ForceInit);

		if (PCGTextureSamplingHelpers::Sample<FLinearColor>(LocalCoordinate, Surface, this, Width, Height, Color, [this](int32 Index) { return ColorData[Index]; }))
		{
			const float Density = bUseDensitySourceChannel ? PCGTextureSamplingHelpers::SampleFloatChannel(Color, ColorChannel) : 1.0f;
			if (Density > 0 || bKeepZeroDensityPoints)
			{
				FVector LocalPosition(LocalCoordinate, 0);
				OutPoint = FPCGPoint(FTransform(Transform.TransformPosition(LocalPosition)),
					Density,
					PCGHelpers::ComputeSeed(X, Y));

				OutPoint.SetExtents(FVector(TexelSize / 2.0));
				OutPoint.Color = Color;

				return true;
			}
		}

		return false;
	});

	return Data;
}

bool UPCGBaseTextureData::IsValid() const
{
	return Height > 0 && Width > 0 && !ColorData.IsEmpty();
}

bool UPCGBaseTextureData::SamplePointLocal(const FVector2D& LocalPosition, FVector4& OutColor, float& OutDensity) const
{
	if (!IsValid())
	{
		return false;
	}

	FVector2D Pos;
	Pos.X = FMath::Frac(LocalPosition.X);
	Pos.Y = FMath::Frac(LocalPosition.Y);

	const FLinearColor OutSample = PCGTextureSamplingHelpers::SampleInternal<FLinearColor>(Pos, Width, Height, Filter, [this](int32 Index) { return ColorData[Index]; });

	OutColor = OutSample;
	OutDensity = bUseDensitySourceChannel ? PCGTextureSamplingHelpers::SampleFloatChannel(OutSample, ColorChannel) : 1.0f;
	
	return OutDensity > 0.0 || bKeepZeroDensityPoints;
}

void UPCGBaseTextureData::CopyBaseTextureData(UPCGBaseTextureData* NewTextureData) const
{
	CopyBaseSurfaceData(NewTextureData);

	NewTextureData->bUseDensitySourceChannel = bUseDensitySourceChannel;
	NewTextureData->ColorChannel = ColorChannel;
	NewTextureData->TexelSize = TexelSize;
	NewTextureData->bUseAdvancedTiling = bUseAdvancedTiling;
	NewTextureData->Tiling = Tiling;
	NewTextureData->CenterOffset = CenterOffset;
	NewTextureData->Rotation = Rotation;
	NewTextureData->bUseTileBounds = bUseTileBounds;
	NewTextureData->TileBounds = TileBounds;
	NewTextureData->ColorData = ColorData;
	NewTextureData->Bounds = Bounds;
	NewTextureData->Height = Height;
	NewTextureData->Width = Width;
}

void UPCGTextureData::InitializeInternal(UTexture* InTexture, uint32 InTextureIndex, const FTransform& InTransform, bool* bOutInitializeCompleted, bool bCreateCPUDuplicateEditorOnly)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGTextureData::Initialize);

	auto SetInitCompleted = [bOutInitializeCompleted](bool bIsDone)
	{
		if (bOutInitializeCompleted)
		{
			*bOutInitializeCompleted = bIsDone;
		}
	};

	if (bSuccessfullyInitialized)
	{
		SetInitCompleted(true);
		return;
	}

	if (!InTexture)
	{
		SetInitCompleted(true);
		return;
	}

	if (bReadbackFromGPUInitiated)
	{
		SetInitCompleted(false);
		return;
	}

	Texture = InTexture;
	TextureIndex = InTextureIndex;
	Transform = InTransform;
	Width = 0;
	Height = 0;

	Bounds = FBox(EForceInit::ForceInit);
	Bounds += FVector(-1.0f, -1.0f, 0.0f);
	Bounds += FVector(1.0f, 1.0f, 0.0f);
	Bounds = Bounds.TransformBy(Transform);

	// Prioritize initializing from a CPU texture when the provided texture is marked as CPU accessible
	TOptional<bool> InitializedFromCPUTexture = InitializeFromCPUTexture();
	if (!InitializedFromCPUTexture.IsSet())
	{
		// Wait until we can determine this.
		SetInitCompleted(false);
		return;
	}

	if (*InitializedFromCPUTexture)
	{
		bSuccessfullyInitialized = true;
		SetInitCompleted(true);
		return;
	}

#if WITH_EDITOR
	// Create a duplicate texture if necessary.
	if (bCreateCPUDuplicateEditorOnly)
	{
		UTexture2D* Texture2D = Cast<UTexture2D>(Texture);
		if (!Texture2D)
		{
			if (UTexture2DArray* Texture2DArray = Cast<UTexture2DArray>(Texture))
			{
				Texture2D = Texture2DArray->SourceTextures.IsValidIndex(TextureIndex) ? Texture2DArray->SourceTextures[TextureIndex] : nullptr;
			}
			else
			{
				SetInitCompleted(true);
				return;
			}
		}

		TOptional<bool> CanGPUTextureBeCPUAccessed = PCGTextureSamplingHelpers::CanGPUTextureBeCPUAccessed(Texture2D);
		if (!CanGPUTextureBeCPUAccessed.IsSet())
		{
			// Wait until we can ascertain this.
			SetInitCompleted(false);
			return;
		}

		TOptional<bool> IsCPUAccessible = PCGTextureSamplingHelpers::IsTextureCPUAccessible(Texture2D);
		if (!IsCPUAccessible.IsSet())
		{
			// Wait until we can ascertain this.
			SetInitCompleted(false);
			return;
		}

		if (Texture2D && !DuplicateTexture && !*CanGPUTextureBeCPUAccessed && !*IsCPUAccessible)
		{
			// Duplicate texture and change access flags (editor only). This duplicate texture will be used by the normal logic below.
			FObjectDuplicationParameters DuplicationParams(Texture2D, /*Outer=*/this);
			DuplicateTexture = CastChecked<UTexture2D>(StaticDuplicateObjectEx(DuplicationParams));
			DuplicateTexture->PreEditChange(nullptr);
			DuplicateTexture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
			DuplicateTexture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap; // Allows the texture to be in a non-compressed format (B8G8R8A8), which is necessary to convince the data to remain CPU-side.
			DuplicateTexture->SRGB = false;
			DuplicateTexture->PostEditChange();
		}
	}
#endif

#if WITH_EDITOR
	// Try reading the texture back from CPU-accessible memory if possible.
	TOptional<bool> InitGPUTextureFromCPU = InitializeGPUTextureFromCPU();
	if (!InitGPUTextureFromCPU)
	{
		// Not ready.
		SetInitCompleted(false);
		return;
	}

	if (*InitGPUTextureFromCPU)
	{
		bSuccessfullyInitialized = true;
		SetInitCompleted(true);
		return;
	}
#endif

	// Finally try the GPU -> CPU readback path. We don't flag success yet though - this will be done when the readback data arrives.
	SetInitCompleted(InitializeFromGPUTexture());

	return;
}

bool UPCGTextureData::Initialize(UTexture* InTexture, uint32 InTextureIndex, const FTransform& InTransform, bool bCreateCPUDuplicateEditorOnly)
{
	bool bInitializeDone = false;
	InitializeInternal(InTexture, InTextureIndex, InTransform, &bInitializeDone, bCreateCPUDuplicateEditorOnly);
	return bInitializeDone;
}

void UPCGTextureData::Initialize(UTexture* InTexture, uint32 InTextureIndex, const FTransform& InTransform, const TFunction<void()>& InPostInitializeCallback, bool bCreateCPUDuplicateEditorOnly)
{
	bool bInitializeDone = false;
	InitializeInternal(InTexture, InTextureIndex, InTransform, &bInitializeDone, bCreateCPUDuplicateEditorOnly);

	if (bInitializeDone)
	{
		InPostInitializeCallback();
	}
	else
	{
		PostInitializeCallback = InPostInitializeCallback;
	}
}

void UPCGTextureData::AddToCrc(FArchiveCrc32& Ar, bool bFullDataCrc) const
{
	Super::AddToCrc(Ar, bFullDataCrc);

	// This data does not have a bespoke CRC implementation so just use a global unique data CRC.
	AddUIDToCrc(Ar);
}

UPCGSpatialData* UPCGTextureData::CopyInternal(FPCGContext* Context) const
{
	UPCGTextureData* NewTextureData = FPCGContext::NewObject_AnyThread<UPCGTextureData>(Context);

	CopyBaseTextureData(NewTextureData);

	NewTextureData->Texture = Texture;

	return NewTextureData;
}

TOptional<bool> UPCGTextureData::InitializeFromCPUTexture()
{
	if (!Texture.IsValid())
	{
		return false;
	}

	// CPU Textures currently only support UTexture2D.
	UTexture2D* Texture2D = Cast<UTexture2D>(Texture);
	if (!Texture2D)
	{
		return false;
	}

#if WITH_EDITOR
	if (!Texture2D->IsAsyncCacheComplete())
	{
		// Wait until texture ready before interrogating it for access options.
		return {};
	}
#endif

	FSharedImageConstRef CPUTextureRef = Texture2D->GetCPUCopy();
	if (!CPUTextureRef.IsValid())
	{
		return false;
	}

	Width = CPUTextureRef->SizeX;
	Height = CPUTextureRef->SizeY;

	const int32 PixelCount = Width * Height;
	ColorData.SetNum(PixelCount);

	if (CPUTextureRef->Format == ERawImageFormat::G8)
	{
		const TArrayView64<const uint8> DataView = CPUTextureRef->AsG8();

		for (int32 D = 0; D < PixelCount; ++D)
		{
			ColorData[D] = FColor(DataView[D], DataView[D], DataView[D]).ReinterpretAsLinear();
		}
	}
	else if (CPUTextureRef->Format == ERawImageFormat::BGRA8)
	{
		const TArrayView64<const FColor> DataView = CPUTextureRef->AsBGRA8();

		// Memory representation of FColor is BGRA, so we reinterpret as FLinearColor to get RGBA.
		for (int32 D = 0; D < PixelCount; ++D)
		{
			ColorData[D] = DataView[D].ReinterpretAsLinear();
		}
	}
	else if (CPUTextureRef->Format == ERawImageFormat::BGRE8)
	{
		const TArrayView64<const FColor> DataView = CPUTextureRef->AsBGRE8();

		// Memory representation of FColor is BGRA, so we reinterpret as FLinearColor to get RGBA.
		for (int32 D = 0; D < PixelCount; ++D)
		{
			ColorData[D] = DataView[D].ReinterpretAsLinear();
		}
	}
	else if (CPUTextureRef->Format == ERawImageFormat::RGBA16)
	{
		const TArrayView64<const uint16> DataView = CPUTextureRef->AsRGBA16();
		check(PixelCount * 4 == DataView.Num());

		for (int32 D = 0; D < PixelCount; ++D)
		{
			const uint32 Index = D * 4;
			ColorData[D] = FLinearColor(DataView[Index + 0], DataView[Index + 1], DataView[Index + 2], DataView[Index + 3]);
		}
	}
	else if (CPUTextureRef->Format == ERawImageFormat::RGBA16F)
	{
		const TArrayView64<const FFloat16Color> DataView = CPUTextureRef->AsRGBA16F();

		for (int32 D = 0; D < PixelCount; ++D)
		{
			ColorData[D] = FLinearColor(DataView[D]);
		}
	}
	else if (CPUTextureRef->Format == ERawImageFormat::RGBA32F)
	{
		const TArrayView64<const FLinearColor> DataView = CPUTextureRef->AsRGBA32F();

		for (int32 D = 0; D < PixelCount; ++D)
		{
			ColorData[D] = DataView[D];
		}
	}
	else if (CPUTextureRef->Format == ERawImageFormat::G16)
	{
		const TArrayView64<const uint16> DataView = CPUTextureRef->AsG16();

		for (int32 D = 0; D < PixelCount; ++D)
		{
			ColorData[D] = FColor(DataView[D], DataView[D], DataView[D]).ReinterpretAsLinear();
		}
	}
	else if (CPUTextureRef->Format == ERawImageFormat::R16F)
	{
		const TArrayView64<const FFloat16> DataView = CPUTextureRef->AsR16F();

		for (int32 D = 0; D < PixelCount; ++D)
		{
			ColorData[D] = FLinearColor(DataView[D], DataView[D], DataView[D]);
		}
	}
	else if (CPUTextureRef->Format == ERawImageFormat::R32F)
	{
		const TArrayView64<const float> DataView = CPUTextureRef->AsR32F();

		for (int32 D = 0; D < PixelCount; ++D)
		{
			ColorData[D] = FLinearColor(DataView[D], DataView[D], DataView[D]);
		}
	}
	else
	{
		UE_LOG(LogPCG, Error, TEXT("PCGTextureReadback has an invalid format (%d) for CPU texture '%s'."), CPUTextureRef->Format, *Texture2D->GetFName().ToString());

		Width = 0;
		Height = 0;
		ColorData.SetNum(0);

		return false;
	}

	return true;
}

bool UPCGTextureData::InitializeFromGPUTexture()
{
	if (!Texture.IsValid())
	{
		return true;
	}

	if (bReadbackFromGPUInitiated)
	{
		return false;
	}
	bReadbackFromGPUInitiated = true;

#if WITH_EDITOR
	// Force a wait on any incomplete async texture compilation and caching operations
	Texture->FinishCachePlatformData();
#endif

	// TODO: Forcing a resource update is problematic. Clears cooked platform data and may break other usages of this texture
	// But it is necessary to force the texture memory to be present on the first dispatch
	Texture->UpdateResource();
	Texture->WaitForPendingInitOrStreaming();

	FTexturePlatformData* PlatformData = nullptr;
	FTextureResource* TextureResource = Texture->GetResource();

	if (UTexture2D* Texture2D = Cast<UTexture2D>(Texture))
	{
		PlatformData = Texture2D->GetPlatformData();
	}
	else if (UTexture2DArray* Texture2DArray = Cast<UTexture2DArray>(Texture))
	{
		PlatformData = Texture2DArray->GetPlatformData();
	}

	if (PlatformData && TextureResource && TextureResource->TextureRHI)
	{
		FPCGTextureReadbackDispatchParams Params;
		Params.SourceTexture = TextureResource->TextureRHI;

		// We should always use a point filter sampler since we are trying to get a 1 to 1 copy of the texture. We will do our own filtering later.
		Params.SourceSampler = TStaticSamplerState<SF_Point, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
		Params.SourceDimensions = FIntPoint(PlatformData->SizeX, PlatformData->SizeY);
		Params.SourceTextureIndex = TextureIndex;

		TWeakObjectPtr<UPCGTextureData> ThisWeakPtr(this);

		FPCGTextureReadbackInterface::Dispatch(Params, [ThisWeakPtr, PlatformData](void* OutBuffer, int32 ReadbackWidth, int32 ReadbackHeight)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(UPCGTextureData::Initialize::DispatchCallback);

			UPCGTextureData* This = ThisWeakPtr.IsValid() ? ThisWeakPtr.Get() : nullptr;
			if (!This)
			{
				return;
			}

			const int32 PixelCount = ReadbackWidth * ReadbackHeight;

			if (PlatformData->SizeX * PlatformData->SizeY != PixelCount)
			{
				UE_LOG(LogPCG, Error,
					TEXT("PCGTextureData readback has different dimensions than the source texture '%s'. Expected (%d, %d), received (%d, %d)."),
					*This->Texture->GetFName().ToString(),
					PlatformData->SizeX, PlatformData->SizeY,
					ReadbackWidth, ReadbackHeight);
			}

			if (const FColor* FormattedImageData = reinterpret_cast<const FColor*>(OutBuffer))
			{
				This->Width = ReadbackWidth;
				This->Height = ReadbackHeight;
				This->ColorData.SetNum(PixelCount);

				for (int32 D = 0; D < PixelCount; ++D)
				{
					This->ColorData[D] = FormattedImageData[D].ReinterpretAsLinear();
				}
			}
			else
			{
				UE_LOG(LogPCG, Error, TEXT("PCGTextureData unable to get readback results from '%s'"), *This->Texture->GetFName().ToString());
			}

			This->bSuccessfullyInitialized = true;

			// Deprecated in 5.5, should be removed when the deprecated Initialize() function is removed.
			if (This->PostInitializeCallback)
			{
				This->PostInitializeCallback();
			}
		});
	}
	else
	{
		UE_LOG(LogPCG, Error, TEXT("PCGTextureData failed to acquire texture resource for '%s'"), *Texture->GetFName().ToString());
		return true;
	}

	// Not complete - wait for readback result.
	return false;
}

#if WITH_EDITOR
TOptional<bool> UPCGTextureData::InitializeGPUTextureFromCPU()
{
	// There's a bit of a mix of texture types in this class currently, due to some functionality for readback being 2D-only.
	UTexture2D* TextureAs2D = Cast<UTexture2D>(Texture.Get());
	if (!TextureAs2D)
	{
		if (UTexture2DArray* Texture2DArray = Cast<UTexture2DArray>(Texture))
		{
			TextureAs2D = Texture2DArray->SourceTextures.IsValidIndex(TextureIndex) ? Texture2DArray->SourceTextures[TextureIndex] : nullptr;
		}
	}

	UTexture2D* TextureForReadback = nullptr;
	TOptional<bool> bCanGPUTextureBeCPUAccessed = PCGTextureSamplingHelpers::CanGPUTextureBeCPUAccessed(TextureAs2D);
	if (!bCanGPUTextureBeCPUAccessed)
	{
		return {};
	}

	if (TextureAs2D && *bCanGPUTextureBeCPUAccessed)
	{
		TextureForReadback = TextureAs2D;
	}
	else
	{
		TOptional<bool> bCanGPUTextureBeCPUAccessedDupe = PCGTextureSamplingHelpers::CanGPUTextureBeCPUAccessed(DuplicateTexture);
		if (!bCanGPUTextureBeCPUAccessedDupe)
		{
			return {};
		}

		if (*bCanGPUTextureBeCPUAccessedDupe)
		{
			TextureForReadback = DuplicateTexture;
		}
	}

	if (!TextureForReadback)
	{
		return false;
	}

#if WITH_EDITOR
	if (!TextureForReadback->IsAsyncCacheComplete())
	{
		return {};
	}
#endif

	FTexturePlatformData* PlatformData = TextureForReadback ? TextureForReadback->GetPlatformData() : nullptr;
	if (!PlatformData)
	{
		UE_LOG(LogPCG, Warning, TEXT("GetPlatformData failed"));
		return false;
	}

	bool bBulkDataAccessed = false;

	if (const uint8_t* BulkData = reinterpret_cast<const uint8_t*>(PlatformData->Mips[0].BulkData.LockReadOnly()))
	{
		bBulkDataAccessed = true;

		Width = PlatformData->SizeX;
		Height = PlatformData->SizeY;
		const int32 PixelCount = Width * Height;
		ColorData.SetNum(PixelCount);

		const FColor* FormattedImageData = reinterpret_cast<const FColor*>(BulkData);
		for (int32 D = 0; D < PixelCount; ++D)
		{
			ColorData[D] = FormattedImageData[D].ReinterpretAsLinear();
		}
	}
	else
	{
		UE_LOG(LogPCG, Error, TEXT("PCGTextureData unable to get bulk data from '%s'."), *Texture->GetFName().ToString());
	}

	PlatformData->Mips[0].BulkData.Unlock();

	return bBulkDataAccessed;
}
#endif
