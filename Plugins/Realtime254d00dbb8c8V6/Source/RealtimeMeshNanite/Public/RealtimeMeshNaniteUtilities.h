// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "NaniteDefinitions.h"


namespace RealtimeMesh::Nanite
{
	template<typename ToType, typename FromType>
	TArrayView<ToType> ReinterpretArrayView(TArrayView<FromType> InData)
	{
		return TArrayView<ToType>(reinterpret_cast<ToType*>(InData.GetData()), InData.Num() * sizeof(FromType) / sizeof(ToType));
	}
	
	template<typename ToType, typename FromType>
	TConstArrayView<ToType> ReinterpretArrayView(TConstArrayView<FromType> InData)
	{
		return TConstArrayView<ToType>(reinterpret_cast<const ToType*>(InData.GetData()), InData.Num() * sizeof(FromType) / sizeof(ToType));
	}

	template<typename Type>
	void AppendToChunkedArray(TChunkedArray<Type>& TargetData, TArrayView<Type> Values)
	{
		const int32 StartIndex = TargetData.Add(Values.Num());
		for (int32 Index = 0; Index < Values.Num(); Index++)
		{
			TargetData[StartIndex + Index] = Values[Index];
		}		
	}

	template<typename Type>
	void AppendToChunkedArray(TChunkedArray<Type>& TargetData, TConstArrayView<Type> Values)
	{
		const int32 StartIndex = TargetData.Add(Values.Num());
		for (int32 Index = 0; Index < Values.Num(); Index++)
		{
			TargetData[StartIndex + Index] = Values[Index];
		}		
	}
	
	template<typename Type>
	void AppendToChunkedArray(TChunkedArray<Type>& TargetData, const TChunkedArray<Type>& Values)
	{
		const int32 StartIndex = TargetData.Add(Values.Num());
		for (int32 Index = 0; Index < Values.Num(); Index++)
		{
			TargetData[StartIndex + Index] = Values[Index];
		}
	}

	
	struct FNaniteMath
	{
		FORCEINLINE static uint8 FloatToUInt8(const float Float)
		{
			return FMath::Clamp(FMath::FloorToInt(Float * 255.999f), 0, 255);
		}
		FORCEINLINE static float UInt8ToFloat(const uint8 Int)
		{
			return Int / 255.f;
		}

		
		FORCEINLINE static bool IsValidUINT16(const int64 Value)
		{
			return 0 <= Value && Value <= MAX_uint16;
		}
		FORCEINLINE static bool IsValidUINT32(const int64 Value)
		{
			return 0 <= Value && Value <= MAX_uint32;
		}

		
		FORCEINLINE static float UInt32ToFloatBitwise(uint32 Value)
		{
			return reinterpret_cast<float&>(Value);
		}

		FORCEINLINE static double UInt64ToDoubleBitwise(uint64 Value)
		{
			return reinterpret_cast<double&>(Value);
		}

		FORCEINLINE static uint32 FloatToUInt32Bitwise(float Value)
		{
			return *reinterpret_cast<uint32*>(&Value);
		}

		FORCEINLINE static uint64 DoubleToUInt64Bitwise(double Value)
		{
			return reinterpret_cast<uint64&>(Value);
		}



		
		FORCEINLINE static FIntVector RoundToInt32(const FVector3f& Vector)
		{
			return FIntVector(
				FMath::RoundToInt(Vector.X),
				FMath::RoundToInt(Vector.Y),
				FMath::RoundToInt(Vector.Z)
			);
		}
		FORCEINLINE static FIntVector RoundToInt32(const FVector3d& Vector)
		{
			return FIntVector(
				FMath::RoundToInt(Vector.X),
				FMath::RoundToInt(Vector.Y),
				FMath::RoundToInt(Vector.Z)
			);
		}
		FORCEINLINE static FInt64Vector RoundToInt64(const FVector3f& Vector)
		{
			return FInt64Vector(
				FMath::RoundToInt64(Vector.X),
				FMath::RoundToInt64(Vector.Y),
				FMath::RoundToInt64(Vector.Z)
			);
		}
		FORCEINLINE static FInt64Vector RoundToInt64(const FVector3d& Vector)
		{
			return FInt64Vector(
				FMath::RoundToInt64(Vector.X),
				FMath::RoundToInt64(Vector.Y),
				FMath::RoundToInt64(Vector.Z)
			);
		}

		FORCEINLINE static FIntVector FloorToInt32(const FVector3f& Vector)
		{
			return FIntVector(
				FMath::FloorToInt(Vector.X),
				FMath::FloorToInt(Vector.Y),
				FMath::FloorToInt(Vector.Z)
			);
		}

		FORCEINLINE static FIntVector FloorToInt64(const FVector3f& Vector)
		{
			return FIntVector(
				FMath::FloorToInt(Vector.X),
				FMath::FloorToInt(Vector.Y),
				FMath::FloorToInt(Vector.Z)
			);
		}

		FORCEINLINE static FIntVector FloorToInt32(const FVector3d& Vector)
		{
			return FIntVector(
				FMath::FloorToInt(Vector.X),
				FMath::FloorToInt(Vector.Y),
				FMath::FloorToInt(Vector.Z)
			);
		}

		FORCEINLINE static FIntVector FloorToInt64(const FVector3d& Vector)
		{
			return FIntVector(
				FMath::FloorToInt(Vector.X),
				FMath::FloorToInt(Vector.Y),
				FMath::FloorToInt(Vector.Z)
			);
		}

		FORCEINLINE static FIntVector CeilToInt32(const FVector3f& Vector)
		{
			return FIntVector(
				FMath::CeilToInt(Vector.X),
				FMath::CeilToInt(Vector.Y),
				FMath::CeilToInt(Vector.Z)
			);
		}

		FORCEINLINE static FIntVector CeilToInt64(const FVector3f& Vector)
		{
			return FIntVector(
				FMath::CeilToInt(Vector.X),
				FMath::CeilToInt(Vector.Y),
				FMath::CeilToInt(Vector.Z)
			);
		}

		FORCEINLINE static FIntVector CeilToInt64(const FVector3d& Vector)
		{
			return FIntVector(
				FMath::CeilToInt(Vector.X),
				FMath::CeilToInt(Vector.Y),
				FMath::CeilToInt(Vector.Z)
			);
		}

		FORCEINLINE static FIntVector CeilToInt(const FVector3f& Vector)
		{
			return FIntVector(
				FMath::CeilToInt(Vector.X),
				FMath::CeilToInt(Vector.Y),
				FMath::CeilToInt(Vector.Z)
			);
		}


		FORCEINLINE static uint32 EncodeZigZag(int32 X)
		{
			return static_cast<uint32>((X << 1) ^ (X >> 31));
		}

		FORCEINLINE static int32 DecodeZigZag(uint32 X)
		{
			return static_cast<int32>(X >> 1) ^ -static_cast<int32>(X & 1);
		}

		FORCEINLINE static int32 ShortestWrap(int32 Value, const int32 NumBits)
		{
			if (NumBits == 0)
			{
				checkSlow(Value == 0);
				return 0;
			}

			const int32 Shift = 32 - NumBits;
			const int32 NumValues = (1 << NumBits);
			const int32 MinValue = -(NumValues >> 1);
			const int32 MaxValue = (NumValues >> 1) - 1;

			Value = (Value << Shift) >> Shift;
			checkSlow(Value >= MinValue && Value <= MaxValue);

			return Value;
		}

		
		FORCEINLINE static void SetBits(uint32& Value, uint32 Bits, uint32 NumBits, uint32 Offset)
		{
			uint32 Mask = (1u << NumBits) - 1u;
			check(Bits <= Mask);
			Mask <<= Offset;
			Value = (Value & ~Mask) | (Bits << Offset);
		}
	};




	template<typename Type>
	class TNaniteArrayStructWriter
	{
		TChunkedArray<uint8>& TargetData;
		const int32 DestinationIndex;
		Type Temp = {};
	public:

		FORCEINLINE TNaniteArrayStructWriter(TChunkedArray<uint8>& InTargetData)
			: TargetData(InTargetData)
			, DestinationIndex(InTargetData.Add(sizeof(Type)))
		{ }
		
		FORCEINLINE ~TNaniteArrayStructWriter()
		{
			const uint8* ByteData = reinterpret_cast<const uint8*>(&Temp);
			for (int32 Index = 0; Index < sizeof(Type); Index++)
			{
				TargetData[DestinationIndex + Index] = ByteData[Index];
			}
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
	
	template<typename Type>
	class TNaniteArrayMultiStructWriter
	{
		TChunkedArray<uint8>& TargetData;
		const int32 DestinationIndex;
		TArray<Type> Temp;
	public:

		FORCEINLINE TNaniteArrayMultiStructWriter(TChunkedArray<uint8>& InTargetData, int32 Count)
			: TargetData(InTargetData)
			, DestinationIndex(InTargetData.Add(sizeof(Type) * Count))
		{
			Temp.SetNum(Count);
		}
		
		FORCEINLINE ~TNaniteArrayMultiStructWriter()
		{
			const uint8* ByteData = reinterpret_cast<const uint8*>(Temp.GetData());
			for (uint32 Index = 0; Index < Temp.GetTypeSize() * Temp.Num(); Index++)
			{
				TargetData[DestinationIndex + Index] = ByteData[Index];
			}
		}
		
		auto CreateIterator()
		{
			return Temp.CreateIterator();
		}

		auto CreateconstIterator() const
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





	template<typename Type>
	class TNaniteArrayStructWriter2
	{
		TArray<uint8>& TargetData;
		const int32 DestinationIndex;
		Type Temp = {};
	public:

		FORCEINLINE TNaniteArrayStructWriter2(TArray<uint8>& InTargetData)
			: TargetData(InTargetData)
			, DestinationIndex(InTargetData.AddUninitialized(sizeof(Type)))
		{ }
		
		FORCEINLINE ~TNaniteArrayStructWriter2()
		{
			const uint8* ByteData = reinterpret_cast<const uint8*>(&Temp);
			for (int32 Index = 0; Index < sizeof(Type); Index++)
			{
				TargetData[DestinationIndex + Index] = ByteData[Index];
			}
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
	
	template<typename Type>
	class TNaniteArrayMultiStructWriter2
	{
		TArray<uint8>& TargetData;
		const int32 DestinationIndex;
		TArray<Type> Temp;
	public:

		FORCEINLINE TNaniteArrayMultiStructWriter2(TArray<uint8>& InTargetData, int32 Count)
			: TargetData(InTargetData)
			, DestinationIndex(InTargetData.AddUninitialized(sizeof(Type) * Count))
		{
			Temp.SetNum(Count);
		}
		
		FORCEINLINE ~TNaniteArrayMultiStructWriter2()
		{
			const uint8* ByteData = reinterpret_cast<const uint8*>(Temp.GetData());
			for (uint32 Index = 0; Index < Temp.GetTypeSize() * Temp.Num(); Index++)
			{
				TargetData[DestinationIndex + Index] = ByteData[Index];
			}
		}
		
		auto CreateIterator()
		{
			return Temp.CreateIterator();
		}

		auto CreateconstIterator() const
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



#if RMC_ENGINE_BELOW_5_5
template <
	typename OtherRangeType,
	typename CVUnqualifiedOtherRangeType = std::remove_cv_t<std::remove_reference_t<OtherRangeType>>
	UE_REQUIRES(TIsContiguousContainer<CVUnqualifiedOtherRangeType>::Value && TIsTArrayView_V<CVUnqualifiedOtherRangeType>)
>
auto MakeConstArrayView(OtherRangeType&& Other)
{
	return TArrayView<const std::remove_pointer_t<decltype(GetData(DeclVal<OtherRangeType&>()))>>(Forward<OtherRangeType>(Other));
}
template <
	typename OtherRangeType,
	typename CVUnqualifiedOtherRangeType = std::remove_cv_t<std::remove_reference_t<OtherRangeType>>
	UE_REQUIRES(TIsContiguousContainer<CVUnqualifiedOtherRangeType>::Value && !TIsTArrayView_V<CVUnqualifiedOtherRangeType>)
>
auto MakeConstArrayView(OtherRangeType&& Other UE_LIFETIMEBOUND)
{
	return TArrayView<const std::remove_pointer_t<decltype(GetData(DeclVal<OtherRangeType&>()))>>(Forward<OtherRangeType>(Other));
}

template<typename ElementType>
TArrayView<const ElementType> MakeConstArrayView(const ElementType* Pointer UE_LIFETIMEBOUND, int32 Size)
{
	return TArrayView<const ElementType>(Pointer, Size);
}

template <typename ElementType>
TArrayView<const ElementType> MakeConstArrayView(std::initializer_list<ElementType> List UE_LIFETIMEBOUND)
{
	return TArrayView<const ElementType>(List.begin(), List.size());
}
#endif