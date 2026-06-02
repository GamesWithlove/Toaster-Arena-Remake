// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

/*
#include "RealtimeMeshNaniteCluster.h"

#include "RealtimeMeshNaniteBitWriter.h"
#include "RealtimeMeshNaniteUtilities.h"
#include "Rendering/NaniteResources.h"

namespace RealtimeMesh::Nanite
{
	FORCEINLINE uint32 EncodeZigZag(const int32 Value)
	{
		return uint32((Value << 1) ^ (Value >> 31));
	}
	template<typename T>
	uint32 EncodeZigZag(T) = delete;

	FORCEINLINE int32 ShortestWrap(int32 Value, const int32 NumBits)
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

	FORCEINLINE uint32 EncodeUVFloat(const float Value, const uint32 NumMantissaBits)
	{
		// Encode UV floats as a custom float type where [0,1] is denormal, so it gets uniform precision.
		// As UVs are encoded in clusters as ranges of encoded values, a few modifications to the usual
		// float encoding are made to preserve the original float order when the encoded values are interpreted as uints:
		// 1. Positive values use 1 as sign bit.
		// 2. Negative values use 0 as sign bit and have their exponent and mantissa bits inverted.

		checkSlow(FMath::IsFinite(Value));

		const uint32 SignBitPosition = NANITE_UV_FLOAT_NUM_EXPONENT_BITS + NumMantissaBits;
		const uint32 FloatUInt = FNaniteMath::FloatToUInt32Bitwise(Value);
		const uint32 AbsFloatUInt = FloatUInt & 0x7FFFFFFFu;

		uint32 Result;
		if (AbsFloatUInt < 0x3F800000u)
		{
			// Denormal encoding
			// Note: Mantissa can overflow into first non-denormal value (1.0f),
			// but that is desirable to get correct round-to-nearest behavior.
			const float AbsFloat = FNaniteMath::UInt32ToFloatBitwise(AbsFloatUInt);
			Result = uint32(double(AbsFloat * float(1u << NumMantissaBits)) + 0.5);	// Cast to double to make sure +0.5 is lossless
		}
		else
		{
			// Normal encoding
			// Extract exponent and mantissa bits from 32-bit float
			const uint32 Shift = 23 - NumMantissaBits;
			const uint32 Tmp = (AbsFloatUInt - 0x3F000000u) + (1u << (Shift - 1));	// Bias to round to nearest
			Result = FMath::Min(Tmp >> Shift, (1u << SignBitPosition) - 1u);		// Clamp to largest UV float value
		}

		// Produce a mask that for positive values only flips the sign bit
		// and for negative values only flips the exponent and mantissa bits.
		const uint32 SignMask = (1u << SignBitPosition) - (FloatUInt >> 31u);
		Result ^= SignMask;

		return Result;
	}
}*/