// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGCommon.h"
#include "PCGSubsystem.h"
#include "PCGWorldActor.h"

namespace PCGFeatureSwitches
{
	TAutoConsoleVariable<bool> CVarCheckSamplerMemory{
		TEXT("pcg.CheckSamplerMemory"),
		true,
		TEXT("Checks expected memory size consumption prior to performing sampling operations")
	};

	TAutoConsoleVariable<float> CVarSamplerMemoryThreshold{
		TEXT("pcg.SamplerMemoryThreshold"),
		0.8f,
		TEXT("Normalized threshold of remaining physical memory required to abort sampling operation."),
		FConsoleVariableDelegate::CreateLambda([](IConsoleVariable* InVariable)
		{
			if (InVariable->GetFloat() < 0.f || InVariable->GetFloat() > 1.0)
			{
				InVariable->SetWithCurrentPriority(FMath::Clamp(InVariable->GetFloat(), 0.f, 1.f));
			}
		})
	};

	namespace Helpers
	{
		uint64 GetAvailableMemoryForSamplers()
		{
			const FPlatformMemoryStats MemoryStats = FPlatformMemory::GetStats();
			// Also uses AvailableVirtual because the system might have plenty of physical memory but still be limited by virtual memory available in some cases.
			// (i.e. per-process quota, paging file size lower than actual memory available, etc.).
			return CVarSamplerMemoryThreshold.GetValueOnAnyThread() * FMath::Min(MemoryStats.AvailablePhysical, MemoryStats.AvailableVirtual);
		}
	}
}

namespace PCGSystemSwitches
{
#if WITH_EDITOR
	TAutoConsoleVariable<bool> CVarPausePCGExecution(
		TEXT("pcg.PauseExecution"),
		false,
		TEXT("Pauses all execution of PCG but does not cancel tasks."));

	TAutoConsoleVariable<bool> CVarGlobalDisableRefresh(
		TEXT("pcg.GlobalDisableRefresh"),
		false,
		TEXT("Disable refresh for all PCG Components."));

	TAutoConsoleVariable<bool> CVarDirtyLoadAsPreviewOnLoad(
		TEXT("pcg.DirtyLoadAsPreviewOnLoad"),
		false,
		TEXT("Enables dirtying on load for load as preview components.\nTurning off this option will require to force generate or apply a change before this component is regenerated."));
#endif
}

namespace PCGHiGenGrid
{
	bool IsValidGridSize(uint32 InGridSize)
	{
		// Must be a power of 2 (in m) and within the valid range
		// TODO: support other units
		if (FMath::IsPowerOfTwo(InGridSize / 100)
			&& InGridSize >= GridToGridSize(EPCGHiGenGrid::GridMin)
			&& InGridSize <= GridToGridSize(EPCGHiGenGrid::GridMax))
		{
			return true;
		}

		UPCGSubsystem* PCGSubsystem = UPCGSubsystem::GetSubsystemForCurrentWorld();
		APCGWorldActor* PCGWorldActor = PCGSubsystem ? PCGSubsystem->GetPCGWorldActor() : nullptr;

		return !PCGWorldActor || PCGWorldActor->PartitionGridSize == InGridSize;
	}

	bool IsValidGrid(EPCGHiGenGrid InGrid)
	{
		// Check the bitmask value is within range
		return InGrid >= EPCGHiGenGrid::GridMin && static_cast<uint32>(InGrid) < 2 * static_cast<uint32>(EPCGHiGenGrid::GridMax);
	}

	bool IsValidGridOrUninitialized(EPCGHiGenGrid InGrid)
	{
		return IsValidGrid(InGrid) || InGrid == EPCGHiGenGrid::Uninitialized;
	}

	uint32 GridToGridSize(EPCGHiGenGrid InGrid)
	{
		const uint32 GridAsUint = static_cast<uint32>(InGrid);
		ensure(FMath::IsPowerOfTwo(GridAsUint));
		// TODO: support other units
		return IsValidGrid(InGrid) ? (GridAsUint * 100) : UninitializedGridSize();
	}

	EPCGHiGenGrid GridSizeToGrid(uint32 InGridSize)
	{
		if (InGridSize == UnboundedGridSize())
		{
			return EPCGHiGenGrid::Unbounded;
		}
		// TODO: support other units
		return ensure(IsValidGridSize(InGridSize)) ? static_cast<EPCGHiGenGrid>(InGridSize / 100) : EPCGHiGenGrid::Uninitialized;
	}

	uint32 UninitializedGridSize()
	{
		return static_cast<uint32>(EPCGHiGenGrid::Uninitialized);
	}

	uint32 UnboundedGridSize()
	{
		return static_cast<uint32>(EPCGHiGenGrid::Unbounded);
	}
}

double FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid(EPCGHiGenGrid Grid) const
{
	switch (Grid)
	{
		case EPCGHiGenGrid::Grid4: return GenerationRadius400;
		case EPCGHiGenGrid::Grid8: return GenerationRadius800;
		case EPCGHiGenGrid::Grid16: return GenerationRadius1600;
		case EPCGHiGenGrid::Grid32: return GenerationRadius3200;
		case EPCGHiGenGrid::Grid64: return GenerationRadius6400;
		case EPCGHiGenGrid::Grid128: return GenerationRadius12800;
		case EPCGHiGenGrid::Grid256: return GenerationRadius25600;
		case EPCGHiGenGrid::Grid512: return GenerationRadius51200;
		case EPCGHiGenGrid::Grid1024: return GenerationRadius102400;
		case EPCGHiGenGrid::Grid2048: return GenerationRadius204800;
		case EPCGHiGenGrid::Grid4096: return GenerationRadius204800 * (1 << 1);
		case EPCGHiGenGrid::Grid8192: return GenerationRadius204800 * (1 << 2);
		case EPCGHiGenGrid::Grid16384: return GenerationRadius204800 * (1 << 3);
		case EPCGHiGenGrid::Grid32768: return GenerationRadius204800 * (1 << 4);
		case EPCGHiGenGrid::Grid65536: return GenerationRadius204800 * (1 << 5);
		case EPCGHiGenGrid::Grid131072: return GenerationRadius204800 * (1 << 6);
		case EPCGHiGenGrid::Grid262144: return GenerationRadius204800 * (1 << 7);
		case EPCGHiGenGrid::Grid524288: return GenerationRadius204800 * (1 << 8);
		case EPCGHiGenGrid::Grid1048576: return GenerationRadius204800 * (1 << 9);
		case EPCGHiGenGrid::Grid2097152: return GenerationRadius204800 * (1 << 10);
		case EPCGHiGenGrid::Grid4194304: return GenerationRadius204800 * (1 << 11);
		case EPCGHiGenGrid::Unbounded: return GenerationRadius;
	}

	ensure(false);
	return 0;
}

double FPCGRuntimeGenerationRadii::GetCleanupRadiusFromGrid(EPCGHiGenGrid Grid) const
{
	return GetGenerationRadiusFromGrid(Grid) * CleanupRadiusMultiplier;
}

namespace PCGDelegates
{
#if WITH_EDITOR
	FOnInstanceLayoutChanged OnInstancedPropertyBagLayoutChanged;
#endif
} // PCGDelegates

namespace PCGPinIdHelpers
{
	FPCGPinId NodeIdAndPinIndexToPinId(FPCGTaskId NodeId, uint64 PinIndex)
	{
		// Construct a unique ID from node index and pin index.
		ensure(PinIndex < PCGPinIdHelpers::MaxOutputPins);
		return (NodeId * PCGPinIdHelpers::PinActiveBitmaskSize) + (PinIndex % PCGPinIdHelpers::PinActiveBitmaskSize);
	}

	FPCGPinId NodeIdToPinId(FPCGTaskId NodeId)
	{
		// Use (max pins - 1) to make a special pin ID that is not associated to a specific node pin.
		return (NodeId * PCGPinIdHelpers::PinActiveBitmaskSize) + PCGPinIdHelpers::MaxOutputPins;
	}

	FPCGPinId OffsetNodeIdInPinId(FPCGPinId PinId, uint64 NodeIDOffset)
	{
		return NodeIDOffset * PCGPinIdHelpers::PinActiveBitmaskSize + PinId;
	}

	FPCGTaskId GetNodeIdFromPinId(FPCGPinId PinId)
	{
		return PinId / PCGPinIdHelpers::PinActiveBitmaskSize;
	}

	uint64 GetPinIndexFromPinId(FPCGPinId PinId)
	{
		return PinId % PCGPinIdHelpers::PinActiveBitmaskSize;
	}
}

namespace PCGQualityHelpers
{
	FName GetQualityPinLabel()
	{
		const int32 QualityLevel = UPCGSubsystem::GetPCGQualityLevel();
		FName SelectedPinLabel = NAME_None;

		switch (QualityLevel)
		{
			case 0: // Low Quality
				SelectedPinLabel = PinLabelLow;
				break;
			case 1: // Medium Quality
				SelectedPinLabel = PinLabelMedium;
				break;
			case 2: // High Quality
				SelectedPinLabel = PinLabelHigh;
				break;
			case 3: // Epic Quality
				SelectedPinLabel = PinLabelEpic;
				break;
			case 4: // Cinematic Quality
				SelectedPinLabel = PinLabelCinematic;
				break;
			default: // Default to Low Quality if we don't have a valid quality level
				SelectedPinLabel = PinLabelDefault;
		}

		return SelectedPinLabel;
	}
}
