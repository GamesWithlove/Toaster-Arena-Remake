// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#pragma once


#include "RealTimeImportMesh.h"
#include "RealTimeImportMeshSTL.generated.h"



UCLASS()
class REALTIMEIMPORT_API URealTimeImportMeshSTL : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	void LoadSTL_ASCIIFile(
		FString dir,
		TArray<uint8>& stlFileData,
		ERTICoordinateSystem coordinateSystem,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		URealTimeImportAsyncNodeLoadMesh* asyncNode = nullptr);

	void LoadSTL_BinaryFile(
		FString dir,
		TArray<uint8>& stlFileData,
		ERTICoordinateSystem coordinateSystem,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		URealTimeImportAsyncNodeLoadMesh* asyncNode = nullptr);
};