// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGData.h"
#include "PCGPoint.h"
#include "PCGSettings.h"
#include "Data/PCGPointData.h"
#include "Metadata/PCGMetadata.h"
#include "Metadata/PCGMetadataAttributeTpl.h"
#include "Metadata/PCGMetadataAttributeTraits.h"

#include "GameFramework/Actor.h"
#include "Misc/AutomationTest.h"

class IPCGElement;
class UPCGComponent;
class UPCGNode;
class UPCGParamData;
class UPCGPolyLineData;
class UPCGPrimitiveData;
class UPCGSurfaceData;
class UPCGVolumeData;
struct FPCGContext;
struct FPCGPinProperties;

namespace PCGTestsCommon
{
	constexpr EAutomationTestFlags TestFlags = EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter;

	/** If you are using a FTestData, you can use FTestData::InitializeTestContext. Initialize a context and set the number of tasks available to 1. */
	TUniquePtr<FPCGContext> InitializeTestContext(IPCGElement* InElement, const FPCGDataCollection& InputData, UPCGComponent* InSourceComponent, const UPCGNode* InNode);

	struct PCG_API FTestData
	{
		explicit FTestData(int32 Seed = 42, UPCGSettings* DefaultSettings = nullptr, TSubclassOf<AActor> ActorClass = AActor::StaticClass());
		~FTestData();

		void Reset(UPCGSettings* InSettings = nullptr);

		/** Initialize a context and set the number of tasks available to 1. */
		TUniquePtr<FPCGContext> InitializeTestContext(const UPCGNode* InNode = nullptr) const;

		void SetCurrentGenerationTask(FPCGTaskId InTaskId);

		AActor* TestActor;
		UPCGComponent* TestPCGComponent;
		FPCGDataCollection InputData;
		FPCGDataCollection OutputData;
		UPCGSettings* Settings;
		int32 Seed;
		FRandomStream RandomStream;
	};

	AActor* CreateTemporaryActor();
	PCG_API UPCGPointData* CreateEmptyPointData();
	UPCGParamData* CreateEmptyParamData();

	/** Creates a PointData with a single point at the origin */
	PCG_API UPCGPointData* CreatePointData();
	/** Creates a PointData with a single point at the provided location */
	PCG_API UPCGPointData* CreatePointData(const FVector& InLocation);

	/** Creates a PointData with PointCount many points, and randomizes the Transform, Color, and Density */
	PCG_API UPCGPointData* CreateRandomPointData(int32 PointCount, int32 Seed, bool RandomDensity = false);

	UPCGPolyLineData* CreatePolyLineData();
	UPCGSurfaceData* CreateSurfaceData();
	UPCGVolumeData* CreateVolumeData(const FBox& InBounds = FBox::BuildAABB(FVector::ZeroVector, FVector::OneVector * 100));
	UPCGPrimitiveData* CreatePrimitiveData();

	TArray<FPCGDataCollection> GenerateAllowedData(const FPCGPinProperties& PinProperties);

	/** Validates that two Spatial Points are identical */
	bool PointsAreIdentical(const FPCGPoint& FirstPoint, const FPCGPoint& SecondPoint);

	/** Generates settings based upon a UPCGSettings subclass */
	template<typename SettingsType>
	SettingsType* GenerateSettings(FTestData& TestData, TFunction<void(FTestData&)> ExtraSettingsDelegate = nullptr)
	{
		SettingsType* TypedSettings = NewObject<SettingsType>();
		check(TypedSettings);

		TestData.Settings = TypedSettings;
		TestData.Settings->Seed = TestData.Seed;

		TestData.InputData.TaggedData.Emplace_GetRef().Data = TestData.Settings;
		TestData.InputData.TaggedData.Last().Pin = FName(TEXT("Settings"));

		if (ExtraSettingsDelegate)
		{
			ExtraSettingsDelegate(TestData);
		}

		return TypedSettings;
	}

	template <class T, class... Ts>
	struct TIsAny : std::disjunction<std::is_same<T, Ts>...> {};

	// Numerical
	template <typename T, typename std::enable_if_t<std::is_arithmetic_v<T>, bool> = true>
	T GenerateRandomValue(FRandomStream& RandomStream)
	{
		if constexpr (std::is_same_v<bool, T>)
		{
			return RandomStream.FRand() > 0.5;
		}
		else
		{
			return T(RandomStream.FRandRange(-50.0, 50.0));
		}
	}

	 // Vectors
	template <typename T, typename std::enable_if_t<TIsAny<T, FVector2D, FVector, FVector4>::value, bool> = true>
	T GenerateRandomValue(FRandomStream& RandomStream)
	{
		return T(RandomStream.VRand());
	}

	 // Rotators/Quat
	template <typename T, typename std::enable_if_t<TIsAny<T, FRotator, FQuat>::value, bool> = true>
	T GenerateRandomValue(FRandomStream& RandomStream)
	{
		return T::MakeFromEuler(RandomStream.VRand() * 360.0);
	}

	 // String/FName
	template <typename T, typename std::enable_if_t<TIsAny<T, FName, FString>::value, bool> = true>
	T GenerateRandomValue(FRandomStream& RandomStream)
	{
		static constexpr const TCHAR* Dictionary[] = { TEXT("Foo"), TEXT("Bar"), TEXT("PCG"), TEXT("YOLO"), TEXT("Bla") };
		constexpr int32 NumWords = static_cast<int32>(sizeof(Dictionary) / sizeof(const TCHAR*));
		constexpr int32 MaxNumWords = 5;
		TStringBuilder<32> Builder;

		for (uint32 i = 0; i < (RandomStream.GetUnsignedInt() % (MaxNumWords - 1) + 1); ++i)
		{
			if (i != 0)
			{
				Builder += TEXT("_");
			}

			Builder += Dictionary[RandomStream.GetUnsignedInt() % NumWords];
		}

		return Builder.ToString();
	}

	// SoftObjectPath
	template <typename T, typename std::enable_if_t<TIsAny<T, FSoftObjectPath>::value, bool> = true>
	T GenerateRandomValue(FRandomStream& RandomStream)
	{
		static const FSoftObjectPath Dictionary[] = 
		{ 
			FSoftObjectPath(TEXT("/PCG/DebugObjects/PCG_Cube.PCG_Cube")),
			FSoftObjectPath(TEXT("Material'/PCG/DebugObjects/PCG_DebugMaterial.PCG_DebugMaterial'"))
		};

		constexpr int32 NumWords = static_cast<int32>(sizeof(Dictionary) / sizeof(FSoftObjectPath));
		return Dictionary[RandomStream.GetUnsignedInt() % NumWords];
	}

	// FSoftClassPath
	template <typename T, typename std::enable_if_t<TIsAny<T, FSoftClassPath>::value, bool> = true>
	T GenerateRandomValue(FRandomStream& RandomStream)
	{
		static const FSoftClassPath Dictionary[] =
		{
			UPCGData::StaticClass(),
			UPCGPointData::StaticClass(),
			UPCGMetadata::StaticClass(),
		};

		constexpr int32 NumWords = static_cast<int32>(sizeof(Dictionary) / sizeof(FSoftClassPath));
		return Dictionary[RandomStream.GetUnsignedInt() % NumWords];
	}

	template <typename T>
	void CreateAndFillRandomAttribute(UPCGData* InData, const FName AttributeName, T DefaultValue, const int32 NumValues, int32 Seed = 42, const bool* bForceAllowInterpolation = nullptr) 
	{
		check(InData);

		UPCGMetadata* Metadata = InData->MutableMetadata();
		UPCGPointData* PointData = Cast<UPCGPointData>(InData);

		check(Metadata && (!PointData || NumValues == 0 || NumValues == PointData->GetPoints().Num()));

		const bool bAllowInterpolation = bForceAllowInterpolation ? *bForceAllowInterpolation : PCG::Private::MetadataTraits<T>::CanInterpolate;
		FPCGMetadataAttribute<T>* NewAttribute = Metadata->CreateAttribute<T>(AttributeName, /*DefaultValue=*/std::move(DefaultValue), /*bAllowInterpolation=*/bAllowInterpolation, /*bOverrideParent=*/false);
		check(NewAttribute);

		FRandomStream RandomStream(Seed);

		for (int i = 0; i < NumValues; ++i)
		{
			PCGMetadataEntryKey EntryKey;
			if (PointData)
			{
				Metadata->InitializeOnSet(PointData->GetMutablePoints()[i].MetadataEntry);
				EntryKey = PointData->GetMutablePoints()[i].MetadataEntry;
			}
			else
			{
				EntryKey = Metadata->AddEntry();
			}

			NewAttribute->SetValue(EntryKey, GenerateRandomValue<T>(RandomStream));
		}
	}
}

class FPCGTestBaseClass : public FAutomationTestBase
{
public:
	using FAutomationTestBase::FAutomationTestBase;
	/** Hook to expose private test function publicly */
	bool RunPCGTest(const FString& Parameters) { return RunTest(Parameters); }

protected:
	/** Generates all valid input combinations */
	bool SmokeTestAnyValidInput(UPCGSettings* InSettings, TFunction<bool(const FPCGDataCollection&, const FPCGDataCollection&)> ValidationFn = TFunction<bool(const FPCGDataCollection&, const FPCGDataCollection&)>());
};
