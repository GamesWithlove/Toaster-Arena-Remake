// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

namespace RealtimeMesh::Nanite::Internal
{
	template <typename Type>
	struct FRealtimeMeshNanitePageWriterLatentEntry;
	template <typename Type>
	struct FRealtimeMeshNanitePageWriterLatentEntryArray;


	struct FRealtimeMeshNanitePageWriter
	{
	private:
		static constexpr int32 PageSize = 64 * 1024;

		struct FPageChunk
		{
			uint8 Elements[PageSize];
		};

		/** The chunks of the array's elements. */
		TIndirectArray<FPageChunk> PageChunks;

		/** The number of elements in the array. */
		int32 NumElements;

	public:
		FRealtimeMeshNanitePageWriter(int32 ReserveSize = 16 * 1024)
			: NumElements(0)
		{
			Reserve(ReserveSize);
		}

		uint8& operator[](int32 ElementIndex)
		{
			const uint32 ChunkIndex = ElementIndex / PageSize;
			const uint32 ChunkElementIndex = ElementIndex % PageSize;
			return PageChunks[ChunkIndex].Elements[ChunkElementIndex];
		}

		const uint8& operator[](int32 ElementIndex) const
		{
			const int32 ChunkIndex = ElementIndex / PageSize;
			const int32 ChunkElementIndex = ElementIndex % PageSize;
			return PageChunks[ChunkIndex].Elements[ChunkElementIndex];
		}

		FORCEINLINE bool IsEmpty() const
		{
			return NumElements == 0;
		}

		FORCEINLINE int32 Num() const
		{
			return NumElements;
		}

		SIZE_T GetAllocatedSize(void) const
		{
			return PageChunks.GetAllocatedSize();
		}

		void Reserve(int32 Number)
		{
			const int32 NumChunks = (Number + PageSize - 1) / PageSize;
			PageChunks.Reserve(NumChunks);
		}

		FORCEINLINE bool IsValidIndex(int32 Index) const
		{
			return Index >= 0 && Index < NumElements;
		}


		void ZeroRange(int32 StartIndex, int32 Count)
		{
			uint32 RemainingCount = Count;
			uint32 CurrentStart = StartIndex;
			while (RemainingCount > 0)
			{
				const uint32 ChunkIndex = CurrentStart / PageSize;
				const uint32 ChunkElementIndex = CurrentStart % PageSize;
				const uint32 ElementsToZero = FMath::Min(RemainingCount, PageSize - ChunkElementIndex);
				FMemory::Memzero(PageChunks[ChunkIndex].Elements + ChunkElementIndex, ElementsToZero);
				RemainingCount -= ElementsToZero;
				CurrentStart += ElementsToZero;
			}
		}

		void SetNumUninitialized(int32 Count = 1)
		{
			const int32 NewNumChunks = (Count + PageSize - 1) / PageSize;
			if (NewNumChunks > PageChunks.Num())
			{
				for (int32 NumChunks = PageChunks.Num(); NumChunks < NewNumChunks; ++NumChunks)
				{
					PageChunks.Add(new FPageChunk);
				}
			}
			else if (NewNumChunks < PageChunks.Num())
			{
				for (int32 NumChunks = PageChunks.Num(); NumChunks > NewNumChunks; --NumChunks)
				{
					PageChunks.RemoveAt(PageChunks.Num() - 1);
				}
			}
			NumElements = Count;
		}

		void SetNumZeroed(int32 Count = 1)
		{
			if (Count > NumElements)
			{
				AddZeroed(Count - NumElements);
			}
			else
			{
				SetNumUninitialized(Count);
			}
		}

		int32 AddUninitialized(int32 Count = 1)
		{
			check(Count>=0);
			checkSlow(NumElements>=0);

			const int32 OldNum = NumElements;
			const int32 NewNumElements = OldNum + Count;
			const int32 NewNumChunks = (NewNumElements + PageSize - 1) / PageSize;
			NumElements = NewNumElements;
			for (int32 NumChunks = PageChunks.Num(); NumChunks < NewNumChunks; ++NumChunks)
			{
				PageChunks.Add(new FPageChunk);
			}

			return OldNum;
		}

		int32 AddZeroed(int32 Count = 1)
		{
			const int32 StartIndex = AddUninitialized(Count);

			ZeroRange(StartIndex, Count);

			return StartIndex;
		}

		template <typename Type>
		int32 Add(const Type& InData)
		{
			const int32 StartIndex = AddUninitialized(sizeof(Type));
			WriteRange(MakeConstArrayView<uint8>(reinterpret_cast<const uint8*>(&InData), sizeof(Type)), StartIndex);
			return StartIndex;
		}

		void WriteRange(const TConstArrayView<uint8>& InData, uint32 StartIndex)
		{
			uint32 RemainingCount = InData.Num();
			uint32 CurrentStart = StartIndex;
			uint32 SrcStart = 0;
			while (RemainingCount > 0)
			{
				const uint32 ChunkIndex = CurrentStart / PageSize;
				const uint32 ChunkElementIndex = CurrentStart % PageSize;
				const uint32 ElementsToCopy = FMath::Min(RemainingCount, PageSize - ChunkElementIndex);
				FMemory::Memcpy(PageChunks[ChunkIndex].Elements + ChunkElementIndex, InData.GetData() + SrcStart,
				                ElementsToCopy);
				RemainingCount -= ElementsToCopy;
				CurrentStart += ElementsToCopy;
				SrcStart += ElementsToCopy;
			}
		}

		template <typename Type>
		void WriteRange(const TConstArrayView<Type>& InData, uint32 StartIndex)
		{
			return WriteRange(TConstArrayView<uint8>(reinterpret_cast<const uint8*>(InData.GetData()),
				InData.Num() * InData.GetTypeSize()), StartIndex);
		}

		int32 Append(const TConstArrayView<uint8>& InData)
		{
			const int32 StartIndex = AddUninitialized(InData.Num());
			WriteRange(InData, StartIndex);
			return StartIndex;
		}

		template <typename Type>
		int32 Append(const TConstArrayView<Type>& InData)
		{
			return Append(TConstArrayView<uint8>(reinterpret_cast<const uint8*>(InData.GetData()),
				InData.Num() * InData.GetTypeSize()));
		}

		int32 Append(const TChunkedArray<uint8>& InData)
		{
			const int32 StartIndex = AddUninitialized(InData.Num());
			for (int32 Index = 0; Index < InData.Num(); ++Index)
			{
				(*this)[StartIndex + Index] = InData[Index];
			}
			return StartIndex;
		}

		template <typename Type>
		int32 Append(const TChunkedArray<Type>& InData)
		{
			const int32 StartIndex = AddUninitialized(InData.Num() * sizeof(Type));
			for (int32 Index = 0; Index < InData.Num(); ++Index)
			{
				const uint8* ByteData = reinterpret_cast<const uint8*>(&InData[Index]);
				for (int32 ByteIndex = 0; ByteIndex < sizeof(Type); ++ByteIndex)
				{
					(*this)[StartIndex + Index * sizeof(Type) + ByteIndex] = ByteData[ByteIndex];
				}
			}
			return StartIndex;
		}

		void AlignRelativeToOffset(uint32 StartOffset, uint32 Alignment)
		{
			check(NumElements >= static_cast<int32>(StartOffset));
			const uint32 Remainder = (NumElements - StartOffset) % Alignment;
			if (Remainder != 0)
			{
				AddZeroed(Alignment - Remainder);
			}
		}

		void Align(uint32 Alignment)
		{
			AlignRelativeToOffset(0u, Alignment);
		}


		template <typename Type>
		FRealtimeMeshNanitePageWriterLatentEntry<Type> AppendLatentEntry()
		{
			return FRealtimeMeshNanitePageWriterLatentEntry<Type>(*this, AddUninitialized(sizeof(Type)));
		}

		template <typename Type>
		FRealtimeMeshNanitePageWriterLatentEntryArray<Type> AppendLatentEntryArray(int32 Count)
		{
			return FRealtimeMeshNanitePageWriterLatentEntryArray<Type>(*this, AddUninitialized(Count * sizeof(Type)), Count);
		}

		void CopyToLinearArray(TArray<uint8>& DestinationArray)
		{
			if (NumElements > 0)
			{
				int32 OriginalNumElements = DestinationArray.Num();
				DestinationArray.AddUninitialized(NumElements);
				uint8* CopyDestPtr = &DestinationArray[OriginalNumElements];

				for (int32 ChunkIndex = 0; ChunkIndex < PageChunks.Num(); ChunkIndex++)
				{
					const int32 NumElementsInCurrentChunk = FMath::Min<int32>(
						NumElements - ChunkIndex * PageSize, PageSize);
					check(NumElementsInCurrentChunk > 0);
					FMemory::Memcpy(CopyDestPtr, &PageChunks[ChunkIndex].Elements[0],
						NumElementsInCurrentChunk * sizeof(uint8)); //-V598
					CopyDestPtr += NumElementsInCurrentChunk;
				}
			}
		}
	};

	template <typename Type>
	struct FRealtimeMeshNanitePageWriterLatentEntry
	{
	private:
		FRealtimeMeshNanitePageWriter& TargetWriter;
		const int32 DestinationIndex;
		Type Temp;
		bool bCommitted;

	public:
		FORCEINLINE FRealtimeMeshNanitePageWriterLatentEntry(FRealtimeMeshNanitePageWriter& InTargetWriter,
			int32 InDestinationIndex)
			: TargetWriter(InTargetWriter)
			  , DestinationIndex(InDestinationIndex)
			  , bCommitted(false)
		{
		}

		void Commit()
		{
			if (!bCommitted)
			{
				TargetWriter.WriteRange(
					MakeConstArrayView<uint8>(reinterpret_cast<uint8*>(&Temp),
					sizeof(Type)),
				    DestinationIndex);
				bCommitted = true;
			}
		}

		FORCEINLINE ~FRealtimeMeshNanitePageWriterLatentEntry()
		{
			Commit();
		}

		FORCEINLINE const Type& operator*() const
		{
			return Temp;
		}

		FORCEINLINE Type& operator*()
		{
			return Temp;
		}

		FORCEINLINE const Type* operator->() const
		{
			return &Temp;
		}

		FORCEINLINE Type* operator->()
		{
			return &Temp;
		}
	};

	template <typename Type>
	struct FRealtimeMeshNanitePageWriterLatentEntryArray
	{
	private:
		FRealtimeMeshNanitePageWriter& TargetWriter;
		const int32 DestinationIndex;
		TArray<Type> Temp;
		bool bCommitted;

	public:
		FORCEINLINE FRealtimeMeshNanitePageWriterLatentEntryArray(FRealtimeMeshNanitePageWriter& InTargetWriter,
			int32 InDestinationIndex, int32 Count)
			: TargetWriter(InTargetWriter)
			, DestinationIndex(InDestinationIndex)
			, bCommitted(false)
		{
			Temp.SetNum(Count);
		}

		void Commit()
		{
			if (!bCommitted)
			{
				TargetWriter.WriteRange(
					MakeConstArrayView<uint8>(reinterpret_cast<uint8*>(Temp.GetData()),
					sizeof(Type) * Temp.Num()),
					DestinationIndex);
				bCommitted = true;
			}
		}

		FORCEINLINE ~FRealtimeMeshNanitePageWriterLatentEntryArray()
		{
			Commit();
		}

		auto CreateIterator()
		{
			return Temp.CreateIterator();
		}

		auto CreateConstIterator() const
		{
			return Temp.CreateConstIterator();
		}

		FORCEINLINE TArrayView<Type> operator*()
		{
			return Temp;
		}

		FORCEINLINE TConstArrayView<Type> operator*() const
		{
			return Temp;
		}

		FORCEINLINE Type& operator[](int32 Index)
		{
			return Temp[Index];
		}

		FORCEINLINE const Type& operator[](int32 Index) const
		{
			return Temp[Index];
		}
	};
}
