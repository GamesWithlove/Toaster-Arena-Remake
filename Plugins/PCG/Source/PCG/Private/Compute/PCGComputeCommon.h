// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGCommon.h"

class UPCGData;
class UPCGDataBinding;
class UPCGSettings;
struct FPCGContext;
struct FPCGDataCollectionDesc;
struct FPCGPinPropertiesGPU;

#define PCG_KERNEL_LOGGING_ENABLED (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || USE_LOGGING_IN_SHIPPING)

#if PCG_KERNEL_LOGGING_ENABLED
#define PCG_KERNEL_VALIDATION_WARN(Context, Settings, bQuiet, ValidationMessage) if (!bQuiet) PCGComputeHelpers::LogKernelWarning(Context, Settings, ValidationMessage);
#define PCG_KERNEL_VALIDATION_ERR(Context, Settings, bQuiet, ValidationMessage) if (!bQuiet) PCGComputeHelpers::LogKernelError(Context, Settings, ValidationMessage);
#else
#define PCG_KERNEL_VALIDATION_WARN(Context, Settings, bQuiet, ValidationMessage) // Log removed
#define PCG_KERNEL_VALIDATION_ERR(Context, Settings, bQuiet, ValidationMessage) // Log removed
#endif

namespace PCGComputeConstants
{
	constexpr int MAX_NUM_ATTRS = 128;
	constexpr int NUM_RESERVED_ATTRS = 32; // Reserved for point properties, spline accessors, etc.
	constexpr int MAX_NUM_CUSTOM_ATTRS = MAX_NUM_ATTRS - NUM_RESERVED_ATTRS; // Reserved for custom attributes

	constexpr int DATA_COLLECTION_HEADER_SIZE_BYTES = 4; // 4 bytes for NumData
	constexpr int DATA_HEADER_PREAMBLE_SIZE_BYTES = 12; // 4 bytes for DataType, 4 bytes for NumAttrs, 4 bytes for NumElements
	constexpr int ATTRIBUTE_HEADER_SIZE_BYTES = 8; // 4 bytes for PackedIdAndStride, 4 bytes for data start address
	constexpr int DATA_HEADER_SIZE_BYTES = DATA_HEADER_PREAMBLE_SIZE_BYTES + MAX_NUM_ATTRS * ATTRIBUTE_HEADER_SIZE_BYTES;

	constexpr int POINT_DATA_TYPE_ID = 0;
	constexpr int PARAM_DATA_TYPE_ID = 1;

	constexpr int NUM_POINT_PROPERTIES = 9;
	constexpr int POINT_POSITION_ATTRIBUTE_ID = 0;
	constexpr int POINT_ROTATION_ATTRIBUTE_ID = 1;
	constexpr int POINT_SCALE_ATTRIBUTE_ID = 2;
	constexpr int POINT_BOUNDS_MIN_ATTRIBUTE_ID = 3;
	constexpr int POINT_BOUNDS_MAX_ATTRIBUTE_ID = 4;
	constexpr int POINT_COLOR_ATTRIBUTE_ID = 5;
	constexpr int POINT_DENSITY_ATTRIBUTE_ID = 6;
	constexpr int POINT_SEED_ATTRIBUTE_ID = 7;
	constexpr int POINT_STEEPNESS_ATTRIBUTE_ID = 8;

	/** PCG data types supported in GPU node inputs. */
	constexpr EPCGDataType AllowedInputTypes = EPCGDataType::Point | EPCGDataType::Param | EPCGDataType::Landscape | EPCGDataType::Texture;

	/** PCG data types supported in GPU node outputs. */
	constexpr EPCGDataType AllowedOutputTypes = EPCGDataType::Point | EPCGDataType::Param;

	/** PCG data types supported in GPU data collections. */
	constexpr EPCGDataType AllowedDataCollectionTypes = EPCGDataType::Point | EPCGDataType::Param;

	constexpr uint32 KernelExecutedFlag = 1 << 31;

	constexpr uint32 MAX_PRIMITIVE_COMPONENTS_PER_SPAWNER = 256;

	constexpr uint32 THREAD_GROUP_SIZE = 64;
}

namespace PCGComputeHelpers
{
	/** Gets the element count for a given data. E.g. number of points in a PointData, number of metadata entries in a ParamData, etc. */
	int GetElementCount(const UPCGData* InData);

	/** True if 'Type' is valid on a GPU input pin. */
	bool IsTypeAllowedAsInput(EPCGDataType Type);

	/** True if 'Type' is valid on a GPU output pin. */
	bool IsTypeAllowedAsOutput(EPCGDataType Type);

	/** True if 'Type' is valid in a GPU data collection. Some types are only supported as DataInterfaces, and cannot be uploaded in data collections. */
	bool IsTypeAllowedInDataCollection(EPCGDataType Type);

#if PCG_KERNEL_LOGGING_ENABLED
	/** Logs a warning on a GPU node in the graph and console. */
	void LogKernelWarning(const FPCGContext* Context, const UPCGSettings* Settings, const FText& InText);

	/** Logs an error on a GPU node in the graph and console. */
	void LogKernelError(const FPCGContext* Context, const UPCGSettings* Settings, const FText& InText);
#endif

	/** Computes a pin data description based on the given GPU pin properties. */
	void ComputeOutputPinDataDesc(const FPCGPinPropertiesGPU& PinProperties, const UPCGSettings* Settings, const UPCGDataBinding* Binding, FPCGDataCollectionDesc& OutPinDesc);

	/** Returns true if the given buffer size is dangerously large. Optionally emits error log. */
	bool IsBufferSizeTooLarge(uint64 InBufferSizeBytes, bool bInLogError = true);
}
