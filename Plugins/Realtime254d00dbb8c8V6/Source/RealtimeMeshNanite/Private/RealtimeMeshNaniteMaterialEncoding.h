// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshNaniteBuilderCore.h"
#include "RealtimeMeshNaniteUtilities.h"

namespace RealtimeMesh::Nanite::Internal
{
	static uint32 CalcVertReuseBatchInfoSize(const TArrayView<const FRealtimeMeshNaniteMaterialRange>& MaterialRanges, const FMaterialRangeBatchTriCounts& MaterialRangeBatchTriCounts)
	{
		constexpr int32 NumBatchCountBits = 4;
		constexpr int32 NumTriCountBits = 5;
		constexpr int32 WorstCaseFullBatchTriCount = 10;

		int32 TotalNumBatches = 0;
		int32 NumBitsNeeded = 0;

		for (int32 Index = 0; Index < MaterialRanges.Num(); Index++)
		{
			const FRealtimeMeshNaniteMaterialRange& MaterialRange = MaterialRanges[Index];
			const auto& BatchTriCounts = MaterialRangeBatchTriCounts[Index];
			
			const int32 NumBatches = BatchTriCounts.Num();
			check(NumBatches > 0 && NumBatches < (1 << NumBatchCountBits));
			TotalNumBatches += NumBatches;
			NumBitsNeeded += NumBatchCountBits + NumBatches * NumTriCountBits;
		}
		NumBitsNeeded += FMath::Max(NumBatchCountBits * (3 - MaterialRanges.Num()), 0);
		check(TotalNumBatches < FMath::DivideAndRoundUp(NANITE_MAX_CLUSTER_TRIANGLES, WorstCaseFullBatchTriCount) + MaterialRanges.Num() - 1);

		return FMath::DivideAndRoundUp(NumBitsNeeded, 32);
	}

	static void PackVertReuseBatchInfo(const TArrayView<const FRealtimeMeshNaniteMaterialRange>& MaterialRanges, TArray<uint32>& OutVertReuseBatchInfo, const FMaterialRangeBatchTriCounts& MaterialRangeBatchTriCounts)
	{
		constexpr int32 NumBatchCountBits = 4;
		constexpr int32 NumTriCountBits = 5;

		auto AppendBits = [](uint32*& DwordPtr, uint32& BitOffset, uint32 Bits, uint32 NumBits)
		{
			uint32 BitsConsumed = FMath::Min(NumBits, 32u - BitOffset);
			FNaniteMath::SetBits(*DwordPtr, (Bits & ((1 << BitsConsumed) - 1)), BitsConsumed, BitOffset);
			BitOffset += BitsConsumed;
			if (BitOffset >= 32u)
			{
				check(BitOffset == 32u);
				++DwordPtr;
				BitOffset -= 32u;
			}
			if (BitsConsumed < NumBits)
			{
				Bits >>= BitsConsumed;
				BitsConsumed = NumBits - BitsConsumed;
				FNaniteMath::SetBits(*DwordPtr, Bits, BitsConsumed, BitOffset);
				BitOffset += BitsConsumed;
				check(BitOffset < 32u);
			}
		};

		const uint32 NumDwordsNeeded = CalcVertReuseBatchInfoSize(MaterialRanges, MaterialRangeBatchTriCounts);
		OutVertReuseBatchInfo.Empty(NumDwordsNeeded);
		OutVertReuseBatchInfo.AddZeroed(NumDwordsNeeded);

		uint32* NumArrayDwordPtr = &OutVertReuseBatchInfo[0];
		uint32 NumArrayBitOffset = 0;
		const uint32 NumArrayBits = FMath::Max(MaterialRanges.Num(), 3) * NumBatchCountBits;
		uint32* TriCountDwordPtr = &OutVertReuseBatchInfo[NumArrayBits >> 5];
		uint32 TriCountBitOffset = NumArrayBits & 0x1f;

		for (int32 Index = 0; Index < MaterialRanges.Num(); Index++)
		{
			const FRealtimeMeshNaniteMaterialRange& MaterialRange = MaterialRanges[Index];
			const auto& BatchTriCounts = MaterialRangeBatchTriCounts[Index];
			
			const uint32 NumBatches = BatchTriCounts.Num();
			check(NumBatches > 0);
			AppendBits(NumArrayDwordPtr, NumArrayBitOffset, NumBatches, NumBatchCountBits);

			for (int32 BatchIndex = 0; BatchIndex < BatchTriCounts.Num(); ++BatchIndex)
			{
				const uint32 BatchTriCount = BatchTriCounts[BatchIndex];
				check(BatchTriCount > 0 && BatchTriCount - 1 < (1 << NumTriCountBits));
				AppendBits(TriCountDwordPtr, TriCountBitOffset, BatchTriCount - 1, NumTriCountBits);
			}
		}
	}

	static uint32 PackMaterialTableRange(uint32 TriStart, uint32 TriLength, uint32 MaterialIndex)
	{
		uint32 Packed = 0x00000000;
		// uint32 TriStart      :  8; // max 128 triangles
		// uint32 TriLength     :  8; // max 128 triangles
		// uint32 MaterialIndex :  6; // max  64 materials
		// uint32 Padding       : 10;
		check(TriStart <= 128);
		check(TriLength <= 128);
		check(MaterialIndex < 64);
		Packed |= TriStart;
		Packed |= TriLength << 8;
		Packed |= MaterialIndex << 16;
		return Packed;
	}

	static uint32 PackMaterialFastPath(uint32 Material0Length, uint32 Material0Index, uint32 Material1Length, uint32 Material1Index, uint32 Material2Index)
	{
		uint32 Packed = 0x00000000;
		// Material Packed Range - Fast Path (32 bits)
		// uint Material0Index  : 6;   // max  64 materials (0:Material0Length)
		// uint Material1Index  : 6;   // max  64 materials (Material0Length:Material1Length)
		// uint Material2Index  : 6;   // max  64 materials (remainder)
		// uint Material0Length : 7;   // max 128 triangles (num minus one)
		// uint Material1Length : 7;   // max  64 triangles (materials are sorted, so at most 128/2)
		check(Material0Index < 64);
		check(Material1Index < 64);
		check(Material2Index < 64);
		check(Material0Length >= 1);
		check(Material0Length <= 128);
		check(Material1Length <= 64);
		check(Material1Length <= Material0Length);
		Packed |= Material0Index;
		Packed |= Material1Index << 6;
		Packed |= Material2Index << 12;
		Packed |= (Material0Length - 1u) << 18;
		Packed |= Material1Length << 25;
		return Packed;
	}

	static uint32 PackMaterialSlowPath(uint32 MaterialTableOffset, uint32 MaterialTableLength)
	{
		// Material Packed Range - Slow Path (32 bits)
		// uint BufferIndex     : 19; // 2^19 max value (tons, it's per prim)
		// uint BufferLength	: 6;  // max 64 materials, so also at most 64 ranges (num minus one)
		// uint Padding			: 7;  // always 127 for slow path. corresponds to Material1Length=127 in fast path
		check(MaterialTableOffset < 524288); // 2^19 - 1
		check(MaterialTableLength > 0); // clusters with 0 materials use fast path
		check(MaterialTableLength <= 64);
		uint32 Packed = MaterialTableOffset;
		Packed |= (MaterialTableLength - 1u) << 19;
		Packed |= (0xFE000000u);
		return Packed;
	}

	static uint32 PackMaterialInfo(const FRealtimeMeshNaniteCluster& InCluster, TArray<uint32>& OutMaterialTable, uint32 MaterialTableStartOffset)
	{
		const auto& MaterialRanges = InCluster.GetMaterialRanges();

		// Encode material ranges
		uint32 NumMaterialTriangles = 0;
		for (int32 RangeIndex = 0; RangeIndex < MaterialRanges.Num(); ++RangeIndex)
		{
			check(MaterialRanges[RangeIndex].RangeLength <= 128);
			check(MaterialRanges[RangeIndex].RangeLength > 0);
			check(MaterialRanges[RangeIndex].MaterialIndex < NANITE_MAX_CLUSTER_MATERIALS);
			NumMaterialTriangles += MaterialRanges[RangeIndex].RangeLength;
		}

		// All triangles accounted for in material ranges?
		check(NumMaterialTriangles == InCluster.GetNumTriangles());

		uint32 PackedMaterialInfo = 0x00000000;

		// The fast inline path can encode up to 3 materials
		if (MaterialRanges.Num() <= 3)
		{
			uint32 Material0Length = 0;
			uint32 Material0Index = 0;
			uint32 Material1Length = 0;
			uint32 Material1Index = 0;
			uint32 Material2Index = 0;

			if (MaterialRanges.Num() > 0)
			{
				const FRealtimeMeshNaniteMaterialRange& Material0 = MaterialRanges[0];
				check(Material0.RangeStart == 0);
				Material0Length = Material0.RangeLength;
				Material0Index = Material0.MaterialIndex;
			}

			if (MaterialRanges.Num() > 1)
			{
				const FRealtimeMeshNaniteMaterialRange& Material1 = MaterialRanges[1];
				check(Material1.RangeStart == MaterialRanges[0].RangeLength);
				Material1Length = Material1.RangeLength;
				Material1Index = Material1.MaterialIndex;
			}

			if (MaterialRanges.Num() > 2)
			{
				const FRealtimeMeshNaniteMaterialRange& Material2 = MaterialRanges[2];
				check(Material2.RangeStart == Material0Length + Material1Length);
				check(Material2.RangeLength == InCluster.GetNumTriangles() - Material0Length - Material1Length);
				Material2Index = Material2.MaterialIndex;
			}

			PackedMaterialInfo = PackMaterialFastPath(Material0Length, Material0Index, Material1Length, Material1Index, Material2Index);
		}
		// Slow global table search path
		else
		{
			uint32 MaterialTableOffset = OutMaterialTable.Num() + MaterialTableStartOffset;
			uint32 MaterialTableLength = MaterialRanges.Num();
			check(MaterialTableLength > 0);

			for (int32 RangeIndex = 0; RangeIndex < MaterialRanges.Num(); ++RangeIndex)
			{
				const FRealtimeMeshNaniteMaterialRange& Material = MaterialRanges[RangeIndex];
				OutMaterialTable.Add(PackMaterialTableRange(Material.RangeStart, Material.RangeLength, Material.MaterialIndex));
			}

			PackedMaterialInfo = PackMaterialSlowPath(MaterialTableOffset, MaterialTableLength);
		}

		return PackedMaterialInfo;
	}
}
