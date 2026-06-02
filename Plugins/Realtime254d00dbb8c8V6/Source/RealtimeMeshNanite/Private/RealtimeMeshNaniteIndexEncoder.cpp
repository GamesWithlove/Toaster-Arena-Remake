// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshNaniteIndexEncoder.h"
#include "RealtimeMeshNaniteBitWriter.h"

namespace RealtimeMesh::Nanite
{
	static uint32 countbits(uint32 x)
	{
		return FMath::CountBits(x);
	}

	static uint32 firstbithigh(uint32 x)
	{
		return FMath::FloorLog2(x);
	}

	static int32 BitFieldExtractI32(int32 Data, int32 NumBits, int32 StartBit)
	{
		return (Data << (32 - StartBit - NumBits)) >> (32 - NumBits);
	}

	static uint32 BitFieldExtractU32(uint32 Data, int32 NumBits, int32 StartBit)
	{
		return (Data << (32 - StartBit - NumBits)) >> (32 - NumBits);
	}


	static uint32 ReadUnalignedDword(const uint8* SrcPtr, int32 BitOffset) // Note: Only guarantees 25 valid bits
	{
		if (BitOffset < 0)
		{
			// Workaround for reading slightly out of bounds
			checkSlow(BitOffset > -8);
			return *(const uint32*)(SrcPtr) << (8 - (BitOffset & 7));
		}
		else
		{
			const uint32* DwordPtr = (const uint32*)(SrcPtr + (BitOffset >> 3));
			return *DwordPtr >> (BitOffset & 7);
		}
	}

	static void UnpackTriangleIndices(const FRealtimeMeshNaniteEncodedIndices& StripDesc, const uint8* StripIndexData, uint32 TriIndex, uint32* OutIndices)
	{
		const uint32 DwordIndex = TriIndex >> 5;
		const uint32 BitIndex = TriIndex & 31u;

		//Bitmask.x: bIsStart, Bitmask.y: bIsRight, Bitmask.z: bIsNewVertex
		const uint32 SMask = StripDesc.Bitmasks[DwordIndex][0];
		const uint32 LMask = StripDesc.Bitmasks[DwordIndex][1];
		const uint32 WMask = StripDesc.Bitmasks[DwordIndex][2];
		const uint32 SLMask = SMask & LMask;

		//const uint HeadRefVertexMask = ( SMask & LMask & WMask ) | ( ~SMask & WMask );
		const uint32 HeadRefVertexMask = (SLMask | ~SMask) & WMask; // 1 if head of triangle is ref. S case with 3 refs or L/R case with 1 ref.

		const uint32 PrevBitsMask = (1u << BitIndex) - 1u;
		const uint32 NumPrevRefVerticesBeforeDword = DwordIndex ? BitFieldExtractU32(StripDesc.NumPrevRefVerticesBeforeDwords, 10u, DwordIndex * 10u - 10u) : 0u;
		const uint32 NumPrevNewVerticesBeforeDword = DwordIndex ? BitFieldExtractU32(StripDesc.NumPrevNewVerticesBeforeDwords, 10u, DwordIndex * 10u - 10u) : 0u;

		int32 CurrentDwordNumPrevRefVertices = (countbits(SLMask & PrevBitsMask) << 1) + countbits(WMask & PrevBitsMask);
		int32 CurrentDwordNumPrevNewVertices = (countbits(SMask & PrevBitsMask) << 1) + BitIndex - CurrentDwordNumPrevRefVertices;

		int32 NumPrevRefVertices = NumPrevRefVerticesBeforeDword + CurrentDwordNumPrevRefVertices;
		int32 NumPrevNewVertices = NumPrevNewVerticesBeforeDword + CurrentDwordNumPrevNewVertices;

		const int32 IsStart = BitFieldExtractI32(SMask, 1, BitIndex); // -1: true, 0: false
		const int32 IsLeft = BitFieldExtractI32(LMask, 1, BitIndex); // -1: true, 0: false
		const int32 IsRef = BitFieldExtractI32(WMask, 1, BitIndex); // -1: true, 0: false

		const uint32 BaseVertex = NumPrevNewVertices - 1u;

		uint32 IndexData = ReadUnalignedDword(StripIndexData, (NumPrevRefVertices + ~IsStart) * 5); // -1 if not Start

		if (IsStart)
		{
			const int32 MinusNumRefVertices = (IsLeft << 1) + IsRef;
			uint32 NextVertex = NumPrevNewVertices;

			if (MinusNumRefVertices <= -1)
			{
				OutIndices[0] = BaseVertex - (IndexData & 31u);
				IndexData >>= 5;
			}
			else
			{
				OutIndices[0] = NextVertex++;
			}
			
			if (MinusNumRefVertices <= -2)
			{
				OutIndices[1] = BaseVertex - (IndexData & 31u);
				IndexData >>= 5;
			}
			else
			{
				OutIndices[1] = NextVertex++;
			}
			
			if (MinusNumRefVertices <= -3)
			{
				OutIndices[2] = BaseVertex - (IndexData & 31u);
			}
			else
			{
				OutIndices[2] = NextVertex++;
			}
		}
		else
		{
			// Handle two first vertices
			const uint32 PrevBitIndex = BitIndex - 1u;
			const int32 IsPrevStart = BitFieldExtractI32(SMask, 1, PrevBitIndex);
			const int32 IsPrevHeadRef = BitFieldExtractI32(HeadRefVertexMask, 1, PrevBitIndex);
			//const int NumPrevNewVerticesInTriangle = IsPrevStart ? ( 3u - ( bfe_u32( /*SLMask*/ LMask, PrevBitIndex, 1 ) << 1 ) - bfe_u32( /*SMask &*/ WMask, PrevBitIndex, 1 ) ) : /*1u - IsPrevRefVertex*/ 0u;
			const int32 NumPrevNewVerticesInTriangle = IsPrevStart & (3u - ((BitFieldExtractU32(/*SLMask*/ LMask, 1, PrevBitIndex) << 1) | BitFieldExtractU32(
				/*SMask &*/ WMask, 1, PrevBitIndex)));

			//OutIndices[ 1 ] = IsPrevRefVertex ? ( BaseVertex - ( IndexData & 31u ) + NumPrevNewVerticesInTriangle ) : BaseVertex;	// BaseVertex = ( NumPrevNewVertices - 1 );
			OutIndices[1] = BaseVertex + (IsPrevHeadRef & (NumPrevNewVerticesInTriangle - (IndexData & 31u)));
			//OutIndices[ 2 ] = IsRefVertex ? ( BaseVertex - bfe_u32( IndexData, 5, 5 ) ) : NumPrevNewVertices;
			OutIndices[2] = NumPrevNewVertices + (IsRef & (-1 - BitFieldExtractU32(IndexData, 5, 5)));

			// We have to search for the third vertex. 
			// Left triangles search for previous Right/Start. Right triangles search for previous Left/Start.
			const uint32 SearchMask = SMask | (LMask ^ IsLeft); // SMask | ( IsRight ? LMask : RMask );
			const uint32 FoundBitIndex = firstbithigh(SearchMask & PrevBitsMask);
			const int32 IsFoundCaseS = BitFieldExtractI32(SMask, 1, FoundBitIndex); // -1: true, 0: false

			const uint32 FoundPrevBitsMask = (1u << FoundBitIndex) - 1u;
			int32 FoundCurrentDwordNumPrevRefVertices = (countbits(SLMask & FoundPrevBitsMask) << 1) + countbits(WMask & FoundPrevBitsMask);
			int32 FoundCurrentDwordNumPrevNewVertices = (countbits(SMask & FoundPrevBitsMask) << 1) + FoundBitIndex - FoundCurrentDwordNumPrevRefVertices;

			int32 FoundNumPrevNewVertices = NumPrevNewVerticesBeforeDword + FoundCurrentDwordNumPrevNewVertices;
			int32 FoundNumPrevRefVertices = NumPrevRefVerticesBeforeDword + FoundCurrentDwordNumPrevRefVertices;

			const uint32 FoundNumRefVertices = (BitFieldExtractU32(LMask, 1, FoundBitIndex) << 1) + BitFieldExtractU32(WMask, 1, FoundBitIndex);
			const uint32 IsBeforeFoundRefVertex = BitFieldExtractU32(HeadRefVertexMask, 1, FoundBitIndex - 1);

			// ReadOffset: Where is the vertex relative to triangle we searched for?
			const int32 ReadOffset = IsFoundCaseS ? IsLeft : 1;
			const uint32 FoundIndexData = ReadUnalignedDword(StripIndexData, (FoundNumPrevRefVertices - ReadOffset) * 5);
			const uint32 FoundIndex = (FoundNumPrevNewVertices - 1u) - BitFieldExtractU32(FoundIndexData, 5, 0);

			bool bCondition = IsFoundCaseS ? ((int32)FoundNumRefVertices >= 1 - IsLeft) : (IsBeforeFoundRefVertex != 0u);
			int32 FoundNewVertex = FoundNumPrevNewVertices + (IsFoundCaseS ? (IsLeft & (FoundNumRefVertices == 0)) : -1);
			OutIndices[0] = bCondition ? FoundIndex : FoundNewVertex;

			if (IsLeft)
			{
				Swap(OutIndices[1], OutIndices[2]);
			}
			checkSlow(OutIndices[0] != OutIndices[1] && OutIndices[0] != OutIndices[2] && OutIndices[1] != OutIndices[2]);
		}
	}


	FRealtimeMeshNaniteEncodedIndices RealtimeMeshEncodeIndices(const TArray<uint8>& InputTriangles)
	{
		FRealtimeMeshNaniteEncodedIndices EncodedData;

		uint8 VertexCache[32];
		int32 NumVerticesInCache = 0;

		int32 NumRefVerticesInDword[4] = {0, 0, 0, 0};
		int32 NumNewVerticesInDword[4] = {0, 0, 0, 0};

		FNaniteBitWriter PackedIndexWriter;


		for (int32 Index = 0; Index < 32; Index++)
		{
			VertexCache[Index] = 0xFF;
		}

		const auto FindExistingVertex = [&](int32 VertexIndex) -> int32
		{
			for (int32 CacheIdx = 0; CacheIdx < NumVerticesInCache; CacheIdx++)
			{
				if (VertexCache[CacheIdx] == VertexIndex)
				{
					return CacheIdx;
				}
			}
			return INDEX_NONE; // Not found
		};

		const auto WrapIndex = [](int32 Index)
		{
			return ((Index + 3) % 3);
		};

		const uint32 NumTriangles = InputTriangles.Num() / 3;
		for (uint32 TriIdx = 0; TriIdx < NumTriangles; TriIdx++)
		{
			const uint32 DwordIndex = TriIdx >> 5;
			const uint32 BitIndex = TriIdx & 31u;


			// First find if any of the vertices are found in the cache already
			const int32 ExistingVertices[3] =
			{
				FindExistingVertex(InputTriangles[TriIdx * 3 + 0]),
				FindExistingVertex(InputTriangles[TriIdx * 3 + 1]),
				FindExistingVertex(InputTriangles[TriIdx * 3 + 2])
			};

			// Find index of first reused vertex if any
			int32 TriStartIndex = 0;
			for (int32 Index = 0; Index < 3; Index++)
			{
				if (ExistingVertices[WrapIndex(Index - 1)] == INDEX_NONE &&
					ExistingVertices[WrapIndex(Index)] != INDEX_NONE)
				{
					TriStartIndex = Index;
					break;
				}
			}

			// Write reused vertex indices
			int32 IndexIdx = 0;
			while (IndexIdx < 3 && ExistingVertices[WrapIndex(IndexIdx + TriStartIndex)] != INDEX_NONE)
			{
				PackedIndexWriter.Append(ExistingVertices[WrapIndex(IndexIdx + TriStartIndex)], 5);
				EncodedData.FinalIndices.Add(ExistingVertices[WrapIndex(IndexIdx + TriStartIndex)]);
				IndexIdx++;
			}

			const uint32 NumReusedVertices = IndexIdx;

			// Track num reused vertices in dwords
			NumRefVerticesInDword[TriIdx >> 5] += NumReusedVertices;

			// Encode num reused into bitmask
			checkSlow(NumReusedVertices <= 3);

			// This is always a "strip start" as we're using like a triangle list for now.        	
			EncodedData.Bitmasks[DwordIndex][0] |= 1u << BitIndex;

			uint32 LowBit = NumReusedVertices & 1u;
			uint32 HighBit = (NumReusedVertices >> 1) & 1u;
			EncodedData.Bitmasks[DwordIndex][1] |= HighBit << BitIndex;
			EncodedData.Bitmasks[DwordIndex][2] |= LowBit << BitIndex;

			// Add new vertices
			while (IndexIdx < 3)
			{
				// Add new vertex to stream and cache
				const int32 SrcIndex = InputTriangles[TriIdx * 3 + WrapIndex(IndexIdx + TriStartIndex)];
				const int32 NewIndex = EncodedData.FinalVertices.Add(SrcIndex);
				EncodedData.FinalIndices.Add(NewIndex);

				// Shift cache
				for (int32 Index = FMath::Min(NumVerticesInCache, 31); Index > 0; Index--)
				{
					VertexCache[Index] = VertexCache[Index - 1];
				}

				VertexCache[0] = SrcIndex;
				NumVerticesInCache = FMath::Min(NumVerticesInCache + 1, 32);
				IndexIdx++;
			}

			// Track num new vertices in dwords (in this case as we're using it like a triangle list, it's always 3 - reused)
			NumNewVerticesInDword[TriIdx >> 5] += (3 - NumReusedVertices);
		}


		// Update totals for new/reused vertices in dwords
		uint32 NumPrevNewVerticesBeforeDwords1 = NumNewVerticesInDword[0];
		uint32 NumPrevNewVerticesBeforeDwords2 = NumNewVerticesInDword[1] + NumPrevNewVerticesBeforeDwords1;
		uint32 NumPrevNewVerticesBeforeDwords3 = NumNewVerticesInDword[2] + NumPrevNewVerticesBeforeDwords2;
		checkSlow(NumPrevNewVerticesBeforeDwords1 < 1024 && NumPrevNewVerticesBeforeDwords2 < 1024 && NumPrevNewVerticesBeforeDwords3 < 1024);
		EncodedData.NumPrevNewVerticesBeforeDwords = (NumPrevNewVerticesBeforeDwords3 << 20) | (NumPrevNewVerticesBeforeDwords2 << 10) | NumPrevNewVerticesBeforeDwords1;

		uint32 NumPrevRefVerticesBeforeDwords1 = NumRefVerticesInDword[0];
		uint32 NumPrevRefVerticesBeforeDwords2 = NumRefVerticesInDword[1] + NumPrevRefVerticesBeforeDwords1;
		uint32 NumPrevRefVerticesBeforeDwords3 = NumRefVerticesInDword[2] + NumPrevRefVerticesBeforeDwords2;
		checkSlow(NumPrevRefVerticesBeforeDwords1 < 1024 && NumPrevRefVerticesBeforeDwords2 < 1024 && NumPrevRefVerticesBeforeDwords3 < 1024);
		EncodedData.NumPrevRefVerticesBeforeDwords = (NumPrevRefVerticesBeforeDwords3 << 20) | (NumPrevRefVerticesBeforeDwords2 << 10) | NumPrevRefVerticesBeforeDwords1;

		PackedIndexWriter.Flush(sizeof(uint32));
		EncodedData.PackedIndexData = PackedIndexWriter.GetByteData();


		/*{
			const uint32 PaddedSize = EncodedData.PackedIndexData.Num() + 5;
			TArray<uint8> PaddedStripIndexData;
			PaddedStripIndexData.Reserve(PaddedSize);

			PaddedStripIndexData.Add(0); // TODO: Workaround for empty list and reading from negative offset
			PaddedStripIndexData.Append(EncodedData.PackedIndexData);

			// UnpackTriangleIndices is 1:1 with the GPU implementation.
			// It can end up over-fetching because it is branchless. The over-fetched data is never actually used.
			// On the GPU index data is followed by other page data, so it is safe.

			// Here we have to pad to make it safe to perform a DWORD read after the end.
			PaddedStripIndexData.SetNumZeroed(PaddedSize);

			TArray<uint32> UnpackedIndices;
			UnpackedIndices.SetNum(InputTriangles.Num());

			const auto AreTrisEqual = [](const uint8* Tri1, const uint32* Tri2)
			{
				return (Tri1[0] == Tri2[0] && Tri1[1] == Tri2[1] && Tri1[2] == Tri2[2])
					|| (Tri1[0] == Tri2[1] && Tri1[1] == Tri2[2] && Tri1[2] == Tri2[0])
					|| (Tri1[0] == Tri2[2] && Tri1[1] == Tri2[0] && Tri1[2] == Tri2[1]);
			};

			// Unpack strip
			for (int32 i = 0; i < InputTriangles.Num() / 3; i++)
			{
				UnpackTriangleIndices(EncodedData, (const uint8*)(PaddedStripIndexData.GetData() + 1), i, &UnpackedIndices[i * 3]);


				for (int32 Index = 0; Index < 3; Index++)
				{
					UnpackedIndices[i * 3 + Index] = EncodedData.FinalVertices[UnpackedIndices[i * 3 + Index]];
				}

				check(AreTrisEqual(&InputTriangles[i*3], &UnpackedIndices[i*3]));
			}
		}*/

		return EncodedData;
	}
}
