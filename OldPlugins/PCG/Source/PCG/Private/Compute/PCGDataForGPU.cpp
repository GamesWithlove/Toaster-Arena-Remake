// Copyright Epic Games, Inc. All Rights Reserved.

#include "Compute/PCGDataForGPU.h"

#include "PCGData.h"
#include "PCGEdge.h"
#include "PCGNode.h"
#include "PCGParamData.h"
#include "PCGPoint.h"
#include "PCGSettings.h"
#include "Compute/PCGComputeCommon.h"
#include "Compute/PCGComputeGraph.h"
#include "Compute/PCGDataBinding.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Metadata/PCGMetadata.h"

#include "Async/ParallelFor.h"

using namespace PCGComputeConstants;

namespace PCGDataForGPUConstants
{
	const static FPCGKernelAttributeDesc PointPropertyDescs[NUM_POINT_PROPERTIES] =
	{
		FPCGKernelAttributeDesc(POINT_POSITION_ATTRIBUTE_ID,   EPCGKernelAttributeType::Float3, NAME_None),
		FPCGKernelAttributeDesc(POINT_ROTATION_ATTRIBUTE_ID,   EPCGKernelAttributeType::Quat,   NAME_None),
		FPCGKernelAttributeDesc(POINT_SCALE_ATTRIBUTE_ID,      EPCGKernelAttributeType::Float3, NAME_None),
		FPCGKernelAttributeDesc(POINT_BOUNDS_MIN_ATTRIBUTE_ID, EPCGKernelAttributeType::Float3, NAME_None),
		FPCGKernelAttributeDesc(POINT_BOUNDS_MAX_ATTRIBUTE_ID, EPCGKernelAttributeType::Float3, NAME_None),
		FPCGKernelAttributeDesc(POINT_COLOR_ATTRIBUTE_ID,      EPCGKernelAttributeType::Float4, NAME_None),
		FPCGKernelAttributeDesc(POINT_DENSITY_ATTRIBUTE_ID,    EPCGKernelAttributeType::Float,  NAME_None),
		FPCGKernelAttributeDesc(POINT_SEED_ATTRIBUTE_ID,       EPCGKernelAttributeType::Int,    NAME_None),
		FPCGKernelAttributeDesc(POINT_STEEPNESS_ATTRIBUTE_ID,  EPCGKernelAttributeType::Float,  NAME_None)
	};
}

namespace PCGDataForGPUHelpers
{
	EPCGKernelAttributeType GetAttributeTypeFromMetadataType(EPCGMetadataTypes MetadataType)
	{
		switch (MetadataType)
		{
		case EPCGMetadataTypes::Boolean:
			return EPCGKernelAttributeType::Bool;
		case EPCGMetadataTypes::Float:
		case EPCGMetadataTypes::Double:
			return EPCGKernelAttributeType::Float;
		case EPCGMetadataTypes::Integer32:
		case EPCGMetadataTypes::Integer64:
			return EPCGKernelAttributeType::Int;
		case EPCGMetadataTypes::Vector2:
			return EPCGKernelAttributeType::Float2;
		case EPCGMetadataTypes::Vector:
			return EPCGKernelAttributeType::Float3;
		case EPCGMetadataTypes::Rotator:
			return EPCGKernelAttributeType::Rotator;
		case EPCGMetadataTypes::Vector4:
			return EPCGKernelAttributeType::Float4;
		case EPCGMetadataTypes::Quaternion:
			return EPCGKernelAttributeType::Quat;
		case EPCGMetadataTypes::Transform:
			return EPCGKernelAttributeType::Transform;
		case EPCGMetadataTypes::SoftObjectPath:
		case EPCGMetadataTypes::SoftClassPath:
		case EPCGMetadataTypes::String:
			return EPCGKernelAttributeType::StringKey;
		case EPCGMetadataTypes::Name:
			return EPCGKernelAttributeType::Name;
		default:
			return EPCGKernelAttributeType::Invalid;
		}
	}

	int GetAttributeTypeStrideBytes(EPCGKernelAttributeType Type)
	{
		switch (Type)
		{
		case EPCGKernelAttributeType::Bool:
		case EPCGKernelAttributeType::Int:
		case EPCGKernelAttributeType::Float:
		case EPCGKernelAttributeType::StringKey:
			return 4;
		case EPCGKernelAttributeType::Float2:
		case EPCGKernelAttributeType::Name:
			return 8;
		case EPCGKernelAttributeType::Float3:
		case EPCGKernelAttributeType::Rotator:
			return 12;
		case EPCGKernelAttributeType::Float4:
		case EPCGKernelAttributeType::Quat:
			return 16;
		case EPCGKernelAttributeType::Transform:
			return 64;
		default:
			checkNoEntry();
			return 0;
		}
	}

	bool PackAttributeHelper(const FPCGMetadataAttributeBase* InAttributeBase, const FPCGKernelAttributeDesc& InAttributeDesc, PCGMetadataEntryKey InEntryKey, const TArray<FString>& InStringTable, TArray<uint32>& OutPackedDataCollection, uint32& InOutAddressUints)
	{
		check(InAttributeBase);

		const PCGMetadataValueKey ValueKey = InAttributeBase->GetValueKey(InEntryKey);
		const int16 TypeId = InAttributeBase->GetTypeId();
		const int StrideBytes = PCGDataForGPUHelpers::GetAttributeTypeStrideBytes(InAttributeDesc.Type);

		switch (TypeId)
		{
		case PCG::Private::MetadataTypes<bool>::Id:
		{
			const FPCGMetadataAttribute<bool>* Attribute = static_cast<const FPCGMetadataAttribute<bool>*>(InAttributeBase);
			const bool Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 4);
			OutPackedDataCollection[InOutAddressUints++] = Value;
			break;
		}
		case PCG::Private::MetadataTypes<float>::Id:
		{
			const FPCGMetadataAttribute<float>* Attribute = static_cast<const FPCGMetadataAttribute<float>*>(InAttributeBase);
			const float Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 4);
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(Value);
			break;
		}
		case PCG::Private::MetadataTypes<double>::Id:
		{
			const FPCGMetadataAttribute<double>* Attribute = static_cast<const FPCGMetadataAttribute<double>*>(InAttributeBase);
			const double Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 4);
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value));
			break;
		}
		case PCG::Private::MetadataTypes<int32>::Id:
		{
			const FPCGMetadataAttribute<int32>* Attribute = static_cast<const FPCGMetadataAttribute<int32>*>(InAttributeBase);
			const int32 Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 4);
			OutPackedDataCollection[InOutAddressUints++] = Value;
			break;
		}
		case PCG::Private::MetadataTypes<int64>::Id:
		{
			const FPCGMetadataAttribute<int64>* Attribute = static_cast<const FPCGMetadataAttribute<int64>*>(InAttributeBase);
			const int64 Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 4);
			OutPackedDataCollection[InOutAddressUints++] = Value;
			break;
		}
		case PCG::Private::MetadataTypes<FVector2D>::Id:
		{
			const FPCGMetadataAttribute<FVector2D>* Attribute = static_cast<const FPCGMetadataAttribute<FVector2D>*>(InAttributeBase);
			const FVector2D Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 8);
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.X));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Y));
			break;
		}
		case PCG::Private::MetadataTypes<FRotator>::Id:
		{
			const FPCGMetadataAttribute<FRotator>* Attribute = static_cast<const FPCGMetadataAttribute<FRotator>*>(InAttributeBase);
			const FRotator Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 12);
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Pitch));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Yaw));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Roll));
			break;
		}
		case PCG::Private::MetadataTypes<FVector>::Id:
		{
			const FPCGMetadataAttribute<FVector>* Attribute = static_cast<const FPCGMetadataAttribute<FVector>*>(InAttributeBase);
			const FVector Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 12);
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.X));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Y));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Z));
			break;
		}
		case PCG::Private::MetadataTypes<FVector4>::Id:
		{
			const FPCGMetadataAttribute<FVector4>* Attribute = static_cast<const FPCGMetadataAttribute<FVector4>*>(InAttributeBase);
			const FVector4 Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 16);
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.X));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Y));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Z));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.W));
			break;
		}
		case PCG::Private::MetadataTypes<FQuat>::Id:
		{
			const FPCGMetadataAttribute<FQuat>* Attribute = static_cast<const FPCGMetadataAttribute<FQuat>*>(InAttributeBase);
			const FQuat Value = Attribute->GetValue(ValueKey);
			check(StrideBytes == 16);
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.X));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Y));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.Z));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Value.W));
			break;
		}
		case PCG::Private::MetadataTypes<FTransform>::Id:
		{
			const FPCGMetadataAttribute<FTransform>* Attribute = static_cast<const FPCGMetadataAttribute<FTransform>*>(InAttributeBase);
			const FTransform Value = Attribute->GetValue(ValueKey);
			const FMatrix Matrix = Value.ToMatrixWithScale();
			check(StrideBytes == 64);
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[0][0]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[0][1]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[0][2]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[0][3]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[1][0]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[1][1]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[1][2]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[1][3]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[2][0]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[2][1]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[2][2]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[2][3]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[3][0]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[3][1]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[3][2]));
			OutPackedDataCollection[InOutAddressUints++] = FMath::AsUInt(static_cast<float>(Matrix.M[3][3]));
			break;
		}
		case PCG::Private::MetadataTypes<FString>::Id:
		{
			// String stored as an integer for reading/writing in kernel, and accompanying string table in data description.
			const FPCGMetadataAttribute<FString>* Attribute = static_cast<const FPCGMetadataAttribute<FString>*>(InAttributeBase);
			const int32 Value = InStringTable.IndexOfByKey(Attribute->GetValue(ValueKey));
			check(StrideBytes == 4);
			OutPackedDataCollection[InOutAddressUints++] = Value;
			break;
		}
		case PCG::Private::MetadataTypes<FSoftObjectPath>::Id:
		{
			// SOP path string stored as an integer for reading/writing in kernel, and accompanying string table in data description.
			const FPCGMetadataAttribute<FSoftObjectPath>* Attribute = static_cast<const FPCGMetadataAttribute<FSoftObjectPath>*>(InAttributeBase);
			const int32 Value = InStringTable.IndexOfByKey(Attribute->GetValue(ValueKey).ToString());
			check(StrideBytes == 4);
			OutPackedDataCollection[InOutAddressUints++] = Value;
			break;
		}
		case PCG::Private::MetadataTypes<FSoftClassPath>::Id:
		{
			// SCP path string stored as an integer for reading/writing in kernel, and accompanying string table in data description.
			const FPCGMetadataAttribute<FSoftClassPath>* Attribute = static_cast<const FPCGMetadataAttribute<FSoftClassPath>*>(InAttributeBase);
			const int32 Value = InStringTable.IndexOfByKey(Attribute->GetValue(ValueKey).ToString());
			check(StrideBytes == 4);
			OutPackedDataCollection[InOutAddressUints++] = Value;
			break;
		}
		case PCG::Private::MetadataTypes<FName>::Id:
        {
        	// FName are defined with 2 int32, so packed them both.
        	const FPCGMetadataAttribute<FName>* Attribute = static_cast<const FPCGMetadataAttribute<FName>*>(InAttributeBase);
        	FName Value = Attribute->GetValue(ValueKey);
        	check(StrideBytes == 8);
			const FNameEntryId NameEntry = Value.GetDisplayIndex();
			const uint32 Number = Value.GetNumber();

        	OutPackedDataCollection[InOutAddressUints++] = NameEntry.ToUnstableInt();
        	OutPackedDataCollection[InOutAddressUints++] = Number;
        	break;
        }
		default:
			return false;
		}

		return true;
	}

	FPCGMetadataAttributeBase* CreateAttributeFromAttributeDesc(UPCGMetadata* Metadata, const FPCGKernelAttributeDesc& AttributeDesc)
	{
		switch (AttributeDesc.Type)
		{
		case EPCGKernelAttributeType::Bool:
		{
			return Metadata->FindOrCreateAttribute<bool>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::Int:
		{
			return Metadata->FindOrCreateAttribute<int>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::Float:
		{
			return Metadata->FindOrCreateAttribute<float>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::Float2:
		{
			return Metadata->FindOrCreateAttribute<FVector2D>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::Float3:
		{
			return Metadata->FindOrCreateAttribute<FVector>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::Float4:
		{
			return Metadata->FindOrCreateAttribute<FVector4>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::Rotator:
		{
			return Metadata->FindOrCreateAttribute<FRotator>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::Quat:
		{
			return Metadata->FindOrCreateAttribute<FQuat>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::Transform:
		{
			return Metadata->FindOrCreateAttribute<FTransform>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::StringKey:
		{
			return Metadata->FindOrCreateAttribute<FString>(AttributeDesc.Name);
		}
		case EPCGKernelAttributeType::Name:
		{
			return Metadata->FindOrCreateAttribute<FName>(AttributeDesc.Name);
		}
		default:
			return nullptr;
		}
	}

	bool UnpackAttributeHelper(const void* InPackedData, const TArray<FString>& InStringTable, uint32 ElementIndex, FPCGMetadataAttributeBase* AttributeBase, const FPCGKernelAttributeDesc& AttributeDesc, PCGMetadataEntryKey EntryKey)
	{
		check(InPackedData && AttributeBase);

		const float* DataAsFloat = static_cast<const float*>(InPackedData);
		const int32* DataAsInt = static_cast<const int32*>(InPackedData);

		switch (AttributeDesc.Type)
		{
		case EPCGKernelAttributeType::Bool:
		{
			FPCGMetadataAttribute<bool>* Attribute = static_cast<FPCGMetadataAttribute<bool>*>(AttributeBase);

			const bool Value = static_cast<bool>(DataAsFloat[ElementIndex]);
			Attribute->SetValue(EntryKey, Value);
			break;
		}
		case EPCGKernelAttributeType::Int:
		{
			FPCGMetadataAttribute<int>* Attribute = static_cast<FPCGMetadataAttribute<int>*>(AttributeBase);

			const int32 Value = DataAsInt[ElementIndex];
			Attribute->SetValue(EntryKey, Value);
			break;
		}
		case EPCGKernelAttributeType::Float:
		{
			FPCGMetadataAttribute<float>* Attribute = static_cast<FPCGMetadataAttribute<float>*>(AttributeBase);

			const float Value = DataAsFloat[ElementIndex];
			Attribute->SetValue(EntryKey, Value);
			break;
		}
		case EPCGKernelAttributeType::Float2:
		{
			FPCGMetadataAttribute<FVector2D>* Attribute = static_cast<FPCGMetadataAttribute<FVector2D>*>(AttributeBase);

			FVector2D Value;
			Value.X = DataAsFloat[ElementIndex + 0];
			Value.Y = DataAsFloat[ElementIndex + 1];
			Attribute->SetValue(EntryKey, Value);
			break;
		}
		case EPCGKernelAttributeType::Float3:
		{
			FPCGMetadataAttribute<FVector>* Attribute = static_cast<FPCGMetadataAttribute<FVector>*>(AttributeBase);

			FVector Value;
			Value.X = DataAsFloat[ElementIndex + 0];
			Value.Y = DataAsFloat[ElementIndex + 1];
			Value.Z = DataAsFloat[ElementIndex + 2];
			Attribute->SetValue(EntryKey, Value);
			break;
		}
		case EPCGKernelAttributeType::Float4:
		{
			FPCGMetadataAttribute<FVector4>* Attribute = static_cast<FPCGMetadataAttribute<FVector4>*>(AttributeBase);

			FVector4 Value;
			Value.X = DataAsFloat[ElementIndex + 0];
			Value.Y = DataAsFloat[ElementIndex + 1];
			Value.Z = DataAsFloat[ElementIndex + 2];
			Value.W = DataAsFloat[ElementIndex + 3];
			Attribute->SetValue(EntryKey, Value);
			break;
		}
		case EPCGKernelAttributeType::Rotator:
		{
			FPCGMetadataAttribute<FRotator>* Attribute = static_cast<FPCGMetadataAttribute<FRotator>*>(AttributeBase);

			FRotator Value;
			Value.Pitch = DataAsFloat[ElementIndex + 0];
			Value.Yaw = DataAsFloat[ElementIndex + 1];
			Value.Roll = DataAsFloat[ElementIndex + 2];
			Attribute->SetValue(EntryKey, Value);
			break;
		}
		case EPCGKernelAttributeType::Quat:
		{
			FPCGMetadataAttribute<FQuat>* Attribute = static_cast<FPCGMetadataAttribute<FQuat>*>(AttributeBase);

			FQuat Value;
			Value.X = DataAsFloat[ElementIndex + 0];
			Value.Y = DataAsFloat[ElementIndex + 1];
			Value.Z = DataAsFloat[ElementIndex + 2];
			Value.W = DataAsFloat[ElementIndex + 3];
			Attribute->SetValue(EntryKey, Value);
			break;
		}
		case EPCGKernelAttributeType::Transform:
		{
			FPCGMetadataAttribute<FTransform>* Attribute = static_cast<FPCGMetadataAttribute<FTransform>*>(AttributeBase);

			FMatrix Matrix;
			Matrix.M[0][0] = DataAsFloat[ElementIndex + 0];
			Matrix.M[0][1] = DataAsFloat[ElementIndex + 1];
			Matrix.M[0][2] = DataAsFloat[ElementIndex + 2];
			Matrix.M[0][3] = DataAsFloat[ElementIndex + 3];
			Matrix.M[1][0] = DataAsFloat[ElementIndex + 4];
			Matrix.M[1][1] = DataAsFloat[ElementIndex + 5];
			Matrix.M[1][2] = DataAsFloat[ElementIndex + 6];
			Matrix.M[1][3] = DataAsFloat[ElementIndex + 7];
			Matrix.M[2][0] = DataAsFloat[ElementIndex + 8];
			Matrix.M[2][1] = DataAsFloat[ElementIndex + 9];
			Matrix.M[2][2] = DataAsFloat[ElementIndex + 10];
			Matrix.M[2][3] = DataAsFloat[ElementIndex + 11];
			Matrix.M[3][0] = DataAsFloat[ElementIndex + 12];
			Matrix.M[3][1] = DataAsFloat[ElementIndex + 13];
			Matrix.M[3][2] = DataAsFloat[ElementIndex + 14];
			Matrix.M[3][3] = DataAsFloat[ElementIndex + 15];

			const FTransform Value(Matrix);
			Attribute->SetValue(EntryKey, Value);
			break;
		}
		case EPCGKernelAttributeType::StringKey:
		{
			FPCGMetadataAttribute<FString>* Attribute = static_cast<FPCGMetadataAttribute<FString>*>(AttributeBase);
			
			const int32 StringKey = DataAsInt[ElementIndex];
			if (InStringTable.IsValidIndex(StringKey))
			{
				Attribute->SetValue(EntryKey, InStringTable[StringKey]);
			}
			break;
		}
		case EPCGKernelAttributeType::Name:
		{
			FPCGMetadataAttribute<FName>* Attribute = static_cast<FPCGMetadataAttribute<FName>*>(AttributeBase);

			const FNameEntryId NameEntryId = FNameEntryId::FromUnstableInt(DataAsInt[ElementIndex]);
			const uint32 Number = DataAsInt[ElementIndex + 1];
			// Names need some validation
			const FName Value = FName::CreateFromDisplayId(NameEntryId, Number);
			if (Value.IsValid())
			{
				Attribute->SetValue(EntryKey, Value);
			}
			break;
		}
		default:
			return false;
		}

		return true;
	}

	void ComputeCustomFloatPacking(
		TArray<FName>& InAttributeNames,
		const UPCGDataBinding* InBinding,
		const FPCGDataCollectionDesc& InDataCollectionDescription,
		uint32& OutCustomFloatCount,
		TArray<FUint32Vector4>& OutAttributeIdOffsetStrides)
	{
		check(InBinding);
		check(InBinding->Graph);
		const TMap<FName, FPCGKernelAttributeIDAndType>& GlobalAttributeLookupTable = InBinding->GetAttributeLookupTable();

		uint32 OffsetFloats = 0;

		for (FName AttributeName : InAttributeNames)
		{
			const FPCGKernelAttributeIDAndType* FoundAttribute = GlobalAttributeLookupTable.Find(AttributeName);
			if (!FoundAttribute)
			{
				continue;
			}

			const EPCGKernelAttributeType AttributeType = FoundAttribute->Type;
			if (AttributeType == EPCGKernelAttributeType::None)
			{
				continue;
			}

			const uint32 AttributeId = static_cast<uint32>(FoundAttribute->Id);
			const uint32 StrideFloats = GetAttributeTypeStrideBytes(AttributeType) / sizeof(float);

			OutAttributeIdOffsetStrides.Emplace(AttributeId, OffsetFloats, StrideFloats, /*Unused*/0);

			OffsetFloats += StrideFloats;
		}

		OutCustomFloatCount = OffsetFloats;
	}

	FPCGDataCollectionDesc ComputeInputPinDataDesc(const UPCGSettings* Settings, const FName& InputPinLabel, const UPCGDataBinding* Binding)
	{
		check(Settings);

		const UPCGNode* Node = Cast<UPCGNode>(Settings->GetOuter());
		const UPCGPin* InputPin = Node ? Node->GetInputPin(InputPinLabel) : nullptr;

		if (ensure(InputPin))
		{
			return ComputeInputPinDataDesc(InputPin, Binding);
		}
		else
		{
			return {};
		}
	}

	FPCGDataCollectionDesc ComputeInputPinDataDesc(const UPCGPin* InputPin, const UPCGDataBinding* Binding)
	{
		check(InputPin);
		check(Binding);

		FPCGDataCollectionDesc PinDesc;

		// Grab data from all incident edges.
		for (const UPCGEdge* Edge : InputPin->Edges)
		{
			// InputPin is upstream output pin.
			const UPCGPin* UpstreamOutputPin = Edge->InputPin;
			if (!UpstreamOutputPin)
			{
				continue;
			}

			const UPCGSettings* UpstreamSettings = UpstreamOutputPin->Node ? UpstreamOutputPin->Node->GetSettings() : nullptr;
			check(UpstreamSettings);

			// Add data from connected upstream output pin.
			FPCGDataCollectionDesc EdgeDesc;
			if (ensure(UpstreamSettings->ComputeOutputPinDataDesc(UpstreamOutputPin, Binding, EdgeDesc)))
			{
				PinDesc.Combine(EdgeDesc);
			}
		}

		return PinDesc;
	}
}

bool FPCGKernelAttributeKey::operator==(const FPCGKernelAttributeKey& Other) const
{
	return Type == Other.Type && Name == Other.Name;
}

uint32 GetTypeHash(const FPCGKernelAttributeKey& In)
{
	return HashCombine(GetTypeHash(In.Type), GetTypeHash(In.Name));
}

bool FPCGKernelAttributeDesc::operator==(const FPCGKernelAttributeDesc& Other) const
{
	return Index == Other.Index && Type == Other.Type && Name == Other.Name;
}

FPCGDataDesc::FPCGDataDesc(EPCGDataType InType, int InElementCount)
	: Type(InType)
	, ElementCount(InElementCount)
{
	TArray<FString> StringTableDummy;
	InitializeAttributeDescs(nullptr, {}, StringTableDummy);
}

FPCGDataDesc::FPCGDataDesc(const UPCGData* InData, const TMap<FName, FPCGKernelAttributeIDAndType>& InGlobalAttributeLookupTable, const TArray<FString>& InStringTable)
{
	check(InData);

	Type = InData->GetDataType();
	ElementCount = PCGComputeHelpers::GetElementCount(InData);

	InitializeAttributeDescs(InData, InGlobalAttributeLookupTable, InStringTable);
}

uint64 FPCGDataDesc::ComputePackedSize() const
{
	check(PCGComputeHelpers::IsTypeAllowedInDataCollection(Type));

	uint64 DataSizeBytes = DATA_HEADER_SIZE_BYTES;

	for (const FPCGKernelAttributeDesc& AttributeDesc : AttributeDescs)
	{
		DataSizeBytes += static_cast<uint64>(PCGDataForGPUHelpers::GetAttributeTypeStrideBytes(AttributeDesc.Type)) * static_cast<uint64>(ElementCount);
	}

	return DataSizeBytes;
}

void FPCGDataDesc::InitializeAttributeDescs(const UPCGData* InData, const TMap<FName, FPCGKernelAttributeIDAndType>& InGlobalAttributeLookupTable, const TArray<FString>& InStringTable)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGDataDesc::InitializeAttributeDescs);

	if (Type == EPCGDataType::Point)
	{
		AttributeDescs.Append(PCGDataForGPUConstants::PointPropertyDescs, NUM_POINT_PROPERTIES);
	}
	else { /* TODO: More types! */ }

	if (const UPCGMetadata* Metadata = InData ? InData->ConstMetadata() : nullptr)
	{
		TArray<FName> AttributeNames;
		TArray<EPCGMetadataTypes> AttributeTypes;
		Metadata->GetAttributes(AttributeNames, AttributeTypes);

		TArray<TPair<FPCGKernelAttributeKey, TArray<int32>>> DelayedAttributeKeysAndStringKeys; // Attribute keys that don't exist in the global lookup table must be delayed so we can append them at the end.
		int NumAttributesFromLUT = 0; // Keep track of how many attributes come from the LUT. This will help give us the starting index for our delayed attributes.

		for (int CustomAttributeIndex = 0; CustomAttributeIndex < AttributeNames.Num(); ++CustomAttributeIndex)
		{
			const FName AttributeName = AttributeNames[CustomAttributeIndex];
			const EPCGKernelAttributeType AttributeType = PCGDataForGPUHelpers::GetAttributeTypeFromMetadataType(AttributeTypes[CustomAttributeIndex]);

			if (AttributeType == EPCGKernelAttributeType::Invalid)
			{
				const UEnum* EnumClass = StaticEnum<EPCGMetadataTypes>();
				check(EnumClass);

				UE_LOG(LogPCG, Warning, TEXT("Skipping attribute '%s'. '%s' type attributes are not supported on GPU."),
					*AttributeName.ToString(),
					*EnumClass->GetNameStringByValue(static_cast<int64>(AttributeTypes[CustomAttributeIndex])));

				continue;
			}

			// Ignore excess attributes.
			if (CustomAttributeIndex >= MAX_NUM_CUSTOM_ATTRS)
			{
				// TODO: Would be nice to include the pin label for debug purposes
				UE_LOG(LogPCG, Warning, TEXT("Attempted to exceed max number of custom attributes (%d). Additional attributes will be ignored."), MAX_NUM_CUSTOM_ATTRS);
				break;
			}

			if (AttributeName == NAME_None)
			{
				// TODO: Would be nice to include the pin label for debug purposes
				UE_LOG(LogPCG, Warning, TEXT("'%s' is not a valid name for a kernel attribute. Attribute will be skipped."), *AttributeName.ToString());
				continue;
			}

			TArray<int32> UniqueStringKeys;

			if (AttributeType == EPCGKernelAttributeType::StringKey)
			{
				const FPCGMetadataAttributeBase* AttributeBase = Metadata->GetConstAttribute(AttributeName);
				check(AttributeBase);

				if (Type == EPCGDataType::Point && ensure(InData->IsA<UPCGPointData>()))
				{
					const UPCGPointData* PointData = CastChecked<UPCGPointData>(InData);

					for (int32 PointIndex = 0; PointIndex < PointData->GetPoints().Num(); ++PointIndex)
					{
						const PCGMetadataValueKey ValueKey = AttributeBase->GetValueKey(PointData->GetPoints()[PointIndex].MetadataEntry);

						int StringTableIndex = INDEX_NONE;

						if (AttributeBase->GetTypeId() == PCG::Private::MetadataTypes<FSoftObjectPath>::Id)
						{
							StringTableIndex = InStringTable.IndexOfByKey(static_cast<const FPCGMetadataAttribute<FSoftObjectPath>*>(AttributeBase)->GetValue(ValueKey).ToString());
						}
						else if (AttributeBase->GetTypeId() == PCG::Private::MetadataTypes<FString>::Id)
						{
							StringTableIndex = InStringTable.IndexOfByKey(static_cast<const FPCGMetadataAttribute<FString>*>(AttributeBase)->GetValue(ValueKey));
						}
						else if (AttributeBase->GetTypeId() == PCG::Private::MetadataTypes<FSoftClassPath>::Id)
                        {
                        	StringTableIndex = InStringTable.IndexOfByKey(static_cast<const FPCGMetadataAttribute<FSoftClassPath>*>(AttributeBase)->GetValue(ValueKey).ToString());
                        }
						else
						{
							// Should not get here if attribute type is string key.
							checkNoEntry();
						}

						if (StringTableIndex != INDEX_NONE)
						{
							UniqueStringKeys.AddUnique(StringTableIndex);
						}
					}
				}
				else if (Type == EPCGDataType::Param && ensure(InData->IsA<UPCGParamData>()))
				{
					const int32 NumElements = Metadata->GetItemCountForChild();

					for (int64 MetadataKey = 0; MetadataKey < NumElements; ++MetadataKey)
					{
						int StringTableIndex = INDEX_NONE;

						if (AttributeBase->GetTypeId() == PCG::Private::MetadataTypes<FSoftObjectPath>::Id)
						{
							StringTableIndex = InStringTable.IndexOfByKey(static_cast<const FPCGMetadataAttribute<FSoftObjectPath>*>(AttributeBase)->GetValue(MetadataKey).ToString());
						}
						else if (AttributeBase->GetTypeId() == PCG::Private::MetadataTypes<FString>::Id)
						{
							StringTableIndex = InStringTable.IndexOfByKey(static_cast<const FPCGMetadataAttribute<FString>*>(AttributeBase)->GetValue(MetadataKey));
						}
						else if (AttributeBase->GetTypeId() == PCG::Private::MetadataTypes<FSoftClassPath>::Id)
                        {
                        	StringTableIndex = InStringTable.IndexOfByKey(static_cast<const FPCGMetadataAttribute<FSoftClassPath>*>(AttributeBase)->GetValue(MetadataKey).ToString());
                        }
						else
						{
							// Should not get here if attribute type is string key.
							checkNoEntry();
						}

						if (StringTableIndex != INDEX_NONE)
						{
							UniqueStringKeys.AddUnique(StringTableIndex);
						}
					}
				}
				else { /* TODO: More types! */ }
			}

			if (const FPCGKernelAttributeIDAndType* AttributeIdAndType = InGlobalAttributeLookupTable.Find(AttributeName))
			{
				AttributeDescs.Emplace(AttributeIdAndType->Id, AttributeType, AttributeName, MoveTemp(UniqueStringKeys));
				++NumAttributesFromLUT;
			}
			else
			{
				TPair<FPCGKernelAttributeKey, TArray<int32>> AttributeAndStringKeys;
				AttributeAndStringKeys.Get<0>() = FPCGKernelAttributeKey(AttributeName, AttributeType);
				AttributeAndStringKeys.Get<1>() = MoveTemp(UniqueStringKeys);
				DelayedAttributeKeysAndStringKeys.Add(MoveTemp(AttributeAndStringKeys));
			}
		}

		for (int DelayedAttributeIndex = 0; DelayedAttributeIndex < DelayedAttributeKeysAndStringKeys.Num(); ++DelayedAttributeIndex)
		{
			const FPCGKernelAttributeKey& AttributeKey = DelayedAttributeKeysAndStringKeys[DelayedAttributeIndex].Get<0>();
			AttributeDescs.Emplace(NUM_RESERVED_ATTRS + DelayedAttributeIndex + NumAttributesFromLUT + InGlobalAttributeLookupTable.Num(), AttributeKey.Type, AttributeKey.Name, MoveTemp(DelayedAttributeKeysAndStringKeys[DelayedAttributeIndex].Get<1>()));
		}
	}
}

FPCGDataCollectionDesc FPCGDataCollectionDesc::BuildFromInputDataCollectionAndInputPinLabel(
	const FPCGDataCollection& InDataCollection,
	FName InputPinLabel,
	const TMap<FName, FPCGKernelAttributeIDAndType>& InAttributeLookupTable,
	const TArray<FString>& InStringTable)
{
	FPCGDataCollectionDesc CollectionDesc;
	TArray<FPCGTaggedData> DataForPin = InDataCollection.GetInputsByPin(InputPinLabel);

	for (const FPCGTaggedData& Data : DataForPin)
	{
		if (!Data.Data || !PCGComputeHelpers::IsTypeAllowedInDataCollection(Data.Data->GetDataType()))
		{
			continue;
		}

		CollectionDesc.DataDescs.Emplace(Data.Data, InAttributeLookupTable, InStringTable);
	}

	return CollectionDesc;
}

uint32 FPCGDataCollectionDesc::ComputePackedHeaderSizeBytes() const
{
	return PCGComputeConstants::DATA_COLLECTION_HEADER_SIZE_BYTES + PCGComputeConstants::DATA_HEADER_SIZE_BYTES * DataDescs.Num();
}

uint64 FPCGDataCollectionDesc::ComputePackedSizeBytes() const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGDataCollectionDesc::ComputePackedSize);

	uint64 TotalCollectionSizeBytes = ComputePackedHeaderSizeBytes();

	for (const FPCGDataDesc& DataDesc : DataDescs)
	{
		TotalCollectionSizeBytes += DataDesc.ComputePackedSize();
	}

	return TotalCollectionSizeBytes;
}

void FPCGDataCollectionDesc::WriteHeader(TArray<uint32>& OutPackedDataCollectionHeader) const
{
	const uint32 HeaderSizeBytes = ComputePackedHeaderSizeBytes();
	const uint32 HeaderSizeUints = HeaderSizeBytes >> 2;

	if (OutPackedDataCollectionHeader.Num() < static_cast<int32>(HeaderSizeUints))
	{
		OutPackedDataCollectionHeader.SetNumUninitialized(HeaderSizeUints);
	}

	// Zero-initialize header portion. We detect absent attributes using 0s.
	for (uint32 Index = 0; Index < HeaderSizeUints; ++Index)
	{
		OutPackedDataCollectionHeader[Index] = 0;
	}

	uint32 WriteAddressUints = 0;

	// Num data
	OutPackedDataCollectionHeader[WriteAddressUints++] = DataDescs.Num();

	for (int32 DataIndex = 0; DataIndex < DataDescs.Num(); ++DataIndex)
	{
		const FPCGDataDesc& DataDesc = DataDescs[DataIndex];

		// Data i: type ID
		if (DataDesc.Type == EPCGDataType::Param)
		{
			OutPackedDataCollectionHeader[WriteAddressUints++] = PARAM_DATA_TYPE_ID;
		}
		else
		{
			ensure(DataDesc.Type == EPCGDataType::Point);
			OutPackedDataCollectionHeader[WriteAddressUints++] = POINT_DATA_TYPE_ID;
		}

		// Data i: attribute count (including intrinsic point properties)
		OutPackedDataCollectionHeader[WriteAddressUints++] = DataDesc.AttributeDescs.Num();

		// Data i: element count
		OutPackedDataCollectionHeader[WriteAddressUints++] = DataDesc.ElementCount;

		const uint32 DataAttributesHeaderStartAddressBytes = WriteAddressUints << 2;

		for (int32 AttrIndex = 0; AttrIndex < DataDesc.AttributeDescs.Num(); ++AttrIndex)
		{
			const FPCGKernelAttributeDesc& AttributeDesc = DataDesc.AttributeDescs[AttrIndex];

			// Scatter from attributes that are present into header which has slots for all possible attributes.
			WriteAddressUints = (AttributeDesc.Index * ATTRIBUTE_HEADER_SIZE_BYTES + DataAttributesHeaderStartAddressBytes) >> 2;

			// Data i element j: packed ID and stride
			const uint32 AttributeId = AttributeDesc.Index;
			const uint32 AttributeStride = PCGDataForGPUHelpers::GetAttributeTypeStrideBytes(AttributeDesc.Type);
			const uint32 PackedIdAndStride = (AttributeId << 8) + AttributeStride;
			OutPackedDataCollectionHeader[WriteAddressUints++] = PackedIdAndStride;

			// Data i element j: data start address bytes
			// TODO: Accumulate rather than calculate from scratch.
			uint32 DataStartAddressBytes = HeaderSizeBytes; // Start at end of header
			for (int32 PreviousDataIndex = 0; PreviousDataIndex < DataIndex; ++PreviousDataIndex) // Fast forward past previous data
			{
				for (const FPCGKernelAttributeDesc& AttrDesc : DataDescs[PreviousDataIndex].AttributeDescs)
				{
					DataStartAddressBytes += DataDescs[PreviousDataIndex].ElementCount * PCGDataForGPUHelpers::GetAttributeTypeStrideBytes(AttrDesc.Type);
				}
			}
			for (int32 PreviousAttrIndex = 0; PreviousAttrIndex < AttrIndex; ++PreviousAttrIndex) // Fast forward past previous attributes
			{
				DataStartAddressBytes += DataDesc.ElementCount * PCGDataForGPUHelpers::GetAttributeTypeStrideBytes(DataDesc.AttributeDescs[PreviousAttrIndex].Type);
			}
			OutPackedDataCollectionHeader[WriteAddressUints++] = DataStartAddressBytes;
		}

		// After scattering in attribute headers, fast forward to end of section.
		WriteAddressUints = (PCGComputeConstants::MAX_NUM_ATTRS * PCGComputeConstants::ATTRIBUTE_HEADER_SIZE_BYTES + DataAttributesHeaderStartAddressBytes) >> 2;
	}

	check(WriteAddressUints * 4 == HeaderSizeBytes);
}

static uint32 GetElementDataStartAddressUints(const uint32* InPackedDataCollection, uint32 InDataIndex, uint32 InAttributeId)
{
	uint32 ReadAddressBytes = PCGComputeConstants::DATA_COLLECTION_HEADER_SIZE_BYTES + InDataIndex * PCGComputeConstants::DATA_HEADER_SIZE_BYTES;
	ReadAddressBytes += /*TypeId*/4 + /*Attribute Count*/4 + /*Element Count*/4;

	ReadAddressBytes += InAttributeId * PCGComputeConstants::ATTRIBUTE_HEADER_SIZE_BYTES;
	ReadAddressBytes += /*PackedIdAndStride*/4;

	return InPackedDataCollection[ReadAddressBytes >> 2] >> 2;
}

void FPCGDataCollectionDesc::PackDataCollection(const FPCGDataCollection& InDataCollection, FName InPin, const TArray<FString>& InStringTable, TArray<uint32>& OutPackedDataCollection) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGDataCollectionDesc::PackDataCollection);

	const TArray<FPCGTaggedData> InputData = InDataCollection.GetInputsByPin(InPin);

	const uint32 PackedDataCollectionSizeBytes = ComputePackedSizeBytes();

	// Uninitialized is fine, all data is initialized explicitly.
	OutPackedDataCollection.SetNumUninitialized(PackedDataCollectionSizeBytes >> 2);

	// Data addresses are written to the header and will be used during packing below.
	WriteHeader(OutPackedDataCollection);

	for (int32 DataIndex = 0; DataIndex < InputData.Num(); ++DataIndex)
	{
		const FPCGDataDesc& DataDesc = DataDescs[DataIndex];
		const UPCGMetadata* Metadata = InputData[DataIndex].Data ? InputData[DataIndex].Data->ConstMetadata() : nullptr;
		if (!ensure(Metadata))
		{
			continue;
		}

		if (const UPCGPointData* PointData = Cast<UPCGPointData>(InputData[DataIndex].Data))
		{
			const TArray<FPCGPoint>& Points = PointData->GetPoints();
			if (Points.IsEmpty())
			{
				continue;
			}

			const uint32 NumElements = Points.Num();

			for (const FPCGKernelAttributeDesc& AttributeDesc : DataDesc.AttributeDescs)
			{
				const uint32 AttributeId = AttributeDesc.Index;

				const FPCGMetadataAttributeBase* AttributeBase = (AttributeId >= NUM_RESERVED_ATTRS) ? Metadata->GetConstAttribute(AttributeDesc.Name) : nullptr;

				uint32 AddressUints = GetElementDataStartAddressUints(OutPackedDataCollection.GetData(), DataIndex, AttributeId);

				if (AttributeId < NUM_RESERVED_ATTRS)
				{
					// Point property.
					switch (AttributeId)
					{
					case POINT_POSITION_ATTRIBUTE_ID:
					{
						for (uint32 ElementIndex = 0; ElementIndex < NumElements; ++ElementIndex)
						{
							const FVector Position = Points[ElementIndex].Transform.GetLocation();
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Position.X));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Position.Y));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Position.Z));
						}
						break;
					}
					case POINT_ROTATION_ATTRIBUTE_ID:
					{
						for (uint32 ElementIndex = 0; ElementIndex < NumElements; ++ElementIndex)
						{
							const FQuat Rotation = Points[ElementIndex].Transform.GetRotation();
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Rotation.X));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Rotation.Y));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Rotation.Z));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Rotation.W));
						}
						break;
					}
					case POINT_SCALE_ATTRIBUTE_ID:
					{
						for (uint32 ElementIndex = 0; ElementIndex < NumElements; ++ElementIndex)
						{
							const FVector Scale = Points[ElementIndex].Transform.GetScale3D();
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Scale.X));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Scale.Y));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Scale.Z));
						}
						break;
					}
					case POINT_BOUNDS_MIN_ATTRIBUTE_ID:
					{
						for (uint32 ElementIndex = 0; ElementIndex < NumElements; ++ElementIndex)
						{
							const FVector& BoundsMin = Points[ElementIndex].BoundsMin;
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(BoundsMin.X));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(BoundsMin.Y));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(BoundsMin.Z));
						}
						break;
					}
					case POINT_BOUNDS_MAX_ATTRIBUTE_ID:
					{
						for (uint32 ElementIndex = 0; ElementIndex < NumElements; ++ElementIndex)
						{
							const FVector& BoundsMax = Points[ElementIndex].BoundsMax;
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(BoundsMax.X));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(BoundsMax.Y));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(BoundsMax.Z));
						}
						break;
					}
					case POINT_COLOR_ATTRIBUTE_ID:
					{
						for (uint32 ElementIndex = 0; ElementIndex < NumElements; ++ElementIndex)
						{
							const FVector4& Color = Points[ElementIndex].Color;
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Color.X));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Color.Y));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Color.Z));
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(static_cast<float>(Color.W));
						}
						break;
					}
					case POINT_DENSITY_ATTRIBUTE_ID:
					{
						for (uint32 ElementIndex = 0; ElementIndex < NumElements; ++ElementIndex)
						{
							const float Density = Points[ElementIndex].Density;
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(Density);
						}
						break;
					}
					case POINT_SEED_ATTRIBUTE_ID:
					{
						for (uint32 ElementIndex = 0; ElementIndex < NumElements; ++ElementIndex)
						{
							const int Seed = Points[ElementIndex].Seed;
							OutPackedDataCollection[AddressUints++] = Seed;
						}
						break;
					}
					case POINT_STEEPNESS_ATTRIBUTE_ID:
					{
						for (uint32 ElementIndex = 0; ElementIndex < NumElements; ++ElementIndex)
						{
							const float Steepness = Points[ElementIndex].Steepness;
							OutPackedDataCollection[AddressUints++] = FMath::AsUInt(Steepness);
						}
						break;
					}
					default:
						checkNoEntry();
						break;
					}
				}
				else
				{
					// Pack attribute. Validate first element only for perf.
					ensure(PCGDataForGPUHelpers::PackAttributeHelper(AttributeBase, AttributeDesc, Points[0].MetadataEntry, InStringTable, OutPackedDataCollection, AddressUints));
					for (uint32 ElementIndex = 1; ElementIndex < NumElements; ++ElementIndex)
					{
						PCGDataForGPUHelpers::PackAttributeHelper(AttributeBase, AttributeDesc, Points[ElementIndex].MetadataEntry, InStringTable, OutPackedDataCollection, AddressUints);
					}
				}
			}
		}
		else if (const UPCGParamData* ParamData = Cast<UPCGParamData>(InputData[DataIndex].Data))
		{
			for (const FPCGKernelAttributeDesc& AttributeDesc : DataDesc.AttributeDescs)
			{
				const FPCGMetadataAttributeBase* AttributeBase = Metadata->GetConstAttribute(AttributeDesc.Name);
				if (!AttributeBase)
				{
					continue;
				}

				uint32 AddressUints = GetElementDataStartAddressUints(OutPackedDataCollection.GetData(), DataIndex, AttributeDesc.Index);

				// Pack attribute. Validate first element only for perf.
				ensure(PCGDataForGPUHelpers::PackAttributeHelper(AttributeBase, AttributeDesc, /*InEntryKey*/0, InStringTable, OutPackedDataCollection, AddressUints));
				for (int32 ElementIndex = 1; ElementIndex < DataDesc.ElementCount; ++ElementIndex)
				{
					PCGDataForGPUHelpers::PackAttributeHelper(AttributeBase, AttributeDesc, /*InEntryKey*/ElementIndex, InStringTable, OutPackedDataCollection, AddressUints);
				}
			}
		}
		else { /* TODO: Support additional data types. */ }
	}
}

EPCGUnpackDataCollectionResult FPCGDataCollectionDesc::UnpackDataCollection(const TArray<uint8>& InPackedData, FName InPin, const TArray<FString>& InStringTable, FPCGDataCollection& OutDataCollection) const
{
	if (InPackedData.IsEmpty())
	{
		ensureMsgf(false, TEXT("Tried to unpack a GPU data collection, but the readback buffer was empty."));
		return EPCGUnpackDataCollectionResult::NoData;
	}

	const void* PackedData = InPackedData.GetData();
	const float* DataAsFloat = static_cast<const float*>(PackedData);
	const uint32* DataAsUint = static_cast<const uint32*>(PackedData);
	const int32* DataAsInt = static_cast<const int32*>(PackedData);

	const uint32 PackedExecutionFlagAndNumData = DataAsUint[0];

	// Most significant bit of NumData is reserved to flag whether or not the kernel executed.
	ensureMsgf(PackedExecutionFlagAndNumData & PCGComputeConstants::KernelExecutedFlag, TEXT("Tried to unpack a GPU data collection, but the compute shader did not execute."));
	const uint32 NumData = PackedExecutionFlagAndNumData & ~PCGComputeConstants::KernelExecutedFlag;

	if (NumData != DataDescs.Num())
	{
		return EPCGUnpackDataCollectionResult::DataMismatch;
	}

	TArray<FPCGTaggedData>& OutData = OutDataCollection.TaggedData;

	for (uint32 DataIndex = 0; DataIndex < NumData; ++DataIndex)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(FPCGDataCollectionDesc::UnpackDataItem);

		const uint32 DataHeaderAddress = (DATA_COLLECTION_HEADER_SIZE_BYTES + DATA_HEADER_SIZE_BYTES * DataIndex) / sizeof(uint32);

		const uint32 TypeId =        DataAsUint[DataHeaderAddress + 0];
		const uint32 NumAttributes = DataAsUint[DataHeaderAddress + 1];
		const uint32 NumElements =   DataAsUint[DataHeaderAddress + 2];

		const TArray<FPCGKernelAttributeDesc>& AttributeDescs = DataDescs[DataIndex].AttributeDescs;
		check(NumAttributes == AttributeDescs.Num());

		if (TypeId == POINT_DATA_TYPE_ID)
		{
			UPCGPointData* OutPointData = nullptr;
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(InitalizeOutput);
				OutPointData = NewObject<UPCGPointData>();
				OutPointData->GetMutablePoints().SetNumUninitialized(NumElements);
			}

			UPCGMetadata* Metadata = OutPointData->MutableMetadata();
			TArray<FPCGPoint>& OutPoints = OutPointData->GetMutablePoints();

			{
				// This can take an age as it populates the memory hierarchy.
				TRACE_CPUPROFILER_EVENT_SCOPE(MetadataEntry);
				ParallelFor(NumElements, [&OutPoints](int32 ElementIndex)
				{
					OutPoints[ElementIndex].MetadataEntry = -1;
				});
			}

			FPCGTaggedData& OutTaggedData = OutData.Emplace_GetRef();
			OutTaggedData.Data = OutPointData;
			OutTaggedData.Pin = InPin;

			// Loop over attributes.
			for (const FPCGKernelAttributeDesc& AttributeDesc : AttributeDescs)
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(UnpackAttribute);

				const uint32 AttributeId = AttributeDesc.Index;
				const uint32 AttributeStrideUints = PCGDataForGPUHelpers::GetAttributeTypeStrideBytes(AttributeDesc.Type) >> 2;

				const uint32 AddressUints = GetElementDataStartAddressUints(DataAsUint, DataIndex, AttributeId);

				if (AttributeId < NUM_RESERVED_ATTRS)
				{
					// We tried hoisting this decision to a lambda but it didn't appear to help.
					switch (AttributeId)
					{
					case POINT_POSITION_ATTRIBUTE_ID:
					{
						ParallelFor(NumElements, [DataAsFloat, AddressUints, &OutPoints](int32 ElementIndex)
						{
							const FVector Location = FVector(
								DataAsFloat[AddressUints + ElementIndex * 3 + 0],
								DataAsFloat[AddressUints + ElementIndex * 3 + 1],
								DataAsFloat[AddressUints + ElementIndex * 3 + 2]);

							OutPoints[ElementIndex].Transform.SetLocation(Location);
						});
						break;
					}
					case POINT_ROTATION_ATTRIBUTE_ID:
					{
						ParallelFor(NumElements, [DataAsFloat, AddressUints, &OutPoints](int32 ElementIndex)
						{
							const FQuat Rotation = FQuat(
								DataAsFloat[AddressUints + ElementIndex * 4 + 0],
								DataAsFloat[AddressUints + ElementIndex * 4 + 1],
								DataAsFloat[AddressUints + ElementIndex * 4 + 2],
								DataAsFloat[AddressUints + ElementIndex * 4 + 3]);

							// Normalize here with default tolerance (zero quat will return identity).
							OutPoints[ElementIndex].Transform.SetRotation(Rotation.GetNormalized());
						});
						break;
					}
					case POINT_SCALE_ATTRIBUTE_ID:
					{
						ParallelFor(NumElements, [DataAsFloat, AddressUints, &OutPoints](int32 ElementIndex)
						{
							const FVector Scale = FVector
							(
								DataAsFloat[AddressUints + ElementIndex * 3 + 0],
								DataAsFloat[AddressUints + ElementIndex * 3 + 1],
								DataAsFloat[AddressUints + ElementIndex * 3 + 2]);

							OutPoints[ElementIndex].Transform.SetScale3D(Scale);
						});
						break;
					}
					case POINT_BOUNDS_MIN_ATTRIBUTE_ID:
					{
						ParallelFor(NumElements, [DataAsFloat, AddressUints, &OutPoints](int32 ElementIndex)
						{
							const FVector BoundsMin = FVector(
								DataAsFloat[AddressUints + ElementIndex * 3 + 0],
								DataAsFloat[AddressUints + ElementIndex * 3 + 1],
								DataAsFloat[AddressUints + ElementIndex * 3 + 2]);

							OutPoints[ElementIndex].BoundsMin = BoundsMin;
						});
						break;
					}
					case POINT_BOUNDS_MAX_ATTRIBUTE_ID:
					{
						ParallelFor(NumElements, [DataAsFloat, AddressUints, &OutPoints](int32 ElementIndex)
						{
							const FVector BoundsMax = FVector(
								DataAsFloat[AddressUints + ElementIndex * 3 + 0],
								DataAsFloat[AddressUints + ElementIndex * 3 + 1],
								DataAsFloat[AddressUints + ElementIndex * 3 + 2]);

							OutPoints[ElementIndex].BoundsMax = BoundsMax;
						});
						break;
					}
					case POINT_COLOR_ATTRIBUTE_ID:
					{
						ParallelFor(NumElements, [DataAsFloat, AddressUints, &OutPoints](int32 ElementIndex)
						{
							const FVector4 Color = FVector4(
								DataAsFloat[AddressUints + ElementIndex * 4 + 0],
								DataAsFloat[AddressUints + ElementIndex * 4 + 1],
								DataAsFloat[AddressUints + ElementIndex * 4 + 2],
								DataAsFloat[AddressUints + ElementIndex * 4 + 3]);

							OutPoints[ElementIndex].Color = Color;
						});
						break;
					}
					case POINT_DENSITY_ATTRIBUTE_ID:
					{
						ParallelFor(NumElements, [DataAsFloat, AddressUints, &OutPoints](int32 ElementIndex)
						{
							OutPoints[ElementIndex].Density = DataAsFloat[AddressUints + ElementIndex];
						});
						break;
					}
					case POINT_SEED_ATTRIBUTE_ID:
					{
						ParallelFor(NumElements, [DataAsInt, AddressUints, &OutPoints](int32 ElementIndex)
						{
							OutPoints[ElementIndex].Seed = DataAsInt[AddressUints + ElementIndex];
						});
						break;
					}
					case POINT_STEEPNESS_ATTRIBUTE_ID:
					{
						ParallelFor(NumElements, [DataAsFloat, AddressUints, &OutPoints](int32 ElementIndex)
						{
							OutPoints[ElementIndex].Steepness = DataAsFloat[AddressUints + ElementIndex];
						});
						break;
					}
					default:
						checkNoEntry();
						break;
					}
				}
				else
				{
					FPCGMetadataAttributeBase* AttributeBase = PCGDataForGPUHelpers::CreateAttributeFromAttributeDesc(Metadata, AttributeDesc);
					check(AttributeBase);

					ParallelFor(NumElements, [PackedData, &InStringTable, &OutPoints, Metadata, AttributeBase, &AttributeDesc, AddressUints, AttributeStrideUints](int32 ElementIndex)
					{
						// Points that were removed will not have their metadata set at all, and most likely not zero initialized either, so this could be garbage otherwise.
						if (!FMath::IsFinite(OutPoints[ElementIndex].Density))
						{
							return;
						}

						Metadata->InitializeOnSet(OutPoints[ElementIndex].MetadataEntry);
						ensure(PCGDataForGPUHelpers::UnpackAttributeHelper(PackedData, InStringTable, AddressUints + ElementIndex * AttributeStrideUints, AttributeBase, AttributeDesc, OutPoints[ElementIndex].MetadataEntry));
					});
				}
			}

			// TODO: It may be more efficient to create a mapping from input point index to final output point index and do everything in one pass.
			auto DiscardInvalidPoints = [&OutPoints](int32 Index, FPCGPoint& OutPoint) -> bool
			{
				if (!FMath::IsFinite(OutPoints[Index].Density))
				{
					return false;
				}

				OutPoint = OutPoints[Index];
				return true;
			};

			FPCGAsync::AsyncPointProcessing(/*Context=*/nullptr, OutPoints.Num(), OutPoints, DiscardInvalidPoints);
		}
		else if (TypeId == PARAM_DATA_TYPE_ID)
		{
			UPCGParamData* OutParamData = NewObject<UPCGParamData>();
			UPCGMetadata* Metadata = OutParamData->MutableMetadata();

			FPCGTaggedData& OutTaggedData = OutData.Emplace_GetRef();
			OutTaggedData.Data = OutParamData;
			OutTaggedData.Pin = InPin;

			TArray<TTuple</*EntryKey=*/int64, /*ParentEntryKey=*/int64>> AllMetadataEntries;
			AllMetadataEntries.SetNumUninitialized(NumElements);

			ParallelFor(NumElements, [&](int32 ElementIndex)
			{
				AllMetadataEntries[ElementIndex] = MakeTuple(Metadata->AddEntryPlaceholder(), PCGInvalidEntryKey);
			});

			Metadata->AddDelayedEntries(AllMetadataEntries);

			// Loop over attributes.
			for (const FPCGKernelAttributeDesc& AttributeDesc : AttributeDescs)
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(WriteAttribute);

				const uint32 AddressUints = GetElementDataStartAddressUints(DataAsUint, DataIndex, AttributeDesc.Index);
				const uint32 AttributeStrideUints = PCGDataForGPUHelpers::GetAttributeTypeStrideBytes(AttributeDesc.Type) / sizeof(uint32);

				if (FPCGMetadataAttributeBase* AttributeBase = PCGDataForGPUHelpers::CreateAttributeFromAttributeDesc(Metadata, AttributeDesc))
				{
					const uint32 NumPackedUints = InPackedData.Num() / 4;

					ParallelFor(NumElements, [PackedData, NumPackedUints, AddressUints, AttributeStrideUints, &AttributeDesc, AttributeBase, &InStringTable](int32 ElementIndex)
					{
						const uint32 PackedDataElementIndex = AddressUints + ElementIndex * AttributeStrideUints;
						check(PackedDataElementIndex + AttributeStrideUints <= NumPackedUints);

						ensure(PCGDataForGPUHelpers::UnpackAttributeHelper(PackedData, InStringTable, PackedDataElementIndex, AttributeBase, AttributeDesc, ElementIndex));
					});
				}
			}
		}
		else { /* TODO: Support additional data types. */ }
	}

	return EPCGUnpackDataCollectionResult::Success;
}

uint32 FPCGDataCollectionDesc::ComputeDataElementCount(EPCGDataType InDataType) const
{
	uint32 ElementCount = 0;

	for (const FPCGDataDesc& DataDesc : DataDescs)
	{
		if (!!(DataDesc.Type & InDataType))
		{
			ElementCount += DataDesc.ElementCount;
		}
	}

	return ElementCount;
}

void FPCGDataCollectionDesc::Combine(const FPCGDataCollectionDesc& Other)
{
	DataDescs.Append(Other.DataDescs);
}
