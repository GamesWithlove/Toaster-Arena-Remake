// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshNaniteBuilderCore.h"
#include "RealtimeMeshNaniteUtilities.h"
#include "RealtimeMeshNaniteZigZagStream.h"

namespace RealtimeMesh::Nanite::Internal
{
	FORCEINLINE void EncodeNanitePositions(FRealtimeMeshNaniteZigZagStream& GeoStream, FRealtimeNaniteMeshBuildContext& BuildContext, int32 ClusterIndex)
	{
		const FRealtimeMeshNaniteCluster& Cluster = BuildContext.Mesh.Clusters[ClusterIndex];
		const FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
		const FIntVector PositionMin = ClusterContext.EncodingInfo.PositionMin;
		const FIntVector PositionBits = ClusterContext.EncodingInfo.PositionBits;
		
		const int32 BytesPerPositionComponent = FMath::DivideAndRoundUp(PositionBits.GetMax(), 8);
		
		const float QuantizationScale = FMath::Exp2(float(BuildContext.EncodingSettings.PositionPrecision));

		FIntVector PrevPosition = FIntVector(
			(1 << PositionBits.X) / 2,
			(1 << PositionBits.Y) / 2,
			(1 << PositionBits.Z) / 2);

		for (int32 VertIdx : ClusterContext.PackedIndices.FinalVertices)
		{
			const FVector3f& FloatPosition = Cluster.GetVertices()[VertIdx];

			const FIntVector Position = FNaniteMath::RoundToInt32(FloatPosition * QuantizationScale) - PositionMin;
			FIntVector PositionDelta = Position - PrevPosition;

			PositionDelta.X = FNaniteMath::ShortestWrap(PositionDelta.X, PositionBits.X);
			PositionDelta.Y = FNaniteMath::ShortestWrap(PositionDelta.Y, PositionBits.Y);
			PositionDelta.Z = FNaniteMath::ShortestWrap(PositionDelta.Z, PositionBits.Z);

			GeoStream.Write(PositionDelta.X, BytesPerPositionComponent);
			GeoStream.Write(PositionDelta.Y, BytesPerPositionComponent);
			GeoStream.Write(PositionDelta.Z, BytesPerPositionComponent);

			PrevPosition = Position;
		}
	}

	static uint32 PackNormal(FVector3f Normal, uint32 QuantizationBits);
	
	FORCEINLINE void EncodeNaniteNormals(FRealtimeMeshNaniteZigZagStream& GeoStream, FRealtimeNaniteMeshBuildContext& BuildContext, int32 ClusterIndex)
	{
		const FRealtimeMeshNaniteCluster& Cluster = BuildContext.Mesh.Clusters[ClusterIndex];
		const FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
		
		const int32 BytesPerNormalComponent = FMath::DivideAndRoundUp(BuildContext.EncodingSettings.NormalBits, 8);
		
		FIntPoint PrevNormal = FIntPoint::ZeroValue;
		for (int32 VertIdx : ClusterContext.PackedIndices.FinalVertices)
		{
			const FVector3f& RawNormal = Cluster.GetNormals()[VertIdx];

			const uint32 PackedNormal = PackNormal(RawNormal, BuildContext.EncodingSettings.NormalBits);
			const FIntPoint Normal = FIntPoint(PackedNormal & ((1u << BuildContext.EncodingSettings.NormalBits) - 1u),
											   PackedNormal >> BuildContext.EncodingSettings.NormalBits);

			FIntPoint NormalDelta = Normal - PrevNormal;
			NormalDelta.X = FNaniteMath::ShortestWrap(NormalDelta.X, BuildContext.EncodingSettings.NormalBits);
			NormalDelta.Y = FNaniteMath::ShortestWrap(NormalDelta.Y, BuildContext.EncodingSettings.NormalBits);
			PrevNormal = Normal;

			GeoStream.Write(NormalDelta.X, BytesPerNormalComponent);
			GeoStream.Write(NormalDelta.Y, BytesPerNormalComponent);
		}
	}

	FORCEINLINE void EncodeNaniteColors(FRealtimeMeshNaniteZigZagStream& GeoStream, FRealtimeNaniteMeshBuildContext& BuildContext, int32 ClusterIndex)
	{
		const FRealtimeMeshNaniteCluster& Cluster = BuildContext.Mesh.Clusters[ClusterIndex];
		const FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
		const FIntVector4 ColorBits = ClusterContext.EncodingInfo.ColorBits;
		const FColor ColorMin = ClusterContext.EncodingInfo.ColorMin;
		
		if (Cluster.HasColors() && ColorBits != FIntVector4(0))
		{
			FIntVector4 PrevColor = FIntVector4(0);

			for (int32 VertIdx : ClusterContext.PackedIndices.FinalVertices)
			{
				const FColor& UnpackedColor = Cluster.GetColors()[VertIdx];
				const FIntVector4 Color
				{
					UnpackedColor.R - ColorMin.R,
					UnpackedColor.G - ColorMin.G,
					UnpackedColor.B - ColorMin.B,
					UnpackedColor.A - ColorMin.A
				};
				FIntVector4 ColorDelta = Color - PrevColor;

				ColorDelta.X = FNaniteMath::ShortestWrap(ColorDelta.X, ColorBits.X);
				ColorDelta.Y = FNaniteMath::ShortestWrap(ColorDelta.Y, ColorBits.Y);
				ColorDelta.Z = FNaniteMath::ShortestWrap(ColorDelta.Z, ColorBits.Z);
				ColorDelta.W = FNaniteMath::ShortestWrap(ColorDelta.W, ColorBits.W);

				GeoStream.Write(ColorDelta.X, 1);
				GeoStream.Write(ColorDelta.Y, 1);
				GeoStream.Write(ColorDelta.Z, 1);
				GeoStream.Write(ColorDelta.W, 1);

				PrevColor = Color;
			}
		}
	}
	
	static uint32 EncodeUVFloat(const float Value, const uint32 NumMantissaBits);
	
	FORCEINLINE void EncodeNaniteUVs(FRealtimeMeshNaniteZigZagStream& GeoStream, FRealtimeNaniteMeshBuildContext& BuildContext, int32 ClusterIndex)
	{
		const FRealtimeMeshNaniteCluster& Cluster = BuildContext.Mesh.Clusters[ClusterIndex];
		const FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
		const auto& UVRanges = ClusterContext.EncodingInfo.UVRanges;
		

		// TODO? Couldn't this be figured out once and stored? Or can this actually change per chunk?
		const int32 NumUVs = BuildContext.Mesh.Clusters[0].NumUVChannels();
		
		for (int32 UVIndex = 0; UVIndex < NumUVs; UVIndex++)
		{
			const FUVRange& UVRange = UVRanges[UVIndex];
			const int32 BytesPerTexCoordComponent = FMath::DivideAndRoundUp(FMath::Max<int32>(UVRange.NumBits.X, UVRange.NumBits.Y), 8);

			FIntVector2 PrevUV = FIntVector2::ZeroValue;

			for (int32 VertIdx : ClusterContext.PackedIndices.FinalVertices)
			{
				const FVector2f& UnpackedUV = Cluster.GetUVs(UVIndex)[VertIdx];
				uint32 EncodedU = EncodeUVFloat(UnpackedUV.X, NANITE_UV_FLOAT_NUM_MANTISSA_BITS);
				uint32 EncodedV = EncodeUVFloat(UnpackedUV.Y, NANITE_UV_FLOAT_NUM_MANTISSA_BITS);

				checkSlow(EncodedU >= UVRange.Min.X);
				checkSlow(EncodedV >= UVRange.Min.Y);
				EncodedU -= UVRange.Min.X;
				EncodedV -= UVRange.Min.Y;

				checkSlow(EncodedU < (1u << UVRange.NumBits.X));
				checkSlow(EncodedV < (1u << UVRange.NumBits.Y));

				const FIntVector2 UV
				{
					int32(EncodedU),
					int32(EncodedV)
				};
				FIntVector2 UVDelta = UV - PrevUV;

				UVDelta.X = FNaniteMath::ShortestWrap(UVDelta.X, UVRange.NumBits.X);
				UVDelta.Y = FNaniteMath::ShortestWrap(UVDelta.Y, UVRange.NumBits.Y);

				GeoStream.Write(UVDelta.X, BytesPerTexCoordComponent);
				GeoStream.Write(UVDelta.Y, BytesPerTexCoordComponent);

				PrevUV = UV;
			}
		}
	}











		FORCEINLINE static FVector2f OctahedronEncode(FVector3f N)
		{
			FVector3f AbsN = N.GetAbs();
			N /= (AbsN.X + AbsN.Y + AbsN.Z);

			if (N.Z < 0.0)
			{
				AbsN = N.GetAbs();
				N.X = (N.X >= 0.0f) ? (1.0f - AbsN.Y) : (AbsN.Y - 1.0f);
				N.Y = (N.Y >= 0.0f) ? (1.0f - AbsN.X) : (AbsN.X - 1.0f);
			}

			return FVector2f(N.X, N.Y);
		}

		FORCEINLINE static void OctahedronEncode(FVector3f N, int32& X, int32& Y, int32 QuantizationBits)
		{
			const int32 QuantizationMaxValue = (1 << QuantizationBits) - 1;
			const float Scale = 0.5f * (float)QuantizationMaxValue;
			const float Bias = 0.5f * (float)QuantizationMaxValue + 0.5f;

			FVector2f Coord = OctahedronEncode(N);

			X = FMath::Clamp(int32(Coord.X * Scale + Bias), 0, QuantizationMaxValue);
			Y = FMath::Clamp(int32(Coord.Y * Scale + Bias), 0, QuantizationMaxValue);
		}

		FORCEINLINE static void OctahedronEncodePreciseSIMD(FVector3f N, int32& X, int32& Y, int32 QuantizationBits)
		{
			const int32 QuantizationMaxValue = (1 << QuantizationBits) - 1;
			FVector2f ScalarCoord = OctahedronEncode(N);

			const VectorRegister4f Scale = VectorSetFloat1(0.5f * (float)QuantizationMaxValue);
			const VectorRegister4f RcpScale = VectorSetFloat1(2.0f / (float)QuantizationMaxValue);
			VectorRegister4Int IntCoord = VectorFloatToInt(VectorMultiplyAdd(MakeVectorRegister(ScalarCoord.X, ScalarCoord.Y, ScalarCoord.X, ScalarCoord.Y), Scale, Scale));
			// x0, y0, x1, y1
			IntCoord = VectorIntAdd(IntCoord, MakeVectorRegisterInt( 0, 0, 1, 1 ));
			VectorRegister4f Coord = VectorMultiplyAdd(VectorIntToFloat(IntCoord), RcpScale, GlobalVectorConstants::FloatMinusOne);
			// Coord = Coord * 2.0f / QuantizationMaxValue - 1.0f

			VectorRegister4f Nx = VectorSwizzle(Coord, 0, 2, 0, 2);
			VectorRegister4f Ny = VectorSwizzle(Coord, 1, 1, 3, 3);
			VectorRegister4f Nz = VectorSubtract(VectorSubtract(VectorOneFloat(), VectorAbs(Nx)), VectorAbs(Ny)); // Nz = 1.0f - abs(Nx) - abs(Ny)

			VectorRegister4f T = VectorMin(Nz, VectorZeroFloat()); // T = min(Nz, 0.0f)

			VectorRegister4f NxSign = VectorBitwiseAnd(Nx, GlobalVectorConstants::SignBit());
			VectorRegister4f NySign = VectorBitwiseAnd(Ny, GlobalVectorConstants::SignBit());

			Nx = VectorAdd(Nx, VectorBitwiseXor(T, NxSign)); // Nx += T ^ NxSign
			Ny = VectorAdd(Ny, VectorBitwiseXor(T, NySign)); // Ny += T ^ NySign

			VectorRegister4f Dots = VectorMultiplyAdd(Nx, VectorSetFloat1(N.X), VectorMultiplyAdd(Ny, VectorSetFloat1(N.Y), VectorMultiply(Nz, VectorSetFloat1(N.Z))));
			VectorRegister4f Lengths = VectorSqrt(VectorMultiplyAdd(Nx, Nx, VectorMultiplyAdd(Ny, Ny, VectorMultiply(Nz, Nz))));
			Dots = VectorDivide(Dots, Lengths);

			VectorRegister4f Mask = MakeVectorRegister(0xFFFFFFFCu, 0xFFFFFFFCu, 0xFFFFFFFCu, 0xFFFFFFFCu);
			VectorRegister4f LaneIndices = MakeVectorRegister(0u, 1u, 2u, 3u);
			Dots = VectorBitwiseOr(VectorBitwiseAnd(Dots, Mask), LaneIndices);

			// Calculate max component
			VectorRegister4f MaxDot = VectorMax(Dots, VectorSwizzle(Dots, 2, 3, 0, 1));
			MaxDot = VectorMax(MaxDot, VectorSwizzle(MaxDot, 1, 2, 3, 0));

			float fIndex = VectorGetComponent(MaxDot, 0);
			uint32 Index = *(uint32*)&fIndex;

			uint32 IntCoordValues[4];
			VectorIntStore(IntCoord, IntCoordValues);
			X = FMath::Clamp((int32)(IntCoordValues[0] + (Index & 1)), 0, QuantizationMaxValue);
			Y = FMath::Clamp((int32)(IntCoordValues[1] + ((Index >> 1) & 1)), 0, QuantizationMaxValue);
		}

		FORCEINLINE static uint32 PackNormal(FVector3f Normal, uint32 QuantizationBits)
		{
			int32 X, Y;
			OctahedronEncodePreciseSIMD(Normal, X, Y, QuantizationBits);

			return (Y << QuantizationBits) | X;
		}

	FORCEINLINE static uint32 EncodeUVFloat(const float Value, const uint32 NumMantissaBits)
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
			Result = uint32(double(AbsFloat * float(1u << NumMantissaBits)) + 0.5); // Cast to double to make sure +0.5 is lossless
		}
		else
		{
			// Normal encoding
			// Extract exponent and mantissa bits from 32-bit float
			const uint32 Shift = 23 - NumMantissaBits;
			const uint32 Tmp = (AbsFloatUInt - 0x3F000000u) + (1u << (Shift - 1)); // Bias to round to nearest
			Result = FMath::Min(Tmp >> Shift, (1u << SignBitPosition) - 1u); // Clamp to largest UV float value
		}

		// Produce a mask that for positive values only flips the sign bit
		// and for negative values only flips the exponent and mantissa bits.
		const uint32 SignMask = (1u << SignBitPosition) - (FloatUInt >> 31u);
		Result ^= SignMask;

		return Result;
	}
	
}
