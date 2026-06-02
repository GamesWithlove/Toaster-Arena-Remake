// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshNaniteUtilities.h"

namespace RealtimeMesh::Nanite::Internal
{
	struct FRealtimeMeshNaniteZigZagCheckpoint
	{
	private:
		uint32 LowNum, MidNum, HighNum;

	public:
		FRealtimeMeshNaniteZigZagCheckpoint() : LowNum(0), MidNum(0), HighNum(0)
		{
		}

		FRealtimeMeshNaniteZigZagCheckpoint(uint32 InLowNum, uint32 InMidNum, uint32 InHighNum)
			: LowNum(InLowNum), MidNum(InMidNum), HighNum(InHighNum)
		{
		}

		int32 GetLowNum() const { return LowNum; }
		int32 GetMidNum() const { return MidNum; }
		int32 GetHighNum() const { return HighNum; }
		int32 GetTotalNum() const { return LowNum + MidNum + HighNum; }

		bool operator==(const FRealtimeMeshNaniteZigZagCheckpoint& Other) const
		{
			return LowNum == Other.LowNum &&
				MidNum == Other.MidNum &&
				HighNum == Other.HighNum;
		}

		bool operator!=(const FRealtimeMeshNaniteZigZagCheckpoint& Other) const
		{
			return !(*this == Other);
		}

		FRealtimeMeshNaniteZigZagCheckpoint operator-(const FRealtimeMeshNaniteZigZagCheckpoint& Other) const
		{
			FRealtimeMeshNaniteZigZagCheckpoint Result;
			Result.LowNum = LowNum - Other.LowNum;
			Result.MidNum = MidNum - Other.MidNum;
			Result.HighNum = HighNum - Other.HighNum;
			return Result;
		}
	};

	struct FRealtimeMeshNaniteZigZagStream
	{
	private:
		// Use TArray for fast bulk append via memcpy (parallel encoding merge optimization)
		TArray<uint8> LowByteStream;
		TArray<uint8> MidByteStream;
		TArray<uint8> HighByteStream;

	public:
		FRealtimeMeshNaniteZigZagStream(int32 ReserveSizeLow = 1024, int32 ReserveSizeMid = 1024,
		                                int32 ReserveSizeHigh = 1024)
		{
			LowByteStream.Reserve(ReserveSizeLow);
			MidByteStream.Reserve(ReserveSizeMid);
			HighByteStream.Reserve(ReserveSizeHigh);
		}

		const TArray<uint8>& GetLowByteStream() const { return LowByteStream; }
		const TArray<uint8>& GetMidByteStream() const { return MidByteStream; }
		const TArray<uint8>& GetHighByteStream() const { return HighByteStream; }

		void Write(const int32 Value, const uint32 NumBytes)
		{
			const uint32 EncodedValue = FNaniteMath::EncodeZigZag(Value);
			checkSlow(FNaniteMath::DecodeZigZag(EncodedValue) == Value);

			checkSlow(NumBytes <= 3);
			checkSlow(EncodedValue < (1u << (NumBytes*8)));

			if (NumBytes >= 3)
			{
				HighByteStream.Add((EncodedValue >> 16) & 0xFFu);
			}

			if (NumBytes >= 2)
			{
				MidByteStream.Add((EncodedValue >> 8) & 0xFFu);
			}

			if (NumBytes >= 1)
			{
				LowByteStream.Add(EncodedValue & 0xFFu);
			}
		}

		FRealtimeMeshNaniteZigZagCheckpoint GetCheckpoint() const
		{
			return FRealtimeMeshNaniteZigZagCheckpoint(
				LowByteStream.Num(),
				MidByteStream.Num(),
				HighByteStream.Num()
			);
		}

		// Fast bulk append using TArray::Append (memcpy-based)
		void AppendFrom(const FRealtimeMeshNaniteZigZagStream& Other)
		{
			LowByteStream.Append(Other.LowByteStream);
			MidByteStream.Append(Other.MidByteStream);
			HighByteStream.Append(Other.HighByteStream);
		}
	};
}
