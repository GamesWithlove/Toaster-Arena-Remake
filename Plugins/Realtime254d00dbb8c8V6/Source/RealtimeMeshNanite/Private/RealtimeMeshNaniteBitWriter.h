// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

namespace RealtimeMesh::Nanite
{
	class FNaniteBitWriter
	{
	private:
		TArray<uint8> Data;
		uint64 UncommittedBits = 0;
		uint32 NumUncomittedBits = 0;
	public:
		FNaniteBitWriter(int32 ReserveBits = 1024 * 8)
		{
			Data.Reserve(ReserveBits / 8);
		}

		FORCEINLINE void Reset(int32 ReserveBits = 1024 * 8)
		{
			Data.Reset(ReserveBits);
			UncommittedBits = 0;
			NumUncomittedBits = 0;
		}

		FORCEINLINE const TArray<uint8>& GetByteData() const
		{
			return Data;
		}

		template<typename Type>
		FORCEINLINE TArrayView<Type> GetDataAs()
		{
			return TArrayView<Type>(reinterpret_cast<Type*>(Data.GetData()), Data.Num() / sizeof(Type));
		}

		template<typename Type>
		FORCEINLINE TConstArrayView<Type> GetDataAs() const
		{
			return TConstArrayView<Type>(reinterpret_cast<Type*>(Data.GetData()), Data.Num() / sizeof(Type));
		}

		FORCEINLINE void Append(const uint32 Bits, const uint32 NumBits)
		{
			UncommittedBits |= static_cast<uint64>(Bits) << NumUncomittedBits;
			NumUncomittedBits += NumBits;

			while (NumUncomittedBits >= 8)
			{
				Data.Add(uint8(UncommittedBits));
				UncommittedBits >>= 8;
				NumUncomittedBits -= 8;
			}
		}

		FORCEINLINE void Flush(const uint32 Alignment)
		{
			if (NumUncomittedBits > 0)
			{
				Data.Add(uint8(UncommittedBits));
				UncommittedBits = 0;
				NumUncomittedBits = 0;
			}

			while (Data.Num() % Alignment != 0)
			{
				Data.Add(0);
			}
		}
	};
}