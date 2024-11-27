// Copyright Epic Games, Inc. All Rights Reserved.

#if WITH_EDITOR

#include "Tests/PCGTestsCommon.h"

#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGParamData.h"
#include "Data/PCGPointData.h"
#include "Metadata/PCGMetadata.h"
#include "Metadata/PCGMetadataAttributeTpl.h"

#include "Elements/PCGCopyAttributes.h"
#include "Elements/PCGCopyPoints.h"

IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Points_PropertyToProperty, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Points.PropertyToProperty", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Points_PropertyToAttribute, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Points.PropertyToAttribute", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Points_AttributeToProperty, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Points.AttributeToProperty", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Points_AttributeToAttribute, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Points.AttributeToAttribute", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Points_CopyingToItself, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Points.CopyingToItself", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Points_CopyingAllToItself, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Points.CopyingAllToItself", PCGTestsCommon::TestFlags)

IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Params_SingleValue, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Params.SingleValue", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Params_MultiValue, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Params.MultiValue", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Params_CopyingToItself, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Params.CopyingToItself", PCGTestsCommon::TestFlags)
IMPLEMENT_CUSTOM_SIMPLE_AUTOMATION_TEST(FPCGCopyAttributeTests_Params_CopyingAllToItself, FPCGTestBaseClass, "Plugins.PCG.CopyAttribute.Params.CopyingAllToItself", PCGTestsCommon::TestFlags)


namespace PCGCopyAttributeTests
{
	static const FName AttributeName = TEXT("InputAttr");

	UPCGPointData* CreateInputPointData(FPCGContext* Context, const int NumPoints)
	{
		check(Context);

		UPCGPointData* NewPointData = NewObject<UPCGPointData>();
		NewPointData->SetFlags(RF_Transient);

		check(NewPointData);

		TArray<FPCGPoint>& Points = NewPointData->GetMutablePoints();
		Points.SetNum(NumPoints);
		for (int i = 0; i < NumPoints; ++i)
		{
			// Store the index in the density
			Points[i].Density = i;
		}

		return NewPointData;
	}

	UPCGParamData* CreateInputParamData(FPCGContext* Context)
	{
		check(Context);

		UPCGParamData* NewParamData = NewObject<UPCGParamData>();
		NewParamData->SetFlags(RF_Transient);

		check(NewParamData);
		return NewParamData;
	}

	void ConnectToSource(FPCGContext* Context, const UPCGData* InData)
	{
		FPCGTaggedData& InputData = Context->InputData.TaggedData.Emplace_GetRef();
		InputData.Data = InData;
		InputData.Pin = PCGCopyPointsConstants::SourcePointsLabel;
	}

	void ConnectToTarget(FPCGContext* Context, const UPCGData* InData)
	{
		FPCGTaggedData& InputData = Context->InputData.TaggedData.Emplace_GetRef();
		InputData.Data = InData;
		InputData.Pin = PCGCopyPointsConstants::TargetPointsLabel;
	}

	void ConnectToSourceAndTarget(FPCGContext* Context, const UPCGData* InData)
	{
		ConnectToSource(Context, InData);
		ConnectToTarget(Context, InData);
	}
}

bool FPCGCopyAttributeTests_Points_PropertyToProperty::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	constexpr int NumOfPoints = 20;

	// Write Density in Position.X
	Settings->InputSource.SetPointProperty(EPCGPointProperties::Density);
	Settings->OutputTarget.Update(TEXT("$Position.X"));

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	const UPCGPointData* InputPointData = PCGCopyAttributeTests::CreateInputPointData(Context.Get(), NumOfPoints);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputPointData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGPointData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGPointData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a point data in output points", OutputData);
	UTEST_EQUAL("There is the right number of points in output", OutputData->GetPoints().Num(), NumOfPoints);

	check(OutputData);

	// Density was copied in the position correctly
	for (int i = 0; i < NumOfPoints; ++i)
	{
		const FPCGPoint& OutputPoint = OutputData->GetPoints()[i];
		UTEST_EQUAL(*FString::Printf(TEXT("Position.X has the same value as density for point %d"), i), OutputPoint.Transform.GetLocation().X, static_cast<double>(OutputPoint.Density));
	}

	return true;
}

bool FPCGCopyAttributeTests_Points_PropertyToAttribute::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	constexpr int NumOfPoints = 20;
	const FName OutputAttributeName = TEXT("OutputAttr");

	// Write Density in Attribute
	Settings->InputSource.SetPointProperty(EPCGPointProperties::Density);
	Settings->OutputTarget.SetAttributeName(OutputAttributeName);

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	const UPCGPointData* InputPointData = PCGCopyAttributeTests::CreateInputPointData(Context.Get(), NumOfPoints);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputPointData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGPointData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGPointData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a point data in output points", OutputData);
	UTEST_EQUAL("There is the right number of points in output", OutputData->GetPoints().Num(), NumOfPoints);

	check(OutputData && OutputData->Metadata);
	const FPCGMetadataAttribute<double>* OutputAttribute = OutputData->Metadata->GetConstTypedAttribute<double>(OutputAttributeName);
	UTEST_NOT_NULL("Output Attribute exists in the output data", OutputAttribute);

	check(OutputAttribute);

	// Attribute was copied in the position correctly
	for (int i = 0; i < NumOfPoints; ++i)
	{
		const FPCGPoint& OutputPoint = OutputData->GetPoints()[i];
		UTEST_EQUAL(*FString::Printf(TEXT("Output attribute has the same value than density for point %d"), i), OutputAttribute->GetValueFromItemKey(OutputPoint.MetadataEntry), static_cast<double>(OutputPoint.Density));
	}

	return true;
}

bool FPCGCopyAttributeTests_Points_AttributeToProperty::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	constexpr int NumOfPoints = 20;

	// Write Attribute in Position
	Settings->InputSource.SetAttributeName(PCGCopyAttributeTests::AttributeName);
	Settings->OutputTarget.Update(TEXT("$Position"));

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	UPCGPointData* InputPointData = PCGCopyAttributeTests::CreateInputPointData(Context.Get(), NumOfPoints);
	PCGTestsCommon::CreateAndFillRandomAttribute<FVector>(InputPointData, PCGCopyAttributeTests::AttributeName, FVector::ZeroVector, NumOfPoints);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputPointData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGPointData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGPointData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a point data in output points", OutputData);
	UTEST_EQUAL("There is the right number of points in output", OutputData->GetPoints().Num(), NumOfPoints);

	check(OutputData && OutputData->Metadata);
	const FPCGMetadataAttribute<FVector>* InputAttribute = OutputData->Metadata->GetConstTypedAttribute<FVector>(PCGCopyAttributeTests::AttributeName);
	UTEST_NOT_NULL("Input Attribute exists in the output data", InputAttribute);

	// Attribute value was copied in Position.Y correctly
	for (int i = 0; i < NumOfPoints; ++i)
	{
		const FPCGPoint& OutputPoint = OutputData->GetPoints()[i];
		UTEST_EQUAL(*FString::Printf(TEXT("Position has the same value than the input attribute for point %d"), i), OutputPoint.Transform.GetLocation(), InputAttribute->GetValueFromItemKey(OutputPoint.MetadataEntry));
	}

	return true;
}

bool FPCGCopyAttributeTests_Points_AttributeToAttribute::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	constexpr int NumOfPoints = 20;
	const FName OutputAttributeName = TEXT("OutputAttr");

	// Write Input attribute to Output attribute, testing with strings
	Settings->InputSource.SetAttributeName(PCGCopyAttributeTests::AttributeName);
	Settings->OutputTarget.SetAttributeName(OutputAttributeName);

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	UPCGPointData* InputPointData = PCGCopyAttributeTests::CreateInputPointData(Context.Get(), NumOfPoints);
	PCGTestsCommon::CreateAndFillRandomAttribute<FString>(InputPointData, PCGCopyAttributeTests::AttributeName, FString(), NumOfPoints);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputPointData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGPointData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGPointData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a point data in output points", OutputData);
	UTEST_EQUAL("There is the right number of points in output", OutputData->GetPoints().Num(), NumOfPoints);

	check(OutputData && OutputData->Metadata);

	const FPCGMetadataAttribute<FString>* InputAttribute = OutputData->Metadata->GetConstTypedAttribute<FString>(PCGCopyAttributeTests::AttributeName);
	UTEST_NOT_NULL("Input Attribute exists in the output data", InputAttribute);
	const FPCGMetadataAttribute<FString>* OutputAttribute = OutputData->Metadata->GetConstTypedAttribute<FString>(OutputAttributeName);
	UTEST_NOT_NULL("Output Attribute exists in the output data", OutputAttribute);

	check(InputAttribute && OutputAttribute);

	UTEST_EQUAL("Output Attribute default value is the same as default value of Input Attribute", OutputAttribute->GetValueFromItemKey(PCGInvalidEntryKey), InputAttribute->GetValueFromItemKey(PCGInvalidEntryKey));

	// Input attribute was copied in the output attribute correctly
	for (int i = 0; i < NumOfPoints; ++i)
	{
		const FPCGPoint& OutputPoint = OutputData->GetPoints()[i];
		UTEST_EQUAL(*FString::Printf(TEXT("Output Attribute has the same value as Input Attribute for point %d"), i), OutputAttribute->GetValueFromItemKey(OutputPoint.MetadataEntry), InputAttribute->GetValueFromItemKey(OutputPoint.MetadataEntry));
	}

	return true;
}

bool FPCGCopyAttributeTests_Points_CopyingToItself::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	constexpr int NumOfPoints = 20;

	// Write Attribute in itself
	Settings->InputSource.SetAttributeName(PCGCopyAttributeTests::AttributeName);
	Settings->OutputTarget.SetAttributeName(PCGCopyAttributeTests::AttributeName);

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	// Need constness for UTEST_EQUAL....
	const UPCGPointData* InputPointData = PCGCopyAttributeTests::CreateInputPointData(Context.Get(), NumOfPoints);
	PCGTestsCommon::CreateAndFillRandomAttribute<double>(const_cast<UPCGPointData*>(InputPointData), PCGCopyAttributeTests::AttributeName, 0.0, NumOfPoints);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputPointData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGPointData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGPointData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a point data in output points", OutputData);
	UTEST_EQUAL("It's the same data as input", OutputData, InputPointData);

	return true;
}

bool FPCGCopyAttributeTests_Points_CopyingAllToItself::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	constexpr int NumOfPoints = 20;

	Settings->bCopyAllAttributes = true;

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	const UPCGPointData* InputPointData = PCGCopyAttributeTests::CreateInputPointData(Context.Get(), NumOfPoints);
	PCGTestsCommon::CreateAndFillRandomAttribute<double>(const_cast<UPCGPointData*>(InputPointData), PCGCopyAttributeTests::AttributeName, 0.0, NumOfPoints);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputPointData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGPointData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGPointData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a point data in output points", OutputData);
	UTEST_EQUAL("It's the same data as input", OutputData, InputPointData);

	return true;
}

bool FPCGCopyAttributeTests_Params_SingleValue::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	const FName OutputAttributeName = TEXT("OutputAttr");

	// Write Input attribute to Output attribute
	Settings->InputSource.SetAttributeName(PCGCopyAttributeTests::AttributeName);
	Settings->OutputTarget.SetAttributeName(OutputAttributeName);

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	const UPCGParamData* InputParamData = PCGCopyAttributeTests::CreateInputParamData(Context.Get());
	PCGTestsCommon::CreateAndFillRandomAttribute<FRotator>(const_cast<UPCGParamData*>(InputParamData), PCGCopyAttributeTests::AttributeName, FRotator::ZeroRotator, 1);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputParamData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGParamData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGParamData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a param data in output points", OutputData);
	UTEST_EQUAL("There is the right number of entries in output metadata", OutputData->Metadata->GetItemCountForChild(), 1);

	check(OutputData && OutputData->Metadata);

	const FPCGMetadataAttribute<FRotator>* InputAttribute = OutputData->Metadata->GetConstTypedAttribute<FRotator>(PCGCopyAttributeTests::AttributeName);
	UTEST_NOT_NULL("Input Attribute exists in the output data", InputAttribute);
	const FPCGMetadataAttribute<FRotator>* OutputAttribute = OutputData->Metadata->GetConstTypedAttribute<FRotator>(OutputAttributeName);
	UTEST_NOT_NULL("Output Attribute exists in the output data", OutputAttribute);

	check(InputAttribute && OutputAttribute);

	UTEST_EQUAL("Output Attribute default value is the same as default of Input Attribute", OutputAttribute->GetValueFromItemKey(PCGInvalidEntryKey), InputAttribute->GetValueFromItemKey(PCGInvalidEntryKey));
	UTEST_EQUAL("Output Attribute has the same value as Input Attribute for entry 0", OutputAttribute->GetValueFromItemKey(PCGMetadataEntryKey(0)), InputAttribute->GetValueFromItemKey(PCGMetadataEntryKey(0)));

	return true;
}

bool FPCGCopyAttributeTests_Params_MultiValue::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	constexpr int NumEntries = 20;
	const FName OutputAttributeName = TEXT("OutputAttr");

	// Write Input attribute to Output attribute
	Settings->InputSource.SetAttributeName(PCGCopyAttributeTests::AttributeName);
	Settings->OutputTarget.SetAttributeName(OutputAttributeName);

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	const UPCGParamData* InputParamData = PCGCopyAttributeTests::CreateInputParamData(Context.Get());
	PCGTestsCommon::CreateAndFillRandomAttribute<FSoftObjectPath>(const_cast<UPCGParamData*>(InputParamData), PCGCopyAttributeTests::AttributeName, FSoftObjectPath(), NumEntries);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputParamData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGParamData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGParamData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a param data in output points", OutputData);
	UTEST_EQUAL("There is the right number of entries in output metadata", OutputData->Metadata->GetItemCountForChild(), NumEntries);

	check(OutputData && OutputData->Metadata);

	const FPCGMetadataAttribute<FSoftObjectPath>* InputAttribute = OutputData->Metadata->GetConstTypedAttribute<FSoftObjectPath>(PCGCopyAttributeTests::AttributeName);
	UTEST_NOT_NULL("Input Attribute exists in the output data", InputAttribute);
	const FPCGMetadataAttribute<FSoftObjectPath>* OutputAttribute = OutputData->Metadata->GetConstTypedAttribute<FSoftObjectPath>(OutputAttributeName);
	UTEST_NOT_NULL("Output Attribute exists in the output data", OutputAttribute);

	check(InputAttribute && OutputAttribute);

	UTEST_EQUAL("Output Attribute default value is the same as default value of Input Attribute", OutputAttribute->GetValueFromItemKey(PCGInvalidEntryKey), InputAttribute->GetValueFromItemKey(PCGInvalidEntryKey));

	// Input attribute was copied in the output attribute correctly
	for (int i = 0; i < NumEntries; ++i)
	{
		UTEST_EQUAL(*FString::Printf(TEXT("Output Attribute has the same value as Input Attribute for entry %d"), i), OutputAttribute->GetValueFromItemKey(PCGMetadataEntryKey(i)), InputAttribute->GetValueFromItemKey(PCGMetadataEntryKey(i)));
	}

	return true;
}

bool FPCGCopyAttributeTests_Params_CopyingToItself::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	// Write Input attribute to Output attribute
	Settings->InputSource.SetAttributeName(PCGCopyAttributeTests::AttributeName);
	Settings->OutputTarget.SetAttributeName(PCGCopyAttributeTests::AttributeName);

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	const UPCGParamData* InputParamData = PCGCopyAttributeTests::CreateInputParamData(Context.Get());
	PCGTestsCommon::CreateAndFillRandomAttribute<double>(const_cast<UPCGParamData*>(InputParamData), PCGCopyAttributeTests::AttributeName, 0.0, 1);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputParamData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGParamData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGParamData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a param data in output points", OutputData);
	UTEST_EQUAL("It's the same data as input", OutputData, InputParamData);

	return true;
}

bool FPCGCopyAttributeTests_Params_CopyingAllToItself::RunTest(const FString& Parameters)
{
	PCGTestsCommon::FTestData TestData;
	UPCGCopyAttributesSettings* Settings = PCGTestsCommon::GenerateSettings<UPCGCopyAttributesSettings>(TestData);
	check(Settings);

	Settings->bCopyAllAttributes = true;

	TUniquePtr<FPCGContext> Context = TestData.InitializeTestContext();
	const UPCGParamData* InputParamData = PCGCopyAttributeTests::CreateInputParamData(Context.Get());
	PCGTestsCommon::CreateAndFillRandomAttribute<double>(const_cast<UPCGParamData*>(InputParamData), PCGCopyAttributeTests::AttributeName, 0.0, 1);
	PCGCopyAttributeTests::ConnectToSourceAndTarget(Context.Get(), InputParamData);

	FPCGElementPtr TestElement = TestData.Settings->GetElement();
	while (!TestElement->Execute(Context.Get())) {}

	TArray<FPCGTaggedData> OutputTagged = Context->OutputData.GetInputsByPin(PCGPinConstants::DefaultOutputLabel);
	const UPCGParamData* OutputData = OutputTagged.Num() == 1 ? Cast<const UPCGParamData>(OutputTagged[0].Data) : nullptr;

	UTEST_NOT_NULL("There is a param data in output points", OutputData);
	UTEST_EQUAL("It's the same data as input", OutputData, InputParamData);

	return true;
}


#endif // WITH_EDITOR
